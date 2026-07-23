/*
 * XREFs of PiUEventGetProcessImagePath @ 0x1407226B0
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x1406F57B4 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1408570E0 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140857350 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1408D0228 (PiUEventNotifyClient.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbCopyNW @ 0x1403CC204 (RtlStringCbCopyNW.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventGetProcessImagePath(void *a1, _QWORD *a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  STRSAFE_PCNZWCH *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  wchar_t *Pool2; // rax
  void *v9; // r11
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
      v6 = *(unsigned __int16 *)v5;
      if ( (_WORD)v6 )
      {
        v7 = *(unsigned __int16 *)v5;
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v6 + 2, 0x59706E50u);
        if ( Pool2 )
        {
          if ( RtlStringCbCopyNW(Pool2, v7 + 2, v5[1], *(unsigned __int16 *)v5) < 0 )
            ExFreePoolWithTag(v9, 0x59706E50u);
          else
            *a2 = v9;
        }
      }
    }
  }
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
}
