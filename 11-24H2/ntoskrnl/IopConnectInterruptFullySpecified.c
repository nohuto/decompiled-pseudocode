/*
 * XREFs of IopConnectInterruptFullySpecified @ 0x14071DF68
 * Callers:
 *     IoConnectInterrupt @ 0x14071DBD0 (IoConnectInterrupt.c)
 *     IoConnectInterruptEx @ 0x140A11B20 (IoConnectInterruptEx.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x14046F4B0 (KeVerifyGroupAffinity.c)
 *     HalGetVectorInput @ 0x140540940 (HalGetVectorInput.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 */

__int64 __fastcall IopConnectInterruptFullySpecified(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        int a9,
        char a10,
        __int128 *a11)
{
  unsigned __int8 v15; // bl
  __int128 v16; // xmm0
  char v17; // di
  __int64 result; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // al
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // [rsp+60h] [rbp-79h] BYREF
  int v25; // [rsp+64h] [rbp-75h] BYREF
  __int64 v26; // [rsp+68h] [rbp-71h] BYREF
  _DWORD v27[4]; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int8 v28; // [rsp+80h] [rbp-59h]
  int v29; // [rsp+84h] [rbp-55h]
  int v30; // [rsp+88h] [rbp-51h]
  __int128 v31; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp-29h]
  char v33; // [rsp+B4h] [rbp-25h]

  v27[1] = 0;
  memset_0(v27, 0, 0x5CuLL);
  v24 = 0;
  v26 = 0LL;
  v25 = 0;
  if ( !a3 || !KeVerifyGroupAffinity((__int64)a11, 0) )
    return 3221225485LL;
  v15 = a8;
  if ( !a8 )
  {
    v15 = a7;
    goto LABEL_6;
  }
  if ( a8 < a7 )
    return 3221225485LL;
LABEL_6:
  v16 = *a11;
  v27[2] = 0;
  v28 = a7;
  v17 = 1;
  v30 = a9;
  v27[0] = 1;
  v27[3] = a6;
  v31 = v16;
  result = HalGetVectorInput(a6, (__int64)&v31, (__int64)&v24, (__int64)&v25);
  if ( (int)result >= 0 )
  {
    v21 = guard_dispatch_icall_no_overrides(0LL, v24, v19, v20);
    v22 = v25;
    if ( v21 || (unsigned int)(v25 - 3) > 1 )
    {
      v23 = v24;
      *a1 = 0LL;
      v32 = v23;
      if ( (v33 & 1) == 0 )
        v17 = a10;
      v29 = v22;
      result = IopConnectInterrupt(&v26, a2, a3, 0LL, a4, 0, a5, v15, v17);
      if ( (int)result >= 0 )
        *a1 = v26 + 112;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
