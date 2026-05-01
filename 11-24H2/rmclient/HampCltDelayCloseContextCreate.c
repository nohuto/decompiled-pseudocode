/*
 * XREFs of HampCltDelayCloseContextCreate @ 0x18001B6E0
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x18000D8B0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     MIDL_user_allocate @ 0x180002E30 (MIDL_user_allocate.c)
 *     HamConnectToServerEx @ 0x180011840 (HamConnectToServerEx.c)
 *     ?CreateInstance@HamActivityWrapper@@SAJPEAPEAV1@PEAX_K@Z @ 0x180019A78 (-CreateInstance@HamActivityWrapper@@SAJPEAPEAV1@PEAX_K@Z.c)
 *     HampCltDelayCloseContextDestroy @ 0x18001B788 (HampCltDelayCloseContextDestroy.c)
 */

__int64 __fastcall HampCltDelayCloseContextCreate(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  int Instance; // edi

  v2 = MIDL_user_allocate(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 0LL;
    PsmTimerInitialize(v2 + 2);
    Instance = HamConnectToServerEx((__int64)HamActivityWrapper::HamCallback, 0, 0LL, 0LL, 0LL, v3);
    if ( Instance < 0
      || (Instance = HamActivityWrapper::CreateInstance((struct HamActivityWrapper **)v3 + 1, (void *)*v3), Instance < 0) )
    {
      HampCltDelayCloseContextDestroy(v3);
    }
    else
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Instance;
}
