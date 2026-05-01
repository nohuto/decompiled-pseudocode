/*
 * XREFs of SdbTagRefToTagID @ 0x180095158
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F648 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     SdbpOpenLocalDatabaseEx @ 0x180094F04 (SdbpOpenLocalDatabaseEx.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall SdbTagRefToTagID(__int64 a1, unsigned int a2, _QWORD *a3, int *a4)
{
  int v5; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  unsigned int v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF

  v13 = 0LL;
  v5 = a2 & 0xFFFFFFF;
  v12 = a2 >> 28;
  v7 = 32LL * (a2 >> 28);
  result = 1LL;
  if ( (*(_BYTE *)(v7 + a1 + 64) & 2) != 0 )
  {
    v10 = *(_QWORD *)(v7 + a1 + 56);
    *(_OWORD *)(v10 + 28) = *(_OWORD *)(v7 + a1 + 40);
  }
  else
  {
    if ( (*(_BYTE *)(v7 + a1 + 64) & 1) == 0 )
      goto LABEL_8;
    v11 = *(_OWORD *)(v7 + a1 + 40);
    *(_DWORD *)(v7 + a1 + 64) = 0;
    v14 = v11;
    result = SdbpOpenLocalDatabaseEx(a1, &v14, v7, &v13, &v12);
    v10 = v13;
  }
  if ( v10 )
  {
    if ( (_DWORD)result )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_8:
  result = 0LL;
LABEL_9:
  v10 = 0LL;
  v5 = 0;
LABEL_10:
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v5;
  return result;
}
