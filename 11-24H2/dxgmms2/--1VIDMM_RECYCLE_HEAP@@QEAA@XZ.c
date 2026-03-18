/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1400F6B20
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400FD8B8 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?OnEnqueue@VIDMM_TASK_IDLE@@UEAAXPEAUVIDMM_WORKER_THREAD2@@@Z @ 0x1400F6C10 (-OnEnqueue@VIDMM_TASK_IDLE@@UEAAXPEAUVIDMM_WORKER_THREAD2@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP(VIDMM_RECYCLE_HEAP *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = (_QWORD *)*v2;
        if ( !*v2 )
          break;
        v6 = v2;
LABEL_18:
        *v6 = 0LL;
        v2 = v5;
      }
      v6 = v2 + 1;
      v5 = (_QWORD *)v2[1];
      if ( v5 )
        goto LABEL_18;
      v7 = v2[2];
      VIDMM_TASK_IDLE::OnEnqueue((VIDMM_TASK_IDLE *)v2, 0LL);
      v8 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 )
        break;
      v2 = (_QWORD *)v8;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (_QWORD *)*v3;
        if ( !*v3 )
          break;
        v10 = v3;
LABEL_20:
        *v10 = 0LL;
        v3 = v9;
      }
      v10 = v3 + 1;
      v9 = (_QWORD *)v3[1];
      if ( v9 )
        goto LABEL_20;
      v11 = v3[2];
      VIDMM_TASK_IDLE::OnEnqueue((VIDMM_TASK_IDLE *)v3, 0LL);
      v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        break;
      v3 = (_QWORD *)v12;
    }
  }
  *((_QWORD *)this + 7) = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
        v14 = v4;
LABEL_22:
        *v14 = 0LL;
        v4 = v13;
      }
      v14 = v4 + 1;
      v13 = (_QWORD *)v4[1];
      if ( v13 )
        goto LABEL_22;
      v15 = v4[2];
      VIDMM_TASK_IDLE::OnEnqueue((VIDMM_TASK_IDLE *)v4, 0LL);
      v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v16 )
        break;
      v4 = (_QWORD *)v16;
    }
  }
  *((_QWORD *)this + 8) = 0LL;
}
