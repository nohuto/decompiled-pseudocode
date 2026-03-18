/*
 * XREFs of ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x14033C948
 * Callers:
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x14033C920 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x140331CAC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMaxGet(XDCOBJ *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v7)(_QWORD, __int64, _QWORD); // rax
  int v8; // eax
  struct _RECTL v10; // [rsp+30h] [rbp-A8h] BYREF
  HDC v11[18]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v12; // [rsp+E0h] [rbp+8h] BYREF

  v2 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v3 = v12;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v11, (struct PDEVOBJ *)&v12);
  v4 = v3;
  if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
  {
    v5 = *(_QWORD **)(*(_QWORD *)this + 48LL);
    v10 = *(struct _RECTL *)(*(_QWORD *)this + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(v5, &v10, 0LL);
    v4 = v3;
    if ( DeviceHdev )
    {
      v4 = DeviceHdev;
      v3 = DeviceHdev;
    }
  }
  v7 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v4 + 3120);
  if ( v7 )
  {
    v8 = v7(*(_QWORD *)(v3 + 1784), 1LL, 0LL);
    if ( v8 < 0 )
      v8 = 0;
    v2 = v8;
  }
  *(_WORD *)(*(_QWORD *)this + 2088LL) = v2;
  DEVLOCKOBJ::~DEVLOCKOBJ(v11);
  return v2;
}
