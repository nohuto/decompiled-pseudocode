/*
 * XREFs of ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801AA808
 * Callers:
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801AAC2C (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUVailSuperWetStroke@1@@Z @ 0x180258FA4 (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUVailSuperWetStroke@1@@Z.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18025A1A8 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x18026A088 (--$_Emplace_reallocate@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailS.c)
 */

void __fastcall CSuperWetInkManager::OnUpdatedVailInkReceived(
        struct CSuperWetInkManager::VailSuperWetStroke **this,
        struct CSuperWetSource *a2)
{
  struct CSuperWetInkManager::VailSuperWetStroke *v4; // rdx
  __int64 v5; // rcx
  CGlobalComposition *v6; // rax
  bool v7; // r14
  __int64 v8; // rbx

  v4 = CSuperWetInkManager::TryLookupVailDataForSource((CSuperWetInkManager *)this, a2);
  if ( v4 )
  {
    v6 = g_pComposition;
    v7 = *((_QWORD *)g_pComposition + 111) - *((_QWORD *)v4 + 13) >= 0xAuLL;
  }
  else
  {
    v8 = *(_QWORD *)(v5 + 64);
    v7 = 1;
    if ( v8 == *(_QWORD *)(v5 + 72) )
    {
      v4 = (struct CSuperWetInkManager::VailSuperWetStroke *)std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Emplace_reallocate<>(
                                                               v5 + 56,
                                                               *(_QWORD *)(v5 + 64));
    }
    else
    {
      memset_0(*(void **)(v5 + 64), 0, 0x78uLL);
      *(_QWORD *)(v8 + 24) = -1LL;
      *(_DWORD *)(v8 + 88) = 0;
      *(_DWORD *)(v8 + 92) = 0;
      *(_DWORD *)(v8 + 96) = 0;
      *(_DWORD *)(v8 + 100) = 0;
      *(_QWORD *)(v8 + 104) = 0LL;
      *(_BYTE *)(v8 + 112) = 0;
      v4 = this[8];
      this[8] = (struct CSuperWetInkManager::VailSuperWetStroke *)((char *)v4 + 120);
    }
    v6 = g_pComposition;
    *(_QWORD *)v4 = a2;
  }
  *((_QWORD *)v4 + 13) = *((_QWORD *)v6 + 111);
  if ( !*this || a2 == *this || v7 )
    CSuperWetInkManager::SetActiveSource((CSuperWetInkManager *)this, v4);
}
