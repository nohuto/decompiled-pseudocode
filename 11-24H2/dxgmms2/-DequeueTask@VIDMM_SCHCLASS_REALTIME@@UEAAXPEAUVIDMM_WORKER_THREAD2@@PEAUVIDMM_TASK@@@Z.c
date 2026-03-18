/*
 * XREFs of ?DequeueTask@VIDMM_SCHCLASS_REALTIME@@UEAAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400A63C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SCHCLASS_REALTIME::DequeueTask(
        VIDMM_SCHCLASS_REALTIME *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK *a3)
{
  _QWORD *v3; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v3 = (_QWORD *)((char *)a3 + 8);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
}
