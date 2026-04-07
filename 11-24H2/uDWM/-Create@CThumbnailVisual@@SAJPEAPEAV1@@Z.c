/*
 * XREFs of ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x18006105C
 * Callers:
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180060FA0 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180061A88 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x180061BC0 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CThumbnailVisual::Create(struct CThumbnailVisual **a1)
{
  CThumbnailVisual *v2; // rax
  CThumbnailVisual *v3; // rax
  struct CThumbnailVisual *v4; // rbx
  int v5; // edi

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1Au, 0LL);
    return (unsigned int)v5;
  }
  v2 = (CThumbnailVisual *)DefaultHeap::AllocClear(0x200uLL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_8;
  }
  v3 = CThumbnailVisual::CThumbnailVisual(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_8:
    v5 = -2147024882;
    goto LABEL_9;
  }
  v5 = CThumbnailVisual::Initialize(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1Au, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
