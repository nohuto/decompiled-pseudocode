/*
 * XREFs of DpiAcpiHandleAcpiEventWork @ 0x14024AB50
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiHandleAcpiEvent @ 0x1404291B4 (DpiAcpiHandleAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEventWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  bool v4; // si
  __int64 v5; // rdi
  __int64 v6; // rax
  void *v7; // rbx

  v4 = 0;
  while ( 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_14015DEE0);
    qword_14015DF18 = (__int64)KeGetCurrentThread();
    if ( v4 && !--dword_14015DF30 )
      KeSetEvent(&Event, 0, 0);
    v5 = qword_14015DF20;
    if ( (__int64 *)qword_14015DF20 == &qword_14015DF20 )
    {
      v5 = 0LL;
      ::IoWorkItem = 0LL;
    }
    else
    {
      if ( *(__int64 **)(qword_14015DF20 + 8) != &qword_14015DF20
        || (v6 = *(_QWORD *)qword_14015DF20, *(_QWORD *)(*(_QWORD *)qword_14015DF20 + 8LL) != qword_14015DF20) )
      {
        __fastfail(3u);
      }
      qword_14015DF20 = *(_QWORD *)qword_14015DF20;
      *(_QWORD *)(v6 + 8) = &qword_14015DF20;
      v4 = *(_DWORD *)(v5 + 24) == 2 && *(_DWORD *)(v5 + 28) == 4;
    }
    qword_14015DF18 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_14015DEE0);
    if ( !v5 )
      break;
    v7 = *(void **)(v5 + 16);
    DpiAcpiHandleAcpiEvent((PVOID)v5);
    ObfDereferenceObject(v7);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
