/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x180039A20
 * Callers:
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180005B20 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 *     ??1CDCompositionInteropVisual@@UEAA@XZ @ 0x18001ACEC (--1CDCompositionInteropVisual@@UEAA@XZ.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800307EC (--1CSpriteVisual@@UEAA@XZ.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18003406C (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x180034720 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??1CButton@@MEAA@XZ @ 0x180035EB0 (--1CButton@@MEAA@XZ.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x1800361A0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18004C9C8 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18004E0EC (--1CWindowBorder@@UEAA@XZ.c)
 *     ??_ECWindowTarget@@UEAAPEAXI@Z @ 0x18010D3F0 (--_ECWindowTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  __int64 v2; // rcx
  __int64 *v3; // r14
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  int v6; // eax

  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CVisual *)((char *)this + 32));
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    *((_QWORD *)this + 13) = 0LL;
    v3 = (__int64 *)((char *)this + 16);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                           + 376LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
           0LL);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x132u, 0LL);
  }
  else
  {
    v3 = (__int64 *)((char *)this + 16);
  }
  v4 = *v3;
  if ( *v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    *v3 = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
