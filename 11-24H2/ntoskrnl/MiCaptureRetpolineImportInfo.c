/*
 * XREFs of MiCaptureRetpolineImportInfo @ 0x140A83CC0
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A83AFC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlCaptureRetpolineImportRvas @ 0x1402F0074 (RtlCaptureRetpolineImportRvas.c)
 *     MiIsRetpolineEnabled @ 0x14043F7B4 (MiIsRetpolineEnabled.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404505E0 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140455510 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 */

__int64 __fastcall MiCaptureRetpolineImportInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *Pool; // rbx
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 result; // rax
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Pool = 0LL;
  v4 = *(_QWORD *)(a2 + 96);
  v10 = 0;
  v6 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  v8 = (unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)MiIsRetpolineEnabled();
  result = RtlCaptureRetpolineImportRvas(
             *(_QWORD *)(v7 + 48),
             *(_QWORD *)(v7 + 48),
             *(unsigned int *)(a1 + 64),
             v8,
             0LL,
             &v10);
  if ( (int)result >= 0 )
    goto LABEL_2;
  if ( (_DWORD)result == -1073741789 )
  {
    Pool = (_DWORD *)MiAllocatePool(0x100uLL, v10, 1767009613);
    if ( !Pool )
      return 3221225495LL;
    result = RtlCaptureRetpolineImportRvas(
               *(_QWORD *)(a1 + 48),
               *(_QWORD *)(a1 + 48),
               *(unsigned int *)(a1 + 64),
               v8,
               Pool,
               &v10);
    if ( (int)result >= 0 )
    {
LABEL_2:
      MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v6);
      *(_QWORD *)(*(_QWORD *)(v6 + 88) + 16LL) = Pool;
      MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v6);
      return 0LL;
    }
  }
  return result;
}
