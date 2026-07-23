/*
 * XREFs of HalpErrorDeferredHandler @ 0x140552AD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpFreeDrsPool @ 0x140552B6C (HalpFreeDrsPool.c)
 *     HalpMemoryErrorDeferredHandler @ 0x140552D6C (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x140552F30 (HalpPmemErrorDeferredHandler.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall HalpErrorDeferredHandler(__int64 a1, const void *a2)
{
  __int64 v3; // rdi
  _DWORD *Pool2; // rax
  _DWORD *v5; // rbx
  int v6; // eax

  v3 = a1 - 8;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x1828uLL, 0x61656857u);
  v5 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a2, 0x1828uLL);
    HalpFreeDrsPool(v3);
    v6 = v5[7];
    if ( v6 == 1 )
    {
      HalpMemoryErrorDeferredHandler(v5);
    }
    else if ( v6 == 2 )
    {
      HalpPmemErrorDeferredHandler(v5);
    }
    ExFreePoolWithTag(v5, 0x61656857u);
  }
  else
  {
    HalpFreeDrsPool(v3);
  }
}
