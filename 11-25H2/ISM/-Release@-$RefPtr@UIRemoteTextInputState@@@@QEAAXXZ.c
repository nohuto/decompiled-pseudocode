/*
 * XREFs of ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x1801C7880
 * Callers:
 *     ??1TextInputStateAdapter@@EEAA@XZ @ 0x1801C5D80 (--1TextInputStateAdapter@@EEAA@XZ.c)
 *     ?Dispose@TextInputStateAdapter@@UEAAJXZ @ 0x1801C5E60 (-Dispose@TextInputStateAdapter@@UEAAJXZ.c)
 *     ?OnDisconnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801C6740 (-OnDisconnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RefPtr<IRemoteTextInputState>::Release(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
