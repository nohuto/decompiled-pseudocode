/*
 * XREFs of PoGetWorkloadClassCount @ 0x140B61E88
 * Callers:
 *     KiInitializeWpsWorkloadClasses @ 0x140B58790 (KiInitializeWpsWorkloadClasses.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C35D58 (PpmHeteroInitializeIntelWpsSupport.c)
 *     PpmHeteroInitializeAmdWpsSupport @ 0x140C3611C (PpmHeteroInitializeAmdWpsSupport.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PoGetWorkloadClassCount(_DWORD *a1)
{
  char v1; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CpuVendor; // al
  int v16; // eax

  v1 = 0;
  if ( !a1 )
    return v1;
  *a1 = 1;
  if ( PpmHeteroHgsThreadDisabled )
    return v1;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (PpmWpsSimulationOverride & 1) != 0 )
  {
    _RAX = (unsigned __int64)PpmWpsSimulationOverride >> 52;
  }
  else
  {
    CpuVendor = CurrentPrcb->CpuVendor;
    if ( CpuVendor == 2 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX < 7 )
        return v1;
      _RAX = 6LL;
      __asm { cpuid }
      if ( (_RAX & 0x800000) == 0 )
        return v1;
      v16 = BYTE1(_RCX);
      goto LABEL_13;
    }
    if ( CpuVendor != 1 )
      return v1;
    _RAX = 2147483681LL;
    __asm { cpuid }
    if ( (_RAX & 0x400000) == 0 )
      return v1;
    _RAX = 2147483687LL;
    __asm { cpuid }
  }
  v16 = _RAX & 0xF;
LABEL_13:
  v1 = 1;
  *a1 = v16;
  if ( (unsigned int)(v16 - 1) > 7 )
  {
    *a1 = 1;
    return 0;
  }
  return v1;
}
