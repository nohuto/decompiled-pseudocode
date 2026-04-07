/*
 * XREFs of ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800BBCD0
 * Callers:
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800BC0C8 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x18006DE94 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopThumbnail::Create(struct CDesktopThumbnail **a1)
{
  CDesktopThumbnailBase *v1; // rax
  CDesktopThumbnailBase *v2; // rbx
  int v3; // edi

  v1 = (CDesktopThumbnailBase *)DefaultHeap::AllocClear(0x118uLL);
  v2 = v1;
  if ( v1 )
  {
    memset_0(v1, 0, 0x118uLL);
    CDesktopThumbnailBase::CDesktopThumbnailBase(v2);
    *(_QWORD *)v2 = &CDesktopThumbnail::`vftable';
    DynArrayImpl<0>::DynArrayImpl<0>((__int64)v2 + 240, 0LL, 0);
    v3 = (*(__int64 (__fastcall **)(CDesktopThumbnailBase *))(*(_QWORD *)v2 + 8LL))(v2);
    if ( v3 >= 0 )
    {
      CDesktopThumbnail::s_pThumbnailNoRef = v2;
      return 0;
    }
  }
  else
  {
    v2 = 0LL;
    v3 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x3Cu, 0LL);
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  if ( v2 )
    CBaseObject::Release(v2);
  return (unsigned int)v3;
}
