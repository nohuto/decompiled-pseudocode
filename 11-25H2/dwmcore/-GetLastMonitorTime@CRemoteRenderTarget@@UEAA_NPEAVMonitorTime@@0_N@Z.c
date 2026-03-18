/*
 * XREFs of ?GetLastMonitorTime@CRemoteRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x1802815B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CRemoteRenderTarget::GetLastMonitorTime(
        CRemoteRenderTarget *this,
        struct MonitorTime *a2,
        struct MonitorTime *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  bool result; // al
  _BYTE v11[16]; // [rsp+20h] [rbp-78h] BYREF
  int v12; // [rsp+30h] [rbp-68h]
  __int64 v13; // [rsp+38h] [rbp-60h]
  int v14; // [rsp+44h] [rbp-54h]
  __int64 v15; // [rsp+48h] [rbp-50h]
  unsigned int v16; // [rsp+68h] [rbp-30h]

  memset_0(v11, 0, 0x50uLL);
  v6 = *((_QWORD *)this + 4);
  if ( !v6 || (*(unsigned int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 168LL))(v6, v11) )
    return 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 160LL))(*((_QWORD *)this + 4));
  *(_QWORD *)a2 = v13;
  *((_DWORD *)a2 + 4) = v12;
  v8 = v15;
  *((_QWORD *)a2 + 1) = v7;
  *(_QWORD *)a3 = v8;
  *((_DWORD *)a3 + 4) = v14;
  v9 = v7 * v16;
  result = 1;
  *((_QWORD *)a3 + 1) = v9;
  return result;
}
