/*
 * XREFs of KxFlushEntireTb @ 0x14039EFB4
 * Callers:
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiManageUltraSpacePageTable @ 0x140352F3C (MiManageUltraSpacePageTable.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1405B9E70 (KeFlushEntireTb.c)
 * Callees:
 *     KiIpiWaitForRequestBarrier @ 0x1402A12C0 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1402A6840 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KxSetTimeStampBusy @ 0x14039F5DC (KxSetTimeStampBusy.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KxFlushEntireTb(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  struct _KPRCB *v11; // rbp
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-48h] BYREF

  v1 = 1;
  v2 = 3LL;
  if ( (_DWORD)a1 == 1 )
  {
    v2 = 2147483651LL;
  }
  else if ( !(_DWORD)a1 )
  {
    v1 = KiKvaShadow == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
  }
  if ( v1 )
  {
    if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (unsigned int)KeNumberProcessors_0 <= 1 )
      {
        if ( KiFlushPcid )
        {
          v20 = __readcr3();
          __writecr3(v20);
          if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            KiSetUserTbFlushPending();
        }
        else
        {
          v19 = __readcr4();
          if ( (v19 & 0x20080) != 0 )
          {
            __writecr4(v19 ^ 0x80);
            __writecr4(v19);
          }
          else
          {
            v23 = __readcr3();
            __writecr3(v23);
          }
        }
      }
      else
      {
        KiIpiSendRequest((__int64)CurrentPrcb, 1, 0LL, 0LL, v2);
        if ( KiFlushPcid )
        {
          v17 = __readcr3();
          __writecr3(v17);
          if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            KiSetUserTbFlushPending();
        }
        else
        {
          v9 = __readcr4();
          if ( (v9 & 0x20080) != 0 )
          {
            __writecr4(v9 ^ 0x80);
            __writecr4(v9);
          }
          else
          {
            v21 = __readcr3();
            __writecr3(v21);
          }
        }
        KiIpiWaitForRequestBarrier((__int64)CurrentPrcb, v6, v7, v8);
      }
      _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
    }
  }
  else
  {
    _InterlockedOr(v27, 0);
    v11 = KeGetCurrentPrcb();
    ActiveProcessors = (struct _KAFFINITY_EX *)v11->CurrentThread->ApcState.Process->ActiveProcessors;
    *(_QWORD *)&v11->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
    memset_0(&v11->StaticAffinity.KeRcuAffinity.8, 0, sizeof(v11->StaticAffinity.KeRcuAffinity.8));
    KiCopyAffinityEx(
      &v11->StaticAffinity.KeFlushTbAffinity,
      v11->StaticAffinity.KeFlushTbAffinity.Size,
      ActiveProcessors);
    KeRemoveProcessorAffinityEx(&v11->StaticAffinity, v11->Number);
    if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                         (__int64)v11,
                         &v11->StaticAffinity.KeFlushTbAffinity.Count) )
    {
      KiIpiSendRequest((__int64)v11, 0, (char *)&v11->StaticAffinity, 0LL, v2);
      if ( KiFlushPcid )
      {
        v18 = __readcr3();
        __writecr3(v18);
        if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          KiSetUserTbFlushPending();
      }
      else
      {
        v16 = __readcr4();
        if ( (v16 & 0x20080) != 0 )
        {
          __writecr4(v16 ^ 0x80);
          __writecr4(v16);
        }
        else
        {
          v22 = __readcr3();
          __writecr3(v22);
        }
      }
      KiIpiWaitForRequestBarrier((__int64)v11, v13, v14, v15);
    }
    else if ( KiFlushPcid )
    {
      v25 = __readcr3();
      __writecr3(v25);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v24 = __readcr4();
      if ( (v24 & 0x20080) != 0 )
      {
        __writecr4(v24 ^ 0x80);
        __writecr4(v24);
      }
      else
      {
        v26 = __readcr3();
        __writecr3(v26);
      }
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
