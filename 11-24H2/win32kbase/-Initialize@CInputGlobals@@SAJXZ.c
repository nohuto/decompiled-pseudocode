/*
 * XREFs of ?Initialize@CInputGlobals@@SAJXZ @ 0x140145D80
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x140145DEC (--0CInputGlobals@@AEAA@XZ.c)
 */

__int64 CInputGlobals::Initialize(void)
{
  CInputGlobals *v0; // rax
  __int64 v1; // rcx
  CInputGlobals *v2; // rbx
  __int64 v3; // rcx

  v0 = (CInputGlobals *)Win32AllocPoolZInitImpl(256LL, 0x98uLL, 0x67697355u);
  v2 = 0LL;
  if ( v0 )
    v2 = CInputGlobals::CInputGlobals(v0);
  *(_QWORD *)(W32GetUserSessionState(v1) + 3064) = v2;
  return *(_QWORD *)(W32GetUserSessionState(v3) + 3064) == 0LL ? 0xC0000017 : 0;
}
