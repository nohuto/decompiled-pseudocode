/*
 * XREFs of IopAllocateBackpocketIrp @ 0x140595CD8
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x1403724FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14037286C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x140372F44 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x1403731E8 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x1403734C0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IopIsActivityTracingEnabled @ 0x140375090 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x14043F410 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x140454AF0 (IopInitActivityIdIrp.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  PIRP v8; // rbx
  __int64 v9; // rdx
  LARGE_INTEGER v10; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 > byte_140F8C840 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140F8C818 != CurrentThread )
    {
      v10.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140F8C810, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140F8C820, Executive, 0, 0, &v10) == 258 )
        {
          LOBYTE(v9) = v3;
          result = IopAllocateIrpExReturn(a1, v9, 0LL);
          if ( result )
            return result;
        }
      }
      v8 = qword_140F8C808;
      IoInitializeIrp(qword_140F8C808, 72 * v3 + 352, v3 + 2);
      v8->AllocationFlags = 33;
      qword_140F8C818 = (__int64)KeGetCurrentThread();
      goto LABEL_10;
    }
    v8 = qword_140F8C838;
    if ( qword_140F8C838 )
    {
LABEL_21:
      qword_140F8C838 = *(PIRP *)&qword_140F8C838->Type;
      IoInitializeIrp(v8, 72 * a2 + 352, a2 + 2);
      v8->Tail.Overlay.CurrentStackLocation -= 2;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      v8->AllocationFlags = 33;
      goto LABEL_22;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)qword_140F8C7E8 == CurrentThread )
  {
    v8 = qword_140F8C838;
    if ( !qword_140F8C838 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_21;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_140F8C7E0, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_140F8C7F0, Executive, 0, 0, &Timeout) == 258 )
    {
      LOBYTE(v6) = v3;
      result = IopAllocateIrpExReturn(a1, v6, 0LL);
      if ( result )
        return result;
    }
  }
  v8 = qword_140F8C7D8;
  IoInitializeIrp(qword_140F8C7D8, 72 * v3 + 352, v3 + 2);
  v8->AllocationFlags = 33;
  qword_140F8C7E8 = (__int64)KeGetCurrentThread();
LABEL_10:
  v8->Tail.Overlay.CurrentStackLocation -= 2;
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
LABEL_22:
  v8->StackCount -= 2;
  v8->CurrentLocation -= 2;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp((__int64)v8);
  return (__int64)v8;
}
