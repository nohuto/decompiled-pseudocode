/*
 * XREFs of CmpGetMappingHiveForString @ 0x1408E232C
 * Callers:
 *     CmpGetVirtualStoreRoot @ 0x1407DBFE4 (CmpGetVirtualStoreRoot.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1408E1EAC (CmpGetCmHiveFromVirtualPath.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408E2144 (CmpVirtualBranchIsReplicated.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     CmpCompareUnicodeString @ 0x140A00290 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(__m128i *a1, _QWORD *a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // di
  WCHAR *v8; // rax
  WCHAR *v9; // rcx
  __int16 v10; // di
  __int16 i; // bp
  WCHAR v12; // r14
  WCHAR v13; // r15
  unsigned int j; // edi
  __int64 v16; // r14
  _WORD *v17; // rcx
  WCHAR *v18; // [rsp+20h] [rbp-48h]
  WCHAR *v19; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v5 = CmpHashUnicodeComponent(a1);
  ExAcquireFastMutex(&CmpSIDMappingLock);
  if ( CmSIDMappingCacheHit < 0 )
    goto LABEL_22;
  if ( CmSIDMappingCacheHit >= CmpSIDToHiveMappingCount )
    goto LABEL_22;
  v6 = 32LL * CmSIDMappingCacheHit;
  if ( *(_DWORD *)((char *)CmpSIDToHiveMapping + v6 + 16) != v5 )
    goto LABEL_22;
  v7 = *(_WORD *)((char *)CmpSIDToHiveMapping + v6);
  if ( v7 != a1->m128i_i16[0] )
    goto LABEL_22;
  v8 = *(WCHAR **)((char *)CmpSIDToHiveMapping + v6 + 8);
  v9 = (WCHAR *)a1->m128i_i64[1];
  v10 = v7 >> 1;
  for ( i = (unsigned __int16)a1->m128i_i16[0] >> 1; v10 && i; --i )
  {
    v12 = *v8++;
    v13 = *v9++;
    v19 = v8;
    v18 = v9;
    if ( v12 != v13 )
    {
      if ( v12 >= 0x61u )
      {
        if ( v12 > 0x7Au )
          v12 = RtlUpcaseUnicodeChar(v12);
        else
          v12 -= 32;
      }
      if ( v13 >= 0x61u )
      {
        if ( v13 <= 0x7Au )
          v13 -= 32;
        else
          v13 = RtlUpcaseUnicodeChar(v13);
      }
      if ( v12 != v13 )
        goto LABEL_22;
      v8 = v19;
      v9 = v18;
    }
    --v10;
  }
  if ( v10 == i )
  {
    *a2 = *((_QWORD *)CmpSIDToHiveMapping + 4 * CmSIDMappingCacheHit + 3);
  }
  else
  {
LABEL_22:
    for ( j = 0; j < CmpSIDToHiveMappingCount; ++j )
    {
      v16 = 32LL * j;
      v17 = (char *)CmpSIDToHiveMapping + v16;
      if ( *(_DWORD *)((char *)CmpSIDToHiveMapping + v16 + 16) == v5
        && *v17 == a1->m128i_i16[0]
        && !(unsigned int)CmpCompareUnicodeString(v17, a1, 0LL) )
      {
        CmSIDMappingCacheHit = j;
        *a2 = *(_QWORD *)((char *)CmpSIDToHiveMapping + v16 + 24);
        goto LABEL_20;
      }
    }
    v4 = -1073741275;
  }
LABEL_20:
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
  return v4;
}
