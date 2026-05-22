/*
 * XREFs of ??1?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAA@XZ @ 0x1801A9148
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTracker__::_1_::dtor$5 @ 0x1801D19AB (_Microsoft--WRL--Details--MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTrack_ea_1801D19AB.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<VirtualHotKeyTracker::KeyEventData>::~list<VirtualHotKeyTracker::KeyEventData>(char **a1)
{
  char **v1; // rdx
  char *v3; // rcx
  char *v4; // rbx

  v1 = (char **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x30);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
