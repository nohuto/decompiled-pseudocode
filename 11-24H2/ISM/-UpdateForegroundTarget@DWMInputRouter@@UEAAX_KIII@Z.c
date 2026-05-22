/*
 * XREFs of ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180024070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x180022D54 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 *     ?Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x180024534 (-Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ @ 0x1800246D4 (-EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall DWMInputRouter::UpdateForegroundTarget(
        DWMInputRouter *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct IInputTarget **); // rdi
  unsigned int v13; // r15d
  __int64 **v14; // rcx
  __int64 *i; // rax
  struct IInputTarget *v16; // rbx
  int v17; // eax
  int v18; // eax
  struct IInputTarget *v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, GUID *, struct IInputTarget **); // rbx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  bool v26; // bl
  struct IInputTarget *v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // [rsp+20h] [rbp-30h]
  int v31; // [rsp+20h] [rbp-30h]
  int v32; // [rsp+30h] [rbp-20h] BYREF
  int v33; // [rsp+34h] [rbp-1Ch] BYREF
  struct IInputTarget *v34; // [rsp+38h] [rbp-18h] BYREF
  __int64 v35[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v37; // [rsp+98h] [rbp+48h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( BamoServerConnection )
  {
    v10 = (_QWORD *)*((_QWORD *)BamoServerConnection + 31);
    v35[0] = (__int64)v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD *))*v10)(v10);
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(v10[1] + 184LL))(v10 + 1);
      if ( v11 )
        *(_DWORD *)(v11 + 192) = a4;
    }
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  }
  WinKeyScenarioTelemetry::EndWinKeyScenario();
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*((_QWORD *)this + 32);
  if ( a4 )
  {
    v13 = a5;
    if ( v12 )
    {
      v37 = 0;
      v32 = 0;
      v33 = 0;
      v35[0] = 0LL;
      v34 = 0LL;
      v20 = **v12;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
      v21 = v20(v12, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v34);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x763,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v21,
          v30);
      v22 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v34 + 32LL))(v34, &v37);
      if ( v22 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x765,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v22,
          v30);
      v23 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v34 + 40LL))(v34, &v32);
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x766,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v23,
          v30);
      v24 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v34 + 48LL))(v34, &v33);
      if ( v24 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x767,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v24,
          v30);
      v25 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)v34 + 64LL))(v34, v35);
      if ( v25 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x768,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v25,
          v30);
      v26 = a4 == v37 && v13 == v32 && a3 == v33 && a2 == v35[0];
      v27 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 16LL))(v27);
      }
      if ( v26 )
        return;
    }
    v34 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
    v14 = (__int64 **)*((_QWORD *)this + 10);
    for ( i = *v14; ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)v14 )
      {
        v16 = 0LL;
        goto LABEL_14;
      }
      if ( *((_DWORD *)i + 4) == a4 )
        break;
    }
    v16 = (struct IInputTarget *)i[7];
LABEL_14:
    v35[0] = (__int64)v16;
    if ( v16 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v16 + 8LL))(v16);
      v29 = DWMFocusedInputTarget::Create(v16, v13, a3, a2, &v34);
      if ( v29 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D9,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v29,
          v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v35);
LABEL_19:
        v18 = (*(__int64 (__fastcall **)(char *, struct IInputTarget *))(*((_QWORD *)this - 2) + 80LL))(
                (char *)this - 16,
                v34);
        if ( v18 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x77D,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v18,
            v31);
        v19 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
        }
        return;
      }
    }
    else
    {
      v17 = DWMLegacyInputTarget::Create(a4, v13, a3, a2, &v34);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3E2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v17,
          v31);
        goto LABEL_19;
      }
    }
    if ( v16 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_19;
  }
  if ( v12 )
  {
    v28 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 80LL))((char *)this - 16, 0LL);
    if ( v28 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x751,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v28,
        v30);
  }
}
