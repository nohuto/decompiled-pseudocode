/*
 * XREFs of ?FocusEyeControl@AccessibilityExperienceManager@@UEAAJXZ @ 0x18048F280
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x18000A238 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048FB74 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::FocusEyeControl(AccessibilityExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+28h] BYREF
  const char *v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v2 = -2147467259;
  v10 = 0LL;
  v3 = *((_QWORD *)this + 9);
  if ( !v3 || (v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3), v2 >= 0) )
  {
    v4 = *((_QWORD *)this + 29);
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      v2 = v5(v4, &v10);
      if ( v2 >= 0 )
      {
        hWnd = 0LL;
        v2 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v10 + 24LL))(v10, &hWnd);
        if ( v2 >= 0 )
        {
          SetForegroundWindow(hWnd);
          v6 = GazeUITraceLogging::Provider();
          if ( *(_DWORD *)v6 > 5u )
          {
            v12 = "AccessibilityExperienceManager::FocusEyeControl";
            v13 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
              (__int64)v6,
              (__int64)&unk_1808051DC,
              v7,
              v8,
              (__int64)&v13,
              &v12);
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return (unsigned int)v2;
}
