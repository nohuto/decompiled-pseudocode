/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x14015691C
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RegisterCoreMsgProviderPreferences @ 0x1401404F0 (RegisterCoreMsgProviderPreferences.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 CCursorClip::Initialize(void)
{
  __int64 v0; // rax
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rcx

  v0 = Win32AllocPoolZInitImpl(256LL, 0x118uLL, 0x31637355u);
  v2 = 0;
  v3 = v0;
  if ( v0 )
  {
    *(_OWORD *)v0 = 0LL;
    *(_OWORD *)(v0 + 16) = 0LL;
    *(_QWORD *)(v0 + 32) = 0LL;
    *(_QWORD *)(v0 + 40) = 0LL;
    memset((void *)(v0 + 48), 0, 0xC8uLL);
    *(_DWORD *)(v3 + 248) = 0;
    *(_QWORD *)(v3 + 256) = 0LL;
    *(_DWORD *)(v3 + 264) = 0;
    *(_WORD *)(v3 + 268) = 0;
    *(_QWORD *)(v3 + 272) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v1) + 36296) = v3;
  if ( *(_QWORD *)(W32GetUserSessionState(v4) + 36296) )
    RegisterCoreMsgProviderPreferences(
      0LL,
      0,
      2u,
      0LL,
      (__int64)lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_);
  else
    return (unsigned int)-1073741801;
  return v2;
}
