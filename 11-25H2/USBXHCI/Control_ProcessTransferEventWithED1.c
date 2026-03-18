/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x140012540
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x140012510 (Control_EP_TransferEventHandler.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     Control_Transfer_CompleteCancelable @ 0x140012B50 (Control_Transfer_CompleteCancelable.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDqq @ 0x140013D00 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x1400141D0 (WPP_RECORDER_SF_DDqLDDi.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDiqq @ 0x14004C924 (WPP_RECORDER_SF_DDiqq.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 */

__int64 __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int8 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned __int8 *v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  KSPIN_LOCK *v14; // rcx
  int v15; // edx
  __int64 v16; // rax
  __int64 *v17; // r10
  void *v18; // rcx
  int v19; // eax
  int v21; // edx
  const char *v22; // rax
  bool v23; // zf
  int v24; // edx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]

  v2 = *a1;
  v3 = *a1 & 4;
  v4 = *a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = a2;
  v7 = 1;
  if ( a2 )
  {
    if ( v4 != *(_QWORD *)(a2 + 360) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), HIBYTE(*((_DWORD *)a1 + 3)), v2, 20);
      Controller_ReportFatalError(*(_QWORD *)(v5 + 40), 2, 4126, 0, *(_QWORD *)(v5 + 48), *(_QWORD *)(v5 + 56), v5);
      return 0;
    }
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 56);
    if ( v4 != *(_QWORD *)(v5 + 360) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL), HIBYTE(*((_DWORD *)a1 + 3)), v2, 21);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      HIWORD(*((_DWORD *)a1 + 3)) & 0x1F,
      a1[1] & 0xFFFFFF,
      22);
  v8 = *(_QWORD *)(v5 + 56);
  if ( (HIWORD(*((_DWORD *)a1 + 3)) & 0x1F) != *(_DWORD *)(v8 + 144)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v8 + 80),
      2u,
      0xEu,
      0x17u,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      HIBYTE(*((_DWORD *)a1 + 3)),
      HIWORD(*((_DWORD *)a1 + 3)) & 0x1F);
  }
  if ( *((_BYTE *)a1 + 15) != *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v30) = *((_WORD *)a1 + 7) & 0x1F;
    LODWORD(v29) = *((unsigned __int8 *)a1 + 15);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      2u,
      0xEu,
      0x18u,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v29,
      v30);
  }
  v9 = a1[1] & 0xFFFFFF;
  if ( v9 > *(_DWORD *)(v4 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
      LOBYTE(v24) = 3;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
        v24,
        14,
        25,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
        *((_BYTE *)a1 + 8),
        *(_DWORD *)(v4 + 104));
    }
    v9 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      v21,
      (unsigned int)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      26,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
      *(_QWORD *)(v4 + 24),
      v4);
  }
  if ( !v3 )
  {
    v16 = *(_QWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 108) = v9;
    if ( (*(_DWORD *)(v16 + 32) & 1) != 0 && *(_DWORD *)(v4 + 64) == 2 )
      memmove(*(void **)(v4 + 80), *(const void **)(*(_QWORD *)(v4 + 88) + 16LL), v9);
  }
  v10 = (unsigned __int8 *)a1 + 11;
  v11 = *((unsigned __int8 *)a1 + 11);
  v12 = **(_QWORD **)(v5 + 56);
  if ( _bittest64((const signed __int64 *)(v12 + 736), 0x3Eu) && (_BYTE)v11 == 0xC7
    || (*(_QWORD *)(v12 + 744) & 0x20) != 0 && (_BYTE)v11 == 0xC6 )
  {
LABEL_25:
    *(_DWORD *)(v4 + 124) = *v10;
    v17 = *(__int64 **)(v5 + 56);
    _m_prefetchw(v17 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v17 + 8, 0x20u) & 0x20) != 0 )
    {
      v22 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_35:
      Controller_HwVerifierBreakIfEnabled(*v17, v17[1], v17[3], 0x2000000LL, v22, 0LL, 0LL);
      return v7;
    }
    goto LABEL_26;
  }
  if ( (unsigned __int8)v11 <= 0x24u )
  {
    v13 = 0x150000045CLL;
    if ( _bittest64(&v13, v11) )
    {
      v10 = (unsigned __int8 *)a1 + 11;
      goto LABEL_25;
    }
  }
  v14 = (KSPIN_LOCK *)(v5 + 96);
  if ( (unsigned __int8)(*((_BYTE *)a1 + 11) - 26) <= 2u )
  {
    *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc(v14);
    v15 = *(_DWORD *)(v4 + 132) + 1;
    *(_DWORD *)(v4 + 132) = v15;
    if ( v3 )
    {
      if ( *(_DWORD *)(v4 + 108) == *(_DWORD *)(v4 + 104) )
      {
        *(_DWORD *)(v4 + 124) = 1;
      }
      else if ( *((_BYTE *)a1 + 11) == 28 )
      {
        *(_DWORD *)(v4 + 124) = 28;
      }
      v28 = *(_DWORD *)(v4 + 128) - v15;
    }
    else
    {
      v28 = 0;
    }
    *(_DWORD *)(v5 + 372) = v28;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    v17 = *(__int64 **)(v5 + 56);
    _m_prefetchw(v17 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v17 + 8, 0x10u) & 0x10) != 0 )
    {
      v22 = "Received duplicate Stopped Transfer Events";
      goto LABEL_35;
    }
    _m_prefetchw(v17 + 4);
    if ( (_InterlockedXor((volatile signed __int32 *)v17 + 8, 8u) & 8) == 0 )
      return v7;
LABEL_26:
    v18 = v17 + 37;
LABEL_27:
    ESM_AddEvent(v18);
    return v7;
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc(v14);
  ++*(_DWORD *)(v4 + 132);
  if ( v3 )
  {
    v23 = *(_DWORD *)(v4 + 112) == 3;
    *(_DWORD *)(v4 + 124) = *((unsigned __int8 *)a1 + 11);
    if ( !v23 && *(_DWORD *)(v4 + 116) != 3 )
      Control_Transfer_CompleteCancelable(v5);
  }
  v19 = *(_DWORD *)(v5 + 372);
  if ( !v19 || (v25 = v19 - 1, (*(_DWORD *)(v5 + 372) = v25) != 0) || (*(_DWORD *)(v5 + 368) & 4) == 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    return v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  v26 = *(_QWORD *)(v5 + 56);
  if ( !*(_BYTE *)(v26 + 37)
    || (v27 = *(_QWORD *)(v26 + 136),
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 20)) == *(_DWORD *)(v27 + 8)) )
  {
    v18 = (void *)(v26 + 296);
    goto LABEL_27;
  }
  return v7;
}
