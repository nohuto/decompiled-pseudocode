/*
 * XREFs of ?GetMobodyApplicationNoLock@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F0D10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e0427d210122b91fec5e2f8ae417fe86_::operator() @ 0x1802F08E0 (_lambda_e0427d210122b91fec5e2f8ae417fe86_--operator().c)
 */

__int64 __fastcall CImmersiveWindowManager::GetMobodyApplicationNoLock(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  struct IImmersiveApplicationInternal **v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = 0LL;
  v3 = *((_QWORD *)this + 8);
  v7 = a2;
  if ( v3 )
  {
    do
    {
      if ( !lambda_e0427d210122b91fec5e2f8ae417fe86_::operator()(&v7, *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v2)) )
        break;
      ++v2;
    }
    while ( v2 < v3 );
  }
  return *a2 == 0LL ? 0x8002802B : 0;
}
