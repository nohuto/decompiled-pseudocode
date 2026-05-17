/*
 * XREFs of RtlImpersonateSelfEx @ 0x1800EA710
 * Callers:
 *     RtlAcquirePrivilege @ 0x1800EA3C0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelf @ 0x1800F84B0 (RtlImpersonateSelf.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x180163820 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x180163A60 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlImpersonateSelfEx(int a1, int a2, HANDLE *a3)
{
  int v5; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-19h] BYREF
  HANDLE v8; // [rsp+38h] [rbp-11h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+48h] [rbp-1h]
  __int64 v11; // [rsp+50h] [rbp+7h]
  int v12; // [rsp+58h] [rbp+Fh]
  int v13; // [rsp+5Ch] [rbp+13h]
  __int64 v14; // [rsp+60h] [rbp+17h]
  _DWORD *v15; // [rsp+68h] [rbp+1Fh]
  _DWORD v16[2]; // [rsp+70h] [rbp+27h] BYREF
  __int16 v17; // [rsp+78h] [rbp+2Fh]
  __int16 v18; // [rsp+7Ah] [rbp+31h]

  v8 = 0LL;
  Handle = 0LL;
  v9[1] = 0;
  v13 = 0;
  v18 = 0;
  if ( !a3 && a2 )
    return 3221225712LL;
  v10 = 0LL;
  v11 = 0LL;
  v14 = 0LL;
  v16[1] = a1;
  v15 = v16;
  v9[0] = 48;
  v12 = 512;
  v16[0] = 12;
  v17 = 1;
  v5 = NtOpenProcessTokenEx(-1LL, 2LL, 512LL, &v8);
  if ( v5 >= 0 )
  {
    v5 = NtDuplicateToken(v8, a2 | 4u, v9);
    if ( v5 >= 0 )
    {
      v5 = NtSetInformationThread(-2LL, 5LL, &Handle);
      if ( v5 >= 0 && a3 )
        *a3 = Handle;
      else
        NtClose(Handle);
    }
    NtClose(v8);
  }
  return (unsigned int)v5;
}
