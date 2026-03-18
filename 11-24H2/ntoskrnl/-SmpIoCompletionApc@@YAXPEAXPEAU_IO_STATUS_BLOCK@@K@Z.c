/*
 * XREFs of ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14060ED80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     SmKmStoreDereference @ 0x14027A498 (SmKmStoreDereference.c)
 *     SmWorkItemQueue @ 0x14028F9CC (SmWorkItemQueue.c)
 */

void __fastcall SmpIoCompletionApc(__int64 a1, struct _IO_STATUS_BLOCK *a2)
{
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK *v3; // r9
  _DWORD *Pointer; // rcx

  Status = a2->Status;
  v3 = a2 - 2;
  if ( a2->Status < 0 )
  {
    HIDWORD(v3[1].Information) |= 1u;
    Pointer = v3[1].Pointer;
    if ( Pointer )
      Pointer[1] = Status;
    else
      LODWORD(v3->Information) = Status;
  }
  if ( v3[1].Pointer )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 6928));
  if ( (v3[1].Information & 0x400000000LL) != 0 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6984), 1, 0);
  }
  else
  {
    SmWorkItemQueue(a1, (unsigned __int64)v3, 1);
    SmKmStoreDereference(*(_QWORD *)(a1 + 7576), *(_DWORD *)(a1 + 6832));
  }
}
