/*
 * XREFs of ?SendRequest@PROXYPORT@@QEAAJPEAXK0K@Z @ 0x1C02BF274
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02B7B44 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall PROXYPORT::SendRequest(PROXYPORT *this, void *a2, int a3, void *a4, unsigned int a5)
{
  int v9; // edx
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[5]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+68h] [rbp-98h]
  void *v16; // [rsp+70h] [rbp-90h]
  unsigned int v17; // [rsp+78h] [rbp-88h]
  void *v18; // [rsp+80h] [rbp-80h]
  _WORD v19[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+C8h] [rbp-38h]
  void *v22; // [rsp+D0h] [rbp-30h]

  memset_0(v14, 0, 0x48uLL);
  memset_0(v19, 0, 0x2B0uLL);
  v14[0] = 0x800000480020LL;
  v15 = a3;
  v16 = a2;
  v18 = a4;
  v13 = 688LL;
  v17 = a4 != 0LL ? a5 : 0;
  v9 = LpcSendWaitReceivePort(**(_QWORD **)this, 33685504LL, v14, v19, &v13, 0LL);
  if ( v9 == -1073741769 )
  {
    *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
LABEL_4:
    *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
    return (unsigned int)v9;
  }
  if ( v9 < 0 )
    goto LABEL_4;
  if ( (v19[2] & 0x7FFF) == 2 )
  {
    v11 = 0;
    if ( v19[0] == 32 && a4 == v22 )
      LOBYTE(v11) = a5 == v21;
    v12 = *(_QWORD **)this;
    if ( v11 )
    {
      v12[2] = v20;
      return (unsigned int)v9;
    }
    v12[2] = 0LL;
  }
  return 3221225473LL;
}
