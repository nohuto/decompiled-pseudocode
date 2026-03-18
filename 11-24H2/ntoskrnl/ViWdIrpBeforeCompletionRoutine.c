/*
 * XREFs of ViWdIrpBeforeCompletionRoutine @ 0x140B9CB8C
 * Callers:
 *     IovpCompleteRequest2 @ 0x140BA6DE4 (IovpCompleteRequest2.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 */

void __fastcall ViWdIrpBeforeCompletionRoutine(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rcx
  void **v4; // rax

  v1 = *(_QWORD **)a1;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 67LL) >= *(_BYTE *)(*(_QWORD *)a1 + 29LL) )
  {
    KxAcquireSpinLock(&VfWdIrpListLock);
    if ( *((_BYTE *)v1 + 28) )
    {
      v3 = (_QWORD *)*v1;
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (void **)v1[1], *v4 != v1) )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = v4;
      *((_BYTE *)v1 + 28) = 0;
      --ViWdIrpListLength;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&VfWdIrpListLock);
    ExFreeToNPagedLookasideList(&ViWdIrpLookasideList, v1);
    *(_QWORD *)a1 = 0LL;
  }
}
