/*
 * XREFs of ?EnsureD2DFactory@CD2DFactory@@QEAAJXZ @ 0x18024E868
 * Callers:
 *     ?Startup@@YAJXZ @ 0x18024E80C (-Startup@@YAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DFactory::EnsureD2DFactory(CD2DFactory *this)
{
  unsigned int v1; // ebx
  HRESULT Factory; // eax
  __int64 v3; // rcx
  int v4; // eax
  CD2DFactory *pFactoryOptions; // [rsp+40h] [rbp+8h] BYREF

  pFactoryOptions = this;
  v1 = 0;
  if ( !g_DeviceManager )
  {
    LODWORD(pFactoryOptions) = 0;
    g_DeviceManager = 0LL;
    Factory = D2D1CreateFactory(
                D2D1_FACTORY_TYPE_MULTI_THREADED,
                &GUID_bb12d362_daee_4b9a_aa1d_14ba401cfa1f,
                (const D2D1_FACTORY_OPTIONS *)&pFactoryOptions,
                (void **)&g_DeviceManager);
    v1 = Factory;
    if ( Factory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Factory, 0x23u, 0LL);
    }
    else
    {
      v3 = qword_1803FAAB8;
      qword_1803FAAB8 = 0LL;
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))g_DeviceManager)(
             g_DeviceManager,
             &GUID_6f72c0a2_6db7_46e9_9b62_b58a23f4928b,
             &qword_1803FAAB8);
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x25u, 0LL);
      else
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_1803FAAB8 + 48LL))(qword_1803FAAB8, 0LL);
    }
  }
  return v1;
}
