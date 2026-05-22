/*
 * XREFs of ?SendSignal@SipcEndpoint@@UEAAXXZ @ 0x18010E6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcEndpoint::SendSignal(SipcEndpoint *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 3);
  if ( v1 )
    SetEvent(v1);
}
