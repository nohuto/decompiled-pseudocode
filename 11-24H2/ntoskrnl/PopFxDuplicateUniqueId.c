/*
 * XREFs of PopFxDuplicateUniqueId @ 0x1405CE970
 * Callers:
 *     PopFxCreateDeviceCommon @ 0x1405CE344 (PopFxCreateDeviceCommon.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxDuplicateUniqueId(const void **a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  unsigned __int16 v6; // si
  void *Pool2; // rax
  void *v8; // rbp

  v2 = *(unsigned __int16 *)a1;
  if ( *((unsigned __int16 *)a1 + 1) >= (unsigned __int64)(v2 + 2) )
  {
    v6 = v2 + 2;
    Pool2 = (void *)ExAllocatePool2(0x40uLL, v6, 0x4D584650u);
    v5 = 0;
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, a1[1], v6);
      *(_WORD *)a2 = *(_WORD *)a1;
      *(_QWORD *)(a2 + 8) = v8;
      *(_WORD *)(a2 + 2) = v6;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
