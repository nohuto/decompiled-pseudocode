/*
 * XREFs of IvtLegacyUpdateScalableModeContextEntry @ 0x14056E2C8
 * Callers:
 *     IvtLegacyConfigureAts @ 0x14056D380 (IvtLegacyConfigureAts.c)
 *     IvtLegacySetDevicePasidTable @ 0x14056DFF0 (IvtLegacySetDevicePasidTable.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x14056E48C (IvtLegacyUpdateScalableModeTranslationStructures.c)
 * Callees:
 *     IvtGetScalableModePasidTables @ 0x14056BE6C (IvtGetScalableModePasidTables.c)
 *     IvtInvalidateScalableModeContextEntry @ 0x14056CA50 (IvtInvalidateScalableModeContextEntry.c)
 *     IvtLegacyBuildScalableModeContextEntry @ 0x14056D2A8 (IvtLegacyBuildScalableModeContextEntry.c)
 *     IvtLegacyGetDomainId @ 0x14056DD24 (IvtLegacyGetDomainId.c)
 *     IvtLegacySetScalableModeContextEntry @ 0x14056E288 (IvtLegacySetScalableModeContextEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall IvtLegacyUpdateScalableModeContextEntry(
        __int64 a1,
        unsigned int *a2,
        __int64 *ScalableModePasidTables,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8)
{
  unsigned int v8; // r10d
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  char v16; // r12
  char v17; // di
  char v18; // bp
  __int64 *v19; // rbx
  __int64 v20; // rax
  char v21; // r15
  char v22; // al
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 v26; // rdi
  __int64 v27; // r11
  int DomainId; // eax
  __int64 v29; // r9
  int v30; // [rsp+20h] [rbp-98h]
  _OWORD v31[2]; // [rsp+50h] [rbp-68h] BYREF

  v8 = *a2;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = 2 * (*a2 >> 8);
  memset(v31, 0, sizeof(v31));
  if ( *(_BYTE *)(a1 + 320) )
    v14 = (_QWORD *)(v10 + 8 * ((unsigned int)v11 + (unsigned __int64)((v8 & 0xF8) >= 0x80)));
  else
    v14 = (_QWORD *)(v10 + 8 * v11);
  v15 = 1LL;
  v16 = 0;
  v17 = a4 == 1;
  v18 = (unsigned int)(a5 - 1) <= 1;
  v19 = (__int64 *)(*v14 + 32 * (v8 & 7 | (8LL * ((v8 >> 3) & 0xF))));
  v20 = *v19;
  if ( (*v19 & 1) == 0 || a8 )
  {
    v21 = 0;
  }
  else
  {
    v21 = 1;
    LOBYTE(v15) = (v20 & 4) != 0;
    if ( !a4 )
      v17 = (v20 & 4) != 0;
    v22 = (v20 & 8) != 0;
    if ( !a5 )
      v18 = v22;
    if ( v17 != (_BYTE)v15 || v18 != v22 || (_BYTE)v15 || v22 )
      v16 = 1;
  }
  if ( !ScalableModePasidTables )
    ScalableModePasidTables = IvtGetScalableModePasidTables(a1, v8);
  IvtLegacyBuildScalableModeContextEntry(v15, (__int64)ScalableModePasidTables, v17, v18, v30, (unsigned __int64 *)v31);
  v23 = 1 << a2[1];
  v24 = 3 - a2[1];
  result = (unsigned int)(1 << (3 - *((_BYTE *)a2 + 4)));
  if ( v23 )
  {
    v26 = v23;
    do
    {
      result = IvtLegacySetScalableModeContextEntry(v24, v31, v19);
      v19 = (__int64 *)((char *)v19 + v27);
      --v26;
    }
    while ( v26 );
  }
  if ( v21 )
  {
    DomainId = IvtLegacyGetDomainId(a1, *a2);
    return IvtInvalidateScalableModeContextEntry(a1, (int *)a2, DomainId, v29, v16);
  }
  return result;
}
