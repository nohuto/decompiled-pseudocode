/*
 * XREFs of ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18003406C
 * Callers:
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180008680 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x1800337C0 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180035DFC (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::~CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  *(_QWORD *)this = &CAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::RemoveAllAtlasImages(this);
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 35));
  if ( *((_QWORD *)this + 31) != *((_QWORD *)this + 32) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 31) = 0LL;
  }
  CVisual::~CVisual(this);
}
