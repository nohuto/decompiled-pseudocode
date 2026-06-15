/*
 * XREFs of ?DetachFromPool@CEndpointResourcePool@Sarm@@QEAAXXZ @ 0x18011B6E4
 * Callers:
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18005CBA8 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 * Callees:
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18011B72C (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

void __fastcall Sarm::CEndpointResourcePool::DetachFromPool(Sarm::CEndpointResourcePool *this)
{
  const char *v2; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x2B,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\EndpointResourcePool.h",
    (const char *)(*((_DWORD *)this + 3) == 0),
    (bool)"Detaching from CEndpointResourcePool when nothing attached",
    v2);
  --*((_DWORD *)this + 3);
}
