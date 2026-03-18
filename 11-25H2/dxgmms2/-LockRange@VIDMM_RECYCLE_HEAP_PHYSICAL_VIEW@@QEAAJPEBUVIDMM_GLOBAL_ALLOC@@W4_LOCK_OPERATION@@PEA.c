/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1400C4570
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1400C5218 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400C0960 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C4888 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400CE1B0 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1400CE7D0 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        const struct VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _BYTE *v6; // rsi
  void *v7; // rdi
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v8; // r8
  unsigned __int64 v10; // r15
  char v11; // bp
  int v12; // r10d
  char *v13; // r13
  char *v14; // r12
  _QWORD *v15; // rax
  enum _LOCK_OPERATION v16; // r8d
  _QWORD *v17; // rbx
  void *v18; // rsi
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rsi
  struct _EPROCESS *CurrentProcess; // r9
  int v30; // ecx
  enum _LOCK_OPERATION v32; // [rsp+A0h] [rbp+18h] BYREF
  struct VIDMM_SEGMENT *v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v6 = a6;
  v7 = a5;
  v8 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v10 = a6 - a5;
  v11 = 0;
  v12 = -1;
  v13 = 0LL;
  v14 = 0LL;
  while ( v8 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) && v12 < 0 )
  {
    if ( *((_QWORD *)v8 - 1) > (unsigned __int64)a5 )
    {
      if ( *((_QWORD *)v8 - 2) < (unsigned __int64)a6 )
      {
        v12 = 0;
      }
      else
      {
        v12 = 1;
        v14 = (char *)v8 - 24;
      }
    }
    else
    {
      v12 = -1;
      v13 = (char *)v8 - 24;
    }
    v8 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v8;
  }
  v15 = (_QWORD *)operator new(48LL, 0x32316956u, 258LL);
  v17 = v15;
  if ( !v15 )
  {
    _InterlockedIncrement(&dword_14008176C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6042;
    DxgkLogInternalTriageEvent(v26, 262145LL);
    return 3221225495LL;
  }
  v15[2] = v6;
  v18 = 0LL;
  *v15 = 0LL;
  v15[1] = v7;
  v15[5] = this;
  v15[3] = 0LL;
  v15[4] = 0LL;
  v19 = *(_QWORD *)this;
  a6 = 0LL;
  a5 = 0LL;
  LOBYTE(v32) = 0;
  v20 = **(_DWORD **)(v19 + 32);
  if ( (unsigned int)(v20 - 3) <= 3 && (unsigned int)(v20 - 5) > 1 )
  {
    v27 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v19 + 56),
            (unsigned __int64)v7,
            v10,
            v20 == 4,
            (void **)&a6,
            (void **)&a5,
            0,
            (unsigned __int8 *)&v32);
    v28 = v27;
    if ( v27 < 0 )
    {
      operator delete(v17);
      WdLogSingleEntry5(
        3LL,
        v10,
        v7,
        *(_QWORD *)this,
        v28,
        **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 8LL));
      result = (unsigned int)v28;
      WdLogGlobalForLineNumber = 6068;
      return result;
    }
    v7 = a6;
    v18 = a5;
    v11 = v32;
  }
  v21 = VIDMM_MDL_RANGE::Lock((VIDMM_MDL_RANGE *)v17, v7, v16, v33, a2);
  v22 = **(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (unsigned int)(v22 - 3) <= 3 && (unsigned int)(v22 - 5) > 1 )
  {
    if ( v11 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
    v30 = dword_1400814E4;
    if ( (unsigned __int64)qword_1400812D8 > 0x53333333 )
      v30 = dword_1400814D4;
    if ( v10 <= (unsigned int)(v30 << 20) )
      VidMmUnmapView(CurrentProcess, v18);
    else
      VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(*(_QWORD *)this + 56LL), v18);
  }
  if ( v21 < 0 )
  {
    operator delete(v17);
  }
  else
  {
    if ( v13 )
      v23 = v13 + 24;
    else
      v23 = (_QWORD *)(v17[5] + 8LL);
    if ( v14 )
      v24 = (__int64)(v14 + 24);
    else
      v24 = v17[5] + 8LL;
    *v23 = v17 + 3;
    *(_QWORD *)(v24 + 8) = v17 + 3;
    v17[4] = v23;
    v17[3] = v24;
  }
  return (unsigned int)v21;
}
