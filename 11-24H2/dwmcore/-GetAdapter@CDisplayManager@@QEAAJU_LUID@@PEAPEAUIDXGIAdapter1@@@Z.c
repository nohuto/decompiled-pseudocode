/*
 * XREFs of ?GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x180157560
 * Callers:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180061400 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x180155B44 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 */

__int64 __fastcall CDisplayManager::GetAdapter(CDisplayManager *this, struct _LUID a2, struct IDXGIAdapter1 **a3)
{
  int Adapter; // eax
  unsigned int v4; // ebx
  CDisplayManager *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, a3);
  LODWORD(v6) = Adapter;
  v4 = Adapter;
  if ( Adapter < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032D458, 2u, Adapter, 0x4Au, 0LL);
    TranslateDXGIorD3DErrorInContext(v4, 4, &v6);
    return (unsigned int)v6;
  }
  return v4;
}
