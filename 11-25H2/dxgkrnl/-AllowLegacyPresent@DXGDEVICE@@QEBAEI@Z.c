/*
 * XREFs of ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x140328C5C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x140326C50 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGPROCESS@@W4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@W4DXGDEVICECLIENT_TYPE@@@Z @ 0x1403F5690 (-ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGPROCESS@@W4_D3DKMT_VIDPNSOURCEOWNER_TYP.c)
 */

bool __fastcall DXGDEVICE::AllowLegacyPresent(DXGDEVICE *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 235);
  if ( !v1 )
    return 0;
  if ( !*(_QWORD *)(v1 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9783;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter()",
      9783LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return !*((_DWORD *)this + 116)
      && (unsigned __int8)ADAPTER_DISPLAY::ProcessHasVidPnSourceOwner(
                            *(_QWORD *)(*((_QWORD *)this + 235) + 3120LL),
                            *((_QWORD *)this + 5)) != 0;
}
