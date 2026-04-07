/*
 * XREFs of ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800264A8
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x180021BEC (--1CButton@@MEAA@XZ.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180025180 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x18006F03C (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x1800779FC (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?CleanupThemeStatics@CWindowIconic@@SAXXZ @ 0x18007A4D4 (-CleanupThemeStatics@CWindowIconic@@SAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CBitmapSourceArray::ReleaseContents(CBitmapSourceArray *this, char a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  CBaseObject *v6; // rcx

  if ( *((_DWORD *)this + 6) )
  {
    v4 = *((unsigned int *)this + 6);
    v5 = 0LL;
    do
    {
      v6 = *(CBaseObject **)(v5 + *(_QWORD *)this);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *(_QWORD *)(v5 + *(_QWORD *)this) = 0LL;
      }
      v5 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  *((_DWORD *)this + 6) = 0;
  if ( a2 )
    DynArrayImpl<0>::ShrinkToSize((__int64)this, 8u);
}
