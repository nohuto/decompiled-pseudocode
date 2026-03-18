/*
 * XREFs of ApiSetEditionPostRitSound @ 0x1C0207540
 * Callers:
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B5CA0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B5DF0 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01B60C0 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6200 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6470 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C01B6640 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6690 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6770 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6830 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01B6E10 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6F50 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B7380 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01B7510 (-xxxTwoKeysDown@@YAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionPostRitSound(unsigned int a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02963F8;
  if ( qword_1C02963F8 )
  {
    result = (__int64 (*)(void))qword_1C02963F8();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296400;
      if ( qword_1C0296400 )
        return (__int64 (*)(void))qword_1C0296400(a1, 0LL, a3);
    }
  }
  return result;
}
