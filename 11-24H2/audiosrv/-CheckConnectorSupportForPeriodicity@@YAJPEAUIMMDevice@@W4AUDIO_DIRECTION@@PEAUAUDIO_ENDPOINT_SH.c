/*
 * XREFs of ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x180041F40
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x180041880 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CheckConnectorSupportForPeriodicity(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  __int64 (__fastcall *v7)(__int64, GUID *, __int64, __int128 *, int *); // rax
  int v8; // eax
  int v9; // edi
  void (*v10)(void); // rax
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // edi
  int v26; // ebx
  __int64 v27; // rdx
  double v28; // xmm1_8
  double v29; // xmm0_8
  __int64 v30; // rdx
  int v31; // eax
  int v32[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h] BYREF
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v37; // [rsp+88h] [rbp+28h] BYREF
  __int64 v38; // [rsp+90h] [rbp+30h] BYREF
  int v39; // [rsp+98h] [rbp+38h] BYREF

  v34 = 0LL;
  LOWORD(v34) = 65;
  DWORD2(v34) = a4;
  v35 = a3;
  v38 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64, __int128 *, int *))(*(_QWORD *)a1 + 24LL);
  if ( a2 )
  {
    *(_QWORD *)v32 = 0LL;
    v8 = v7(a1, &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82, 1LL, &v34, v32);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2005139404 )
      {
        if ( *(_QWORD *)v32 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
        if ( !v38 )
          return 2289827892LL;
        v10 = *(void (**)(void))(*(_QWORD *)v38 + 16LL);
LABEL_8:
        v10();
        return 2289827892LL;
      }
      v27 = 434LL;
      goto LABEL_60;
    }
    v14 = v38;
    v38 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v32)(
           *(_QWORD *)v32,
           &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
           &v38);
    if ( v9 < 0 )
    {
      v27 = 435LL;
LABEL_60:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
LABEL_62:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
      return (unsigned int)v9;
    }
  }
  else
  {
    *(_QWORD *)v32 = 0LL;
    v12 = v7(a1, &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa, 1LL, &v34, v32);
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( v12 == -2005139404 )
      {
        if ( *(_QWORD *)v32 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
        if ( !v38 )
          return 2289827892LL;
        v10 = *(void (**)(void))(*(_QWORD *)v38 + 16LL);
        goto LABEL_8;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AB,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v12);
      if ( *(_QWORD *)v32 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      return v13;
    }
    v23 = v38;
    v38 = 0LL;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v24 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v32)(
            *(_QWORD *)v32,
            &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
            &v38);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
      return v25;
    }
  }
  if ( *(_QWORD *)v32 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
  v37 = 0;
  v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 40LL))(v38, &v37);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_62;
  }
  if ( !v37 )
  {
    v28 = (double)*(int *)(a3 + 48);
    v29 = (double)(int)a5;
LABEL_72:
    *a6 = (int)(v28 * v29 / 10000000.0 + 0.5);
LABEL_54:
    if ( v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    return 0LL;
  }
  v39 = 0;
  v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 32LL))(v38, &v39);
  v9 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C3,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_62;
  }
  if ( !v39 )
  {
    v31 = 20000;
    if ( a5 >= 0x4E20 )
      v31 = a5;
    v28 = (double)v31;
    v29 = (double)*(int *)(a3 + 48);
    goto LABEL_72;
  }
  *(_QWORD *)v32 = 0LL;
  v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v38)(v38, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, v32);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
    return v18;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v32 + 48LL))(*(_QWORD *)v32, 0x40000LL);
  v20 = v19;
  if ( v19 >= 0 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v38 + 24LL))(v38, a5, 0LL);
    v22 = v21;
    if ( v21 != -2005139372 && v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D6,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v21);
      if ( *(_QWORD *)v32 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      return v22;
    }
    v33 = 0LL;
    v26 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v38)(
            v38,
            &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
            &v33);
    if ( v26 < 0 )
    {
      v30 = 475LL;
    }
    else
    {
      v26 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v33 + 32LL))(v33, a6);
      if ( v26 >= 0 )
      {
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        if ( *(_QWORD *)v32 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
        goto LABEL_54;
      }
      v30 = 477LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v26);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
    return (unsigned int)v26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CB,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
    (const char *)(unsigned int)v19);
  if ( *(_QWORD *)v32 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  return v20;
}
