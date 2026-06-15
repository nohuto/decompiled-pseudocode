/*
 * XREFs of DoLoadedModulesContainBlockedListAPO @ 0x140074868
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x140036840 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x140015F48 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001D1E8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140023938 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140026BA8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _tlgKeywordOn @ 0x140035A14 (_tlgKeywordOn.c)
 *     ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x140044BB4 (-GetModuleVersion@@YAXPEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1400594B4 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140074844 (--1-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-$int.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 DoLoadedModulesContainBlockedListAPO()
{
  FARPROC ProcAddress; // r15
  signed int LastError; // eax
  unsigned int v2; // ebx
  void *v3; // rdi
  int v4; // esi
  HANDLE CurrentProcess; // rax
  DWORD v6; // r14d
  __int64 i; // rbx
  wchar_t *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rcx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // r9
  DWORD cbNeeded[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 *v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  void *v19[2]; // [rsp+50h] [rbp-B8h] BYREF
  HMODULE Library; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR Filename[264]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v22[264]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B0h] [rbp+3A8h]

  Library = LoadLibraryExW(L"apphelp.dll", 0LL, 0);
  ProcAddress = GetProcAddress(Library, "ApphelpCheckAPO");
  if ( ProcAddress )
  {
    v3 = operator new[](0x820uLL);
    memset_0(v3, 0, 0x820uLL);
    v19[0] = v3;
    v19[1] = (void *)260;
    v4 = -2147023728;
    cbNeeded[0] = 0;
    CurrentProcess = GetCurrentProcess();
    if ( K32EnumProcessModules(CurrentProcess, (HMODULE *)v3, 0x820u, cbNeeded) )
    {
      v6 = cbNeeded[0] >> 3;
      memset_0(Filename, 0, 0x208uLL);
      memset_0(v22, 0, 0x208uLL);
      for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
      {
        if ( GetModuleFileNameW(*((HMODULE *)v3 + i), Filename, 0x104u) )
        {
          LODWORD(v18) = 0;
          if ( !((unsigned int (__fastcall *)(GUID *, WCHAR *, __int64 *))ProcAddress)(
                  &GUID_00000000_0000_0000_0000_000000000000,
                  Filename,
                  &v18) )
          {
            v8 = wcsrchr(Filename, 0x5Cu);
            if ( v8 )
            {
              v17 = 0LL;
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                (void **)&v17,
                0LL);
              GetModuleVersion(Filename, &v17);
              if ( v17 )
              {
                v9 = StringCchPrintfW(v22, 260LL, L"%s %s", v8 + 1, v17);
                v2 = v9;
                if ( v9 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x5A,
                    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectbehavior.cpp",
                    (const char *)(unsigned int)v9);
                  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v17);
                  operator delete(v3);
                  goto LABEL_22;
                }
                v11 = AudioDgTelemetryProvider::Provider(v10);
                if ( *(_DWORD *)v11 > 4u && tlgKeywordOn((__int64)v11, 0x400000000100LL) )
                {
                  v19[0] = v22;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    v12,
                    (int)&unk_1400B0A12,
                    v13,
                    v14,
                    v19);
                }
              }
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v17);
            }
            v4 = 0;
            break;
          }
        }
      }
    }
    operator delete(v3);
    v2 = v4;
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( (v2 & 0x80000000) != 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectbehavior.cpp",
        (const char *)v2);
  }
LABEL_22:
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>(&Library);
  return v2;
}
