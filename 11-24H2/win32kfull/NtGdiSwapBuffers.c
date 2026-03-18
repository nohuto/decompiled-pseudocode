/*
 * XREFs of NtGdiSwapBuffers @ 0x14033CCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140325BB8 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x140325E9C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x140331CAC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiSwapBuffers(HDC a1)
{
  __int64 v1; // r8
  unsigned int v2; // edi
  int v3; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  struct EWNDOBJ *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 DeviceHdev; // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, struct EWNDOBJ *, __int64, __int64); // rax
  _QWORD v15[3]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v16[14]; // [rsp+38h] [rbp-D0h] BYREF
  HDC v17[4]; // [rsp+A8h] [rbp-60h] BYREF
  char v18; // [rsp+C8h] [rbp-40h]
  struct EWNDOBJ *v19; // [rsp+138h] [rbp+30h]

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  if ( v16[0] && *(_QWORD *)(v16[0] + 496LL) )
  {
    v2 = 1;
    if ( *(_DWORD *)(v16[0] + 32LL) == 1 )
    {
LABEL_8:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
      return v2;
    }
    DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v17, (struct XDCOBJ *)v16, v1);
    if ( (v18 & 1) != 0 )
    {
      if ( !v19 )
      {
        EngSetLastError(6u);
        goto LABEL_7;
      }
      if ( ERECTL::bEmpty((struct EWNDOBJ *)((char *)v19 + 4)) )
      {
LABEL_12:
        DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(v17);
        goto LABEL_8;
      }
      ++*(_DWORD *)(*(_QWORD *)(v16[0] + 496LL) + 92LL);
      v7 = v19;
      v8 = *(_QWORD *)(v16[0] + 48LL);
      v9 = (*(_QWORD *)(v16[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v16[0] + 496LL) != 0LL);
      v10 = v9;
      if ( (*(_DWORD *)(v8 + 40) & 0x20000) != 0 )
      {
        v11 = *(_QWORD **)(v16[0] + 48LL);
        *(_OWORD *)&v15[1] = *(_OWORD *)(v16[0] + 1032LL);
        DeviceHdev = hdevFindDeviceHdev(v11, (struct _RECTL *)&v15[1], v19);
        v6 = DeviceHdev;
        v10 = v9;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(v16[0] + 496LL) == *(_QWORD *)(v8 + 2544) )
          {
            v13 = *(_QWORD *)(DeviceHdev + 2544);
            v5 = v13 + 24;
            v10 = (v13 + 24) & -(__int64)(v13 != 0);
          }
          else
          {
            v10 = v9;
          }
          v8 = v6;
        }
      }
      v14 = *(__int64 (__fastcall **)(__int64, struct EWNDOBJ *, __int64, __int64))(v8 + 3128);
      if ( !v14 )
        goto LABEL_7;
      v3 = v14(v10, v7, v5, v6);
    }
    else
    {
      v3 = XDCOBJ::bFullScreen((XDCOBJ *)v16);
    }
    if ( !v3 )
    {
LABEL_7:
      DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(v17);
      v2 = 0;
      goto LABEL_8;
    }
    goto LABEL_12;
  }
  EngSetLastError(6u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return 0LL;
}
