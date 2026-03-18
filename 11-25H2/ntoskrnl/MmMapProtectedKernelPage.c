/*
 * XREFs of MmMapProtectedKernelPage @ 0x140A9CC18
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmMapProtectedKernelPage(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rdi
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  ULONG_PTR v4; // rbx

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  result = MiMakeValidPte((unsigned __int64)PteAddress, v2, 536870913);
  v4 = result;
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (result & 0x20) == 0 )
    {
      result = MiGetPteAddress(0xFFFF800000000000uLL);
      if ( (unsigned __int64)PteAddress >= result )
        result = MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)PteAddress, v4, 128);
    }
  }
  *PteAddress = v4;
  return result;
}
