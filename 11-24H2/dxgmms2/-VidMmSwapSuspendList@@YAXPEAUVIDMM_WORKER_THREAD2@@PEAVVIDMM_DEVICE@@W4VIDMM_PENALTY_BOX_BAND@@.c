/*
 * XREFs of ?VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400A13EC
 * Callers:
 *     ?Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400A0830 (-Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400BB8F0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidMmSwapSuspendList(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  char result; // al

  v3 = (_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = a1 + 16LL * ((unsigned int)a3 - 1) + 5880;
  if ( *(_QWORD *)(v4 + 8) != a2 + 184
    || (v6 = *(_QWORD **)(a2 + 192), (_QWORD *)*v6 != v3)
    || (*v6 = v4, *(_QWORD *)(v4 + 8) = v6, v7 = *(_QWORD **)(v5 + 8), *v7 != v5) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)(a2 + 192) = v7;
  *v3 = v5;
  *v7 = v3;
  *(_QWORD *)(v5 + 8) = v3;
  result = *(_BYTE *)(a2 + 312);
  *(_BYTE *)(a2 + 312) = result ^ (a3 ^ result) & 7;
  return result;
}
