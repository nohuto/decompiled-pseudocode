/*
 * XREFs of VidSchiEnsureHwFlipQueueLog @ 0x1400D761C
 * Callers:
 *     VidSchSubmitCommandToHwQueue @ 0x1400497F0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1400D6BF0 (VidSchSubmitCommand.c)
 *     VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x140108350 (VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     ?DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z @ 0x1400462A8 (-DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z.c)
 */

__int64 __fastcall VidSchiEnsureHwFlipQueueLog(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // ecx
  __int64 result; // rax
  __int64 Pool2; // rax
  __int64 v11; // rcx
  int v12; // eax
  ADAPTER_RENDER *v13; // rcx
  _DWORD v14[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v6 = *((_QWORD *)a1 + a2 + 429);
  if ( !v6 )
    return 0LL;
  v7 = 304LL * a3;
  v8 = 0;
  if ( *(_QWORD *)(v7 + v6 + 448) )
    return (unsigned int)v8;
  *(_DWORD *)(v7 + v6 + 376) = 0;
  *(_DWORD *)(v7 + v6 + 372) = 64;
  Pool2 = ExAllocatePool2(64LL, 1024LL, 845310294LL);
  *(_QWORD *)(v7 + v6 + 448) = Pool2;
  v11 = Pool2;
  if ( Pool2 )
  {
    v12 = *(_DWORD *)(v7 + v6 + 372);
    v14[3] = 0;
    v15 = v11;
    v13 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 1);
    v14[0] = a2;
    v14[1] = a3;
    v14[2] = v12;
    v8 = ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(v13, (const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *)v14);
    if ( v8 >= 0 )
      return (unsigned int)VidSchiSetInterruptTargetPresentId(a1, a2, a3, 0LL, 1, 0);
    return (unsigned int)v8;
  }
  WdLogSingleEntry0(3LL);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 8298;
  return result;
}
