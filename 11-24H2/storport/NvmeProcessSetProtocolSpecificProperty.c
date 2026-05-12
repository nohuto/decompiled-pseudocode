/*
 * XREFs of NvmeProcessSetProtocolSpecificProperty @ 0x140088568
 * Callers:
 *     NvmeCommonSetStorageProtocolSpecificProperty @ 0x140128A68 (NvmeCommonSetStorageProtocolSpecificProperty.c)
 * Callees:
 *     NvmeProtocolSpecificRequestGetData @ 0x140088608 (NvmeProtocolSpecificRequestGetData.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x14012D404 (NvmeSetProtocolInfoFeatureData.c)
 */

__int64 __fastcall NvmeProcessSetProtocolSpecificProperty(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v10 = 0LL;
  *a3 = 1;
  if ( *(_DWORD *)v3 == 1314278989 )
  {
    v6 = v3;
    v7 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    if ( *(_DWORD *)v3 != 1314275652 )
      return 3221225485LL;
    v7 = *(_QWORD *)(v3 + 1136);
    v6 = 0LL;
    if ( !v7 )
      return 3221225485LL;
  }
  result = NvmeProtocolSpecificRequestGetData(a2, 0LL, &v10, &v9);
  if ( (int)result < 0 )
    return result;
  if ( ((*(_DWORD *)(v10 + 4) - 3) & 0xFFFFFFFD) == 0 )
    return NvmeSetProtocolInfoFeatureData(v7, v6, a2, a3);
  return 3221225485LL;
}
