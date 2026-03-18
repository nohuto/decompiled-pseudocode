/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInfo @ 0x14000E440
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C7A0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x14000E1EC (HUBFDO_GetPortStatusForDebugging.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FBD4 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInfo(__int64 a1, __int64 a2, size_t a3, int a4, char a5)
{
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // esi
  _QWORD *i; // rax
  _QWORD *v13; // rcx
  __int64 j; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  _WORD *v18; // rcx
  int v19; // eax
  KIRQL v20; // al
  int v21; // ecx
  KIRQL v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // r14
  unsigned int v25; // r11d
  _QWORD *v26; // rcx
  __int64 v27; // r9
  unsigned int k; // r10d
  _BYTE *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // edx
  bool v38; // sf
  void *v39; // rdx
  int v40; // edx
  __int128 *v41; // r8
  void *v43; // [rsp+30h] [rbp-38h] BYREF
  KIRQL v44; // [rsp+38h] [rbp-30h]
  __int128 v45; // [rsp+40h] [rbp-28h] BYREF

  v43 = 0LL;
  LOBYTE(v8) = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_14006C198);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v43,
          0LL);
  if ( (v11 & 0x80000000) == 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters(v10, 4, a4, (_DWORD)v43, 35LL, a3);
    if ( (v11 & 0x80000000) == 0 )
    {
      v8 = *(unsigned __int16 *)v43;
      memset(v43, 0, a3);
      for ( i = *(_QWORD **)(v10 + 2368); ; i = (_QWORD *)*i )
      {
        v13 = i - 31;
        if ( (_QWORD *)(v10 + 2368) == i )
          goto LABEL_9;
        if ( *((unsigned __int16 *)v13 + 100) == v8 )
          break;
      }
      if ( i == (_QWORD *)248 )
      {
LABEL_9:
        *(_DWORD *)((char *)v43 + 31) = 3;
        goto LABEL_10;
      }
      *(_DWORD *)((char *)v43 + 31) = *((_DWORD *)v13 + 356);
LABEL_10:
      if ( *(_BYTE *)(v10 + 12) )
        HUBFDO_GetPortStatusForDebugging((_QWORD *)v10, v8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
        WdfDriverGlobals,
        *(_QWORD *)(v10 + 16));
      for ( j = 0LL; ; j = v16 )
      {
        v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                *(_QWORD *)(v10 + 16),
                j,
                1LL);
        v16 = v15;
        if ( !v15
          || v15 != *(_QWORD *)(v10 + 2664)
          && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v15,
                                     off_14006C0F8)
                                 + 48) == v8 )
        {
          break;
        }
      }
      if ( v16 )
      {
        v17 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                            WdfDriverGlobals,
                            v16,
                            off_14006C0F8)
                        + 24);
        *(_DWORD *)v43 = v8;
        v18 = v43;
        *(_OWORD *)((char *)v43 + 4) = *(_OWORD *)(v17 + 1988);
        v18[10] = *(_WORD *)(v17 + 2004);
        *(_DWORD *)((char *)v43 + 27) = 0;
        v19 = *(_DWORD *)(v17 + 172);
        if ( a5 )
        {
          if ( v19 == 3 )
            *((_BYTE *)v43 + 23) = 2;
          else
            *((_BYTE *)v43 + 23) = *(_BYTE *)(v17 + 172);
        }
        else
        {
          *((_BYTE *)v43 + 23) = v19 == 0;
        }
        *(_WORD *)((char *)v43 + 25) = *(_WORD *)(v17 + 1648);
        if ( (*(_DWORD *)(v17 + 1632) & 2) != 0 )
          *((_BYTE *)v43 + 24) = 1;
        v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 40));
        v21 = *(_DWORD *)(v17 + 1636);
        v22 = v20;
        v44 = v20;
        if ( (v21 & 0x10) != 0 && (v23 = *(_QWORD *)(v17 + 48)) != 0 )
        {
          v24 = a3 - 35;
          v25 = 0;
          *((_BYTE *)v43 + 22) = *(_BYTE *)(v23 + 37);
          *(_DWORD *)((char *)v43 + 27) = *(_DWORD *)(*(_QWORD *)(v17 + 48) + 8LL);
          v26 = (_QWORD *)(*(_QWORD *)(v17 + 48) + 16LL);
          v27 = *v26 - 8LL;
          if ( v26 != (_QWORD *)*v26 )
          {
            do
            {
              if ( v24 < 0xB )
                break;
              for ( k = 0; k < *(_DWORD *)(v27 + 24); *(_DWORD *)((char *)v43 + v31 + 42) = 0 )
              {
                if ( v24 < 0xB )
                  break;
                v29 = v43;
                v24 -= 11LL;
                v30 = v25++;
                v31 = 11 * v30;
                v32 = k++;
                v33 = *(_QWORD *)(v27 + 72 * (v32 + 1));
                *(_DWORD *)((char *)v43 + v31 + 35) = *(_DWORD *)v33;
                *(_WORD *)&v29[v31 + 39] = *(_WORD *)(v33 + 4);
                v29[v31 + 41] = *(_BYTE *)(v33 + 6);
              }
              v34 = *(_QWORD *)(v27 + 8);
              v27 = v34 - 8;
            }
            while ( *(_QWORD *)(v17 + 48) + 16LL != v34 );
            v22 = v44;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 40), v22);
          v35 = a3 - v24;
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 40), v20);
          v35 = 35LL;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          v35);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          35LL);
        v11 = 0;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 2528),
      2u,
      3u,
      0x41u,
      (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
      v11);
  }
  if ( a5 == 1 )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v45 = 0LL;
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    v37 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, __int128 *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v36, &v45)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v38 = v37 < 0;
    v39 = &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_COMPLETE;
  }
  else
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v45 = 0LL;
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    v40 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, __int128 *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v36, &v45)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v38 = v40 < 0;
    v39 = &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_COMPLETE;
  }
  v41 = &v45;
  if ( v38 )
    LODWORD(v41) = 0;
  McTemplateK0pqq_EtwWriteTransfer(v36, (_DWORD)v39, (_DWORD)v41, *(_QWORD *)(v10 + 248), v8, v11);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v11);
}
