/*
 * XREFs of ?CreateD2DDevice@CD2DFactory@@QEAAJPEAUIDXGIDevice3@@PEAPEAUID2D1Device@@@Z @ 0x1801B2D78
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x1801B2330 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DFactory::CreateD2DDevice(CD2DFactory *this, struct IDXGIDevice3 *a2, struct ID2D1Device **a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CD2DFactory *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  v4 = *(_QWORD *)qword_180406B08;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, struct IDXGIDevice3 *, CD2DFactory **))(v4 + 120))(
         qword_180406B08,
         4LL,
         a2,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xBCu, 0LL);
  }
  else
  {
    v7 = (**(__int64 (__fastcall ***)(CD2DFactory *, GUID *, struct ID2D1Device **))v9)(
           v9,
           &GUID_47dd575d_ac05_4cdd_8049_9b02cd16f44c,
           a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xBEu, 0LL);
  }
  if ( v9 )
    (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v9 + 16LL))(v9);
  return v6;
}
