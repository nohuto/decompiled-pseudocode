/*
 * XREFs of ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801AB63C
 * Callers:
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801AAC2C (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x1801AB74C (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801ACFF4 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0pxt_EventWriteTransfer @ 0x180255AB4 (McTemplateU0pxt_EventWriteTransfer.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x180269F4C (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::OnUpdatedLocalInkReceived(
        struct CSuperWetInkManager::SuperWetStroke **this,
        struct CSuperWetSource *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct CSuperWetInkManager::SuperWetStroke *v6; // rbx
  __int64 v7; // r15
  int v8; // edx
  int v9; // ecx
  char v10; // r14
  __int64 v11; // rbx

  v6 = CSuperWetInkManager::TryLookupDataForSource((CSuperWetInkManager *)this, a2);
  v7 = *((_QWORD *)g_pComposition + 111);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 352LL))(v4);
  }
  else
  {
    v11 = *(_QWORD *)(v5 + 40);
    v10 = 1;
    if ( v11 == *(_QWORD *)(v5 + 48) )
    {
      v6 = (struct CSuperWetInkManager::SuperWetStroke *)std::vector<CSuperWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(
                                                           v5 + 32,
                                                           *(_QWORD *)(v5 + 40));
    }
    else
    {
      memset_0(*(void **)(v5 + 40), 0, 0x68uLL);
      *(_DWORD *)(v11 + 72) = 0;
      *(_DWORD *)(v11 + 76) = 0;
      *(_DWORD *)(v11 + 80) = 0;
      *(_DWORD *)(v11 + 84) = 0;
      *(_QWORD *)(v11 + 88) = 0LL;
      *(_BYTE *)(v11 + 96) = 0;
      v6 = this[5];
      this[5] = (struct CSuperWetInkManager::SuperWetStroke *)((char *)v6 + 104);
    }
    *(_QWORD *)v6 = a2;
  }
  *((_QWORD *)v6 + 11) = v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0pxt_EventWriteTransfer(v9, v8, (_DWORD)a2, v7, v10);
  if ( !*this || a2 == *this || v10 )
    CSuperWetInkManager::SetActiveSource((CSuperWetInkManager *)this, v6);
}
