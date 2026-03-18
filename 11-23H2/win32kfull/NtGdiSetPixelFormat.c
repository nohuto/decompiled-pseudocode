/*
 * XREFs of NtGdiSetPixelFormat @ 0x1C02D7710
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     UserGetHwnd @ 0x1C01BD62C (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286B30 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B248C (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02D73AC (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(__int64 *a1, int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 DeviceHdev; // rdx
  unsigned int (__fastcall *v16)(__int64, _QWORD, __int64); // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  Gre::Base *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG v22; // ecx
  _QWORD v23[2]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v24[32]; // [rsp+30h] [rbp-69h] BYREF
  struct _RECTL v25; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v26[32]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v27[2]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v28[96]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v29; // [rsp+110h] [rbp+77h] BYREF
  __int64 v30; // [rsp+118h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v23, (HDC)a1);
  v4 = 0;
  if ( !v23[0] || !*(_QWORD *)(v23[0] + 496LL) )
  {
    v22 = 6;
    goto LABEL_32;
  }
  v5 = XDCOBJ::ipfdDevMax((XDCOBJ *)v23);
  if ( a2 < 1 || a2 > v5 )
  {
    v22 = 87;
LABEL_32:
    EngSetLastError(v22);
    goto LABEL_33;
  }
  UserEnterUserCritSec(v7, v6, v8);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v27);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v26, (struct XDCOBJ *)v23, 0);
  v9 = v23[0];
  v10 = 0LL;
  v30 = 0LL;
  if ( (*(_DWORD *)(v23[0] + 36LL) & 1) != 0 )
  {
    v29 = 0LL;
    if ( !(unsigned int)UserGetHwnd(a1, &v30, &v29) )
    {
      EngSetLastError(0x7D2u);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v26);
      UserLeaveUserCritSec();
LABEL_33:
      DCOBJ::~DCOBJ((DCOBJ *)v23);
      return 0LL;
    }
    if ( v29 )
    {
      if ( *(_DWORD *)(v29 + 188) == a2 )
        v4 = 1;
      else
        EngSetLastError(0x7D0u);
LABEL_11:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v26);
      UserLeaveUserCritSec();
      DCOBJ::~DCOBJ((DCOBJ *)v23);
      return v4;
    }
    v9 = v23[0];
    v10 = v30;
  }
  v12 = *(_QWORD *)(v9 + 48);
  v13 = (*(_QWORD *)(v9 + 496) + 24LL) & -(__int64)(*(_QWORD *)(v9 + 496) != 0LL);
  v14 = v13;
  if ( (*(_DWORD *)(v12 + 40) & 0x20000) != 0 )
  {
    v25 = *(struct _RECTL *)(v9 + 1032);
    DeviceHdev = hdevFindDeviceHdev((_QWORD *)v12, &v25, 0LL);
    v14 = v13;
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(v23[0] + 496LL) == *(_QWORD *)(v12 + 2528) )
        v14 = (*(_QWORD *)(DeviceHdev + 2528) + 24LL) & -(__int64)(*(_QWORD *)(DeviceHdev + 2528) != 0LL);
      v12 = DeviceHdev;
    }
  }
  if ( !*(_QWORD *)(v12 + 3112) )
    goto LABEL_11;
  if ( (*(_DWORD *)(v14 + 88) & 0x200000) == 0 )
    goto LABEL_11;
  v16 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v12 + 3096);
  if ( !v16 || !v16(v14, (unsigned int)a2, v10) )
    goto LABEL_11;
  v19 = *(Gre::Base **)(SGDGetSessionState(v17) + 32);
  if ( *((_DWORD *)v19 + 5915) )
  {
    *((_DWORD *)v19 + 5915) = 0;
    vForceClientRgnUpdate(v19);
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v26, v18, v20, v21);
  if ( v27[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v27);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
  UserLeaveUserCritSec();
  if ( v23[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v23);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v24);
  return 1LL;
}
