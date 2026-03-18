/*
 * XREFs of ?GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV?$shared_ptr@VCRegion@@@std@@PEAPEAVIDeviceTarget@@@Z @ 0x1802D7D40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A3420 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D7AD4 (-EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D8194 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTarget(__int64 a1, _QWORD *a2, __int64 *a3)
{
  CDxHandleAdvancedDirectFlipBitmapRealization *v3; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  v3 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 400);
  if ( a2
    && (std::shared_ptr<CRegion>::operator=((_QWORD *)(a1 + 16), a2),
        v6 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveOffOverdraw(v3),
        v7 = v6,
        v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xA2u, 0LL);
  }
  else
  {
    v8 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRenderTarget(v3);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xA5u, 0LL);
    }
    else
    {
      v9 = (*(_QWORD *)(a1 + 8) + 16LL) & -(__int64)(*(_QWORD *)(a1 + 8) != 0LL);
      *a3 = v9;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return v7;
}
