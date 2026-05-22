/*
 * XREFs of ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800E07F8
 * Callers:
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x1800E092C (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180038F90 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E11A0 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::EnsureLampArrayThreadState(ULONG_PTR dwData)
{
  int SystemMetrics; // edi
  HMODULE *v3; // rsi
  const char *v4; // r9
  signed int LastError; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  SystemMetrics = GetSystemMetrics(4096);
  if ( GetSystemMetrics(67) || SystemMetrics )
  {
    LampArrayRawInputProvider::Shutdown(dwData);
    return 0LL;
  }
  if ( *(_QWORD *)(dwData + 176) )
    LampArrayRawInputProvider::Shutdown(dwData);
  v3 = (HMODULE *)(dwData + 168);
  if ( !GetModuleHandleExW(4u, (LPCWSTR)LampArrayRawInputProvider::WorkerThreadProcThunk, (HMODULE *)(dwData + 168)) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x5B,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
             v4);
  _InterlockedIncrement((volatile signed __int32 *)(dwData + 32));
  _InterlockedExchange64(
    (volatile __int64 *)(dwData + 176),
    (__int64)CreateThread(
               0LL,
               0LL,
               (LPTHREAD_START_ROUTINE)LampArrayRawInputProvider::WorkerThreadProcThunk,
               (LPVOID)dwData,
               0,
               0LL));
  if ( *(_QWORD *)(dwData + 176) )
    return 0LL;
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError > 0 )
    v7 = (unsigned __int16)LastError | 0x80070000;
  FreeLibrary(*v3);
  *v3 = 0LL;
  LampArrayRawInputProvider::Release(dwData);
  return v7;
}
