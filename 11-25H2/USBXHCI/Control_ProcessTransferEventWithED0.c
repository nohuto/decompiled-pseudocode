/*
 * XREFs of Control_ProcessTransferEventWithED0 @ 0x140013E5C
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x140012510 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x1400141D0 (WPP_RECORDER_SF_DDqLDDi.c)
 *     Endpoint_StoppedCompletionCode @ 0x140015010 (Endpoint_StoppedCompletionCode.c)
 *     Control_ProcessTransferEventPointer @ 0x140015028 (Control_ProcessTransferEventPointer.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     Endpoint_HaltedCompletionCode @ 0x140016470 (Endpoint_HaltedCompletionCode.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x14003C710 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 */

char __fastcall Control_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v5; // r14
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  size_t v10; // r8
  unsigned int v11; // edx
  __int64 *v12; // r10
  KIRQL v13; // dl
  const char *v14; // rax
  int v15; // edx
  __int64 v16; // rax
  char v17; // dl
  KIRQL v18; // dl
  size_t Size; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v20 = 0;
  LODWORD(Size) = 0;
  v5 = a2 + 56;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)v5 + 80LL),
      *(unsigned __int8 *)(a1 + 15),
      *(unsigned __int8 *)(a1 + 11),
      18);
  if ( (unsigned __int8)Endpoint_StoppedCompletionCode(*(unsigned __int8 *)(a1 + 11)) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 32LL) & 0x40) != 0 )
      return 1;
    v5 = a2 + 56;
  }
  v6 = (KSPIN_LOCK *)(a2 + 96);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v8 = *(_QWORD *)(a2 + 360);
  *(_BYTE *)(a2 + 104) = v7;
  if ( !v8 )
  {
    v13 = v7;
    goto LABEL_15;
  }
  if ( (unsigned __int8)Control_ProcessTransferEventPointer(a2, v8, a1, (unsigned int)&v20, (__int64)&Size) )
  {
    v10 = (unsigned int)Size;
    if ( (unsigned int)Size > *(_DWORD *)(v8 + 104) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
        LOBYTE(v15) = 3;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)v5 + 80LL),
          v15,
          14,
          19,
          (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)v5 + 144LL),
          Size,
          *(_DWORD *)(v8 + 104));
      }
      v10 = 0LL;
      v6 = (KSPIN_LOCK *)(a2 + 96);
      LODWORD(Size) = 0;
    }
    if ( (_DWORD)v10 )
    {
      v16 = *(_QWORD *)(v8 + 48);
      *(_DWORD *)(v8 + 108) = v10;
      if ( (*(_DWORD *)(v16 + 32) & 1) != 0 && *(_DWORD *)(v8 + 64) == 2 )
        memmove(*(void **)(v8 + 80), *(const void **)(*(_QWORD *)(v8 + 88) + 16LL), v10);
    }
    if ( (unsigned __int8)Endpoint_HaltedCompletionCode(*(_QWORD *)(a2 + 56), *(unsigned __int8 *)(a1 + 11)) )
    {
      *(_DWORD *)(v8 + 124) = v11;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
      v12 = *(__int64 **)(a2 + 56);
      _m_prefetchw(v12 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v12 + 8, 0x20u) & 0x20) == 0 )
      {
LABEL_12:
        ESM_AddEsmEvent((__int64)v12);
        return 1;
      }
      v14 = "Received duplicate Transfer Event TRB with Halted Completion Code";
      goto LABEL_19;
    }
    if ( (unsigned __int8)Endpoint_StoppedCompletionCode(v11) )
    {
      if ( *(_DWORD *)(v8 + 108) == *(_DWORD *)(v8 + 104) )
      {
        *(_DWORD *)(v8 + 124) = 1;
      }
      else if ( v17 == 28 )
      {
        *(_DWORD *)(v8 + 124) = 28;
      }
      ++*(_DWORD *)(v8 + 132);
      v18 = *(_BYTE *)(a2 + 104);
      *(_DWORD *)(a2 + 372) = v20 - *(_DWORD *)(v8 + 132) + 1;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v18);
      v12 = *(__int64 **)(a2 + 56);
      _m_prefetchw(v12 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v12 + 8, 0x10u) & 0x10) == 0 )
      {
        _m_prefetchw(v12 + 4);
        if ( (_InterlockedXor((volatile signed __int32 *)v12 + 8, 8u) & 8) == 0 )
          return 1;
        goto LABEL_12;
      }
      v14 = "Received duplicate Stopped Transfer Events";
LABEL_19:
      Controller_HwVerifierBreakIfEnabled(*v12, v12[1], v12[3], 0x2000000LL, v14, 0LL, 0LL);
      return 1;
    }
    v13 = *(_BYTE *)(a2 + 104);
LABEL_15:
    KeReleaseSpinLock(v6, v13);
    return v2;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
  Control_ValidateED0TrbPointerOnMismatch(a2, a1);
  return v2;
}
