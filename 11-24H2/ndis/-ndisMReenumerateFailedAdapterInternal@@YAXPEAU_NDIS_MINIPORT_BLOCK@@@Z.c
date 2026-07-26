/*
 * XREFs of ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A6D4C
 * Callers:
 *     ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14013E9E0 (-ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x140062D80 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x1400904E4 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400B98CC (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013E934 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140141E6C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140142178 (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401530F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1401532C0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 */

void __fastcall ndisMReenumerateFailedAdapterInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // r14
  unsigned int PnPFlags; // edx
  int v4; // edx
  __int64 v5; // rsi
  __int64 MiniportFatalErrorTimestampIndex; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 LastMiniportFatalErrorReason; // rax
  KIRQL v9; // dl
  struct NDISWATCHDOG__ *Watchdog; // rax
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  IfBlock = a1->IfBlock;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  PnPFlags = a1->PnPFlags;
  a1->MiniportThread = 0LL;
  if ( (PnPFlags & 0x100) != 0 )
  {
    KeReleaseSpinLock(&a1->Lock, NewIrql);
  }
  else
  {
    a1->WSyncFlags |= 4u;
    a1->PnPFlags = PnPFlags | 0x100;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        17,
        66,
        (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
        (char)a1);
    }
    ndisLogMiniportEvent(a1, IfBlock->LastMiniportFatalErrorReason);
    v5 = MEMORY[0xFFFFF78000000008];
    MiniportFatalErrorTimestampIndex = IfBlock->MiniportFatalErrorTimestampIndex;
    v7 = IfBlock->MiniportFatalErrorTimestamp[MiniportFatalErrorTimestampIndex];
    IfBlock->MiniportFatalErrorTimestamp[MiniportFatalErrorTimestampIndex] = MEMORY[0xFFFFF78000000008];
    LastMiniportFatalErrorReason = (unsigned __int16)IfBlock->LastMiniportFatalErrorReason;
    IfBlock->MiniportFatalErrorTimestampIndex = ((unsigned int)IfBlock->MiniportFatalErrorTimestampIndex + 1) % 3;
    ndisMLiveBugCheck(a1, 1LL, (__int64)a1, (__int64)a1->PhysicalDeviceObject, LastMiniportFatalErrorReason);
    if ( ndisMAllowSilentReenumerate(a1) )
    {
      v7 = 0LL;
    }
    else if ( ndisDriverVerifierNdisFlagEnabled() )
    {
      NT_ASSERT(
        "*** An NDIS miniport driver has encountered a fatal error
    This is NOT a break in NDIS.sys
    The most commo"
        "n causes of these types of breaks are hung/unresponsive miniport firmware,
    failed power transitions, or fail"
        "ing MiniportRestart.
");
    }
    ndisCancelOidRequestInternal(a1, 0LL, 0LL, 1u);
    if ( v7 && v5 - v7 <= 0x23C34600 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
      v9 = NewIrql;
      a1->WSyncFlags &= ~4u;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v9);
      IoInvalidateDeviceState(a1->PhysicalDeviceObject);
    }
    else
    {
      if ( a1->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi && !ndisBugCheckOnReenumerationTimeout )
      {
        ndisDisarmWatchdog(a1->ReenumerateWatchdog.m_ptr);
        Watchdog = ndisAllocateWatchdog();
        wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
          &a1->ReenumerateWatchdog.m_ptr,
          Watchdog);
        ndisArmWatchdog(a1->ReenumerateWatchdog.m_ptr, a1, 0x27u, 0LL, 0x88B8u, 0LL);
      }
      ((void (__fastcall *)(void *, __int64, _QWORD))a1->ReenumerateSelfInterface->DeviceReset)(
        a1->ReenumerateSelfInterface->Context,
        1LL,
        0LL);
    }
  }
}
