/*
 * XREFs of ?RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ @ 0x1800D90E8
 * Callers:
 *     ??$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetailDemoExperienceManager@@@Z @ 0x1800D9034 (--$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetai.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x1800635C4 (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RetailDemoExperienceManager::RuntimeClassInitialize(RetailDemoExperienceManager *this)
{
  CImmersiveShellComponent *v2; // rcx
  int v3; // eax
  HANDLE EventW; // rdi
  const char *v5; // r9
  char *v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (RetailDemoExperienceManager *)((char *)this + 48);
  try
  {
    v3 = CImmersiveShellComponent::RegisterServiceInformation(v2, &GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x257,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v3,
        v8);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    v6 = (char *)*((_QWORD *)this + 57);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(v6);
    *((_QWORD *)this + 57) = EventW;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25C,
                           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v5);
  }
  return result;
}
