/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0eaa94307a68afcb0b7a6b106b2f57f___ @ 0x1801B3C1C
 * Callers:
 *     ?OnWindowVisibilityChanged@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowVisibilityChangedEventArgs@3456@@Z @ 0x1801B3BF0 (-OnWindowVisibilityChanged@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Appl.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0eaa94307a68afcb0b7a6b106b2f57f___(
        _OWORD *a1)
{
  DWORD CurrentThreadId; // ebp
  unsigned int v3; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  APTTYPE pAptType; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+60h] [rbp+18h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v3 = 0;
  else
    v3 = 4;
  v9 = 0;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    *((_OWORD *)v5 + 1) = *a1;
    *v5 = &off_18071C2F8;
    v5[4] = &v9;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = SHTaskPoolQueueTask(v3, 32LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  if ( v6 >= 0 )
    return v9;
  return (unsigned int)v6;
}
