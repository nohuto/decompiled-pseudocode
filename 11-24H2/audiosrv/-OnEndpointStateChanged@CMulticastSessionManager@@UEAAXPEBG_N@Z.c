/*
 * XREFs of ?OnEndpointStateChanged@CMulticastSessionManager@@UEAAXPEBG_N@Z @ 0x180100850
 * Callers:
 *     _lambda_01a1570c2758217eaf2f5213a51197c0_::operator() @ 0x1800FF948 (_lambda_01a1570c2758217eaf2f5213a51197c0_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMulticastSessionManager::OnEndpointStateChanged(
        CMulticastSessionManager *this,
        const unsigned __int16 *a2,
        __int64 a3)
{
  __int64 **v3; // rbx
  char v4; // di

  v3 = (__int64 **)*((_QWORD *)this + 3);
  v4 = a3;
  while ( v3 )
  {
    LOBYTE(a3) = v4;
    (*(void (__fastcall **)(__int64 *, const unsigned __int16 *, __int64))(*v3[1] + 48))(v3[1], a2, a3);
    v3 = (__int64 **)*v3;
  }
}
