/*
 * XREFs of ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14060D270
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     SmWorkItemQueue @ 0x14029F5CC (SmWorkItemQueue.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 */

__int64 __fastcall SmpDeviceIoCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, _QWORD *a3)
{
  NTSTATUS Status; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax

  Status = a2->IoStatus.Status;
  v5 = a3[5];
  if ( Status >= 0 )
  {
    if ( a2->IoStatus.Information < *((unsigned int *)a3 + 8) )
    {
      *((_DWORD *)a3 + 7) |= 1u;
      v7 = a3[2];
      if ( v7 )
        *(_DWORD *)(v7 + 4) = -1073741435;
      else
        *((_DWORD *)a3 + 2) = -1073741435;
    }
  }
  else
  {
    *((_DWORD *)a3 + 7) |= 1u;
    v6 = a3[2];
    if ( v6 )
      *(_DWORD *)(v6 + 4) = Status;
    else
      *((_DWORD *)a3 + 2) = Status;
  }
  IoFreeIrp(a2);
  if ( a3[2] )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 6928));
  if ( (*((_DWORD *)a3 + 7) & 4) != 0 )
  {
    KeSetEvent((PRKEVENT)(v5 + 6984), 1, 0);
  }
  else
  {
    SmWorkItemQueue();
    SmKmStoreDereference(*(_QWORD *)(v5 + 7576), *(_DWORD *)(v5 + 6832));
  }
  return 3221225494LL;
}
