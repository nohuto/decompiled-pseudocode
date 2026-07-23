/*
 * XREFs of PnpCopyDevProperty @ 0x1409F2C84
 * Callers:
 *     PnpCopyDevPropertyArray @ 0x1409F2BB0 (PnpCopyDevPropertyArray.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     PnpFreeDevProperty @ 0x1409F2D54 (PnpFreeDevProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCopyDevProperty(__int64 a1, ULONG a2, __int64 a3)
{
  int PWSTR; // edi
  _WORD *v7; // rcx
  unsigned int v8; // eax
  __int64 Pool2; // rax

  PWSTR = 0;
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  v7 = *(_WORD **)(a1 + 24);
  if ( v7 )
  {
    PWSTR = PnpAllocatePWSTR(v7, 0x7FFFFFFFuLL, a2, (PVOID *)(a3 + 24));
    if ( PWSTR < 0 )
      goto LABEL_7;
  }
  v8 = *(_DWORD *)(a3 + 36);
  if ( v8 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, v8, a2);
    *(_QWORD *)(a3 + 40) = Pool2;
    if ( !Pool2 )
    {
      PWSTR = -1073741670;
LABEL_7:
      PnpFreeDevProperty(a3, a2);
      *(_OWORD *)a3 = 0LL;
      *(_OWORD *)(a3 + 16) = 0LL;
      *(_OWORD *)(a3 + 32) = 0LL;
      return (unsigned int)PWSTR;
    }
  }
  memmove(*(void **)(a3 + 40), *(const void **)(a1 + 40), *(unsigned int *)(a3 + 36));
  return (unsigned int)PWSTR;
}
