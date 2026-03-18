/*
 * XREFs of ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x1801559F0
 * Callers:
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180155944 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180154DCC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::GetPrimaryAdapter(CDisplayManager *this, struct IDXGIAdapter1 **a2)
{
  int DXGIFactory; // eax
  struct IDXGIFactory5 *v4; // rbx
  unsigned int v5; // edi
  unsigned int v7; // eax
  CDisplayManager *v8; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIFactory5 *v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = this;
  *a2 = 0LL;
  v9 = 0LL;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v9);
  v4 = v9;
  v5 = DXGIFactory;
  LODWORD(v8) = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    v7 = 99;
  }
  else
  {
    LODWORD(v8) = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, struct IDXGIAdapter1 **))v9->lpVtbl->EnumAdapters1)(
                    v9,
                    0LL,
                    a2);
    v5 = (unsigned int)v8;
    if ( (int)v8 >= 0 )
      goto LABEL_3;
    v7 = 102;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032D458, 2u, v5, v7, 0LL);
  TranslateDXGIorD3DErrorInContext(v5, 4, &v8);
  v5 = (unsigned int)v8;
LABEL_3:
  if ( v4 )
    ((void (__fastcall *)(struct IDXGIFactory5 *))v4->lpVtbl->Release)(v4);
  return v5;
}
