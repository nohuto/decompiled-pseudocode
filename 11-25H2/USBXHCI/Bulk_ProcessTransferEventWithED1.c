/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x140019A00
 * Callers:
 *     Bulk_EP_TransferEventHandler @ 0x1400199D0 (Bulk_EP_TransferEventHandler.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x14001588C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_FindStage @ 0x140016194 (Bulk_FindStage.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1400164C0 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDDqdD @ 0x140017890 (WPP_RECORDER_SF_DDDqdD.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140018CF0 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_Release @ 0x140018DCC (Bulk_Stage_Release.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140018F80 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x140019470 (WPP_RECORDER_SF_DDDqqq.c)
 *     Bulk_TransferData_Free @ 0x140019840 (Bulk_TransferData_Free.c)
 *     TR_GetNtStatusFromUsbdStatus @ 0x140019948 (TR_GetNtStatusFromUsbdStatus.c)
 *     Bulk_MapTransfers @ 0x14001AB60 (Bulk_MapTransfers.c)
 *     WPP_RECORDER_SF_DDDqLDDi @ 0x140023590 (WPP_RECORDER_SF_DDDqLDDi.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140025C8C (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x14002E42C (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x140030330 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDi @ 0x140037714 (WPP_RECORDER_SF_DDDi.c)
 *     TR_SendCompleteStageRequest @ 0x14003C940 (TR_SendCompleteStageRequest.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bp
  unsigned __int64 v5; // r15
  __int64 v6; // r14
  __int64 v8; // rsi
  __int64 *i; // r10
  char v10; // cl
  unsigned __int8 *v11; // r11
  int v12; // eax
  __int64 v13; // r8
  unsigned __int8 *NextStage; // r8
  __int64 v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // r10
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rbx
  _QWORD *v24; // r10
  int v25; // ebp
  KIRQL v26; // al
  _QWORD *v27; // r10
  __int64 v28; // rbx
  __int64 v29; // rax
  KIRQL v30; // dl
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edx
  int v35; // ecx
  int v36; // edx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  _QWORD *v39; // rax
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdx
  _DWORD *v44; // rcx
  int v45; // eax
  int v46; // eax
  _QWORD *v47; // rdi
  __int64 v48; // rsi
  _QWORD *v49; // rdx
  __int64 v50; // rdx
  KIRQL v51; // di
  int v52; // eax
  __int64 v54; // r8
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  _DWORD *v58; // rcx
  int v59; // eax
  int v60; // ecx
  int v61; // r9d
  int v62; // r8d
  __int64 *v63; // rdi
  __int64 v64; // rdx
  __int64 *v65; // rdi
  unsigned __int64 v66; // rsi
  __int64 v67; // rax
  unsigned __int8 *v68; // rbp
  unsigned __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  KIRQL v72; // bp
  __int64 *v73; // rcx
  int v74; // ecx
  int v75; // ecx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // [rsp+20h] [rbp-98h]
  __int64 v80; // [rsp+28h] [rbp-90h]
  __int64 v81; // [rsp+30h] [rbp-88h]
  __int64 v82; // [rsp+38h] [rbp-80h]
  __int64 v83; // [rsp+40h] [rbp-78h]
  int v84; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v85; // [rsp+D0h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v85 = 0LL;
  v6 = a2;
  if ( !a2 )
  {
    v15 = *(_QWORD *)v5;
    v6 = *(_QWORD *)(*(_QWORD *)v5 + 56LL);
LABEL_10:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v83) = HIDWORD(a1);
      WPP_RECORDER_SF_DDDqLDDi(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        *(_DWORD *)(a1 + 8) & 0xFFFFFF,
        HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F,
        (*(_DWORD *)(a1 + 12) >> 2) & 1);
    }
    v16 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    if ( v16 > *(_DWORD *)(v5 + 40) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v83) = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
          3u,
          *(_QWORD *)(v6 + 56),
          0x38u,
          (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
          *(_DWORD *)(v6 + 64),
          v83,
          *(_DWORD *)(v5 + 40));
      }
      v16 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v83 = *(_QWORD *)(v15 + 24);
      WPP_RECORDER_SF_DDDqqq(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), *(_QWORD *)(v6 + 56), a3, a4, v79);
    }
    v17 = *(_QWORD *)(v6 + 56);
    v18 = *(unsigned __int8 *)(a1 + 11);
    if ( _bittest64((const signed __int64 *)(*(_QWORD *)v17 + 736LL), 0x3Eu) && (_BYTE)v18 == 0xC7
      || (*(_QWORD *)(*(_QWORD *)v17 + 744LL) & 0x20) != 0 && (_BYTE)v18 == 0xC6
      || (unsigned __int8)v18 <= 0x24u && (v19 = 0x150000045CLL, _bittest64(&v19, v18)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v83) = *(unsigned __int8 *)(a1 + 11);
        LODWORD(v82) = *(_DWORD *)(v6 + 64);
        LODWORD(v81) = *(_DWORD *)(v17 + 144);
        LODWORD(v80) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(v17 + 80),
          2u,
          0xEu,
          0x3Au,
          (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
          v80,
          v81,
          v82,
          v83);
      }
      v25 = *(unsigned __int8 *)(a1 + 11);
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
      *(_DWORD *)(v6 + 332) |= 4u;
      *(_BYTE *)(v6 + 104) = v26;
      *(_DWORD *)(v6 + 360) = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v26);
      v27 = *(_QWORD **)(v6 + 56);
      _m_prefetchw(v27 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v27 + 8, 0x20u) & 0x20) != 0 )
        Controller_HwVerifierBreakIfEnabled(
          *v27,
          v27[1],
          v27[3],
          0x2000000LL,
          "Received duplicate Transfer Event TRB with Halted Completion Code",
          0LL,
          0LL);
      else
        ESM_AddEvent(v27 + 37, 154);
      v28 = *(_QWORD *)v5;
      *(_DWORD *)(v28 + 108) += v16;
      v29 = *(_QWORD *)(v28 + 48);
      *(_DWORD *)(v28 + 68) = v25;
      if ( (*(_DWORD *)(v29 + 32) & 1) != 0 && *(_DWORD *)(v28 + 76) == 2 )
        memmove(*(void **)(v5 + 64), *(const void **)(*(_QWORD *)(v5 + 72) + 16LL), v16);
      Bulk_Stage_FreeScatterGatherList(v6, v5);
      *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
      Bulk_Stage_Release(v6, (unsigned __int8 *)v5);
      ++*(_DWORD *)(v28 + 116);
      Bulk_Transfer_CompleteCancelable(v6, (__int64 *)v28, -1, 0);
      v30 = *(_BYTE *)(v6 + 104);
      --*(_DWORD *)(v6 + 356);
      --*(_DWORD *)(v6 + 360);
      v31 = *(_DWORD *)(v6 + 332);
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v30);
      if ( (v31 & 2) != 0 )
      {
        v32 = *(_QWORD *)(v6 + 56);
        if ( !*(_BYTE *)(v32 + 37)
          || (v33 = *(_QWORD *)(v32 + 136),
              _InterlockedIncrement((volatile signed __int32 *)(v33 + 20)) == *(_DWORD *)(v33 + 8)) )
        {
          ESM_AddEvent((KSPIN_LOCK *)(v32 + 296), 150);
        }
      }
      v4 = 1;
      goto LABEL_72;
    }
    v20 = *(unsigned __int8 *)(a1 + 11);
    if ( (unsigned __int8)(v20 - 26) <= 2u )
    {
      v21 = *(_QWORD *)(v5 + 96);
      v22 = 16LL * *(unsigned int *)(v5 + 104);
      v84 = 0;
      v23 = *(_QWORD *)(v21 + 24) + v22;
      *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
      if ( Bulk_FindStage(v6, v23, &v85, &v84) && v85 == v5 )
        Bulk_ProcessTransferEventWithStoppedCompletion(v6, v5, *(unsigned __int8 *)(a1 + 11), v16, v84);
      *(_DWORD *)(v6 + 332) |= 8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
      v24 = *(_QWORD **)(v6 + 56);
      _m_prefetchw(v24 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v24 + 8, 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *v24,
          v24[1],
          v24[3],
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
        v4 = 1;
        goto LABEL_72;
      }
      _m_prefetchw(v24 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v24 + 8, 8u) & 8) != 0 )
      {
        ESM_AddEvent(v24 + 37, 118);
        v4 = 1;
        goto LABEL_72;
      }
LABEL_27:
      v4 = 1;
      goto LABEL_72;
    }
    *(_DWORD *)(v15 + 108) += v16;
    v67 = *(_QWORD *)(v15 + 48);
    *(_DWORD *)(v15 + 68) = v20;
    if ( (*(_DWORD *)(v67 + 32) & 1) != 0 && *(_DWORD *)(v15 + 76) == 2 )
      memmove(*(void **)(v5 + 64), *(const void **)(*(_QWORD *)(v5 + 72) + 16LL), v16);
    if ( *(_BYTE *)(v6 + 288) )
    {
      if ( *(_DWORD *)(v5 + 160) )
      {
        TR_SendCompleteStageRequest(v6);
        SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 104LL), v5 + 128);
      }
    }
    else if ( *(_QWORD *)(v5 + 56) )
    {
      v70 = *(_QWORD *)(*(_QWORD *)v5 + 48LL);
      v71 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 96LL) + 24LL);
      v72 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)(v71 + 8) + 96LL))(
        v71,
        *(_QWORD *)(v5 + 56),
        (*(_BYTE *)(v70 + 32) & 1) == 0);
      KeLowerIrql(v72);
      *(_QWORD *)(v5 + 56) = 0LL;
    }
    *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
    v68 = *(unsigned __int8 **)v5;
    if ( *(_BYTE *)(v5 + 44) )
    {
      IoFreeMdl(*(PMDL *)(v5 + 48));
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_BYTE *)(v5 + 44) = 0;
    }
    v63 = *(__int64 **)(v5 + 8);
    v69 = v5 + 8;
    if ( v63 != (__int64 *)(v5 + 8) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(v6 + 40) + 736LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset((void *)v63[2], 0, *((unsigned int *)v63 + 11));
          v63 = (__int64 *)*v63;
        }
        while ( (__int64 *)v69 != v63 );
      }
      v64 = v6 + 208;
      if ( *(_QWORD *)v69 != v69 )
      {
        **(_QWORD **)(v5 + 16) = *(_QWORD *)v64;
        *(_QWORD *)(*(_QWORD *)v64 + 8LL) = *(_QWORD *)(v5 + 16);
        *(_QWORD *)v64 = *(_QWORD *)v69;
        *(_QWORD *)(*(_QWORD *)v69 + 8LL) = v64;
        *(_QWORD *)(v5 + 16) = v5 + 8;
        *(_QWORD *)v69 = v69;
      }
    }
    v65 = *(__int64 **)(v5 + 24);
    v66 = v5 + 24;
    if ( v65 != (__int64 *)(v5 + 24) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(v6 + 40) + 736LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset((void *)v65[2], 0, *((unsigned int *)v65 + 11));
          v65 = (__int64 *)*v65;
        }
        while ( (__int64 *)v66 != v65 );
      }
      if ( *(_QWORD *)v66 != v66 )
      {
        **(_QWORD **)(v6 + 216) = *(_QWORD *)v66;
        *(_QWORD *)(*(_QWORD *)v66 + 8LL) = *(_QWORD *)(v6 + 216);
        **(_QWORD **)(v5 + 32) = v6 + 208;
        *(_QWORD *)(v6 + 216) = *(_QWORD *)(v5 + 32);
        *(_QWORD *)(v5 + 32) = v5 + 24;
        *(_QWORD *)v66 = v66;
      }
    }
    v35 = v68[128];
    v36 = v68[132];
    --v68[130];
    v37 = v68[129];
    if ( (unsigned __int8 *)v5 == &v68[v36 * v35 + 144] )
      v68[132] = (v36 + 1) % v37;
    else
      v68[131] = (int)(v37 + v68[131] - 1) % (int)v37;
    ++*(_DWORD *)(v15 + 116);
    if ( *(_DWORD *)(v15 + 68) != 13 )
    {
      if ( *(_DWORD *)(v15 + 112) != *(_DWORD *)(v15 + 104) )
        goto LABEL_70;
      if ( *(_DWORD *)(v15 + 64) != 1 )
      {
        if ( *(_DWORD *)(v15 + 64) != 3 )
          goto LABEL_56;
LABEL_70:
        --*(_DWORD *)(v6 + 356);
        v52 = *(_DWORD *)(v6 + 360);
        if ( !v52 || (v75 = v52 - 1, v76 = *(_DWORD *)(v6 + 332), *(_DWORD *)(v6 + 360) = v75, (v76 & 2) == 0) || v75 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
          v4 = 1;
          goto LABEL_72;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
        v77 = *(_QWORD *)(v6 + 56);
        if ( !*(_BYTE *)(v77 + 37)
          || (v78 = *(_QWORD *)(v77 + 136),
              _InterlockedIncrement((volatile signed __int32 *)(v78 + 20)) == *(_DWORD *)(v78 + 8)) )
        {
          ESM_AddEvent((KSPIN_LOCK *)(v77 + 296), 150);
        }
        goto LABEL_27;
      }
      v38 = *(_QWORD *)v15;
      if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
        goto LABEL_75;
      v39 = *(_QWORD **)(v15 + 8);
      if ( *v39 != v15 )
        goto LABEL_75;
      *v39 = v38;
      *(_QWORD *)(v38 + 8) = v39;
      v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2048))(
              WdfDriverGlobals,
              *(_QWORD *)(v15 + 24));
      if ( v40 >= 0 )
      {
        *(_DWORD *)(v15 + 64) = 0;
LABEL_56:
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
        v43 = *(_QWORD *)(v15 + 48);
        if ( *(_WORD *)(v43 + 2) == 56 )
        {
LABEL_57:
          v44 = (_DWORD *)(v43 + 36);
        }
        else
        {
          switch ( *(_WORD *)(v43 + 2) )
          {
            case '9':
            case ':':
              v44 = (_DWORD *)(v43 + 52);
              break;
            default:
              goto LABEL_57;
          }
        }
        *v44 = *(_DWORD *)(v15 + 108);
        v45 = *(_DWORD *)(v15 + 68);
        if ( v45 == 28 )
        {
LABEL_59:
          *(_DWORD *)(v43 + 4) = 0;
          v46 = 0;
        }
        else
        {
          switch ( v45 )
          {
            case 0:
              *(_DWORD *)(v43 + 4) = -1;
              goto LABEL_100;
            case 1:
            case 13:
            case 26:
              goto LABEL_59;
            case 2:
              *(_DWORD *)(v43 + 4) = -1073741805;
              goto LABEL_100;
            case 3:
            case 31:
              *(_DWORD *)(v43 + 4) = -1073741806;
              v46 = -1073741823;
              break;
            case 6:
              *(_DWORD *)(v43 + 4) = -1073741820;
              v46 = -1073741823;
              break;
            case 10:
              *(_DWORD *)(v43 + 4) = -1073741803;
              goto LABEL_100;
            case 20:
              *(_DWORD *)(v43 + 4) = -1073741804;
              goto LABEL_100;
            case 23:
              *(_DWORD *)(v43 + 4) = -1073545216;
              v46 = -1073741823;
              break;
            case 27:
              *(_DWORD *)(v43 + 4) = -1073610752;
              goto LABEL_100;
            case 34:
              *(_DWORD *)(v43 + 4) = -1073741802;
              goto LABEL_100;
            case 199:
              v74 = -1073741807;
              if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v6 + 40) + 736LL), 0x3Eu) )
                v74 = -1073709056;
              *(_DWORD *)(v43 + 4) = v74;
              goto LABEL_100;
            default:
              *(_DWORD *)(v43 + 4) = -1073741807;
LABEL_100:
              v46 = -1073741823;
              break;
          }
        }
        *(_DWORD *)(v15 + 72) = v46;
        ++*(_DWORD *)(v6 + 248);
        *(_QWORD *)(v6 + 256) += *(unsigned int *)(v15 + 108);
        if ( *(int *)(v15 + 72) < 0 )
          ++*(_DWORD *)(v6 + 252);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDqdD(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), *(_QWORD *)(v6 + 56), v41, v42, v79);
        v47 = *(_QWORD **)(v15 + 96);
        if ( !v47 )
          goto LABEL_67;
        v48 = *(_QWORD *)(v15 + 56);
        *(_BYTE *)(v48 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v48 + 96));
        v49 = *(_QWORD **)(v48 + 232);
        if ( *v49 == v48 + 224 )
        {
          *v47 = v48 + 224;
          v47[1] = v49;
          *v49 = v47;
          *(_QWORD *)(v48 + 232) = v47;
          KeReleaseSpinLock((PKSPIN_LOCK)(v48 + 96), *(_BYTE *)(v48 + 104));
          *(_QWORD *)(v15 + 96) = 0LL;
LABEL_67:
          v50 = *(_QWORD *)(v15 + 80);
          if ( v50 )
          {
            v54 = *(_QWORD *)(v15 + 48);
            if ( *(_WORD *)(v54 + 2) != 56 )
            {
              switch ( *(_WORD *)(v54 + 2) )
              {
                case '9':
                case ':':
                  goto LABEL_78;
                default:
                  break;
              }
            }
            if ( v50 != *(_QWORD *)(v54 + 48) )
            {
LABEL_78:
              if ( v50 != *(_QWORD *)(*(_QWORD *)(v15 + 56) + 120LL) )
              {
                IoFreeMdl(*(PMDL *)(v15 + 80));
                *(_QWORD *)(v15 + 80) = 0LL;
              }
            }
          }
          *(_BYTE *)(v15 + 16) = 0;
LABEL_69:
          v51 = KfRaiseIrql(2u);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
            WdfDriverGlobals,
            *(_QWORD *)(v15 + 24),
            *(unsigned int *)(v15 + 72));
          KeLowerIrql(v51);
          *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
          goto LABEL_70;
        }
LABEL_75:
        __fastfail(3u);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_161:
        *(_DWORD *)(v15 + 64) = 2;
        v73 = *(__int64 **)(v6 + 400);
        if ( *v73 != v6 + 392 )
          goto LABEL_75;
        *(_QWORD *)v15 = v6 + 392;
        *(_QWORD *)(v15 + 8) = v73;
        *v73 = v15;
        *(_QWORD *)(v6 + 400) = v15;
        goto LABEL_70;
      }
LABEL_160:
      LOBYTE(v40) = 4;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), v40, *(_QWORD *)(v6 + 56), 42);
      goto LABEL_161;
    }
    if ( *(_DWORD *)(v15 + 64) == 1 )
    {
      v55 = *(_QWORD *)v15;
      if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
        goto LABEL_75;
      v56 = *(_QWORD **)(v15 + 8);
      if ( *v56 != v15 )
        goto LABEL_75;
      *v56 = v55;
      *(_QWORD *)(v55 + 8) = v56;
      v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2048))(
              WdfDriverGlobals,
              *(_QWORD *)(v15 + 24));
      if ( v40 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_161;
        goto LABEL_160;
      }
      *(_DWORD *)(v15 + 64) = 0;
    }
    else if ( *(_DWORD *)(v15 + 64) == 3 )
    {
      goto LABEL_70;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
    v57 = *(_QWORD *)(v15 + 48);
    if ( *(_WORD *)(v57 + 2) == 56 )
    {
LABEL_86:
      v58 = (_DWORD *)(v57 + 36);
    }
    else
    {
      switch ( *(_WORD *)(v57 + 2) )
      {
        case '9':
        case ':':
          v58 = (_DWORD *)(v57 + 52);
          break;
        default:
          goto LABEL_86;
      }
    }
    *v58 = *(_DWORD *)(v15 + 108);
    v59 = *(_DWORD *)(v15 + 68);
    if ( v59 == 28 )
    {
LABEL_88:
      v60 = 0;
    }
    else
    {
      switch ( v59 )
      {
        case 0:
          v60 = -1;
          break;
        case 1:
        case 13:
        case 26:
          goto LABEL_88;
        case 2:
          v60 = -1073741805;
          break;
        case 3:
        case 31:
          v60 = -1073741806;
          break;
        case 6:
          v60 = -1073741820;
          break;
        case 10:
          v60 = -1073741803;
          break;
        case 20:
          v60 = -1073741804;
          break;
        case 23:
          v60 = -1073545216;
          break;
        case 27:
          v60 = -1073610752;
          break;
        case 34:
          v60 = -1073741802;
          break;
        case 199:
          v60 = -1073741807;
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v6 + 40) + 736LL), 0x3Eu) )
            v60 = -1073709056;
          break;
        default:
          v60 = -1073741807;
          break;
      }
    }
    *(_DWORD *)(v57 + 4) = v60;
    *(_DWORD *)(v15 + 72) = TR_GetNtStatusFromUsbdStatus(v60);
    ++*(_DWORD *)(v6 + 248);
    *(_QWORD *)(v6 + 256) += *(unsigned int *)(v15 + 108);
    v62 = *(_DWORD *)(v15 + 72);
    if ( v62 < 0 )
    {
      ++*(_DWORD *)(v6 + 252);
      v62 = *(_DWORD *)(v15 + 72);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqdD(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), *(_QWORD *)(v6 + 56), v62, v61, v79);
    Bulk_TransferData_Free(v15);
    goto LABEL_69;
  }
  if ( v5 )
  {
    v8 = a2 + 376;
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    for ( i = *(__int64 **)(v6 + 376); (__int64 *)v8 != i; i = (__int64 *)*i )
    {
      v10 = *((_BYTE *)i + 130);
      v11 = (unsigned __int8 *)(i + 16);
      v12 = *((unsigned __int8 *)i + 132);
      *((_BYTE *)i + 133) = v12;
      *((_BYTE *)i + 134) = v10;
      if ( v10 )
      {
        v13 = v12 * (unsigned int)*v11;
        *((_BYTE *)i + 134) = v10 - 1;
        NextStage = &v11[v13 + 16];
        *((_BYTE *)i + 133) = (v12 + 1) % (unsigned int)*((unsigned __int8 *)i + 129);
      }
      else
      {
        NextStage = 0LL;
      }
      while ( NextStage )
      {
        if ( NextStage == (unsigned __int8 *)v5 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
          v15 = *(_QWORD *)v5;
          goto LABEL_10;
        }
        NextStage = StageQueue_ForwardScanGetNextStage(v11);
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      4u,
      0xEu,
      0x2Bu,
      (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids);
  }
  if ( !*(_DWORD *)(v6 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F;
      LOBYTE(v34) = 2;
      WPP_RECORDER_SF_DDDi(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        v34,
        HIBYTE(*(_DWORD *)(a1 + 12)),
        54,
        v79,
        HIBYTE(*(_DWORD *)(a1 + 12)),
        HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F,
        0,
        *(_QWORD *)a1);
    }
    Controller_ReportFatalError(*(_QWORD *)(v6 + 40), 2, 4126, 0, *(_QWORD *)(v6 + 48), *(_QWORD *)(v6 + 56), v6);
  }
LABEL_72:
  _InterlockedExchange((volatile __int32 *)(v6 + 348), 1);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 108), 3, 2) == 2 )
    Bulk_MapTransfers(v6);
  return v4;
}
