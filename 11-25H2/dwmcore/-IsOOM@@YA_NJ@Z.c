/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x180199530
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x1800AE180 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800E7A40 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801981D4 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVE.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1801994B0 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x180246FD8 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  __int64 i; // rax

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 9 )
      return 0;
    if ( dword_180336EE8[i] == a1 )
      break;
  }
  return 1;
}
