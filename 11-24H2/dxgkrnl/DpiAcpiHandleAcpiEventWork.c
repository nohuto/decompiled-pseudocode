/*
 * XREFs of DpiAcpiHandleAcpiEventWork @ 0x140251980
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiHandleAcpiEvent @ 0x140428EBC (DpiAcpiHandleAcpiEvent.c)
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
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_140160EA0);
    qword_140160ED8 = (__int64)KeGetCurrentThread();
    if ( v4 && !--dword_140160EF0 )
      KeSetEvent(&Event, 0, 0);
    v5 = qword_140160EE0;
    if ( (__int64 *)qword_140160EE0 == &qword_140160EE0 )
    {
      v5 = 0LL;
      ::IoWorkItem = 0LL;
    }
    else
    {
      if ( *(__int64 **)(qword_140160EE0 + 8) != &qword_140160EE0
        || (v6 = *(_QWORD *)qword_140160EE0, *(_QWORD *)(*(_QWORD *)qword_140160EE0 + 8LL) != qword_140160EE0) )
      {
        __fastfail(3u);
      }
      qword_140160EE0 = *(_QWORD *)qword_140160EE0;
      *(_QWORD *)(v6 + 8) = &qword_140160EE0;
      v4 = *(_DWORD *)(v5 + 24) == 2 && *(_DWORD *)(v5 + 28) == 4;
    }
    qword_140160ED8 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_140160EA0);
    if ( !v5 )
      break;
    v7 = *(void **)(v5 + 16);
    DpiAcpiHandleAcpiEvent((PVOID)v5);
    ObfDereferenceObject(v7);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
