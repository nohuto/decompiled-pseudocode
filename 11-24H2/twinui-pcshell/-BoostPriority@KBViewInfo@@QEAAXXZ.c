/*
 * XREFs of ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x1800ADCB4
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x180080F80 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall KBViewInfo::BoostPriority(KBViewInfo *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v2)(_QWORD, GUID *, __int64 *); // rbx
  int v3; // eax
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  v2 = ***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  if ( v2(v1, &GUID_35f1648c_265f_402c_b575_c9a325451df5, &v6) >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1DE,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
