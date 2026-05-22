/*
 * XREFs of ??1?$com_ptr_t@VMPCConstantManagerClient@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180174948
 * Callers:
 *     ??1MPCConstantManagerClientPrincipal@@UEAA@XZ @ 0x180174968 (--1MPCConstantManagerClientPrincipal@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801658B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManag.c)
 */

__int64 __fastcall wil::com_ptr_t<MPCConstantManagerClient,wil::err_exception_policy>::~com_ptr_t<MPCConstantManagerClient,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(v1);
  return result;
}
