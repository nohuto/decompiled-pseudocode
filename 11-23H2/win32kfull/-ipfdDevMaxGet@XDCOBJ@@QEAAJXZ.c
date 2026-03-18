/*
 * XREFs of ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02D73D4
 * Callers:
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02D73AC (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B248C (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMaxGet(XDCOBJ *this)
{
  int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // rdx
  Gre::Base *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rcx
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v10)(_QWORD, __int64, _QWORD); // rax
  struct _RECTL v12; // [rsp+38h] [rbp-29h] BYREF
  __int128 v13; // [rsp+48h] [rbp-19h] BYREF
  __int64 v14; // [rsp+58h] [rbp-9h]
  int v15; // [rsp+60h] [rbp-1h]
  _QWORD v16[2]; // [rsp+68h] [rbp+7h] BYREF
  char v17[40]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+3Fh]
  __int64 v19; // [rsp+A8h] [rbp+47h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v16);
  v19 = 0LL;
  v13 = 0LL;
  v18 = 0LL;
  v16[0] = 0LL;
  v15 = 1;
  if ( (*(_DWORD *)(v3 + 40) & 1) != 0 )
  {
    Gre::Base::Globals(v5);
    *(_QWORD *)&v13 = *(_QWORD *)(v3 + 48);
    v14 = v3;
    GreAcquireSemaphore(v13);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v13, 11LL);
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
  {
    v8 = *(_QWORD **)(*(_QWORD *)this + 48LL);
    v12 = *(struct _RECTL *)(*(_QWORD *)this + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(v8, &v12, 0LL);
    if ( DeviceHdev )
      v3 = DeviceHdev;
  }
  v10 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 3104);
  if ( v10 )
  {
    v2 = v10(*(_QWORD *)(v3 + 1768), 1LL, 0LL);
    if ( v2 < 0 )
      v2 = 0;
  }
  *(_WORD *)(*(_QWORD *)this + 2088LL) = v2;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v13, v4, v6, v7);
  if ( v16[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v16);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v17);
  return (unsigned int)v2;
}
