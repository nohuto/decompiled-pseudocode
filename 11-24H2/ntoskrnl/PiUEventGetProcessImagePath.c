/*
 * XREFs of PiUEventGetProcessImagePath @ 0x140724B20
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x1406F77B4 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14085B370 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x14085B5E0 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1408D2838 (PiUEventNotifyClient.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbCopyNW @ 0x1403D9E84 (RtlStringCbCopyNW.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventGetProcessImagePath(void *a1, _QWORD *a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  STRSAFE_PCNZWCH *v5; // rbx
  __int64 v6; // rbp
  wchar_t *Pool2; // rax
  void *v8; // r11
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  *a2 = L"unknown";
  Object = 0LL;
  v3 = PsLookupProcessByProcessId(a1, (PEPROCESS *)&Object);
  v4 = Object;
  if ( v3 >= 0 )
  {
    v5 = (STRSAFE_PCNZWCH *)*((_QWORD *)Object + 106);
    if ( v5 )
    {
      if ( *(_WORD *)v5 )
      {
        v6 = *(unsigned __int16 *)v5;
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          if ( RtlStringCbCopyNW(Pool2, v6 + 2, v5[1], *(unsigned __int16 *)v5) < 0 )
            ExFreePoolWithTag(v8, 0x59706E50u);
          else
            *a2 = v8;
        }
      }
    }
  }
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
}
