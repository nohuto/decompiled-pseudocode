/*
 * XREFs of ?EnqueueTask@VIDMM_SCHCLASS_REALTIME@@UEAAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400A64C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SCHCLASS_REALTIME::EnqueueTask(
        VIDMM_SCHCLASS_REALTIME *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK *a3)
{
  char **v3; // rax
  char *v4; // rcx
  char *v5; // r8

  v3 = (char **)*((_QWORD *)this + 4);
  v4 = (char *)this + 24;
  v5 = (char *)a3 + 8;
  if ( *v3 != v4 )
    __fastfail(3u);
  *(_QWORD *)v5 = v4;
  *((_QWORD *)v5 + 1) = v3;
  *v3 = v5;
  *((_QWORD *)v4 + 1) = v5;
}
