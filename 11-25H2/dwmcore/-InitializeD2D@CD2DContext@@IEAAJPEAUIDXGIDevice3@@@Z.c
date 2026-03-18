/*
 * XREFs of ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x1801B2330
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1801B1DA0 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180118204 (-TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x1801B2AB4 (-Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z.c)
 *     ?CreateD2DDevice@CD2DFactory@@QEAAJPEAUIDXGIDevice3@@PEAPEAUID2D1Device@@@Z @ 0x1801B2D78 (-CreateD2DDevice@CD2DFactory@@QEAAJPEAUIDXGIDevice3@@PEAPEAUID2D1Device@@@Z.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1801B3114 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x1801B31EC (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::InitializeD2D(struct CD2DResourceManager **this, struct IDXGIDevice3 *a2)
{
  __int64 v2; // rax
  int v5; // ebx
  int v6; // r9d
  int v7; // r8d
  int D2DDevice; // eax
  CD2DFactory *v10; // rcx
  _QWORD *v11; // rsi
  _QWORD *v12; // r14
  __int64 v13; // rcx
  unsigned int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+38h] [rbp-30h] BYREF

  v15 = 0LL;
  v2 = (__int64)(this + 137);
  if ( !this )
    v2 = 1112LL;
  if ( *(_DWORD *)v2 )
  {
    v5 = -2003304307;
    v6 = -2003304307;
    v14 = 31;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v14, 0LL);
    goto LABEL_6;
  }
  D2DDevice = CD2DResourceManager::Create((struct CD2DContext *)this, this + 21);
  v5 = D2DDevice;
  if ( D2DDevice < 0 )
  {
    v14 = 33;
LABEL_11:
    v6 = D2DDevice;
    goto LABEL_5;
  }
  v11 = this + 23;
  D2DDevice = CD2DFactory::CreateD2DDevice(v10, a2, this + 23);
  v5 = D2DDevice;
  if ( D2DDevice < 0 )
  {
    v14 = 36;
    goto LABEL_11;
  }
  D2DDevice = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v11)(
                *v11,
                &GUID_46fdbfea_53f8_440c_b9e2_81dfec612a72,
                (char *)this + 192);
  v5 = D2DDevice;
  if ( D2DDevice < 0 )
  {
    v14 = 38;
    goto LABEL_11;
  }
  D2DDevice = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v11 + 32LL))(*v11, 0LL, &v15);
  v5 = D2DDevice;
  if ( D2DDevice < 0 )
  {
    v14 = 41;
    goto LABEL_11;
  }
  v12 = this + 25;
  D2DDevice = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v15)(
                v15,
                &GUID_394ea6a3_0c34_4321_950b_6ca20f0be6c7,
                (char *)this + 200);
  v5 = D2DDevice;
  if ( D2DDevice < 0 )
  {
    v14 = 43;
    goto LABEL_11;
  }
  D2DDevice = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v12)(
                *v12,
                &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2,
                (char *)this + 208);
  v5 = D2DDevice;
  if ( D2DDevice < 0 )
  {
    v14 = 45;
    goto LABEL_11;
  }
  v13 = *v12;
  v16 = 0LL;
  D2DDevice = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, char *))(*(_QWORD *)v13 + 64LL))(
                v13,
                &v16,
                0LL,
                (char *)this + 312);
  v5 = D2DDevice;
  if ( D2DDevice < 0 )
  {
    v14 = 49;
    goto LABEL_11;
  }
  D2DDevice = CD2DContext::PopulateEffectTable((CD2DContext *)this);
  v5 = D2DDevice;
  if ( D2DDevice < 0 )
  {
    v14 = 51;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 48LL))(*v11, 0x40000000LL);
  CD2DContext::D2DRemoveClip((CD2DContext *)this);
LABEL_6:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return CD2DContext::TranslateDXGIorD3DErrorInContext((__int64)this, v5, v7);
}
