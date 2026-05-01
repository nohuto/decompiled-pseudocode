/*
 * XREFs of ?OnUwpWindowActivating@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivatingEventArgs@3456@@Z @ 0x1801C2610
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowActivating(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *a2,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // edi
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h]
  APTTYPE pAptType; // [rsp+70h] [rbp+8h] BYREF
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *v12; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = a3;
  *(_QWORD *)&v10 = this;
  *((_QWORD *)&v10 + 1) = &v12;
  CurrentThreadId = GetCurrentThreadId();
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  v13 = 0;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v5);
    *((_OWORD *)v6 + 1) = v10;
    *v6 = &off_18071CD68;
    v6[4] = &v13;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  if ( v7 >= 0 )
    return v13;
  return (unsigned int)v7;
}
