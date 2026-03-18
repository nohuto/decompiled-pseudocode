/*
 * XREFs of ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x14030B694
 * Callers:
 *     ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x140309230 (--1MULTIPANSURFLOCK@@QEAA@XZ.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14030AA60 (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x14030A8A0 (-ShadowUnLock@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall MULTIPANSURFLOCK::vUnLockShadowR(MULTIPANSURFLOCK *this, __int64 a2)
{
  _BYTE *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rcx
  struct _PANDEV *v7; // rcx

  v3 = (char *)this + 130;
  v4 = 760LL;
  do
  {
    v5 = 9LL;
    do
    {
      if ( *v3 == 1 )
      {
        v6 = *((_QWORD *)this + 4);
        if ( !v6 )
          v6 = *((_QWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v4 + v6));
        *v3 = 0;
      }
      v4 -= 8LL;
      --v3;
      --v5;
    }
    while ( v5 );
  }
  while ( v4 >= 184 );
  v7 = (struct _PANDEV *)*((_QWORD *)this + 4);
  if ( !v7 )
    v7 = (struct _PANDEV *)*((_QWORD *)this + 5);
  ShadowUnLock(v7, a2);
}
