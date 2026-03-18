/*
 * XREFs of ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x18027CBAC
 * Callers:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18018A29C (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ @ 0x1801F1524 (-EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1801F160C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::DisableIndependentFlip(CDirectFlipInfo *this)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( (unsigned __int8)CDirectFlipInfo::IsIndependentFlip(this) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 416LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3));
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x1C7u, 0LL);
  }
  *((_DWORD *)this + 14) = 0;
  return v2;
}
