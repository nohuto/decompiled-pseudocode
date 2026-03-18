/*
 * XREFs of UsbhWaitEventWithTimeoutEx @ 0x1C00068E0
 * Callers:
 *     UsbhWaitForResetTimeout @ 0x1C000179C (UsbhWaitForResetTimeout.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0005350 (Usbh_PCE_Disable_Action.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F290 (Usbh_PCE_Suspend_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_Close_Action @ 0x1C00357E8 (Usbh_PCE_Close_Action.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C0038E08 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhWaitForPortResume @ 0x1C003A71C (UsbhWaitForPortResume.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003CB44 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhAsyncStop @ 0x1C00424CC (UsbhAsyncStop.c)
 * Callees:
 *     UsbhPCE_wRun @ 0x1C0004288 (UsbhPCE_wRun.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C002E034 (UsbhTrapFatalTimeout_x9f.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhWaitEventWithTimeoutEx(__int64 a1, void *a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  NTSTATUS v18; // r13d
  NTSTATUS v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  struct _KEVENT *v24; // r15
  __int64 Signalling; // r9
  _QWORD *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  void *v32; // r15
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  PVOID v40; // rax
  union _LARGE_INTEGER *v41; // rax
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  __int64 v44; // r9
  volatile int Lock; // eax
  BOOLEAN v46; // r9
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h]
  union _LARGE_INTEGER v49; // [rsp+50h] [rbp-30h] BYREF
  __int64 v50; // [rsp+58h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  __int64 v52; // [rsp+68h] [rbp-18h]
  PVOID v53; // [rsp+70h] [rbp-10h] BYREF
  PVOID v54; // [rsp+78h] [rbp-8h]
  int v56; // [rsp+D0h] [rbp+50h]

  v6 = a3;
  v49.QuadPart = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        HIBYTE(v56) = a4;
        LOBYTE(v56) = HIBYTE(a4);
        BYTE1(v56) = BYTE2(a4);
        BYTE2(v56) = BYTE1(a4);
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v56;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a3;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
  }
  v11 = 10000LL * a3 + (int)(KeQueryTimeIncrement() - 1);
  v50 = v11;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 826627159;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = v6;
      }
    }
  }
  Timeout.QuadPart = -v11;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 827618423;
        *(_QWORD *)(v16 + 16) = (unsigned int)v14;
        *(_QWORD *)(v16 + 24) = SHIDWORD(v14);
        *(_QWORD *)(v16 + 8) = 0LL;
      }
    }
  }
  if ( (_DWORD)v6 )
  {
    if ( !a5 )
    {
      v18 = KeWaitForSingleObject(a2, Executive, 0, 0, &Timeout);
      goto LABEL_47;
    }
    v17 = a6;
    if ( a6 )
    {
      P = (PVOID)UsbhIncHubBusy(a1, (int)a6 + 24, a6, 1465152371, 0);
      Object = a2;
      v52 = a6 + 496;
      v18 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( v18 == 1 )
          {
            v18 = KeWaitForSingleObject(a2, Executive, 0, 0, &v49);
            if ( !v18 )
              goto LABEL_34;
            Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v11 - v14;
            v52 = a6 + 2464;
            v19 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
            v18 = v19;
            switch ( v19 )
            {
              case 0:
                goto LABEL_34;
              case 1:
                v20 = *(unsigned __int16 *)(a6 + 4);
                if ( (UsbhLogMask & 0x200) != 0 && a1 && (v21 = *(_QWORD *)(a1 + 64)) != 0 )
                {
                  v22 = *(_QWORD *)(v21 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
                  *(_DWORD *)v22 = 1850889303;
                  *(_QWORD *)(v22 + 8) = 0LL;
                  *(_QWORD *)(v22 + 16) = a6;
                  *(_QWORD *)(v22 + 24) = v20;
                  *(_DWORD *)(a6 + 2844) = a5;
                }
                else
                {
                  *(_DWORD *)(a6 + 2844) = a5;
                  if ( !a1 )
                    goto LABEL_80;
                }
                v23 = *(_DWORD **)(a1 + 64);
                if ( !v23 )
                  goto LABEL_81;
                if ( *v23 != 541218120 )
                  UsbhTrapFatal_Dbg(a1, v23);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    57,
                    (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
                    *(_WORD *)(a6 + 4));
                }
                UsbhDispatch_PortChangeQueueEventEx(a1, a6, 5, a6 + 24, 0LL, 0, 0LL, 0LL);
                KeSetEvent((PRKEVENT)(a6 + 2464), 0, 0);
                break;
              case 258:
                goto LABEL_34;
            }
            v52 = a6 + 496;
          }
          else if ( v18 == 258 )
          {
            goto LABEL_34;
          }
          if ( MEMORY[0xFFFFF78000000008] - v14 >= v11 )
            break;
          Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
          v18 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          if ( !v18 )
            goto LABEL_34;
        }
        v18 = 258;
      }
LABEL_34:
      if ( !a1 )
LABEL_80:
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v24 = *(struct _KEVENT **)(a1 + 64);
      if ( !v24 )
LABEL_81:
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( v24->Header.LockNV != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v24[142].Header.Type = 1;
      KeWaitForSingleObject(&v24[139], Executive, 0, 0, 0LL);
      Signalling = v24[142].Header.Signalling;
      v26 = P;
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 1667581000;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = v26;
          *(_QWORD *)(v28 + 24) = Signalling;
        }
      }
      if ( v24[142].Header.Signalling )
      {
        if ( v26 == (_QWORD *)1936941672 )
        {
          Lock = v24[130].Header.Lock;
          if ( Lock )
            v24[130].Header.LockNV = Lock - 1;
        }
        else if ( v26 )
        {
          v29 = v26[1];
          v30 = v26 + 1;
          if ( *(_QWORD **)(v29 + 8) != v26 + 1 || (v31 = (_QWORD *)v26[2], (_QWORD *)*v31 != v30) )
            __fastfail(3u);
          *v31 = v29;
          *(_QWORD *)(v29 + 8) = v31;
          v26[2] = v26 + 1;
          *v30 = v30;
          ExFreePoolWithTag(v26, 0);
        }
      }
      KeSetEvent(v24 + 139, 0, 0);
      goto LABEL_47;
    }
  }
  else
  {
    v17 = a6;
  }
  if ( a5 != 11 )
  {
    Log(a1, 8, 2004112472, 0, 0LL);
    v32 = a2;
    v18 = KeWaitForSingleObject(a2, Executive, 0, v46, 0LL);
    goto LABEL_48;
  }
  v53 = a2;
  v40 = (PVOID)(v17 + 496);
  P = (PVOID)(v17 + 496);
LABEL_62:
  v54 = v40;
  do
  {
    v41 = (_DWORD)v6 ? &Timeout : 0LL;
    v42 = KeWaitForMultipleObjects(2u, &v53, WaitAny, Executive, 0, 0, v41, 0LL);
    v18 = v42;
    if ( !v42 )
      break;
    if ( v42 == 1 )
    {
      v18 = KeWaitForSingleObject(a2, Executive, 0, 0, &v49);
      if ( !v18 )
        break;
      v54 = (PVOID)(a6 + 2464);
      v43 = KeWaitForMultipleObjects(2u, &v53, WaitAny, Executive, 0, 0, 0LL, 0LL);
      v18 = v43;
      if ( !v43 )
        break;
      if ( v43 == 1 )
      {
        Log(a1, 512, 1465143918, a6, *(unsigned __int16 *)(a6 + 4));
        UsbhPCE_wRun(a1, v44 + 24, v44);
      }
      v40 = P;
      goto LABEL_62;
    }
  }
  while ( v42 != 258 );
LABEL_47:
  v32 = a2;
LABEL_48:
  v33 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v34 = *(_QWORD *)(a1 + 64);
      if ( v34 )
      {
        v35 = *(_QWORD *)(v34 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
        *(_DWORD *)v35 = 844395639;
        *(_QWORD *)(v35 + 16) = (unsigned int)v33;
        *(_QWORD *)(v35 + 24) = SHIDWORD(v33);
        *(_QWORD *)(v35 + 8) = 0LL;
      }
    }
  }
  v36 = v33 - v14;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v37 = *(_QWORD *)(a1 + 64);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
        *(_DWORD *)v38 = 2017809495;
        *(_QWORD *)(v38 + 16) = v18;
        *(_QWORD *)(v38 + 24) = (unsigned int)v36;
        *(_QWORD *)(v38 + 8) = 0LL;
      }
    }
  }
  if ( v18 == 258 )
  {
    if ( v36 < v11 )
    {
      Log(a1, 8, 1465135393, HIDWORD(v36), (unsigned int)v36);
      Log(a1, 8, 1465135649, HIDWORD(v50), (unsigned int)v11);
    }
    if ( a5 )
    {
      if ( a5 != 11 )
      {
        v18 = KeWaitForSingleObject(v32, Executive, 0, 0, &v49);
        if ( v18 )
          UsbhTrapFatalTimeout_x9f(a1, a5, a6);
      }
    }
  }
  return (unsigned int)v18;
}
