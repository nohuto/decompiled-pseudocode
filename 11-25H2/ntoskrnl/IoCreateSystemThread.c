/*
 * XREFs of IoCreateSystemThread @ 0x140A16E30
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoCreateSystemThread(
        _WORD *Object,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        ULONG_PTR BugCheckParameter2,
        __int64 a8)
{
  _QWORD *Pool2; // rax
  void *v13; // rdi
  int SystemThread; // esi

  if ( (unsigned __int16)(*Object - 3) > 1u )
    KeBugCheckEx(0x148u, 0LL, BugCheckParameter2, (ULONG_PTR)Object, 0LL);
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = Object;
  Pool2[1] = BugCheckParameter2;
  Pool2[2] = a8;
  PsReferenceSiloContext(Object);
  SystemThread = PsCreateSystemThreadEx(a2, a3, a4, a5, a6, IopThreadStart, v13, 0LL, 0LL);
  if ( SystemThread < 0 )
  {
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)SystemThread;
}
