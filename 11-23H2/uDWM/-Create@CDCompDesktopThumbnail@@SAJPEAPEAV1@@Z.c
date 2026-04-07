/*
 * XREFs of ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180107B58
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000E7A0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180005AD8 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDCompDesktopThumbnail::Create(struct CDCompDesktopThumbnail **a1)
{
  int v2; // ebx
  CDesktopThumbnailBase *v3; // rax
  CDesktopThumbnailBase *v4; // rdi

  if ( a1 )
  {
    v3 = (CDesktopThumbnailBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                                    WPF::g_pProcessHeap,
                                    296LL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x128uLL);
      CDesktopThumbnailBase::CDesktopThumbnailBase(v4);
      *(_QWORD *)v4 = &CDCompDesktopThumbnail::`vftable';
      v2 = ((__int64 (__fastcall *)(CDesktopThumbnailBase *))*(&CDCompDesktopThumbnail::`vftable' + 1))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x116u);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x116u);
  }
  return (unsigned int)v2;
}
