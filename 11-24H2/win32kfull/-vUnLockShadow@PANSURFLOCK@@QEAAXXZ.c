/*
 * XREFs of ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x14030B59C
 * Callers:
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140263A70 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x14026C480 (--1PANSURFLOCK@@QEAA@XZ.c)
 * Callees:
 *     ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x14030A8A0 (-ShadowUnLock@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PANSURFLOCK::vUnLockShadow(PANSURFLOCK *this, __int64 a2)
{
  _BYTE *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp

  v3 = (char *)this + 104;
  v4 = 760LL;
  do
  {
    v5 = 9LL;
    do
    {
      if ( *v3 == 1 )
      {
        EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + v4));
        *v3 = 0;
      }
      v4 -= 8LL;
      --v3;
      --v5;
    }
    while ( v5 );
  }
  while ( v4 >= 184 );
  ShadowUnLock(*((struct _PANDEV **)this + 2), a2);
}
