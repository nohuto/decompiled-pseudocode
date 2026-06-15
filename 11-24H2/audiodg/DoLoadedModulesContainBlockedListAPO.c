/*
 * XREFs of DoLoadedModulesContainBlockedListAPO @ 0x140072320
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x140036540 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x140015DD8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140023638 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1400268A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _tlgKeywordOn @ 0x140035714 (_tlgKeywordOn.c)
 *     ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x1400448B4 (-GetModuleVersion@@YAXPEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x1400593C4 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ??0?$unique_any_array_ptr@PEAUHINSTANCE__@@U?$default_delete@$$BY0A@PEAUHINSTANCE__@@@std@@Uempty_deleter@wil@@_K@wil@@QEAA@PEAPEAUHINSTANCE__@@_K@Z @ 0x14007229C (--0-$unique_any_array_ptr@PEAUHINSTANCE__@@U-$default_delete@$$BY0A@PEAUHINSTANCE__@@@std@@Uempt.c)
 *     ??1?$unique_any_array_ptr@PEAUHINSTANCE__@@U?$default_delete@$$BY0A@PEAUHINSTANCE__@@@std@@Uempty_deleter@wil@@_K@wil@@QEAA@XZ @ 0x1400722B4 (--1-$unique_any_array_ptr@PEAUHINSTANCE__@@U-$default_delete@$$BY0A@PEAUHINSTANCE__@@@std@@Uempt.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400722EC (--1-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-$int.c)
 *     ??A?$unique_any_array_ptr@PEAUHINSTANCE__@@U?$default_delete@$$BY0A@PEAUHINSTANCE__@@@std@@Uempty_deleter@wil@@_K@wil@@QEAAAEAPEAUHINSTANCE__@@_K@Z @ 0x140072310 (--A-$unique_any_array_ptr@PEAUHINSTANCE__@@U-$default_delete@$$BY0A@PEAUHINSTANCE__@@@std@@Uempt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 DoLoadedModulesContainBlockedListAPO()
{
  FARPROC ProcAddress; // r14
  signed int LastError; // eax
  unsigned int v2; // ebx
  void *v3; // rbx
  HMODULE *v4; // rsi
  int v5; // edi
  DWORD v6; // ebx
  HANDLE CurrentProcess; // rax
  DWORD v8; // esi
  DWORD i; // ebx
  HMODULE *v10; // rax
  wchar_t *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  const struct _tlgProvider_t *v14; // rcx
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  DWORD cbNeeded[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 *v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  HMODULE *lphModule; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v24; // [rsp+60h] [rbp-A8h] BYREF
  HMODULE Library; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR Filename[264]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v27[264]; // [rsp+288h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B0h] [rbp+3A8h]

  Library = LoadLibraryExW(L"apphelp.dll", 0LL, 0);
  ProcAddress = GetProcAddress(Library, "ApphelpCheckAPO");
  if ( ProcAddress )
  {
    v3 = operator new[](0x820uLL);
    memset_0(v3, 0, 0x820uLL);
    wil::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>(
      &lphModule,
      (__int64)v3);
    v4 = lphModule;
    if ( lphModule )
    {
      v5 = -2147023728;
      cbNeeded[0] = 0;
      v6 = 8 * v23;
      CurrentProcess = GetCurrentProcess();
      if ( K32EnumProcessModules(CurrentProcess, v4, v6, cbNeeded) )
      {
        v8 = cbNeeded[0] >> 3;
        memset_0(Filename, 0, 0x208uLL);
        memset_0(v27, 0, 0x208uLL);
        for ( i = 0; i < v8; ++i )
        {
          v10 = (HMODULE *)wil::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>::operator[](
                             &lphModule,
                             i);
          if ( GetModuleFileNameW(*v10, Filename, 0x104u) )
          {
            LODWORD(v21) = 0;
            if ( !((unsigned int (__fastcall *)(GUID *, WCHAR *, __int64 *))ProcAddress)(
                    &GUID_00000000_0000_0000_0000_000000000000,
                    Filename,
                    &v21) )
            {
              v11 = wcsrchr(Filename, 0x5Cu);
              if ( v11 )
              {
                v20 = 0LL;
                wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                  (void **)&v20,
                  0LL);
                GetModuleVersion(Filename, &v20);
                if ( v20 )
                {
                  v12 = StringCchPrintfW(v27, 260LL, L"%s %s", v11 + 1, v20);
                  v2 = v12;
                  if ( v12 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x5A,
                      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectbehavior.cpp",
                      (const char *)(unsigned int)v12);
                    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v20);
                    goto LABEL_8;
                  }
                  v14 = AudioDgTelemetryProvider::Provider(v13);
                  if ( *(_DWORD *)v14 > 4u && tlgKeywordOn((__int64)v14, 0x400000000100LL) )
                  {
                    v24 = v27;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                      v15,
                      (int)&unk_1400B0A3A,
                      v16,
                      v17,
                      (void **)&v24);
                  }
                }
                wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v20);
              }
              v5 = 0;
              break;
            }
          }
        }
      }
      wil::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>((__int64)&lphModule);
      v2 = v5;
    }
    else
    {
      v2 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectbehavior.cpp",
        (const char *)0x8007000ELL);
LABEL_8:
      wil::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>((__int64)&lphModule);
    }
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
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>(&Library);
  return v2;
}
