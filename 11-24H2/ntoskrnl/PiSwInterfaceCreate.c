/*
 * XREFs of PiSwInterfaceCreate @ 0x1409F82E4
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1408B2584 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1409F8538 (PiSwCompleteCreate.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1408D3DA4 (PnpAllocatePWSTR.c)
 *     PiSwInterfaceFree @ 0x1409F8A14 (PiSwInterfaceFree.c)
 *     PnpCopyDevPropertyArray @ 0x1409FA240 (PnpCopyDevPropertyArray.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwInterfaceCreate(_WORD *a1, int a2, int a3, PVOID *a4)
{
  __int64 Pool2; // rax
  int PWSTR; // ebx
  int v10; // r8d

  Pool2 = ExAllocatePool2(0x100uLL);
  *a4 = (PVOID)Pool2;
  if ( Pool2 )
  {
    PWSTR = PnpAllocatePWSTR(a1, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)(Pool2 + 16));
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, *(_DWORD *)a4 + 32, (__int64)*a4 + 24);
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
