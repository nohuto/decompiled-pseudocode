/*
 * XREFs of ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180014F70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180006B60 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EF7C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CProcess::IsSpatializerAllowed(CProcess *this)
{
  __int64 v1; // rax
  int v2; // eax
  bool v3; // bl
  int v5[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v5 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  if ( (int)RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, v5) < 0 )
    goto LABEL_8;
  v1 = **(_QWORD **)v5;
  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v1 + 64))(*(_QWORD *)v5, &v6);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF64,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v2,
      v5[0]);
  if ( v6 )
  {
    v3 = (unsigned int)CWindowsPolicyManager::GetAccessibilityAudioMonoMixState(g_PolicyManager) == 0;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v5);
    return v3;
  }
  else
  {
LABEL_8:
    if ( *(_QWORD *)v5 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 16LL))(*(_QWORD *)v5);
    return 0;
  }
}
