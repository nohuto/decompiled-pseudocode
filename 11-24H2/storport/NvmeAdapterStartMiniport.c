/*
 * XREFs of NvmeAdapterStartMiniport @ 0x1400D8B80
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 * Callees:
 *     RaCallMiniportFindAdapter @ 0x1400370D4 (RaCallMiniportFindAdapter.c)
 *     RaCallMiniportHwInitialize @ 0x14003C630 (RaCallMiniportHwInitialize.c)
 *     NvmeCallMiniportAdapterControlSafe @ 0x1400716E8 (NvmeCallMiniportAdapterControlSafe.c)
 *     NvmeAdapterAcquireInterruptLock @ 0x1400CC5B8 (NvmeAdapterAcquireInterruptLock.c)
 *     NvmeAdapterConnectInterrupt @ 0x1400CDC54 (NvmeAdapterConnectInterrupt.c)
 *     NvmeAdapterReleaseInterruptLock @ 0x1400D64FC (NvmeAdapterReleaseInterruptLock.c)
 *     NvmeAdapterStartRegistryWatch @ 0x1400D8E94 (NvmeAdapterStartRegistryWatch.c)
 *     NvmePreInitializePerfOpts @ 0x1400DD0A0 (NvmePreInitializePerfOpts.c)
 *     NvmeControllerAdvancedInitialize @ 0x1400EA71C (NvmeControllerAdvancedInitialize.c)
 *     NvmeControllerEssentialInitialize @ 0x1400ECE18 (NvmeControllerEssentialInitialize.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     RaInitializeMiniport @ 0x140184AC8 (RaInitializeMiniport.c)
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 */

__int64 __fastcall NvmeAdapterStartMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rdx
  char v9; // r14
  __int64 v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 *v15; // rsi
  KIRQL v16; // bp
  __int64 v17; // rcx
  signed int v18; // esi
  char v19; // al

  if ( !a2 )
    return 3221225486LL;
  result = RaInitializeMiniport(
             a1 + 168,
             a2,
             a3,
             (*(_QWORD *)(a1 + 584) + 88LL) & -(__int64)(*(_QWORD *)(a1 + 584) != 0LL));
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 1012) = 6;
    return result;
  }
  if ( EnableRegistryWatch && !*(_QWORD *)(a1 + 992) )
    NvmeAdapterStartRegistryWatch(a1);
  v6 = *(_QWORD *)(a1 + 400);
  v7 = (__int64 *)(a1 + 144);
  v8 = *(_QWORD *)(a1 + 144) | 0x1000LL;
  *(_QWORD *)(a1 + 144) = v8;
  if ( (*(_DWORD *)(v6 + 184) & 0x40000000) != 0 )
  {
    v9 = 1;
    if ( (v8 & 0x200) == 0 )
    {
      LOBYTE(v5) = 1;
      result = NvmeAdapterCreateNvmeController(a1, 0, v5, 0, a1 + 1136);
      if ( (int)result < 0 )
        return result;
    }
    result = NvmeControllerEssentialInitialize(*(PVOID *)(a1 + 1136));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 376) |= 2u;
    v7 = (__int64 *)(a1 + 144);
  }
  else
  {
    v9 = 0;
  }
  result = RaCallMiniportFindAdapter((char **)(a1 + 168), *(void **)(a1 + 896));
  v10 = *v7 | 0x40;
  *v7 = v10;
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 1012) = 7;
    return result;
  }
  v11 = *(_BYTE *)(a1 + 372);
  v12 = v10 & 0xFFFFFFFFFFFFEFFFuLL | -(__int64)(v11 == 0) & 0x1000;
  *v7 = v12;
  if ( v11 )
  {
    v16 = 0;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 336);
    v14 = *(_QWORD *)(a1 + 584);
    *v7 = v12 & 0xFFFFFFFFFFFFFF7FuLL;
    *(_DWORD *)(v14 + 104) = v13;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 584) + 104LL) )
    {
      *v7 |= 0x400uLL;
      v15 = (__int64 *)(a1 + 144);
    }
    else
    {
      v15 = v7;
    }
    result = NvmeAdapterConnectInterrupt(a1);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 1012) = 8;
      return result;
    }
    result = NvmePreInitializePerfOpts(a1);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 1012) = 9;
      return result;
    }
    v16 = NvmeAdapterAcquireInterruptLock(a1);
    v17 = *v7 | 0x80;
    v7 = v15;
    *v15 = v17;
  }
  if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
  {
    *(_WORD *)(a1 + 500) = 1;
    *(_DWORD *)(a1 + 496) = 48;
    *(_QWORD *)(a1 + 512) = NvmeControllerStorMQCompletionNotifyWithCallback;
    result = NvmeCallMiniportAdapterControlSafe(a1 + 168);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 1012) = 15;
      return result;
    }
  }
  *v7 |= 0x20uLL;
  v18 = RaCallMiniportHwInitialize(a1 + 168);
  if ( v18 >= 0 )
    *v7 |= 2uLL;
  if ( (*(_DWORD *)v7 & 0x1000LL) != 0 )
    NvmeAdapterReleaseInterruptLock(a1, v16);
  if ( v18 < 0 )
  {
    *(_DWORD *)(a1 + 1012) = 10;
    return (unsigned int)v18;
  }
  if ( !*(_QWORD *)(a1 + 968) )
  {
LABEL_40:
    *(_QWORD *)(a1 + 144) &= ~0x20uLL;
    NvmeCallMiniportAdapterControlSafe(a1 + 168);
    return (unsigned int)v18;
  }
  if ( !v9 || (result = NvmeControllerAdvancedInitialize(*(_QWORD *)(a1 + 1136)), (int)result >= 0) )
  {
    v19 = (*(__int64 (__fastcall **)(__int64))(a1 + 968))(*(_QWORD *)(a1 + 408) + 16LL);
    v18 = v19 == 0 ? 0xC0000001 : 0;
    if ( !v19 )
    {
      *(_DWORD *)(a1 + 1012) = 11;
      return (unsigned int)v18;
    }
    goto LABEL_40;
  }
  return result;
}
