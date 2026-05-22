/*
 * XREFs of ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801A4E90
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801A3E94 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x1801A4D4C (-Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z.c)
 *     ?DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUContextualProcessorResponse@@PEAI@Z @ 0x1801A4DD0 (-DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUCont.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EdgyImpl::EnsureInputTargeting(EdgyImpl *this, struct ContextualProcessorResponse *a2)
{
  const char *v4; // r9
  int v5; // r15d
  char *v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  unsigned int v16; // [rsp+70h] [rbp+50h] BYREF
  __int64 v17; // [rsp+78h] [rbp+58h] BYREF

  LODWORD(v17) = 0;
  *((_DWORD *)a2 + 2) = 0;
  v16 = 0;
  if ( EdgyImpl::DetermineInputRouting(this, (enum Windows::UI::Internal::Input::EdgyInputRouting *)&v17, a2, &v16) )
  {
    v5 = v17;
    if ( v16 )
    {
      if ( (_DWORD)v17 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x119,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
          v4);
      if ( *((_DWORD *)a2 + 2) != 2 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x11A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
          v4);
      v6 = (char *)this + 32;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
      v7 = EdgyInputTarget::Create((struct IInputTarget **)this + 4);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x122,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
          (const char *)(unsigned int)v7);
        return v8;
      }
      v17 = 0LL;
      v10 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v6;
      v11 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v6;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      v12 = v11(v10, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v17);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x127,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
          (const char *)(unsigned int)v12,
          savedregs);
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 80LL))(v17, v16);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x129,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
          (const char *)(unsigned int)v13,
          savedregs);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)a2 + 10, (_QWORD *)this + 4);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    }
    *((_DWORD *)this + 4) = v5;
  }
  return 0LL;
}
