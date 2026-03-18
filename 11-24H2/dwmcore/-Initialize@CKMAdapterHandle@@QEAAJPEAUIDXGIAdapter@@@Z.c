/*
 * XREFs of ?Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z @ 0x1801BD8F0
 * Callers:
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x1801BD400 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1801BD550 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x18021F384 (-Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKMAdapterHandle::Initialize(CKMAdapterHandle *this, struct IDXGIAdapter *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  _BYTE v8[296]; // [rsp+30h] [rbp-148h] BYREF
  struct _LUID v9; // [rsp+158h] [rbp-20h]

  memset_0(v8, 0, 0x130uLL);
  v4 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, _BYTE *))a2->lpVtbl->GetDesc)(a2, v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = CKMAdapterHandle::Initialize(this, v9);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x3Au, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x38u, 0LL);
  }
  return v5;
}
