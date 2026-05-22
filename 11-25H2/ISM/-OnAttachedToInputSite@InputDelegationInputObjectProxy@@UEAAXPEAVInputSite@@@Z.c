/*
 * XREFs of ?OnAttachedToInputSite@InputDelegationInputObjectProxy@@UEAAXPEAVInputSite@@@Z @ 0x180080F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputDelegationInputObjectProxy::OnAttachedToInputSite(
        InputDelegationInputObjectProxy *this,
        struct InputSite *a2)
{
  *((_QWORD *)this + 4) = a2;
}
