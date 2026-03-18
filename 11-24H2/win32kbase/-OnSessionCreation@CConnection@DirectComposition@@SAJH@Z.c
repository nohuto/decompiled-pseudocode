/*
 * XREFs of ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1400CEA60
 * Callers:
 *     DCompositionSessionInitialize @ 0x1400CEA40 (DCompositionSessionInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z @ 0x1400CEAFC (-AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1400CEB80 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1400CED90 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnSessionCreation(int a1)
{
  __int64 DCompSessionState; // rdi
  struct DirectComposition::CCriticalSection **v3; // rdx
  int v4; // ebx
  DirectComposition::CConnection *v5; // rax

  DCompSessionState = W32GetDCompSessionState();
  v4 = DirectComposition::AllocateAndInitializeCriticalSection((DirectComposition *)(DCompSessionState + 32), v3);
  if ( v4 >= 0 && (a1 || (unsigned int)PsGetCurrentProcessSessionId()) )
  {
    v5 = (DirectComposition::CConnection *)Win32AllocPoolZInitImpl(256LL, 0x26C70uLL, 0x63634344u);
    if ( v5 )
      v5 = (DirectComposition::CConnection *)DirectComposition::CConnection::CConnection(v5);
    *(_QWORD *)(DCompSessionState + 16) = v5;
    if ( v5 )
      return (unsigned int)DirectComposition::CConnection::Initialize(v5);
    else
      return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
