/*
 * XREFs of ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x1800292CC
 * Callers:
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x1800290F4 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18002968C (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::InitDXGI(CDWMDXGIEnumeration *this)
{
  unsigned int v2; // r15d
  HRESULT v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-40h]
  struct CDWMDXGIAdapter *v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  void *ppFactory; // [rsp+98h] [rbp+38h] BYREF
  struct IDXGIAdapter *v23; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v2 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 254;
    goto LABEL_45;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 260;
    goto LABEL_45;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v19);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 263;
    goto LABEL_45;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 266;
    goto LABEL_45;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v21);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 272;
LABEL_45:
    v14 = v3;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7F0, 1u, v14, v16, 0LL);
    goto LABEL_30;
  }
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v24) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v24)(
           v24,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v23);
    v4 = v3;
    if ( v3 < 0 )
    {
      v16 = 280;
      goto LABEL_45;
    }
    v3 = CDWMDXGIAdapter::Create(v23, v2, &v17);
    v4 = v3;
    if ( v3 < 0 )
    {
      v16 = 284;
      goto LABEL_45;
    }
    v5 = *((_DWORD *)this + 20);
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      v4 = -2147024362;
      v15 = 181;
      v7 = -2147024362;
      goto LABEL_53;
    }
    v7 = 0;
    if ( v6 > *((_DWORD *)this + 19) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 8LL, 1LL, &v17);
      v4 = v7;
      if ( v7 < 0 )
      {
        v15 = 192;
LABEL_53:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v15, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7F0, 1u, v7, 0x11Eu, 0LL);
        goto LABEL_30;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v5) = v17;
      *((_DWORD *)this + 20) = v6;
    }
    v4 = v7;
    if ( v23 )
    {
      ((void (__fastcall *)(struct IDXGIAdapter *))v23->lpVtbl->Release)(v23);
      v23 = 0LL;
    }
    if ( v24 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      v24 = 0LL;
    }
    v17 = 0LL;
    ++v2;
  }
  if ( !v2 )
  {
    v4 = -2003304291;
    v14 = -2003304291;
    v16 = 299;
    goto LABEL_47;
  }
  v8 = v18;
  *((_QWORD *)this + 3) = v18;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = v19;
  *((_QWORD *)this + 4) = v19;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = v20;
  *((_QWORD *)this + 5) = v20;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = v21;
  *((_QWORD *)this + 6) = v21;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = ppFactory;
  *((_QWORD *)this + 2) = ppFactory;
  if ( v12 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
LABEL_30:
  if ( ppFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v23 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v23->lpVtbl->Release)(v23);
  return v4;
}
