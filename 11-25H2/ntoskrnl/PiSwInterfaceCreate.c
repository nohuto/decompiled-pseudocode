/*
 * XREFs of PiSwInterfaceCreate @ 0x14095E95C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1409A3A80 (PiSwCompleteCreate.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x140839154 (PnpAllocatePWSTR.c)
 *     PnpCopyDevPropertyArray @ 0x140839FDC (PnpCopyDevPropertyArray.c)
 *     PiSwInterfaceFree @ 0x1409A3F4C (PiSwInterfaceFree.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwInterfaceCreate(_WORD *a1, __int64 a2, unsigned int a3, PVOID *a4)
{
  __int64 Pool2; // rax
  int PWSTR; // ebx
  __int64 v10; // r8

  Pool2 = ExAllocatePool2(0x100uLL);
  *a4 = (PVOID)Pool2;
  if ( Pool2 )
  {
    PWSTR = PnpAllocatePWSTR(a1, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)(Pool2 + 16));
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, (_DWORD *)*a4 + 8, (PVOID *)*a4 + 3);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
  else
  {
    PWSTR = -1073741670;
  }
  if ( *a4 )
  {
    PiSwInterfaceFree(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}
