/*
 * XREFs of CmpAllocatePostBlock @ 0x140AE51DC
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpAllocatePostBlock(int a1, int a2, __int64 a3, __int64 a4)
{
  _BOOL8 v8; // rbp
  __int64 Pool2; // rdi
  __int64 v11; // rdx
  ULONG_PTR v12; // rcx
  struct _KEVENT *v13; // rax
  int v14; // ebx
  __int64 v15; // rax
  _QWORD *v16; // rax

  v8 = ((a1 - 2) & 0xFFFFFFFD) == 0;
  Pool2 = ExAllocatePool2(v8 + 256, 0x48uLL, 0x62704D43u);
  if ( !Pool2 )
    return 0LL;
  *(_DWORD *)(Pool2 + 56) = a2 | a1;
  if ( ((a2 | a1) & 0x10000) != 0 )
  {
    *(_QWORD *)(Pool2 + 48) = 0LL;
    v11 = 256LL;
    if ( (unsigned int)(a1 - 3) > 1 )
      v11 = 64LL;
    v12 = (unsigned int)v11 | 1LL;
    if ( !v8 )
      v12 = v11;
    v13 = (struct _KEVENT *)ExAllocatePool2(v12, 0x70uLL, 0x34344D43u);
    *(_QWORD *)(Pool2 + 64) = v13;
    if ( v13 )
    {
      v14 = a1 - 1;
      if ( v14 )
      {
        if ( v14 == 2 )
        {
          *(_OWORD *)&v13->Header.Lock = 0LL;
          v13->Header.WaitListHead.Blink = 0LL;
        }
      }
      else
      {
        KeInitializeEvent(v13, SynchronizationEvent, 0);
      }
      return Pool2;
    }
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
  *(_QWORD *)(Pool2 + 64) = *(_QWORD *)(a4 + 64);
  v15 = ExAllocatePool2(v8 + 256, 0x18uLL, 0x35344D43u);
  *(_QWORD *)(Pool2 + 48) = v15;
  if ( !v15 )
    goto LABEL_14;
  *(_QWORD *)(v15 + 16) = a3;
  v16 = *(_QWORD **)(Pool2 + 48);
  v16[1] = v16;
  *v16 = v16;
  return Pool2;
}
