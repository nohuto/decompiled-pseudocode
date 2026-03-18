/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x140002E50
 * Callers:
 *     Bulk_EP_TransferEventHandler @ 0x140002E20 (Bulk_EP_TransferEventHandler.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     Bulk_FindStage @ 0x140003CBC (Bulk_FindStage.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x140003F00 (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400042A0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     ESM_RunStateMachine @ 0x140006BA0 (ESM_RunStateMachine.c)
 *     Bulk_MapTransfers @ 0x14000D910 (Bulk_MapTransfers.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x140012D68 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140015D30 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_Release @ 0x1400163D8 (Bulk_Stage_Release.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_DDDqLDDi @ 0x140022760 (WPP_RECORDER_SF_DDDqLDDi.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140022DA0 (Bulk_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x140023260 (WPP_RECORDER_SF_DDDqqq.c)
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x140030FF4 (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_s @ 0x1400339F8 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_DDDi @ 0x140035EC8 (WPP_RECORDER_SF_DDDi.c)
 *     Controller_ReportFatalErrorEx @ 0x140041EC0 (Controller_ReportFatalErrorEx.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140058BC0 (memmove.c)
 */

__int64 __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 v4; // bp
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v8; // r10
  char v9; // cl
  int v10; // eax
  KSPIN_LOCK *v11; // rbx
  __int64 *v12; // r9
  char v13; // cl
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r8
  char v17; // cl
  int v18; // edx
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rbx
  unsigned int v22; // r11d
  unsigned int v23; // edx
  unsigned int v24; // ebp
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  char *v28; // rbx
  int v29; // ecx
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  __int64 v34; // rbx
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  KIRQL v37; // dl
  bool v38; // zf
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // rax
  KSPIN_LOCK *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rbx
  int v49; // r8d
  int v50; // r9d
  _QWORD *v51; // rdx
  signed __int32 v52; // eax
  int v53; // ecx
  signed __int32 v54; // ett
  __int64 v55; // rsi
  __int64 v56; // rbp
  __int64 v57; // rbx
  char v58; // al
  __int64 v59; // rdx
  __int64 v60; // rax
  int v62; // [rsp+20h] [rbp-B8h]
  unsigned int v63; // [rsp+28h] [rbp-B0h]
  int v64; // [rsp+70h] [rbp-68h] BYREF
  __int64 v65; // [rsp+78h] [rbp-60h] BYREF
  __int128 v66; // [rsp+80h] [rbp-58h] BYREF
  KIRQL v67; // [rsp+E8h] [rbp+10h]
  KIRQL v68; // [rsp+F0h] [rbp+18h]
  KIRQL v69; // [rsp+F8h] [rbp+20h]

  v4 = 0;
  v5 = a2;
  v6 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v65 = 0LL;
  if ( !a2 )
  {
    v21 = *(_QWORD *)v6;
    v5 = *(_QWORD *)(*(_QWORD *)v6 + 56LL);
    goto LABEL_20;
  }
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(_QWORD *)(a2 + 56);
      v9 = *(_BYTE *)(*(_QWORD *)(a2 + 48) + 143LL);
      v10 = *(_DWORD *)(a2 + 64);
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v8 + 80),
        a2,
        14,
        44,
        (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
        v9,
        *(_DWORD *)(v8 + 152),
        v10);
    }
    goto LABEL_14;
  }
  v11 = (KSPIN_LOCK *)(a2 + 96);
  *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v12 = *(__int64 **)(v5 + 376);
  if ( (__int64 *)(v5 + 376) != v12 )
  {
    while ( 1 )
    {
      v13 = *((_BYTE *)v12 + 130);
      v14 = *((unsigned __int8 *)v12 + 132);
      *((_BYTE *)v12 + 133) = v14;
      *((_BYTE *)v12 + 134) = v13;
      if ( v13 )
      {
        v15 = v14 * (unsigned int)*((unsigned __int8 *)v12 + 128);
        *((_BYTE *)v12 + 134) = v13 - 1;
        *((_BYTE *)v12 + 133) = (v14 + 1) % (unsigned int)*((unsigned __int8 *)v12 + 129);
        v16 = (__int64)v12 + v15 + 144;
        if ( v16 )
          break;
      }
LABEL_11:
      v12 = (__int64 *)*v12;
      if ( (__int64 *)(v5 + 376) == v12 )
      {
        v11 = (KSPIN_LOCK *)(v5 + 96);
        goto LABEL_13;
      }
    }
    while ( v16 != v6 )
    {
      v17 = *((_BYTE *)v12 + 134);
      if ( v17 )
      {
        v18 = *((unsigned __int8 *)v12 + 133);
        v19 = v18 * (unsigned int)*((unsigned __int8 *)v12 + 128);
        *((_BYTE *)v12 + 134) = v17 - 1;
        *((_BYTE *)v12 + 133) = (v18 + 1) % (unsigned int)*((unsigned __int8 *)v12 + 129);
        v16 = (__int64)v12 + v19 + 144;
        if ( v16 )
          continue;
      }
      goto LABEL_11;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    v21 = *(_QWORD *)v6;
LABEL_20:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = *(_DWORD *)(a1 + 12);
      v63 = HIBYTE(v22);
      WPP_RECORDER_SF_DDDqLDDi(
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
        *(_DWORD *)(a1 + 8) & 0xFFFFFF,
        HIWORD(v22) & 0x1F,
        (v22 >> 2) & 1);
    }
    v23 = *(_DWORD *)(v6 + 40);
    v24 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    if ( v24 > v23 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 3;
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          v23,
          *(_QWORD *)(v5 + 56),
          57,
          (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
          *(_DWORD *)(v5 + 64),
          *(_BYTE *)(a1 + 8),
          *(_DWORD *)(v6 + 40));
      }
      v24 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqqq(
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
        *(_QWORD *)(v5 + 56),
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        a4,
        v62,
        *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
        *(_DWORD *)(v5 + 64),
        *(_QWORD *)(v21 + 24),
        v21,
        v6);
    v25 = *(unsigned __int8 *)(a1 + 11);
    v26 = **(_QWORD **)(v5 + 56);
    if ( _bittest64((const signed __int64 *)(v26 + 736), 0x3Eu) && (_BYTE)v25 == 0xC7
      || (*(_QWORD *)(v26 + 744) & 0x20) != 0 && (_BYTE)v25 == 0xC6
      || (unsigned __int8)v25 <= 0x24u && (v27 = 0x150000045CLL, _bittest64(&v27, v25)) )
    {
      v28 = (char *)(a1 + 11);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 2;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          v26,
          14,
          59,
          (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
          *(_DWORD *)(v5 + 64),
          *v28);
      }
      Bulk_ProcessTransferEventWithHaltedCompletion(v5, v6, (unsigned __int8)*v28, v24);
      goto LABEL_82;
    }
    v29 = *(unsigned __int8 *)(a1 + 11);
    if ( (unsigned __int8)(v29 - 26) <= 2u )
    {
      v46 = *(_QWORD *)(v6 + 96);
      v47 = 16LL * *(unsigned int *)(v6 + 104);
      v64 = 0;
      v48 = *(_QWORD *)(v46 + 24) + v47;
      *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
      if ( (unsigned __int8)Bulk_FindStage(v5, v48, &v65, &v64) && v65 == v6 )
      {
        v62 = v64;
        Bulk_ProcessTransferEventWithStoppedCompletion(v5, v6, *(unsigned __int8 *)(a1 + 11), v24);
      }
      *(_DWORD *)(v5 + 332) |= 8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
      v51 = *(_QWORD **)(v5 + 56);
      _m_prefetchw(v51 + 4);
      v52 = *((_DWORD *)v51 + 8);
      do
      {
        v53 = v52 | 0x10;
        v54 = v52;
        v52 = _InterlockedCompareExchange((volatile signed __int32 *)v51 + 8, v52 | 0x10, v52);
      }
      while ( v54 != v52 );
      if ( (v52 & 0x10) != 0 )
      {
        v55 = v51[3];
        v56 = v51[1];
        v57 = *v51;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_s(
            *(_QWORD *)(v57 + 72),
            (_DWORD)v51,
            v49,
            v50,
            v62,
            (__int64)"Received duplicate Stopped Transfer Events");
        if ( (*(_DWORD *)(v57 + 848) & 0x2000000) != 0 && !*(_BYTE *)(v57 + 797) )
        {
          DbgPrint("xHCI Hardware Verifier Break: %s\n", "Received duplicate Stopped Transfer Events");
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        v66 = 0LL;
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x10) != 0 )
          McTemplateK0pppxsb16b16_EtwWriteTransfer(
            v53,
            (_DWORD)v51,
            v49,
            *(_QWORD *)(v57 + 8),
            v56,
            v55,
            0,
            (__int64)"Received duplicate Stopped Transfer Events",
            (__int64)&v66,
            (__int64)&v66);
        goto LABEL_82;
      }
      _m_prefetchw(v51 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v51 + 8, 8u) & 8) != 0 )
      {
        v36 = v51 + 38;
        v37 = KeAcquireSpinLockRaiseToDpc(v51 + 143);
        v69 = v37;
        *((_DWORD *)v36 + *((unsigned __int8 *)v36 + 833) + 192) = 118;
        *((_BYTE *)v36 + 833) = (*((_BYTE *)v36 + 833) + 1) & 0xF;
        v38 = *((_BYTE *)v36 + 1016) == 0;
        *((_DWORD *)v36 + *((unsigned __int8 *)v36 + 949) + 221) = 118;
        v58 = *((_BYTE *)v36 + 949);
        if ( v38 )
        {
          *((_BYTE *)v36 + 949) = (v58 + 1) & 0xF;
          if ( !*((_BYTE *)v36 + 848) )
          {
            v59 = v36[120];
            *((_BYTE *)v36 + 848) = 1;
            v60 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1632))(
                    WdfDriverGlobals,
                    v59);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *, unsigned int))(WdfFunctions_01033 + 1640))(
              WdfDriverGlobals,
              v60,
              "State Machine Tag",
              1021LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c",
              v63);
            ESM_RunStateMachine(v36);
            v37 = v69;
          }
        }
        else
        {
          *((_BYTE *)v36 + 949) = (v58 + 1) & 0xF;
        }
        goto LABEL_80;
      }
    }
    else
    {
      *(_DWORD *)(v21 + 108) += v24;
      v30 = *(_QWORD *)(v21 + 48);
      *(_DWORD *)(v21 + 68) = v29;
      if ( (*(_DWORD *)(v30 + 32) & 1) != 0 && *(_DWORD *)(v21 + 76) == 2 )
        memmove(*(void **)(v6 + 64), *(const void **)(*(_QWORD *)(v6 + 72) + 16LL), v24);
      Bulk_Stage_FreeScatterGatherList(v5, v6);
      *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
      Bulk_Stage_Release(v5, v6);
      ++*(_DWORD *)(v21 + 116);
      if ( *(_DWORD *)(v21 + 68) == 13 || *(_DWORD *)(v21 + 112) == *(_DWORD *)(v21 + 104) )
        Bulk_Transfer_CompleteCancelable(v5, v21, 0xFFFFFFFFLL);
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 40) + 1004LL) == 1 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 356));
      else
        --*(_DWORD *)(v5 + 356);
      v31 = *(_DWORD *)(v5 + 360);
      if ( !v31 || (v32 = *(_DWORD *)(v5 + 332), v33 = v31 - 1, *(_DWORD *)(v5 + 360) = v33, (v32 & 2) == 0) || v33 )
      {
        v37 = *(_BYTE *)(v5 + 104);
        v45 = (KSPIN_LOCK *)(v5 + 96);
LABEL_81:
        KeReleaseSpinLock(v45, v37);
        goto LABEL_82;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
      v34 = *(_QWORD *)(v5 + 56);
      if ( !*(_BYTE *)(v34 + 37) )
      {
        v36 = (_QWORD *)(v34 + 304);
        v37 = KeAcquireSpinLockRaiseToDpc(v36 + 105);
        v68 = v37;
        *((_DWORD *)v36 + *((unsigned __int8 *)v36 + 833) + 192) = 150;
        *((_BYTE *)v36 + 833) = (*((_BYTE *)v36 + 833) + 1) & 0xF;
        v38 = *((_BYTE *)v36 + 1016) == 0;
        *((_DWORD *)v36 + *((unsigned __int8 *)v36 + 949) + 221) = 150;
        v42 = *((_BYTE *)v36 + 949);
        if ( v38 )
        {
          *((_BYTE *)v36 + 949) = (v42 + 1) & 0xF;
          if ( !*((_BYTE *)v36 + 848) )
          {
            v43 = v36[120];
            *((_BYTE *)v36 + 848) = 1;
            v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1632))(
                    WdfDriverGlobals,
                    v43);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *, unsigned int))(WdfFunctions_01033 + 1640))(
              WdfDriverGlobals,
              v44,
              "State Machine Tag",
              1021LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c",
              v63);
            ESM_RunStateMachine(v36);
            v37 = v68;
          }
        }
        else
        {
          *((_BYTE *)v36 + 949) = (v42 + 1) & 0xF;
        }
        goto LABEL_80;
      }
      v35 = *(_QWORD *)(v34 + 144);
      if ( _InterlockedIncrement((volatile signed __int32 *)(v35 + 20)) == *(_DWORD *)(v35 + 8) )
      {
        v36 = (_QWORD *)(v34 + 304);
        v37 = KeAcquireSpinLockRaiseToDpc(v36 + 105);
        v67 = v37;
        *((_DWORD *)v36 + *((unsigned __int8 *)v36 + 833) + 192) = 150;
        *((_BYTE *)v36 + 833) = (*((_BYTE *)v36 + 833) + 1) & 0xF;
        v38 = *((_BYTE *)v36 + 1016) == 0;
        *((_DWORD *)v36 + *((unsigned __int8 *)v36 + 949) + 221) = 150;
        v39 = *((_BYTE *)v36 + 949);
        if ( v38 )
        {
          *((_BYTE *)v36 + 949) = (v39 + 1) & 0xF;
          if ( !*((_BYTE *)v36 + 848) )
          {
            v40 = v36[120];
            *((_BYTE *)v36 + 848) = 1;
            v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1632))(
                    WdfDriverGlobals,
                    v40);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *, unsigned int))(WdfFunctions_01033 + 1640))(
              WdfDriverGlobals,
              v41,
              "State Machine Tag",
              1021LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c",
              v63);
            ESM_RunStateMachine(v36);
            v37 = v67;
          }
        }
        else
        {
          *((_BYTE *)v36 + 949) = (v39 + 1) & 0xF;
        }
LABEL_80:
        v45 = v36 + 105;
        goto LABEL_81;
      }
    }
LABEL_82:
    v4 = 1;
    goto LABEL_83;
  }
LABEL_13:
  KeReleaseSpinLock(v11, *(_BYTE *)(v5 + 104));
LABEL_14:
  if ( !*(_DWORD *)(v5 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F;
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_DDDi(
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
        v20,
        HIBYTE(*(_DWORD *)(a1 + 12)),
        55,
        v62,
        HIBYTE(*(_DWORD *)(a1 + 12)),
        HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F,
        0,
        *(_QWORD *)a1);
    }
    Controller_ReportFatalErrorEx(*(_QWORD *)(v5 + 40), 2, 4126, 0, 0LL, *(_QWORD *)(v5 + 48), *(_QWORD *)(v5 + 56), v5);
  }
LABEL_83:
  _InterlockedExchange((volatile __int32 *)(v5 + 348), 1);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 108), 3, 2) == 2 )
    Bulk_MapTransfers(v5);
  return v4;
}
