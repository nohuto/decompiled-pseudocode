/*
 * XREFs of ?StartCompositionThread@CConnection@@IEAAJH@Z @ 0x180222D30
 * Callers:
 *     ?Initialize@CConnection@@QEAAJH@Z @ 0x180222CBC (-Initialize@CConnection@@QEAAJH@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18024F9FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CConnection::StartCompositionThread(void **this, int nPriority)
{
  void **v2; // rdi
  HANDLE EventW; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  HANDLE *v9; // rbx
  HANDLE v10; // rax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD ThreadId; // [rsp+50h] [rbp+8h] BYREF

  ThreadId = 0;
  v2 = this + 5;
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v2,
    EventW);
  if ( (((unsigned __int64)*v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = 165LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  v9 = this + 4;
  v10 = CreateThread(0LL, 0LL, CConnection::CompositionThreadEntryPoint, this, 4u, &ThreadId);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 4,
    v10);
  if ( (((unsigned __int64)this[4] + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = 174LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  SetThreadDescription(this[4], L"DWM Compositor Thread");
  if ( !SetThreadPriority(*v9, nPriority) )
  {
    v7 = 179LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  if ( ResumeThread(*v9) == -1 )
  {
    v7 = 183LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  Handles[0] = *v9;
  Handles[1] = *v2;
  if ( WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) == -1 )
  {
    v7 = 188LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  return 0LL;
}
