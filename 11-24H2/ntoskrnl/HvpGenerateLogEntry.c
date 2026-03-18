/*
 * XREFs of HvpGenerateLogEntry @ 0x14097EF08
 * Callers:
 *     HvStoreModifiedData @ 0x14097E3EC (HvStoreModifiedData.c)
 * Callees:
 *     HvpGenerateLogEntryMetadata @ 0x14042AF5C (HvpGenerateLogEntryMetadata.c)
 *     HvpGenerateLogEntryDirtyData @ 0x14042AFCC (HvpGenerateLogEntryDirtyData.c)
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     HvpGenerateLogEntryHeader @ 0x14047622C (HvpGenerateLogEntryHeader.c)
 *     HvpAllocateLogBuffers @ 0x140487D44 (HvpAllocateLogBuffers.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpLogDirtyVectorUse @ 0x1408834D4 (CmpLogDirtyVectorUse.c)
 *     HvpCountSetRangesInVector @ 0x14097F28C (HvpCountSetRangesInVector.c)
 *     HvpGenerateLogEntryChecksums @ 0x14097F2EC (HvpGenerateLogEntryChecksums.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvpGenerateLogEntry(__int64 a1, __int64 *a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // edi
  char v6; // r13
  ULONG v7; // eax
  unsigned int v8; // edi
  void *Pool2; // r12
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned int v13; // esi
  int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned int v19; // eax
  PVOID *v20; // rdi
  PVOID *v22; // rbx
  int v23; // [rsp+28h] [rbp-40h]
  unsigned int v24; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-24h] BYREF
  int v26; // [rsp+48h] [rbp-20h]
  PVOID *v27; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+48h] BYREF
  __int64 *v29; // [rsp+B8h] [rbp+50h]
  _DWORD *v30; // [rsp+C0h] [rbp+58h]
  unsigned int *v31; // [rsp+C8h] [rbp+60h]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v4 = *(_DWORD *)(a1 + 180);
  v27 = 0LL;
  v24 = 0;
  v6 = v4 == 0;
  v25 = 0;
  v28 = 0;
  v26 = HvpCountSetRangesInVector((PRTL_BITMAP)(a1 + 88));
  v7 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 88));
  CmpLogDirtyVectorUse(a1, 1, v26, v7);
  v8 = (8 * v26 + (v4 != 0 ? 4135 : 4647) + (*(_DWORD *)(a1 + 104) << 9)) & 0xFFFFF000;
  Pool2 = (void *)ExAllocatePool2(0x108uLL);
  if ( Pool2 )
  {
    v10 = HvpAllocateLogBuffers((__int64 *)&v27, &v25, v8);
    v12 = v25;
    v13 = v10;
    if ( v10 < 0 )
    {
      v20 = v27;
    }
    else
    {
      v14 = v26;
      v15 = (__int64)v27;
      HvpGenerateLogEntryHeader(a1, (__int64)v27, v11, &v28, &v24, v8, v26, v6);
      HvpGenerateLogEntryMetadata(a1, v15, v16, (__int64)&v28, (__int64)&v24, (__int64)Pool2, v14);
      HvpGenerateLogEntryDirtyData(a1, v15, v17, (__int64)&v28, (__int64)&v24, v23);
      v19 = *(_DWORD *)(v15 + 24LL * v28 + 16);
      if ( v24 < v19 )
        memset_0((void *)(*(_QWORD *)(v15 + 24LL * v28 + 8) + v24), 0, v19 - v24);
      LOBYTE(v18) = v6;
      HvpGenerateLogEntryChecksums(v15, (unsigned int)v12, v18);
      *v29 = v15;
      *v30 = v12;
      *v31 = v8;
      v20 = 0LL;
      v13 = 0;
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v20 )
    {
      if ( (_DWORD)v12 )
      {
        v22 = v20 + 1;
        do
        {
          if ( *v22 )
          {
            ExFreePoolWithTag(*v22, 0);
            *v22 = 0LL;
          }
          v22 += 3;
          --v12;
        }
        while ( v12 );
      }
      ExFreePoolWithTag(v20, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v13;
}
