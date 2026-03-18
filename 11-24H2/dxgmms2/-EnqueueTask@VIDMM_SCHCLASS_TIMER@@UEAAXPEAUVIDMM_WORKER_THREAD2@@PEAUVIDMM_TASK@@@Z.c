/*
 * XREFs of ?EnqueueTask@VIDMM_SCHCLASS_TIMER@@UEAAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400A64F0
 * Callers:
 *     <none>
 * Callees:
 *     CompareTaskExpiration @ 0x1400A62C0 (CompareTaskExpiration.c)
 */

void __fastcall VIDMM_SCHCLASS_TIMER::EnqueueTask(
        VIDMM_SCHCLASS_TIMER *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK *a3)
{
  char *v3; // r14
  char v4; // bl
  _QWORD *v5; // rdi
  struct VIDMM_TASK *v6; // rsi
  _QWORD *v7; // rax

  v3 = (char *)this + 24;
  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 3);
  v6 = a3;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)CompareTaskExpiration((__int64 *)v6 + 7, (__int64)v5) < 0 )
      {
        v7 = (_QWORD *)*v5;
        if ( !*v5 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v5[1];
        if ( !v7 )
        {
          v4 = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
  LOBYTE(a3) = v4;
  RtlAvlInsertNodeEx(v3, v5, a3, (char *)v6 + 8);
}
