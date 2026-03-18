/*
 * XREFs of ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18018D780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180060C58 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18018D81C (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18018D908 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VisualCaptureBitsResponse::OnPresentComplete(VisualCaptureBitsResponse *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  int Bits; // eax

  v2 = CaptureBitsResponse::CalcSectionBitmapSize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x2Cu, 0LL);
  }
  else
  {
    v4 = CaptureBitsResponse::MapSectionBitmap(this);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x2Eu, 0LL);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits(this, v5, v6);
      v3 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bits, 0x31u, 0LL);
    }
  }
  (*(void (__fastcall **)(VisualCaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 56LL))(this, v3);
  return v3;
}
