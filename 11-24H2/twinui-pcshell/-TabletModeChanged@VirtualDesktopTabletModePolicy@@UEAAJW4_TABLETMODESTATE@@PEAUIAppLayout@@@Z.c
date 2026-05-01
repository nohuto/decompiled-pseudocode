/*
 * XREFs of ?TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z @ 0x1802359F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x1805596DC (-TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopTabletModePolicy::TabletModeChanged(__int64 a1, int a2, struct IAppLayout *a3)
{
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64); // rdi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD); // rbx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 72) + 32LL))(*(_QWORD *)(a1 + 72), &SRWLock);
  if ( a2 != *(_DWORD *)(a1 + 96) )
  {
    *(_DWORD *)(a1 + 96) = a2;
    if ( a2 == 1 )
    {
      v6 = *(_QWORD *)(a1 + 56);
      v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 368LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 80));
      v8 = v7(v6, a1 + 80);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 46LL;
LABEL_11:
        v14 = (unsigned int)v8;
        goto LABEL_12;
      }
      v11 = *(_QWORD *)(a1 + 56);
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 392LL);
      v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 96LL))(
                        *(_QWORD *)(a1 + 48),
                        &v20);
      v9 = v12(v11, *v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      if ( v9 < 0 )
      {
        v14 = (unsigned int)v9;
        v10 = 47LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
          (const char *)v14);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&SRWLock);
        return (unsigned int)v9;
      }
      v15 = *(_QWORD *)(a1 + 56);
      v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 432LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 88));
      v8 = v16(v15, a1 + 88);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 48LL;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = VirtualDesktopTabletModePolicy::TransitionToDesktopMode((VirtualDesktopTabletModePolicy *)a1, a3);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 52LL;
        goto LABEL_11;
      }
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
