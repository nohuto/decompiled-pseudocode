/*
 * XREFs of HalpAuditAllocateRsdtArrayTable @ 0x140C15EB0
 * Callers:
 *     HalpAuditEnumerateRsdts @ 0x140C15F58 (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140C1604C (HalpAuditEnumerateRsdtsInRange.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpAuditAllocateRsdtArrayTable(_DWORD **a1)
{
  unsigned int v1; // ebx
  int v3; // edi
  _DWORD *Pool2; // rax
  _DWORD *v5; // rsi
  _DWORD *v6; // rdi

  v1 = 0;
  if ( *a1 )
    v3 = 2 * **a1;
  else
    v3 = 4;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, (unsigned int)(32 * v3 + 8), 0x416C6148uLL);
  v5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v3;
    v6 = *a1;
    if ( *a1 )
    {
      Pool2[1] = v6[1];
      memmove(Pool2 + 2, v6 + 2, 32LL * (unsigned int)v6[1]);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      Pool2[1] = 0;
    }
    *a1 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
