/*
 * XREFs of Usbh_PCE_HardwareWake_Action @ 0x140032C44
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001F30 (UsbhUnlockPcqWithTag.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhSetPcqEventStatus @ 0x140032510 (UsbhSetPcqEventStatus.c)
 *     UsbhRemoveQueuedSuspend @ 0x140043BAC (UsbhRemoveQueuedSuspend.c)
 */

void __fastcall Usbh_PCE_HardwareWake_Action(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  KIRQL v6; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r11d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r10d
  __int64 v39; // r9
  __int64 v40; // rax
  int v41; // r10d

  FdoExt(a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v5 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v6 = v4;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 724267376;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 12LL;
        *(_QWORD *)(v8 + 24) = v5;
      }
    }
  }
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 724267376;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = v9;
      }
    }
  }
  v13 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v13;
  v14 = a2 + 32 * (v13 + 43);
  *(_DWORD *)v14 = 12;
  v15 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v14 + 8) = -1;
  *(_DWORD *)(v14 + 4) = v15;
  *(_QWORD *)(v14 + 12) = 0LL;
  *(_QWORD *)(v14 + 20) = 0LL;
  *(_DWORD *)(v14 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
        *(_DWORD *)v19 = 812659249;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = v16;
        *(_QWORD *)(v19 + 24) = v17;
      }
    }
  }
  if ( (int)v16 <= 10 )
  {
    if ( (_DWORD)v16 != 10 )
    {
      switch ( (_DWORD)v16 )
      {
        case 1:
          goto LABEL_47;
        case 2:
        case 3:
        case 4:
          goto LABEL_18;
        case 5:
        case 6:
LABEL_48:
          Log(a1, 512, 825389107, v16, *(unsigned __int16 *)(a2 + 4));
          v40 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = v41;
          *(_DWORD *)(v40 + a2 + 1384) = v41;
          if ( *(_DWORD *)(a2 + 400) == 5 )
            Log(a1, 512, 825389161, v39, *(unsigned __int16 *)(a2 + 4));
          goto LABEL_50;
        case 7:
          Log(a1, 512, 825389106, v16, *(unsigned __int16 *)(a2 + 4));
          v33 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 2;
          *(_DWORD *)(v33 + a2 + 1384) = 2;
          *(_DWORD *)(a2 + 400) = v34;
LABEL_39:
          UsbhSetPcqEventStatus(a1, a2, 2, 10);
          KeResetEvent((PRKEVENT)(a2 + 472));
LABEL_50:
          UsbhUnlockPcqWithTag(a1, a2, v6, 0);
          return;
      }
      if ( (_DWORD)v16 != 8 )
      {
        if ( (_DWORD)v16 != 9 )
        {
LABEL_46:
          Log(a1, 512, 825389144, v16, *(unsigned __int16 *)(a2 + 4));
          v36 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v36 + a2 + 1384) = 19;
          goto LABEL_50;
        }
        Log(a1, 512, 825389109, v16, *(unsigned __int16 *)(a2 + 4));
        UsbhRemoveQueuedSuspend(a1, a2, v30, v31);
        v32 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v32 + a2 + 1384) = 4;
        goto LABEL_39;
      }
    }
    Log(a1, 512, 825389108, v16, *(unsigned __int16 *)(a2 + 4));
    v35 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 10;
    *(_DWORD *)(v35 + a2 + 1384) = 10;
    goto LABEL_50;
  }
  if ( (_DWORD)v16 == 11 || (_DWORD)v16 == 12 || (_DWORD)v16 == 13 )
    goto LABEL_48;
  if ( (_DWORD)v16 != 14 )
  {
    if ( (_DWORD)v16 != 15 && (_DWORD)v16 != 16 && (_DWORD)v16 != 17 )
    {
      if ( (_DWORD)v16 != 18 && (_DWORD)v16 != 20 )
        goto LABEL_46;
LABEL_47:
      Log(a1, 512, 825389110, v16, *(unsigned __int16 *)(a2 + 4));
      v37 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v38;
      *(_DWORD *)(v37 + a2 + 1384) = v38;
      goto LABEL_50;
    }
    goto LABEL_48;
  }
LABEL_18:
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v22 = 829436465;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = v16;
        *(_QWORD *)(v22 + 24) = v20;
      }
    }
  }
  v23 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = v16;
  *(_DWORD *)(v23 + a2 + 1384) = v16;
  v24 = *(unsigned __int16 *)(a2 + 4);
  v25 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 && a1 )
  {
    v26 = *(_QWORD *)(a1 + 64);
    if ( v26 )
    {
      v27 = *(_QWORD *)(v26 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
      *(_DWORD *)v27 = 757952880;
      *(_QWORD *)(v27 + 8) = 0LL;
      *(_QWORD *)(v27 + 16) = v25;
      *(_QWORD *)(v27 + 24) = v24;
    }
  }
  v28 = *(_DWORD *)(a2 + 12);
  v29 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v29 + a2 + 8) = v28;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
}
