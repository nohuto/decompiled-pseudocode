/*
 * XREFs of Usbh_PCE_Resume_Action @ 0x140002820
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001F30 (UsbhUnlockPcqWithTag.c)
 *     UsbhInsertQueuePortChangeObject @ 0x140003F90 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhSetResumePending @ 0x1400043CC (UsbhSetResumePending.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhiSignalResumeEvent @ 0x140019160 (UsbhiSignalResumeEvent.c)
 *     UsbhLogSignalResumeEvent @ 0x140019A84 (UsbhLogSignalResumeEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhiSignalSuspendEvent @ 0x14002BDEC (UsbhiSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x140032510 (UsbhSetPcqEventStatus.c)
 *     UsbhRemoveQueuedSuspend @ 0x140043BAC (UsbhRemoveQueuedSuspend.c)
 */

__int64 __fastcall Usbh_PCE_Resume_Action(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r12
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  KIRQL v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  KIRQL v27; // al
  KIRQL v28; // di
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rax
  int v69; // r9d
  int v70; // esi
  __int64 v71; // rax
  int v72; // r8d
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // [rsp+20h] [rbp-48h]
  __int64 v76; // [rsp+20h] [rbp-48h]
  __int64 v77; // [rsp+88h] [rbp+20h] BYREF

  v77 = 0LL;
  ((void (*)(void))FdoExt)();
  v6 = UsbhIncHubBusy(a1, a3, a1, 1383162736, 0);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v11 = *(_QWORD *)(v8 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v11 = 724267376;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = 3LL;
        *(_QWORD *)(v11 + 24) = v9;
      }
    }
  }
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v14 = *(_QWORD *)(v8 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v14 = 724267376;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v13;
        *(_QWORD *)(v14 + 24) = v12;
      }
    }
  }
  v15 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v15;
  v16 = a2 + 32 * (v15 + 43);
  *(_DWORD *)v16 = 3;
  *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v16 + 8) = -1;
  *(_QWORD *)(v16 + 12) = 0LL;
  *(_QWORD *)(v16 + 20) = 0LL;
  *(_DWORD *)(v16 + 28) = 0;
  v17 = *(int *)(a2 + 12);
  v18 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v19 = *(_QWORD *)(v8 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v19 = 812659551;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = v17;
        *(_QWORD *)(v19 + 24) = v18;
      }
    }
  }
  switch ( (_DWORD)v17 )
  {
    case 7:
LABEL_14:
      v20 = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v77) = 0x100000;
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v8 = *(_QWORD *)(a1 + 64);
          if ( v8 )
          {
            v21 = *(_QWORD *)(v8 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
            *(_DWORD *)v21 = 829436767;
            *(_QWORD *)(v21 + 8) = 0LL;
            *(_QWORD *)(v21 + 16) = v17;
            *(_QWORD *)(v21 + 24) = v20;
          }
        }
      }
      v22 = FdoExt(a1, v8, v20, v13);
      v23 = *(unsigned __int16 *)(a2 + 4);
      v24 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v25 = *(_QWORD *)(a1 + 64);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
            *(_DWORD *)v26 = 1986359664;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 16) = v24;
            *(_QWORD *)(v26 + 24) = v23;
          }
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 4944));
      *(_BYTE *)(a2 + 2838) = 0;
      v28 = v27;
      *(_DWORD *)(a2 + 696) = 3;
      KeResetEvent((PRKEVENT)(a2 + 712));
      KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 4944), v28);
      v29 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 18;
      *(_DWORD *)(v29 + a2 + 1384) = 18;
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v77, 0, 0LL);
      v30 = *(unsigned __int16 *)(a2 + 4);
      v31 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v32 = *(_QWORD *)(a1 + 64);
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = 1986359664;
            *(_QWORD *)(v33 + 8) = 0LL;
            *(_QWORD *)(v33 + 16) = v31;
            *(_QWORD *)(v33 + 24) = v30;
          }
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      v34 = *(unsigned __int16 *)(a2 + 4);
      v35 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v36 = *(_QWORD *)(a1 + 64);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v36 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
            *(_DWORD *)v37 = 757952880;
            *(_QWORD *)(v37 + 8) = 0LL;
            *(_QWORD *)(v37 + 16) = v35;
            *(_QWORD *)(v37 + 24) = v34;
          }
        }
      }
      *(_DWORD *)(a2 + 448) = 0;
LABEL_31:
      v38 = *(_DWORD *)(a2 + 12);
      v39 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(v39 + a2 + 12) = 0x100000;
      *(_DWORD *)(v39 + a2 + 8) = v38;
LABEL_32:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      return UsbhDecHubBusy(a1, v40, v6);
    case 6:
      v42 = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v77) = 0x100000;
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v43 = *(_QWORD *)(a1 + 64);
          if ( v43 )
          {
            v44 = *(_QWORD *)(v43 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
            *(_DWORD *)v44 = 846213983;
            *(_QWORD *)(v44 + 8) = 0LL;
            *(_QWORD *)(v44 + 16) = v17;
            *(_QWORD *)(v44 + 24) = v42;
          }
        }
      }
      UsbhSetResumePending(a1, a2);
      v45 = *(unsigned __int16 *)(a2 + 4);
      v46 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v47 = *(_QWORD *)(a1 + 64);
          if ( v47 )
          {
            v48 = *(_QWORD *)(v47 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
            *(_DWORD *)v48 = 1986359664;
            *(_QWORD *)(v48 + 8) = 0LL;
            *(_QWORD *)(v48 + 16) = v46;
            *(_QWORD *)(v48 + 24) = v45;
          }
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
      v49 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v49 + a2 + 1384) = 1;
      v50 = *(unsigned __int16 *)(a2 + 4);
      v51 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v52 = *(_QWORD *)(a1 + 64);
          if ( v52 )
          {
            v53 = *(_QWORD *)(v52 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
            *(_DWORD *)v53 = 1986359664;
            *(_QWORD *)(v53 + 8) = 0LL;
            *(_QWORD *)(v53 + 16) = v51;
            *(_QWORD *)(v53 + 24) = v50;
          }
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v77, 0, 0LL);
      v54 = *(unsigned __int16 *)(a2 + 4);
      v55 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v56 = *(_QWORD *)(a1 + 64);
          if ( v56 )
          {
            v57 = *(_QWORD *)(v56 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v56 + 880)) & *(_DWORD *)(v56 + 884));
            *(_DWORD *)v57 = 757952880;
            *(_QWORD *)(v57 + 8) = 0LL;
            *(_QWORD *)(v57 + 16) = v55;
            *(_QWORD *)(v57 + 24) = v54;
          }
        }
      }
      *(_DWORD *)(a2 + 448) = 0;
      goto LABEL_31;
    case 0xE:
LABEL_53:
      if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2, v18, v13) )
        UsbhSetPcqEventStatus(a1, a2, 1LL);
      v58 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v59 = *(_QWORD *)(a1 + 64);
          if ( v59 )
          {
            v60 = *(_QWORD *)(v59 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v59 + 880)) & *(_DWORD *)(v59 + 884));
            *(_DWORD *)v60 = 896545631;
            *(_QWORD *)(v60 + 8) = 0LL;
            *(_QWORD *)(v60 + 16) = v17;
            *(_QWORD *)(v60 + 24) = v58;
          }
        }
      }
      v61 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v17;
      *(_DWORD *)(v61 + a2 + 1384) = v17;
      v62 = *(unsigned __int16 *)(a2 + 4);
      v63 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v64 = *(_QWORD *)(a1 + 64);
          if ( v64 )
          {
            v65 = *(_QWORD *)(v64 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v64 + 880)) & *(_DWORD *)(v64 + 884));
            *(_DWORD *)v65 = 757952880;
            *(_QWORD *)(v65 + 8) = 0LL;
            *(_QWORD *)(v65 + 16) = v63;
            *(_QWORD *)(v65 + 24) = v62;
          }
        }
      }
      v66 = *(_DWORD *)(a2 + 12);
      v67 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v67 + a2 + 8) = v66;
      goto LABEL_32;
  }
  v18 = 0x140000000uLL;
  switch ( (int)v17 )
  {
    case 1:
      Log(a1, 512, 1597206579, v17, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalResumeEvent(a1, a2);
      v68 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(v68 + a2 + 1384) = 1;
      break;
    case 2:
    case 3:
    case 4:
      goto LABEL_53;
    case 5:
    case 12:
    case 13:
      v76 = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v77) = 0x100000;
      Log(a1, 512, 1597206583, v17, v76);
      UsbhSetResumePending(a1, a2);
      UsbhSetPcqEventStatus(a1, a2, 1LL);
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v77, 0, 0LL);
      v69 = 0x100000;
      goto LABEL_67;
    case 8:
    case 9:
    case 10:
      if ( (_DWORD)v17 == 9 )
      {
        v70 = 4;
      }
      else
      {
        v70 = 14;
        if ( (_DWORD)v17 == 8 )
          v70 = 3;
      }
      UsbhRemoveQueuedSuspend(a1, a2, 0x140000000uLL, v13);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597206580, v70, *(unsigned __int16 *)(a2 + 4));
      if ( *(_DWORD *)(a2 + 400) == 5 )
      {
        v75 = *(unsigned __int16 *)(a2 + 4);
        LODWORD(v77) = 0x100000;
        Log(a1, 512, 1597206610, v17, v75);
        UsbhSetResumePending(a1, a2);
        UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v77, 0, 0LL);
      }
      v71 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v70;
      *(_DWORD *)(v71 + a2 + 1384) = v70;
      break;
    case 11:
      goto LABEL_14;
    case 15:
    case 16:
    case 17:
    case 20:
      UsbhiSignalResumeEvent(a1, a2);
      v72 = 1597206582;
      goto LABEL_77;
    case 18:
      v72 = 1597206584;
LABEL_77:
      Log(a1, 512, v72, v17, *(unsigned __int16 *)(a2 + 4));
      v73 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v17;
      *(_DWORD *)(v73 + a2 + 1384) = v17;
      break;
    default:
      Log(a1, 512, 1597206616, v17, *(unsigned __int16 *)(a2 + 4));
      v74 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v74 + a2 + 1384) = 19;
      break;
  }
  v69 = 0;
LABEL_67:
  UsbhUnlockPcqWithTag(a1, a2, v10, v69);
  return UsbhDecHubBusy(a1, v40, v6);
}
