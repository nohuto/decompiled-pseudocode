/*
 * XREFs of ?GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ @ 0x180130E90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::GetProcessId(InputDelegationInputObjectProxy *this)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 3);
  result = *(unsigned int *)(v1 + 40);
  if ( !(_DWORD)result )
  {
    v3 = *(_QWORD *)(v1 + 488);
    if ( v3 != *(_QWORD *)(v1 + 496) )
    {
      result = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)v3 + 32LL)
                                                                                             + 16LL));
      *(_DWORD *)(v1 + 40) = result;
    }
  }
  return result;
}
