/*
 * XREFs of ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180050CC0
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18001E6D8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x180050AB8 (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800AC354 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x180106378 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBitmapSourceArray::ReleaseContents(CBitmapSourceArray *this, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx

  if ( *((_DWORD *)this + 6) )
  {
    v4 = 0LL;
    v5 = *((unsigned int *)this + 6);
    do
    {
      v6 = *(_QWORD *)(v4 + *(_QWORD *)this);
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
        *(_QWORD *)(v4 + *(_QWORD *)this) = 0LL;
      }
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 6) = 0;
  if ( a2 )
    DynArrayImpl<0>::ShrinkToSize((__int64)this, 8u);
}
