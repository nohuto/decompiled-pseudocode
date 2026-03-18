/*
 * XREFs of ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1400D08EC
 * Callers:
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1400D0998 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1400D0A6C (--1CTouchProcessor@@QEAA@XZ.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1402193C0 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::UnInitialize(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  char *v8; // rbx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 3264) )
  {
    DelayZonePalmRejection::Uninitialize();
    UserSessionState = W32GetUserSessionState(v1);
    v4 = UserSessionState;
    v5 = *(char **)(UserSessionState + 19336);
    if ( v5 )
    {
      VirtualTouchpadProcessor::~VirtualTouchpadProcessor(*(VirtualTouchpadProcessor **)(UserSessionState + 19336));
      GreDeleteFastMutex(v5);
      *(_QWORD *)(v4 + 19336) = 0LL;
    }
    v6 = W32GetUserSessionState(v3);
    v8 = *(char **)(v6 + 3264);
    if ( v8 )
    {
      CTouchProcessor::~CTouchProcessor(*(CTouchProcessor **)(v6 + 3264));
      GreDeleteFastMutex(v8);
    }
    *(_QWORD *)(W32GetUserSessionState(v7) + 3264) = 0LL;
  }
  return 0LL;
}
