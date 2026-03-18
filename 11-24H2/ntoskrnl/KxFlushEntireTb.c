/*
 * XREFs of KxFlushEntireTb @ 0x1403B07A4
 * Callers:
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1405BC840 (KeFlushEntireTb.c)
 * Callees:
 *     KiIpiWaitForRequestBarrier @ 0x1402916C0 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140297D50 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KxSetTimeStampBusy @ 0x1403B0DCC (KxSetTimeStampBusy.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403CA140 (KeRemoveProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetUserTbFlushPending @ 0x1406AB3E0 (KiSetUserTbFlushPending.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KxFlushEntireTb(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  struct _KPRCB *v8; // rbp
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF

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
          v14 = __readcr3();
          __writecr3(v14);
          if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            KiSetUserTbFlushPending();
        }
        else
        {
          v13 = __readcr4();
          if ( (v13 & 0x20080) != 0 )
          {
            __writecr4(v13 ^ 0x80);
            __writecr4(v13);
          }
          else
          {
            v17 = __readcr3();
            __writecr3(v17);
          }
        }
      }
      else
      {
        KiIpiSendRequest((__int64)CurrentPrcb, 1, 0LL, 0LL, v2);
        if ( KiFlushPcid )
        {
          v11 = __readcr3();
          __writecr3(v11);
          if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            KiSetUserTbFlushPending();
        }
        else
        {
          v6 = __readcr4();
          if ( (v6 & 0x20080) != 0 )
          {
            __writecr4(v6 ^ 0x80);
            __writecr4(v6);
          }
          else
          {
            v15 = __readcr3();
            __writecr3(v15);
          }
        }
        KiIpiWaitForRequestBarrier((__int64)CurrentPrcb);
      }
      _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
    }
  }
  else
  {
    _InterlockedOr(v21, 0);
    v8 = KeGetCurrentPrcb();
    ActiveProcessors = (struct _KAFFINITY_EX *)v8->CurrentThread->ApcState.Process->ActiveProcessors;
    *(_QWORD *)&v8->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
    memset_0(&v8->StaticAffinity.KeRcuAffinity.8, 0, sizeof(v8->StaticAffinity.KeRcuAffinity.8));
    KiCopyAffinityEx(&v8->StaticAffinity.KeFlushTbAffinity, v8->StaticAffinity.KeFlushTbAffinity.Size, ActiveProcessors);
    KeRemoveProcessorAffinityEx(&v8->StaticAffinity, v8->Number);
    if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                         (__int64)v8,
                         &v8->StaticAffinity.KeFlushTbAffinity.Count) )
    {
      KiIpiSendRequest((__int64)v8, 0, (char *)&v8->StaticAffinity, 0LL, v2);
      if ( KiFlushPcid )
      {
        v12 = __readcr3();
        __writecr3(v12);
        if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          KiSetUserTbFlushPending();
      }
      else
      {
        v10 = __readcr4();
        if ( (v10 & 0x20080) != 0 )
        {
          __writecr4(v10 ^ 0x80);
          __writecr4(v10);
        }
        else
        {
          v16 = __readcr3();
          __writecr3(v16);
        }
      }
      KiIpiWaitForRequestBarrier((__int64)v8);
    }
    else if ( KiFlushPcid )
    {
      v19 = __readcr3();
      __writecr3(v19);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v18 = __readcr4();
      if ( (v18 & 0x20080) != 0 )
      {
        __writecr4(v18 ^ 0x80);
        __writecr4(v18);
      }
      else
      {
        v20 = __readcr3();
        __writecr3(v20);
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
