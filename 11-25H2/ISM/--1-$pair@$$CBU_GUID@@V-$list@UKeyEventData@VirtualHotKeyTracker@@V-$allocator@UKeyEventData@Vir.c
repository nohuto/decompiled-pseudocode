/*
 * XREFs of ??1?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A919C
 * Callers:
 *     _VirtualHotKeyTracker::OnInput_::_1_::dtor$0 @ 0x1801D19E5 (_VirtualHotKeyTracker--OnInput_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>::~pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>(
        __int64 a1)
{
  __int64 v1; // rdx
  char *v3; // rcx
  char *v4; // rbx

  v1 = *(_QWORD *)(a1 + 16);
  **(_QWORD **)(v1 + 8) = 0LL;
  v3 = *(char **)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x30);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(char **)(a1 + 16), (const struct std::nothrow_t *)0x30);
}
