/*
 * XREFs of ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x18005C2F0
 * Callers:
 *     CreateSystemInputHost @ 0x180083090 (CreateSystemInputHost.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Create@ISMTestMode@@SAX_N@Z @ 0x18005C50C (-Create@ISMTestMode@@SAX_N@Z.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18005C55C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x18005C880 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@ISMScenarios@@SAXW4ISMScenario@@@Z @ 0x180098DD0 (-Create@ISMScenarios@@SAXW4ISMScenario@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall OneCoreUAPInputHost::Create(void *a1, struct ISystemInputHost **a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, struct ISystemInputHost **); // rcx
  OneCoreUAPInputHost *v8; // rax
  OneCoreUAPInputHost *v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 161LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4,
      v10);
    return (unsigned int)v4;
  }
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ISystemInputHost **))&OneCoreUAPInputHost::s_pInputHost;
  if ( *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost )
    goto LABEL_10;
  ISMTestMode::Create(0);
  ISMScenarios::Create(0LL);
  v8 = (OneCoreUAPInputHost *)RefCountedObject::operator new(0x80uLL);
  if ( !v8 )
  {
    *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost = 0LL;
    goto LABEL_13;
  }
  v8 = OneCoreUAPInputHost::OneCoreUAPInputHost(v8);
  *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost = v8;
  if ( !v8 )
  {
LABEL_13:
    v4 = -2147024882;
    goto LABEL_14;
  }
  v4 = OneCoreUAPInputHost::Initialize(v9, a1);
  if ( v4 < 0 )
  {
    v8 = *(OneCoreUAPInputHost **)&OneCoreUAPInputHost::s_pInputHost;
LABEL_14:
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 4) + 24LL))((__int64)v8 + 32, 1LL);
    v5 = 184LL;
    goto LABEL_3;
  }
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ISystemInputHost **))&OneCoreUAPInputHost::s_pInputHost;
LABEL_10:
  v4 = (**v7)(v7, &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953, a2);
  if ( v4 < 0 )
  {
    v5 = 189LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&OneCoreUAPInputHost::s_pInputHost + 16LL))(*(_QWORD *)&OneCoreUAPInputHost::s_pInputHost);
  return 0LL;
}
