/*
 * XREFs of VslReportBugCheckProgress @ 0x14058B2F0
 * Callers:
 *     PopCheckpointSystemSleepUnsafe @ 0x140B622DC (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslReportBugCheckProgress(char *a1, __int128 *a2, const void *a3, unsigned int a4, int a5)
{
  size_t v6; // rbx
  __int64 i; // rax
  __int64 v10; // rdi
  unsigned __int16 *v11; // rcx
  int v12; // r8d
  int v13; // edx
  __int128 v14; // xmm0
  __int64 result; // rax
  __int128 v16; // xmm0
  char v17[8]; // [rsp+20h] [rbp-51h] BYREF
  __int64 v18; // [rsp+28h] [rbp-49h]
  __int128 v19; // [rsp+30h] [rbp-41h]
  __int64 v20; // [rsp+40h] [rbp-31h] BYREF
  size_t v21; // [rsp+48h] [rbp-29h]
  __int64 v22; // [rsp+50h] [rbp-21h]

  v6 = a4;
  if ( (a5 & 1) == 0 || a4 > 8 )
    return 3221225485LL;
  memset_0(v17, 0, 0x68uLL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v10 = (unsigned int)i;
    if ( (unsigned int)i >= 4 )
      break;
    v11 = (unsigned __int16 *)a1;
    do
    {
      v12 = *(unsigned __int16 *)((char *)v11 + (char *)IumBugCheckVariables[i] - a1);
      v13 = *v11 - v12;
      if ( v13 )
        break;
      ++v11;
    }
    while ( v12 );
    if ( !v13 )
    {
      v18 = (unsigned int)i;
      goto LABEL_12;
    }
  }
  if ( (_DWORD)i == 4 )
    return 3221225485LL;
LABEL_12:
  v14 = *a2;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v19 = v14;
  if ( (a5 & 0x40) != 0 )
    result = 3221225485LL;
  else
    result = VslpEnterIumSecureMode(2u, 0x108u, 0, (__int64)v17);
  if ( (_DWORD)v6 )
  {
    memmove(&v20, a3, v6);
    v16 = *a2;
    v18 = v10;
    v21 = v6;
    v22 = a5 | 6u;
    v19 = v16;
    return VslpEnterIumSecureMode(2u, 0x108u, 0, (__int64)v17);
  }
  return result;
}
