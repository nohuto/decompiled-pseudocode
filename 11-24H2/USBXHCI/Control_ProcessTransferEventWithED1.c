/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x140005EE0
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x140005EB0 (Control_EP_TransferEventHandler.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Control_Transfer_CompleteCancelable @ 0x1400064F0 (Control_Transfer_CompleteCancelable.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1400076A0 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x140007B70 (WPP_RECORDER_SF_DDqLDDi.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDiqq @ 0x14004C014 (WPP_RECORDER_SF_DDiqq.c)
 *     memmove @ 0x140058BC0 (memmove.c)
 */

__int64 __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int8 v7; // r13
  __int64 v8; // rcx
  char v9; // cl
  unsigned int v10; // edi
  unsigned __int8 *v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  KSPIN_LOCK *v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  __int64 *v18; // r10
  void *v19; // rcx
  int v20; // eax
  int v22; // edx
  const char *v23; // rax
  bool v24; // zf
  int v25; // edx
  int v26; // edx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]

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
    {
      HIDWORD(v35) = (*a1 & 0xFFFFFFFFFFFFFFF8uLL) >> 32;
      HIDWORD(v34) = HIDWORD(*a1);
      WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL), HIBYTE(*((_DWORD *)a1 + 3)), v2, 21);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v34) = HIDWORD(a1);
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      HIWORD(*((_DWORD *)a1 + 3)) & 0x1F,
      a1[1] & 0xFFFFFF,
      22);
  }
  v8 = *(_QWORD *)(v5 + 56);
  if ( (HIWORD(*((_DWORD *)a1 + 3)) & 0x1F) != *(_DWORD *)(v8 + 152)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = HIBYTE(*((_DWORD *)a1 + 3));
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v8 + 80),
      v25,
      14,
      23,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      HIBYTE(*((_DWORD *)a1 + 3)),
      HIWORD(*((_DWORD *)a1 + 3)) & 0x1F);
  }
  v9 = *((_BYTE *)a1 + 15);
  if ( v9 != *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = *((_WORD *)a1 + 7) & 0x1F;
    LOBYTE(v26) = 2;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      v26,
      14,
      24,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v9,
      *((_BYTE *)a1 + 14) & 0x1F);
  }
  v10 = a1[1] & 0xFFFFFF;
  if ( v10 > *(_DWORD *)(v4 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = *(_QWORD *)(v5 + 56);
      LODWORD(v35) = *(_DWORD *)(v4 + 104);
      LODWORD(v34) = a1[1] & 0xFFFFFF;
      LODWORD(v33) = *(_DWORD *)(v27 + 152);
      LODWORD(v32) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL);
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v27 + 80),
        3u,
        0xEu,
        0x19u,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        v32,
        v33,
        v34,
        v35);
    }
    v10 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL);
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      v22,
      (unsigned int)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      26,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
      *(_QWORD *)(v4 + 24),
      v4);
  }
  if ( !v3 )
  {
    v17 = *(_QWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 108) = v10;
    if ( (*(_DWORD *)(v17 + 32) & 1) != 0 && *(_DWORD *)(v4 + 64) == 2 )
      memmove(*(void **)(v4 + 80), *(const void **)(*(_QWORD *)(v4 + 88) + 16LL), v10);
  }
  v11 = (unsigned __int8 *)a1 + 11;
  v12 = *((unsigned __int8 *)a1 + 11);
  v13 = **(_QWORD **)(v5 + 56);
  if ( _bittest64((const signed __int64 *)(v13 + 736), 0x3Eu) && (_BYTE)v12 == 0xC7
    || (*(_QWORD *)(v13 + 744) & 0x20) != 0 && (_BYTE)v12 == 0xC6 )
  {
LABEL_25:
    *(_DWORD *)(v4 + 124) = *v11;
    v18 = *(__int64 **)(v5 + 56);
    _m_prefetchw(v18 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v18 + 8, 0x20u) & 0x20) != 0 )
    {
      v23 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_35:
      Controller_HwVerifierBreakIfEnabled(*v18, v18[1], v18[3], 0x2000000LL, v23, 0LL, 0LL);
      return v7;
    }
    goto LABEL_26;
  }
  if ( (unsigned __int8)v12 <= 0x24u )
  {
    v14 = 0x150000045CLL;
    if ( _bittest64(&v14, v12) )
    {
      v11 = (unsigned __int8 *)a1 + 11;
      goto LABEL_25;
    }
  }
  v15 = (KSPIN_LOCK *)(v5 + 96);
  if ( (unsigned __int8)(*((_BYTE *)a1 + 11) - 26) <= 2u )
  {
    *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc(v15);
    v16 = *(_DWORD *)(v4 + 132) + 1;
    *(_DWORD *)(v4 + 132) = v16;
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
      v31 = *(_DWORD *)(v4 + 128) - v16;
    }
    else
    {
      v31 = 0;
    }
    *(_DWORD *)(v5 + 372) = v31;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    v18 = *(__int64 **)(v5 + 56);
    _m_prefetchw(v18 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v18 + 8, 0x10u) & 0x10) != 0 )
    {
      v23 = "Received duplicate Stopped Transfer Events";
      goto LABEL_35;
    }
    _m_prefetchw(v18 + 4);
    if ( (_InterlockedXor((volatile signed __int32 *)v18 + 8, 8u) & 8) == 0 )
      return v7;
LABEL_26:
    v19 = v18 + 38;
LABEL_27:
    ESM_AddEvent(v19);
    return v7;
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc(v15);
  ++*(_DWORD *)(v4 + 132);
  if ( v3 )
  {
    v24 = *(_DWORD *)(v4 + 112) == 3;
    *(_DWORD *)(v4 + 124) = *((unsigned __int8 *)a1 + 11);
    if ( !v24 && *(_DWORD *)(v4 + 116) != 3 )
      Control_Transfer_CompleteCancelable(v5);
  }
  v20 = *(_DWORD *)(v5 + 372);
  if ( !v20 || (v28 = v20 - 1, (*(_DWORD *)(v5 + 372) = v28) != 0) || (*(_DWORD *)(v5 + 368) & 4) == 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    return v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  v29 = *(_QWORD *)(v5 + 56);
  if ( !*(_BYTE *)(v29 + 37)
    || (v30 = *(_QWORD *)(v29 + 144),
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 20)) == *(_DWORD *)(v30 + 8)) )
  {
    v19 = (void *)(v29 + 304);
    goto LABEL_27;
  }
  return v7;
}
