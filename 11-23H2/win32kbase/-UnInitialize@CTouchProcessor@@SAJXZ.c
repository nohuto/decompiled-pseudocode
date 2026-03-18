/*
 * XREFs of ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1C00B71A0
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00B6FA4 (UnInitializeInputComponents.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00B743C (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00B76E0 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1C01F05A8 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::UnInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rbx

  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3424) )
  {
    DelayZonePalmRejection::Uninitialize();
    v8 = (char *)VirtualTouchpadProcessor::s_instance;
    if ( VirtualTouchpadProcessor::s_instance )
    {
      VirtualTouchpadProcessor::~VirtualTouchpadProcessor((VirtualTouchpadProcessor *)VirtualTouchpadProcessor::s_instance);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v8);
      VirtualTouchpadProcessor::s_instance = 0LL;
    }
    v9 = SGDGetUserSessionState(v5, v4, v6, v7);
    v14 = *(char **)(v9 + 3424);
    if ( v14 )
    {
      CTouchProcessor::~CTouchProcessor(*(CTouchProcessor **)(v9 + 3424));
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
    }
    *(_QWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 3424) = 0LL;
  }
  return 0LL;
}
