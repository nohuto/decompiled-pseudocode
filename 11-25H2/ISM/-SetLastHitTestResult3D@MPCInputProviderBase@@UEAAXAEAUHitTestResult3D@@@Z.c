/*
 * XREFs of ?SetLastHitTestResult3D@MPCInputProviderBase@@UEAAXAEAUHitTestResult3D@@@Z @ 0x1800C3490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::SetLastHitTestResult3D(MPCInputProviderBase *this, struct HitTestResult3D *a2)
{
  __int64 v2; // rax
  _OWORD *v3; // rcx
  __int128 v4; // xmm1

  v2 = 3LL;
  v3 = (_OWORD *)((char *)this + 32);
  do
  {
    *v3 = *(_OWORD *)a2;
    v3[1] = *((_OWORD *)a2 + 1);
    v3[2] = *((_OWORD *)a2 + 2);
    v3[3] = *((_OWORD *)a2 + 3);
    v3[4] = *((_OWORD *)a2 + 4);
    v3[5] = *((_OWORD *)a2 + 5);
    v3[6] = *((_OWORD *)a2 + 6);
    v3 += 8;
    v4 = *((_OWORD *)a2 + 7);
    a2 = (struct HitTestResult3D *)((char *)a2 + 128);
    *(v3 - 1) = v4;
    --v2;
  }
  while ( v2 );
  *v3 = *(_OWORD *)a2;
  v3[1] = *((_OWORD *)a2 + 1);
}
