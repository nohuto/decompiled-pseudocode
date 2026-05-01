/*
 * XREFs of ?BoostPriority@WindowWrapperBase@@UEAAJXZ @ 0x18043F990
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d64c769bce7fa56fe27855a63f35df80___ @ 0x18043C438 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d64c769bce7fa56fe27855a63f35df80.c)
 */

__int64 __fastcall WindowWrapperBase::BoostPriority(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (char *)this - 32;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d64c769bce7fa56fe27855a63f35df80___(
         v2,
         CurrentThreadId,
         &v8);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x82E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x832,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
