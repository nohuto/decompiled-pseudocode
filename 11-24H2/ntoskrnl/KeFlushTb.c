/*
 * XREFs of KeFlushTb @ 0x1403AFDF0
 * Callers:
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     MiCalibrateTbFlush @ 0x14068EDD8 (MiCalibrateTbFlush.c)
 * Callees:
 *     ExFlushTb @ 0x1402922A4 (ExFlushTb.c)
 *     VmpProcessContextLockExclusive @ 0x1403B0458 (VmpProcessContextLockExclusive.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1403B04A4 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403B0AC4 (HvlpFastFlushAddressSpaceTb.c)
 *     KxSetTimeStampBusy @ 0x1403B0DCC (KxSetTimeStampBusy.c)
 *     KxFlushNonGlobalTb @ 0x1403B0E50 (KxFlushNonGlobalTb.c)
 *     VmpInvalidateOutstandingFaults @ 0x1403B1140 (VmpInvalidateOutstandingFaults.c)
 *     VmpInsertInvalidateListRange @ 0x1403B12F8 (VmpInsertInvalidateListRange.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1403B1518 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1403C9984 (HvlpFastFlushAddressSpaceTbEx.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043B838 (HvlpSlowFlushAddressSpaceTb.c)
 *     VmpProcessContextUnlockExclusive @ 0x14047F1E4 (VmpProcessContextUnlockExclusive.c)
 *     KiIsFlushEntire @ 0x14048B740 (KiIsFlushEntire.c)
 *     VmpProcessInvalidateList @ 0x1404A9F18 (VmpProcessInvalidateList.c)
 *     VslFlushSecureAddressSpace @ 0x1404B2398 (VslFlushSecureAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     VmpLogTbFlushSlatFlushEntire @ 0x14064BD54 (VmpLogTbFlushSlatFlushEntire.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A0FD0 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     KiSetUserTbFlushPending @ 0x1406AB3E0 (KiSetUserTbFlushPending.c)
 */

__int64 __fastcall KeFlushTb(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int16 v8; // ax
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rbp
  char *v15; // r12
  __int64 v16; // rbx
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  unsigned __int8 v20; // si
  volatile _KAFFINITY_EX *v21; // rdx
  unsigned __int8 v22; // bl
  unsigned __int8 v23; // bl
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  signed __int32 v27[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]
  __int128 v31; // [rsp+60h] [rbp-48h] BYREF
  __int64 v32; // [rsp+70h] [rbp-38h]
  int v33; // [rsp+C0h] [rbp+18h] BYREF

  v5 = a1;
  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_22;
  if ( (HvlEnlightenments & 2) == 0 && ((HvlEnlightenments & 0x800000) == 0 || !(unsigned __int8)KiIsFlushEntire(a1)) )
  {
    if ( (_DWORD)KeNumberProcessors_0 != 1 )
    {
      if ( a2 )
        goto LABEL_42;
      _InterlockedOr(v27, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = 0;
      ActiveProcessors = CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
      while ( v8 < ActiveProcessors->Count )
      {
        a4 = ActiveProcessors->Bitmap[v8];
        if ( a4 && (v8 != CurrentPrcb->Group || a4 != CurrentPrcb->GroupSetMember) )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          goto LABEL_42;
        }
        ++v8;
      }
      if ( KiKvaShadow )
      {
        if ( v5 != 3 && !v5 )
          goto LABEL_38;
        if ( !KiFlushPcid )
          goto LABEL_17;
      }
      else
      {
        if ( v5 == 1 )
          goto LABEL_38;
        if ( !KiFlushPcid )
        {
LABEL_17:
          v10 = __readcr4();
          if ( (v10 & 0x20080) != 0 )
          {
            __writecr4(v10 ^ 0x80);
            __writecr4(v10);
LABEL_19:
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            goto LABEL_25;
          }
LABEL_38:
          v18 = __readcr3();
          __writecr3(v18);
          goto LABEL_19;
        }
      }
      v24 = __readcr3();
      __writecr3(v24);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
      goto LABEL_19;
    }
LABEL_22:
    if ( !KiKvaShadow )
    {
      if ( v5 != 1 )
      {
        result = KxFlushEntireTb(a2);
        goto LABEL_28;
      }
      KxFlushNonGlobalTb(a2);
LABEL_26:
      result = (__int64)KeGetCurrentThread();
      if ( *(_QWORD *)(*(_QWORD *)(result + 184) + 368LL) )
        result = VslFlushSecureAddressSpace();
      goto LABEL_28;
    }
    if ( v5 == 2 || v5 == 1 )
      result = KxFlushEntireTb(a2);
    else
      result = KxFlushNonGlobalTb(a2);
    goto LABEL_25;
  }
LABEL_42:
  if ( KiKvaShadow )
  {
    if ( v5 )
    {
LABEL_44:
      v19 = 0LL;
      v20 = 1;
      goto LABEL_45;
    }
    v19 = 0LL;
    v20 = 0;
  }
  else
  {
    if ( v5 != 1 )
      goto LABEL_44;
    v19 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
    v20 = 0;
  }
LABEL_45:
  if ( a2 )
  {
    v21 = 0LL;
  }
  else
  {
    _InterlockedOr(v27, 0);
    v21 = KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
  }
  if ( v19 )
  {
    if ( v21 )
      goto LABEL_49;
    goto LABEL_50;
  }
  if ( v21 )
  {
LABEL_49:
    if ( !(unsigned __int8)HvlpUseExtendedProcessorSetHypercalls() )
      goto LABEL_50;
    if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      result = HvlpSlowFlushAddressSpaceTbEx(v19);
    else
      result = HvlpFastFlushAddressSpaceTbEx(v19);
LABEL_25:
    if ( v5 != 1 )
      goto LABEL_28;
    goto LABEL_26;
  }
  if ( v5 == 1 )
  {
LABEL_50:
    if ( (HvlEnlightenments & 0x80u) == 0 )
      result = HvlpSlowFlushAddressSpaceTb(v19, v21, v20);
    else
      result = HvlpFastFlushAddressSpaceTb(v19, v21, v20);
    goto LABEL_25;
  }
  v22 = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v21) = 12;
    KiRaiseIrqlProcessIrqlFlags(v22, v21);
  }
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    if ( (HvlEnlightenments & 0x80u) == 0 )
      HvlpSlowFlushAddressSpaceTb(0LL, 0LL, v20);
    else
      HvlpFastFlushAddressSpaceTb(0LL, 0LL, v20);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
  result = v22;
  __writecr8(v22);
LABEL_28:
  if ( v5 == 1 )
  {
    if ( VmTbFlushEnabled )
    {
      result = (__int64)KeGetCurrentThread();
      v12 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1648LL);
      if ( v12 )
      {
        v31 = 0LL;
        v32 = 0LL;
        v13 = 0LL;
        v14 = VmpProcessContextLockExclusive((PEX_SPIN_LOCK)v12);
        v15 = (char *)KeGetCurrentPrcb()->VmInternal + 4608;
        if ( *(_QWORD *)&VmpTraceLoggingProvider
          && **(_DWORD **)&VmpTraceLoggingProvider
          && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&VmpTraceLoggingProvider, 256LL) )
        {
          VmpLogTbFlushSlatFlushEntire(v25, *(_QWORD *)(v12 + 104));
        }
        v33 = 0;
        v29 = 0LL;
        v28 = 0LL;
        v30 = 0x10000000000001LL;
        do
        {
          result = VmpConvertPortionVpnRangeToGpnRange(
                     v12,
                     (unsigned int)&v29,
                     0x40000 - (int)v13,
                     (unsigned int)&v31,
                     (__int64)&v28,
                     (__int64)&v33,
                     1);
          v16 = *((_QWORD *)&v28 + 1);
          v17 = result;
          if ( !*((_QWORD *)&v28 + 1) )
            break;
          VmpInsertInvalidateListRange(v12, (_DWORD)v15, v28, result, *((__int64 *)&v28 + 1), v33);
          result = VmpInvalidateOutstandingFaults(v12, v17, v16);
          v13 += v16;
          if ( v13 >= 0x40000 )
          {
            if ( *((_QWORD *)v15 + 1) )
              VmpProcessInvalidateList(v12, v15);
            v26 = *(_QWORD *)(v12 + 72);
            VmpProcessContextUnlockExclusive(v12, v14);
            v13 = 0LL;
            v14 = VmpProcessContextLockExclusive((PEX_SPIN_LOCK)v12);
            if ( v26 != *(_QWORD *)(v12 + 72) )
            {
              v31 = 0LL;
              v32 = 0LL;
            }
            result = (__int64)KeGetCurrentPrcb();
            v15 = (char *)(*(_QWORD *)(result + 35664) + 4608LL);
          }
        }
        while ( v30 );
        if ( v14 != -1 )
        {
          if ( *((_QWORD *)v15 + 1) )
            VmpProcessInvalidateList(v12, v15);
          result = VmpProcessContextUnlockExclusive(v12, v14);
        }
      }
    }
  }
  if ( ExTbFlushActive )
  {
    v23 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v23, 15LL);
    ExFlushTb(0, 0LL, v5, a4);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
    result = v23;
    __writecr8(v23);
  }
  return result;
}
