/*
 * XREFs of MiDecreaseAvailablePages @ 0x140261500
 * Callers:
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 */

_BOOL8 __fastcall MiDecreaseAvailablePages(__int64 a1, __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v15; // eax

  if ( a2 == 1 )
  {
    v7 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 18688));
    if ( v7 == *(_QWORD *)(a1 + 16640) || v7 == *(_QWORD *)(a1 + 16648) )
      MiUpdateAvailableEventsAtDpc(a1);
    v8 = v7 + 1;
  }
  else
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 18688), -a2);
    v10 = *(_QWORD *)(a1 + 16648);
    v7 = v8 - a2;
    if ( v8 - a2 <= v10 && v8 > v10 || (v11 = *(_QWORD *)(a1 + 16640), v7 <= v11) && v8 > v11 )
      MiUpdateAvailableEventsAtDpc(a1);
  }
  if ( v7 <= 0x420 )
  {
    v13 = *(_QWORD *)(a1 + 17600);
    if ( !v13 || !*(_BYTE *)(v13 + 52) )
      MiObtainFreePages(a1);
    if ( v7 < 0xA0 && v8 >= 0xA0 )
    {
      MiSlabDemotionLowMemoryConditionUpdate(a1, 1LL);
      if ( *(_DWORD *)(a1 + 1204) != -1 )
        KeSetEvent((PRKEVENT)(a1 + 1056), 0, 0);
    }
  }
  if ( a3 == -1LL )
  {
    if ( v7 >= 0x9F )
      return 1LL;
    if ( (a4 & 0x200) != 0 )
      return 1LL;
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) == 8 )
      return 1LL;
    v15 = *(_DWORD *)(a1 + 4);
    if ( v7 < 0x20 && (v15 & 4) != 0 )
      return 0;
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 && v7 >= 0x21 )
      return 1LL;
    return (v15 & 0x10) != 0;
  }
  else
  {
    return v7 >= a3;
  }
}
