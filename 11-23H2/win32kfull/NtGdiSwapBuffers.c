/*
 * XREFs of NtGdiSwapBuffers @ 0x1C02D79B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0274538 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0274650 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B248C (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiSwapBuffers(HDC a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  struct EWNDOBJ *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 DeviceHdev; // rax
  __int64 v11; // rax
  unsigned int (__fastcall *v12)(__int64, struct EWNDOBJ *, __int64, __int64); // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-69h] BYREF
  char v14[32]; // [rsp+38h] [rbp-59h] BYREF
  struct _RECTL v15; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v16[112]; // [rsp+68h] [rbp-29h] BYREF
  struct EWNDOBJ *v17; // [rsp+D8h] [rbp+47h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] && *(_QWORD *)(v13[0] + 496LL) )
  {
    v1 = 1;
    if ( *(_DWORD *)(v13[0] + 32LL) == 1 )
    {
LABEL_7:
      DCOBJ::~DCOBJ((DCOBJ *)v13);
      return v1;
    }
    DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v16, (struct XDCOBJ *)v13);
    if ( (v16[24] & 1) != 0 )
    {
      if ( !v17 )
      {
        EngSetLastError(6u);
        goto LABEL_6;
      }
      if ( !ERECTL::bEmpty((struct EWNDOBJ *)((char *)v17 + 4)) )
      {
        ++*(_DWORD *)(*(_QWORD *)(v13[0] + 496LL) + 92LL);
        v5 = v17;
        v6 = *(_QWORD *)(v13[0] + 48LL);
        v7 = (*(_QWORD *)(v13[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v13[0] + 496LL) != 0LL);
        v8 = v7;
        if ( (*(_DWORD *)(v6 + 40) & 0x20000) != 0 )
        {
          v9 = *(_QWORD **)(v13[0] + 48LL);
          v15 = *(struct _RECTL *)(v13[0] + 1032LL);
          DeviceHdev = hdevFindDeviceHdev(v9, &v15, v17);
          v4 = DeviceHdev;
          v8 = v7;
          if ( DeviceHdev )
          {
            if ( *(_QWORD *)(v13[0] + 496LL) == *(_QWORD *)(v6 + 2528) )
            {
              v11 = *(_QWORD *)(DeviceHdev + 2528);
              v3 = v11 + 24;
              v8 = (v11 + 24) & -(__int64)(v11 != 0);
            }
            else
            {
              v8 = v7;
            }
            v6 = v4;
          }
        }
        v12 = *(unsigned int (__fastcall **)(__int64, struct EWNDOBJ *, __int64, __int64))(v6 + 3112);
        if ( v12 && v12(v8, v5, v3, v4) )
        {
          DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v16);
          if ( v13[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v13);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
          return v1;
        }
        goto LABEL_6;
      }
    }
    else if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v13) )
    {
LABEL_6:
      DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v16);
      v1 = 0;
      goto LABEL_7;
    }
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v16);
    goto LABEL_7;
  }
  EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return 0LL;
}
