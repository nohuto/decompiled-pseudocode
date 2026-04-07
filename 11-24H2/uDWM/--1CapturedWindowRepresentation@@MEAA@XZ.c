/*
 * XREFs of ??1CapturedWindowRepresentation@@MEAA@XZ @ 0x1800A86B0
 * Callers:
 *     ??_GCapturedWindowRepresentation@@MEAAPEAXI@Z @ 0x1800A8780 (--_GCapturedWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A87B8 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
 */

void __fastcall CapturedWindowRepresentation::~CapturedWindowRepresentation(
        CapturedWindowRepresentation *this,
        unsigned int a2)
{
  __int64 v3; // rsi
  char *i; // rdi
  CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *v5; // rcx

  *(_QWORD *)this = &CapturedWindowRepresentation::`vftable';
  v3 = 0LL;
  for ( i = (char *)this + 48; (unsigned int)v3 < *((_DWORD *)this + 18); v3 = (unsigned int)(v3 + 1) )
  {
    v5 = *(CProjectionBorderManager::CAPTURE_FILTERED_WINDOW **)(*(_QWORD *)i + 8 * v3);
    if ( v5 )
      CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(v5, a2);
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 8u);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)i);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 5);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 4);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 3);
  CBaseObject::~CBaseObject(this);
}
