/*
 * XREFs of SdbTagRefToTagID @ 0x14080642C
 * Callers:
 *     KsepDbGetShimInfo @ 0x14073C4E4 (KsepDbGetShimInfo.c)
 *     SdbQueryDataEx @ 0x140802A88 (SdbQueryDataEx.c)
 *     SdbReadEntryInformation @ 0x140802F38 (SdbReadEntryInformation.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409428D4 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1409448E4 (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SdbpOpenLocalDatabaseEx @ 0x1408069BC (SdbpOpenLocalDatabaseEx.c)
 */

__int64 __fastcall SdbTagRefToTagID(__int64 a1, unsigned int a2, _QWORD *a3, int *a4)
{
  int v6; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  int v10; // ecx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  unsigned int v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF

  v14 = 0LL;
  v13 = a2 >> 28;
  v6 = a2 & 0xFFFFFFF;
  v7 = 32LL * (a2 >> 28);
  result = 1LL;
  v10 = *(_DWORD *)(v7 + a1 + 64);
  if ( (v10 & 2) != 0 )
  {
    v11 = *(_QWORD *)(v7 + a1 + 56);
    *(_OWORD *)(v11 + 28) = *(_OWORD *)(v7 + a1 + 40);
  }
  else
  {
    if ( (v10 & 1) == 0 )
      goto LABEL_8;
    v12 = *(_OWORD *)(v7 + a1 + 40);
    *(_DWORD *)(v7 + a1 + 64) = 0;
    v15 = v12;
    result = SdbpOpenLocalDatabaseEx(a1, (unsigned int)&v15, v7, (unsigned int)&v14, (__int64)&v13);
    v11 = v14;
  }
  if ( v11 )
  {
    if ( (_DWORD)result )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_8:
  result = 0LL;
LABEL_9:
  v11 = 0LL;
  v6 = 0;
LABEL_10:
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = v6;
  return result;
}
