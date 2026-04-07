/*
 * XREFs of ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180060FA0
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180060D60 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x18006105C (-Create@CThumbnailVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180061124 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?AddRef@CThumbnailAnimatedVisual@@UEAAKXZ @ 0x180061880 (-AddRef@CThumbnailAnimatedVisual@@UEAAKXZ.c)
 *     ?SetThumbnailData@CThumbnailVisual@@QEAAXPEAVCThumbnailData@@@Z @ 0x180061A78 (-SetThumbnailData@CThumbnailVisual@@QEAAXPEAVCThumbnailData@@@Z.c)
 */

__int64 __fastcall CThumbnailData::EnsureThumbnailVisual(CThumbnailData *this)
{
  unsigned int v1; // edi
  int v4; // eax
  CThumbnailVisual *v5; // rbx
  CThumbnailVisual *v6; // rcx
  int updated; // eax
  CThumbnailVisual *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v8 = 0LL;
  if ( !*((_QWORD *)this + 11) )
  {
    v4 = CThumbnailVisual::Create(&v8);
    v5 = v8;
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x103u, 0LL);
    }
    else
    {
      CThumbnailVisual::SetThumbnailData(v8, this);
      updated = CThumbnailVisual::UpdateProperties(v6, *((_DWORD *)this + 9));
      v1 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x107u, 0LL);
      }
      else
      {
        *((_QWORD *)this + 11) = v5;
        if ( !v5 )
          return v1;
        CThumbnailAnimatedVisual::AddRef((CThumbnailVisual *)((char *)v5 + 240));
      }
    }
    if ( v5 )
      CBaseObject::Release(v5);
  }
  return v1;
}
