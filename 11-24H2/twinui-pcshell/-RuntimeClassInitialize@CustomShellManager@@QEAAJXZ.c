/*
 * XREFs of ?RuntimeClassInitialize@CustomShellManager@@QEAAJXZ @ 0x180194B94
 * Callers:
 *     ??$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180194AE8 (--$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CustomShellManager::RuntimeClassInitialize(CustomShellManager *this)
{
  CImmersiveShellComponent *v1; // rcx
  int v2; // eax
  const char *v3; // r9
  unsigned int v4; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CustomShellManager *)((char *)this + 40);
  try
  {
    v2 = CImmersiveShellComponent::RegisterServiceInformation(v1, &IID_ICustomShellManager);
    v4 = v2;
    if ( v2 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        (const char *)(unsigned int)v2);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3A,
                           (unsigned int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
                           v3);
  }
  return result;
}
