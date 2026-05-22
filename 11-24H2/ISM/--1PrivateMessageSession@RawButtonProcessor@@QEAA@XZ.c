/*
 * XREFs of ??1PrivateMessageSession@RawButtonProcessor@@QEAA@XZ @ 0x1801B22C0
 * Callers:
 *     ??1RawButtonProcessor@@UEAA@XZ @ 0x1801B2368 (--1RawButtonProcessor@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RawButtonProcessor::PrivateMessageSession::~PrivateMessageSession(
        RawButtonProcessor::PrivateMessageSession *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &RawButtonProcessor::PrivateMessageSession::`vftable';
  v7 = 0LL;
  v2 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 1) + 24LL);
  v3 = **v2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  v4 = v3(v2, &GUID_bbba0bd0_9e1a_4ce1_823e_18111b3d0837, &v7);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x105,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\rawb"
           "uttonprocessor.cpp",
      (const char *)(unsigned int)v4,
      v5);
  (*(void (__fastcall **)(__int64, RawButtonProcessor::PrivateMessageSession *))(*(_QWORD *)v7 + 40LL))(v7, this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
}
