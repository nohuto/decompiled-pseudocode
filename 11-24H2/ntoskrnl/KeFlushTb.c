/*
 * XREFs of KeFlushTb @ 0x14039E600
 * Callers:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiManageUltraSpacePageTable @ 0x140352F3C (MiManageUltraSpacePageTable.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     MiCalibrateTbFlush @ 0x14068FEB4 (MiCalibrateTbFlush.c)
 * Callees:
 *     ExFlushTb @ 0x1402A1EA4 (ExFlushTb.c)
 *     VmpProcessContextLockExclusive @ 0x14039EC68 (VmpProcessContextLockExclusive.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x14039ECB4 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     KxFlushEntireTb @ 0x14039EFB4 (KxFlushEntireTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14039F2D4 (HvlpFastFlushAddressSpaceTb.c)
 *     KxSetTimeStampBusy @ 0x14039F5DC (KxSetTimeStampBusy.c)
 *     KxFlushNonGlobalTb @ 0x14039F660 (KxFlushNonGlobalTb.c)
 *     VmpInvalidateOutstandingFaults @ 0x14039F950 (VmpInvalidateOutstandingFaults.c)
 *     VmpInsertInvalidateListRange @ 0x14039FB08 (VmpInsertInvalidateListRange.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14039FD28 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1403A4524 (HvlpFastFlushAddressSpaceTbEx.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14042D8D0 (HvlpSlowFlushAddressSpaceTb.c)
 *     VmpProcessContextUnlockExclusive @ 0x14047A000 (VmpProcessContextUnlockExclusive.c)
 *     KiIsFlushEntire @ 0x140486514 (KiIsFlushEntire.c)
 *     VmpProcessInvalidateList @ 0x1404A41E8 (VmpProcessInvalidateList.c)
 *     VslFlushSecureAddressSpace @ 0x1404ACC28 (VslFlushSecureAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     VmpLogTbFlushSlatFlushEntire @ 0x14064A314 (VmpLogTbFlushSlatFlushEntire.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A2028 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 */

__int64 __fastcall KeFlushTb(__int64 a1, unsigned int a2)
{
  int v3; // edi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int16 v6; // ax
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // rbp
  char *v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9
  unsigned __int8 v19; // si
  volatile _KAFFINITY_EX *v20; // rdx
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // bl
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  signed __int32 v26[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+50h] [rbp-58h] BYREF
  __int64 v29; // [rsp+58h] [rbp-50h]
  __int128 v30; // [rsp+60h] [rbp-48h] BYREF
  __int64 v31; // [rsp+70h] [rbp-38h]
  int v32; // [rsp+C0h] [rbp+18h] BYREF

  v3 = a1;
  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_22;
  if ( (HvlEnlightenments & 2) == 0 && ((HvlEnlightenments & 0x800000) == 0 || !(unsigned __int8)KiIsFlushEntire(a1)) )
  {
    if ( (_DWORD)KeNumberProcessors_0 != 1 )
    {
      if ( a2 )
        goto LABEL_42;
      _InterlockedOr(v26, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = 0;
      ActiveProcessors = CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
      while ( v6 < ActiveProcessors->Count )
      {
        v8 = ActiveProcessors->Bitmap[v6];
        if ( v8 && (v6 != CurrentPrcb->Group || v8 != CurrentPrcb->GroupSetMember) )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          goto LABEL_42;
        }
        ++v6;
      }
      if ( KiKvaShadow )
      {
        if ( v3 != 3 && !v3 )
          goto LABEL_38;
        if ( !KiFlushPcid )
          goto LABEL_17;
      }
      else
      {
        if ( v3 == 1 )
          goto LABEL_38;
        if ( !KiFlushPcid )
        {
LABEL_17:
          v9 = __readcr4();
          if ( (v9 & 0x20080) != 0 )
          {
            __writecr4(v9 ^ 0x80);
            __writecr4(v9);
LABEL_19:
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            goto LABEL_25;
          }
LABEL_38:
          v17 = __readcr3();
          __writecr3(v17);
          goto LABEL_19;
        }
      }
      v23 = __readcr3();
      __writecr3(v23);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
      goto LABEL_19;
    }
LABEL_22:
    if ( !KiKvaShadow )
    {
      if ( v3 != 1 )
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
    if ( v3 == 2 || v3 == 1 )
      result = KxFlushEntireTb(a2);
    else
      result = KxFlushNonGlobalTb(a2);
    goto LABEL_25;
  }
LABEL_42:
  if ( KiKvaShadow )
  {
    if ( v3 )
    {
LABEL_44:
      v18 = 0LL;
      v19 = 1;
      goto LABEL_45;
    }
    v18 = 0LL;
    v19 = 0;
  }
  else
  {
    if ( v3 != 1 )
      goto LABEL_44;
    v18 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
    v19 = 0;
  }
LABEL_45:
  if ( a2 )
  {
    v20 = 0LL;
  }
  else
  {
    _InterlockedOr(v26, 0);
    v20 = KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
  }
  if ( v18 )
  {
    if ( v20 )
      goto LABEL_49;
    goto LABEL_50;
  }
  if ( v20 )
  {
LABEL_49:
    if ( !(unsigned __int8)HvlpUseExtendedProcessorSetHypercalls() )
      goto LABEL_50;
    if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      result = HvlpSlowFlushAddressSpaceTbEx(v18);
    else
      result = HvlpFastFlushAddressSpaceTbEx(v18);
LABEL_25:
    if ( v3 != 1 )
      goto LABEL_28;
    goto LABEL_26;
  }
  if ( v3 == 1 )
  {
LABEL_50:
    if ( (HvlEnlightenments & 0x80u) == 0 )
      result = HvlpSlowFlushAddressSpaceTb(v18, v20, v19);
    else
      result = HvlpFastFlushAddressSpaceTb(v18, v20, v19);
    goto LABEL_25;
  }
  v21 = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v20) = 12;
    KiRaiseIrqlProcessIrqlFlags(v21, v20);
  }
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    if ( (HvlEnlightenments & 0x80u) == 0 )
      HvlpSlowFlushAddressSpaceTb(0LL, 0LL, v19);
    else
      HvlpFastFlushAddressSpaceTb(0LL, 0LL, v19);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
  result = v21;
  __writecr8(v21);
LABEL_28:
  if ( v3 == 1 )
  {
    if ( VmTbFlushEnabled )
    {
      result = (__int64)KeGetCurrentThread();
      v11 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1648LL);
      if ( v11 )
      {
        v30 = 0LL;
        v31 = 0LL;
        v12 = 0LL;
        v13 = VmpProcessContextLockExclusive((PEX_SPIN_LOCK)v11);
        v14 = (char *)KeGetCurrentPrcb()->VmInternal + 4608;
        if ( *(_QWORD *)&VmpTraceLoggingProvider
          && **(_DWORD **)&VmpTraceLoggingProvider
          && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&VmpTraceLoggingProvider, 256LL) )
        {
          VmpLogTbFlushSlatFlushEntire(v24, *(_QWORD *)(v11 + 104));
        }
        v32 = 0;
        v28 = 0LL;
        v27 = 0LL;
        v29 = 0x10000000000001LL;
        do
        {
          result = VmpConvertPortionVpnRangeToGpnRange(
                     v11,
                     (unsigned int)&v28,
                     0x40000 - (int)v12,
                     (unsigned int)&v30,
                     (__int64)&v27,
                     (__int64)&v32,
                     1);
          v15 = *((_QWORD *)&v27 + 1);
          v16 = result;
          if ( !*((_QWORD *)&v27 + 1) )
            break;
          VmpInsertInvalidateListRange(v11, (_DWORD)v14, v27, result, *((__int64 *)&v27 + 1), v32);
          result = VmpInvalidateOutstandingFaults(v11, v16, v15);
          v12 += v15;
          if ( v12 >= 0x40000 )
          {
            if ( *((_QWORD *)v14 + 1) )
              VmpProcessInvalidateList(v11, v14);
            v25 = *(_QWORD *)(v11 + 72);
            VmpProcessContextUnlockExclusive(v11, v13);
            v12 = 0LL;
            v13 = VmpProcessContextLockExclusive((PEX_SPIN_LOCK)v11);
            if ( v25 != *(_QWORD *)(v11 + 72) )
            {
              v30 = 0LL;
              v31 = 0LL;
            }
            result = (__int64)KeGetCurrentPrcb();
            v14 = (char *)(*(_QWORD *)(result + 35664) + 4608LL);
          }
        }
        while ( v29 );
        if ( v13 != -1 )
        {
          if ( *((_QWORD *)v14 + 1) )
            VmpProcessInvalidateList(v11, v14);
          result = VmpProcessContextUnlockExclusive(v11, v13);
        }
      }
    }
  }
  if ( ExTbFlushActive )
  {
    v22 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v22, 15LL);
    ExFlushTb(0, 0LL, v3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
    result = v22;
    __writecr8(v22);
  }
  return result;
}
