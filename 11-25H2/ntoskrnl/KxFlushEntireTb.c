/*
 * XREFs of KxFlushEntireTb @ 0x14027043C
 * Callers:
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiManageUltraSpacePageTable @ 0x140450E6C (MiManageUltraSpacePageTable.c)
 *     KeFlushEntireTb @ 0x1405B89A0 (KeFlushEntireTb.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     KxSetTimeStampBusy @ 0x1402703B8 (KxSetTimeStampBusy.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140313C70 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiWaitForRequestBarrier @ 0x14032BC30 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetUserTbFlushPending @ 0x1406A0110 (KiSetUserTbFlushPending.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  if ( v1 )
  {
    if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
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
        KiIpiSendRequest((_DWORD)CurrentPrcb, 1, 0, 0, v2);
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
        KiIpiWaitForRequestBarrier(CurrentPrcb);
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
    KeRemoveProcessorAffinityEx(&v8->StaticAffinity.KeFlushTbAffinity.Count, v8->Number);
    if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(v8, &v8->StaticAffinity) )
    {
      KiIpiSendRequest((_DWORD)v8, 0, (_DWORD)v8 + 11704, 0, v2);
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
      KiIpiWaitForRequestBarrier(v8);
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
