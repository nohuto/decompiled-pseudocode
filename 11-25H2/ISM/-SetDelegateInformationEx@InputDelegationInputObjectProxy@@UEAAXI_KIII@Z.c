/*
 * XREFs of ?SetDelegateInformationEx@InputDelegationInputObjectProxy@@UEAAXI_KIII@Z @ 0x180131EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z @ 0x180131DE0 (-SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z.c)
 */

void __fastcall InputDelegationInputObjectProxy::SetDelegateInformationEx(
        InputDelegationInputObjectProxy *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  InputDelegationInputObjectProxy::SetDelegateInformation(this, a2, a5, a6);
  *((_DWORD *)this + 14) = a4;
  *((_QWORD *)this + 6) = a3;
}
