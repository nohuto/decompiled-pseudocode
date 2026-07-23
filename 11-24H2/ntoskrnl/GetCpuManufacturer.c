/*
 * XREFs of GetCpuManufacturer @ 0x1406638BC
 * Callers:
 *     GetMicrocodePatchData @ 0x140662BB8 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x140663208 (MicrocodeUpdate.c)
 *     MicrocodeValidate @ 0x140663410 (MicrocodeValidate.c)
 * Callees:
 *     <none>
 */

bool __fastcall GetCpuManufacturer(int a1)
{
  _RAX = 0LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX == 1752462657 )
  {
    if ( (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 && a1 == 2 )
      return 1;
  }
  else if ( (_DWORD)_RBX == 1970169159 && (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270 )
  {
    return a1 == 1;
  }
  return 0;
}
