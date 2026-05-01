/*
 * XREFs of ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x1802F8980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x180092E78 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1801C450C (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x1802FC158 (-_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::IsViewPresentedOnActivationVirtualDesktop(
        CAppViewManager *this,
        HWND a2,
        unsigned __int64 a3,
        bool *a4)
{
  int GlomForWindow; // ebx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v10)(PVOID, __int64, __int64 *); // rbx
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  struct IImmersiveApplicationInternal *v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktop *v16; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 1;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LOBYTE(v15) = 0;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  GlomForWindow = CAppViewManager::_GetGlomForWindow((CAppViewManager *)((char *)this - 32), a2, &v13, (bool *)&v15);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow >= 0 )
  {
    if ( (_BYTE)v15 )
    {
      v14[0] = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v13,
                  v14) >= 0 )
      {
        v12 = 0LL;
        Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
        v10 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
        GlomForWindow = v10(Ptr, v14[0], &v12);
        if ( GlomForWindow >= 0 )
        {
          v16 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
          if ( (int)CAppViewManager::_GetVirtualDesktopForPendingActivation(
                      (CAppViewManager *)((char *)this - 32),
                      a3,
                      &v16) < 0 )
          {
            GlomForWindow = 0;
          }
          else
          {
            v15 = 0;
            GlomForWindow = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int64, int *))(*(_QWORD *)v16 + 24LL))(
                              v16,
                              v12,
                              &v15);
            if ( GlomForWindow >= 0 )
              *a4 = v15 != 0;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
    }
    else
    {
      *a4 = 0;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  return (unsigned int)GlomForWindow;
}
