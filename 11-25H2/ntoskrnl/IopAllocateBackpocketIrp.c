/*
 * XREFs of IopAllocateBackpocketIrp @ 0x140592628
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14035BA6C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x14035C250 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14035C508 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14035C7E0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x14043ECB0 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x140454288 (IopInitActivityIdIrp.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  PIRP v8; // rbx
  bool v9; // cl
  bool v10; // zf
  bool v11; // cl
  __int64 v12; // rdx
  bool v13; // dl
  LARGE_INTEGER v14; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 > byte_140F8C0C0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140F8C098 != CurrentThread )
    {
      v14.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140F8C090, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140F8C0A0, Executive, 0, 0, &v14) == 258 )
        {
          LOBYTE(v12) = v3;
          result = IopAllocateIrpExReturn(a1, v12, 0LL);
          if ( result )
            return result;
        }
      }
      v8 = qword_140F8C088;
      IoInitializeIrp(qword_140F8C088, 72 * v3 + 352, v3 + 2);
      v8->AllocationFlags = 33;
      qword_140F8C098 = (__int64)KeGetCurrentThread();
      goto LABEL_10;
    }
    v8 = qword_140F8C0B8;
    if ( qword_140F8C0B8 )
    {
      qword_140F8C0B8 = *(PIRP *)&qword_140F8C0B8->Type;
      IoInitializeIrp(v8, 72 * a2 + 352, a2 + 2);
      v8->Tail.Overlay.CurrentStackLocation -= 2;
      v8->CurrentLocation -= 2;
      v8->StackCount -= 2;
      v13 = (IopIrpExtensionStatus & 1) != 0;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      v10 = !v13 || (IopFunctionPointerMask & 4) == 0;
LABEL_23:
      v8->AllocationFlags = 33;
      goto LABEL_24;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)qword_140F8C068 == CurrentThread )
  {
    v8 = qword_140F8C0B8;
    if ( !qword_140F8C0B8 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    qword_140F8C0B8 = *(PIRP *)&qword_140F8C0B8->Type;
    IoInitializeIrp(v8, 72 * a2 + 352, a2 + 2);
    v8->Tail.Overlay.CurrentStackLocation -= 2;
    v8->CurrentLocation -= 2;
    v8->StackCount -= 2;
    v11 = (IopIrpExtensionStatus & 1) != 0;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
    v10 = !v11 || (IopFunctionPointerMask & 4) == 0;
    goto LABEL_23;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_140F8C060, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_140F8C070, Executive, 0, 0, &Timeout) == 258 )
    {
      LOBYTE(v6) = v3;
      result = IopAllocateIrpExReturn(a1, v6, 0LL);
      if ( result )
        return result;
    }
  }
  v8 = qword_140F8C058;
  IoInitializeIrp(qword_140F8C058, 72 * v3 + 352, v3 + 2);
  v8->AllocationFlags = 33;
  qword_140F8C068 = (__int64)KeGetCurrentThread();
LABEL_10:
  v8->CurrentLocation -= 2;
  v8->StackCount -= 2;
  v8->Tail.Overlay.CurrentStackLocation -= 2;
  v9 = (IopIrpExtensionStatus & 1) != 0;
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
  v10 = !v9 || (IopFunctionPointerMask & 4) == 0;
LABEL_24:
  if ( !v10 )
    IopInitActivityIdIrp((__int64)v8);
  return (__int64)v8;
}
