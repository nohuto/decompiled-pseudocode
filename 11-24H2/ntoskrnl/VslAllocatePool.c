/*
 * XREFs of VslAllocatePool @ 0x1404AB090
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslAllocatePool(ULONG_PTR a1, ULONG a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v7; // ebx
  struct _MDL *Pool2; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // ebx

  v7 = a1;
  if ( a1 > 0x1FA000 )
    return 3221225659LL;
  Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL, a1, a2);
  if ( !Pool2 )
    return 3221225626LL;
  v9 = ExAllocatePool2(0x40uLL, 0x48uLL, 0x54736D56u);
  v10 = (_QWORD *)v9;
  if ( !v9 )
  {
    v11 = -1073741670;
LABEL_5:
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v11;
  }
  v11 = VslpLockPagesForTransfer(v9, Pool2, v7, IoWriteAccess, 0);
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    goto LABEL_5;
  }
  *a3 = v10[7];
  *a4 = *v10;
  *a5 = v10;
  return 0LL;
}
