/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIImmersiveShellCreationBehavior@@@WRL@Microsoft@@UEAA@XZ @ 0x1801C8054
 * Callers:
 *     _Microsoft::WRL::Details::Make_CImmersiveShellCreationBehavior__::_1_::dtor$3 @ 0x1806DD2CB (_Microsoft--WRL--Details--Make_CImmersiveShellCreationBehavior__--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 44) = -1073741823;
  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
