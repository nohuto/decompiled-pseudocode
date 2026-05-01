/*
 * XREFs of ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x180688460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180294914 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C790C (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180693080 (-MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x180697E9C (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 *     ?s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z @ 0x180699174 (-s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z.c)
 *     ?s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806992AC (-s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CTaskbandPin::RemoveFromList(CTaskbandPin *this, IUnknown *a2)
{
  HRESULT v4; // ebx
  CPinnedList *v5; // rcx
  unsigned int v6; // eax
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-C8h] BYREF
  LPITEMIDLIST ppidl; // [rsp+40h] [rbp-C0h] BYREF
  struct IShellLinkW *v11; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID dwItem1; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+58h] [rbp-A8h]
  LPVOID v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v15[264]; // [rsp+70h] [rbp-90h] BYREF

  ppv = 0LL;
  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 1u, &GUID_de25675a_72de_44b4_9373_05170450c140, &ppv) >= 0 )
  {
    pv = 0LL;
    if ( (*(int (__fastcall **)(LPVOID, IUnknown *, LPVOID *))(*(_QWORD *)ppv + 24LL))(ppv, a2, &pv) >= 0 )
    {
      dwItem1 = 0LL;
      if ( CoCreateInstance(&CLSID_DestinationListBoth, 0LL, 1u, &GUID_6332debf_87b5_4670_90c0_5e57b408a49e, &dwItem1) >= 0 )
        (*(void (__fastcall **)(LPVOID, LPVOID))(*(_QWORD *)dwItem1 + 80LL))(dwItem1, pv);
      v14[0] = 0LL;
      if ( CoCreateInstance(
             &CLSID_AutomaticDestinationListBoth,
             0LL,
             1u,
             &GUID_e9c5ef8d_fd41_4f72_ba87_eb03bad5817c,
             v14) >= 0
        && (*(int (__fastcall **)(LPVOID, LPVOID, _QWORD, _QWORD))(*(_QWORD *)v14[0] + 24LL))(v14[0], pv, 0LL, 0LL) >= 0 )
      {
        (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v14[0] + 104LL))(v14[0], 1LL);
      }
      CoTaskMemFree(pv);
      wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)v14);
      wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&dwItem1);
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  ppidl = 0LL;
  v4 = SHGetIDListFromObject(a2, &ppidl);
  if ( v4 >= 0 )
  {
    v4 = CPinnedList::MarkAsTombstone((char *)this - 80, ppidl, 25LL);
    if ( v4 == -2147023728 )
      v4 = 1;
    ILFree(ppidl);
  }
  v11 = 0LL;
  if ( ((int (__fastcall *)(IUnknown *, _QWORD, const GUID *, GUID *, struct IShellLinkW **))a2->lpVtbl[1].QueryInterface)(
         a2,
         0LL,
         &BHID_SFUIObject,
         &GUID_000214f9_0000_0000_c000_000000000046,
         &v11) >= 0 )
  {
    if ( CPinnedList::s_GetDarwinLinkInfo(v11, 0LL, v15, 0x104u) )
    {
      v4 = CPinnedList::s_RemoveDarwinShortcut(
             ((unsigned __int64)this - 88) & -(__int64)(this != (CTaskbandPin *)112),
             v15);
      if ( v4 == -2147023728 )
        v4 = 1;
    }
    ((void (__fastcall *)(struct IShellLinkW *))v11->lpVtbl->Release)(v11);
  }
  v6 = CPinnedList::_GetRemovedGlobalChangeCount(v5);
  if ( (int)SHRegSetDWORD(
              HKEY_LOCAL_MACHINE,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\StartPage",
              L"FavoritesRemovedChanges",
              v6 + 1) >= 0 )
  {
    HIWORD(dwItem1) = 0;
    v13 = 0;
    LOWORD(dwItem1) = 10;
    *(_DWORD *)((char *)&dwItem1 + 2) = 14;
    SHChangeNotify(0x4000000, 0x3000u, &dwItem1, 0LL);
  }
  return (unsigned int)v4;
}
