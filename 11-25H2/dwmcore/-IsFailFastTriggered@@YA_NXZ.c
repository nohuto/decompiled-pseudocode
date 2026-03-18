/*
 * XREFs of ?IsFailFastTriggered@@YA_NXZ @ 0x18025019C
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800E7A40 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801981D4 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVE.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x18024C9D8 (--1CFailFastError@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool IsFailFastTriggered(void)
{
  char v0; // bl

  v0 = 0;
  if ( g_dwFailFastForThreadId )
    return g_dwFailFastForThreadId == GetCurrentThreadId();
  return v0;
}
