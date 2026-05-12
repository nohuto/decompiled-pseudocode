/*
 * XREFs of RaidCreateAdapter @ 0x140043580
 * Callers:
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 * Callees:
 *     StorCreateDictionary @ 0x14003C2F8 (StorCreateDictionary.c)
 *     RaidCreateDeferredQueue @ 0x14006AFD4 (RaidCreateDeferredQueue.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaCreateBus @ 0x140183924 (RaCreateBus.c)
 *     RaidCreateDma @ 0x140183EDC (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x140184A84 (RaCreateMiniport.c)
 *     RaidCreateResourceList @ 0x140184C40 (RaidCreateResourceList.c)
 */

__int64 __fastcall RaidCreateAdapter(_DWORD *a1)
{
  __int64 v2; // r8
  int Dictionary; // edi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset_0(a1, 0, 0x1880uLL);
  *a1 = 1094997074;
  *((_QWORD *)a1 + 19) = a1 + 36;
  *((_QWORD *)a1 + 18) = a1 + 36;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 17);
  *((_QWORD *)a1 + 29) = a1 + 56;
  *((_QWORD *)a1 + 28) = a1 + 56;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 27);
  InitializeSListHead((PSLIST_HEADER)a1 + 16);
  InitializeSListHead((PSLIST_HEADER)a1 + 17);
  InitializeSListHead((PSLIST_HEADER)a1 + 309);
  InitializeSListHead((PSLIST_HEADER)a1 + 18);
  a1[14] = -1;
  Dictionary = StorCreateDictionary((__int64)(a1 + 42), 0x14u, v2, (__int64)RaidGetKeyFromUnit);
  if ( Dictionary >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *((_QWORD *)a1 + 42) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      RaCreateMiniport(a1 + 94);
      RaidCreateDma(a1 + 220);
      a1[86] = 0;
      a1[87] = 0;
      a1[88] = 0;
      *((_BYTE *)a1 + 356) = 0;
      RaidCreateResourceList(a1 + 90);
      RaCreateBus(a1 + 194);
      *((_OWORD *)a1 + 57) = 0LL;
      *((_QWORD *)a1 + 116) = 0LL;
      RaidCreateDeferredQueue(a1 + 252);
      RaidCreateDeferredQueue(a1 + 348);
      a1[288] = 134684677;
      a1[308] = 134684677;
      a1[328] = 134684677;
      KeInitializeTimer((PKTIMER)(a1 + 396));
      KeInitializeTimer((PKTIMER)(a1 + 444));
      KeInitializeTimer((PKTIMER)(a1 + 1034));
      KeInitializeTimer((PKTIMER)(a1 + 1350));
      a1[22] = 2;
      *((_BYTE *)a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 108);
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 691);
      *((_BYTE *)a1 + 624) &= ~1u;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)Dictionary;
}
