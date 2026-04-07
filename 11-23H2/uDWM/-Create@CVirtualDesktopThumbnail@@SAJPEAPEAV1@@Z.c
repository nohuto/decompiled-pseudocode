/*
 * XREFs of ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800059F0
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180005770 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180005AD8 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopThumbnail::Create(struct CVirtualDesktopThumbnail **a1)
{
  CDesktopThumbnailBase *v2; // rax
  CDesktopThumbnailBase *v3; // rdi
  int v4; // ebx

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x101u, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CDesktopThumbnailBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                                  WPF::g_pProcessHeap,
                                  296LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x128uLL);
    CDesktopThumbnailBase::CDesktopThumbnailBase(v3);
    *(_QWORD *)v3 = &CVirtualDesktopThumbnail::`vftable';
    v4 = ((__int64 (__fastcall *)(CDesktopThumbnailBase *))*(&CVirtualDesktopThumbnail::`vftable' + 1))(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x101u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
