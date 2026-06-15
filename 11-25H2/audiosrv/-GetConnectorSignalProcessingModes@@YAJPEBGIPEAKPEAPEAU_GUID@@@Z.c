/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x180092318
 * Callers:
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18002096C (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall GetConnectorSignalProcessingModes(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  LPVOID v10; // rbx
  __int64 (__fastcall *v11)(LPVOID, const unsigned __int16 *, __int64 **); // rdi
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 *v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 *v25; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v26; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  ppv[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               ppv);
  v9 = Instance;
  if ( Instance >= 0 )
  {
    v25 = 0LL;
    v10 = ppv[0];
    v11 = *(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 **))(*(_QWORD *)ppv[0] + 40LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v25);
    v12 = v11(v10, a1, &v25);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v26 = 0LL;
      v13 = *v25;
      v26 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v13 + 24))(
              v25,
              &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
              23LL);
      v9 = v14;
      if ( v14 >= 0 )
      {
        v21 = 0LL;
        v15 = *v26;
        v21 = 0LL;
        v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v15 + 56))(v26, a2, &v21);
        v9 = v16;
        if ( v16 >= 0 )
        {
          v22 = 0LL;
          v17 = *v21;
          v22 = 0LL;
          v18 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v17 + 104))(
                  v21,
                  23LL,
                  &GUID_915aed0f_c782_41d6_b0dc_1ed22d1ee5cb,
                  &v22);
          v9 = v18;
          if ( v18 >= 0 )
          {
            v18 = (*(__int64 (__fastcall **)(__int64, struct _GUID **, unsigned int *))(*(_QWORD *)v22 + 24LL))(
                    v22,
                    a4,
                    a3);
            v9 = v18;
            if ( v18 >= 0 )
            {
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
              v9 = 0;
              goto LABEL_20;
            }
            v19 = 302LL;
          }
          else
          {
            if ( v18 == -2147467262 )
            {
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
              v9 = -2147467262;
              goto LABEL_20;
            }
            v19 = 300LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v18);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x129,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v16);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x126,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v14);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x123,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v12);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)Instance);
  }
LABEL_20:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppv);
  return v9;
}
