/*
 * XREFs of ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D6250
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D5F4C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800D7430 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D28C8 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D2DF4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$SpatialInteractionDLL_EntryPointNotFound@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800D469C (--$SpatialInteractionDLL_EntryPointNotFound@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ??$SpatialInteractionDLL_FailedToCreateCollection@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800D4708 (--$SpatialInteractionDLL_FailedToCreateCollection@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ??$SpatialInteractionDLL_LoadFailure@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800D4774 (--$SpatialInteractionDLL_LoadFailure@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ?Close@?$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800D5980 (-Close@-$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 *     ?SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D8A00 (-SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  signed int v3; // ebx
  unsigned int v4; // esi
  __int64 v6; // rcx
  HMODULE LibraryW; // rbp
  signed int v8; // eax
  __int64 v9; // rcx
  RawInputProvidersTracing *v10; // rcx
  FARPROC ProcAddress; // rbx
  signed int LastError; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+48h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2768);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2768));
  v14 = v2;
  if ( *((_QWORD *)this + 354) )
  {
    v3 = 0;
    v4 = 0;
    goto LABEL_23;
  }
  if ( !*((_BYTE *)this + 2808) )
  {
    LibraryW = LoadLibraryW(L"SpatialInteraction.dll");
    if ( LibraryW != *((HMODULE *)this + 353) )
    {
      Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::Close((__int64)this + 2816);
      *((_QWORD *)this + 353) = LibraryW;
    }
    if ( *((_QWORD *)this + 353) )
    {
      if ( RawInputProvidersTracing::IsEnabled(v6) )
      {
        wil::details::static_lazy<RawInputProvidersTracing>::get(
          v9,
          (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
        RawInputProvidersTracing::SpatialInteractionDLL_Loaded_(v10);
      }
      ProcAddress = GetProcAddress(*((HMODULE *)this + 353), "CreateSpatialInteractionSourceCollection");
      if ( ProcAddress )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 354);
        v3 = ((__int64 (__fastcall *)(char *))ProcAddress)((char *)this + 2832);
        v13 = v3;
        if ( v3 >= 0 )
        {
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 354) + 96LL))(
                 *((_QWORD *)this + 354),
                 *((_QWORD *)this + 372));
          v4 = v3;
          goto LABEL_23;
        }
        RawInputProvidersTracing::SpatialInteractionDLL_FailedToCreateCollection<long &>(&v13);
      }
      else
      {
        LastError = GetLastError();
        v3 = LastError;
        if ( LastError > 0 )
          v3 = (unsigned __int16)LastError | 0x80070000;
        v13 = v3;
        RawInputProvidersTracing::SpatialInteractionDLL_EntryPointNotFound<long &>(&v13);
      }
    }
    else
    {
      v8 = GetLastError();
      v3 = v8;
      if ( v8 > 0 )
        v3 = (unsigned __int16)v8 | 0x80070000;
      v13 = v3;
      RawInputProvidersTracing::SpatialInteractionDLL_LoadFailure<long &>(&v13);
    }
    v4 = v3;
LABEL_23:
    if ( v2 )
    {
      LeaveCriticalSection(v2);
      return v4;
    }
    return (unsigned int)v3;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 2147549183LL;
}
