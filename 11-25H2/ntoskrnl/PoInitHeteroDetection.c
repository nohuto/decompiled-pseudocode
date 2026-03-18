/*
 * XREFs of PoInitHeteroDetection @ 0x140C1BF98
 * Callers:
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140B4599C (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeWpsWorkloadClasses @ 0x140B4679C (KiInitializeWpsWorkloadClasses.c)
 *     PpmInitHeteroEngine @ 0x140C205D8 (PpmInitHeteroEngine.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140C208A0 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PpmHeteroInitializeWpsSimSupport @ 0x140C22954 (PpmHeteroInitializeWpsSimSupport.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C229DC (PpmHeteroInitializeIntelWpsSupport.c)
 *     PpmHeteroInitializeAmdWpsSupport @ 0x140C22DA0 (PpmHeteroInitializeAmdWpsSupport.c)
 */

char PoInitHeteroDetection()
{
  struct _KPRCB *CurrentPrcb; // rax
  char v1; // bl
  unsigned __int8 CpuVendor; // al
  __int64 v3; // rcx
  int HeteroConfigBuffer; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 1;
  if ( PpmWpsSimulationOverride )
  {
    PpmHeteroInitializeWpsSimSupport();
  }
  else
  {
    CpuVendor = CurrentPrcb->CpuVendor;
    if ( CpuVendor == 2 )
    {
      PpmHeteroInitializeIntelWpsSupport();
    }
    else if ( CpuVendor == 1 )
    {
      PpmHeteroInitializeAmdWpsSupport();
    }
  }
  if ( (int)PpmInitHeteroEngine() < 0 )
    return 0;
  PpmUpdateArchitecturalEfficiencyClass();
  KiInitializeWpsWorkloadClasses(v3);
  HeteroConfigBuffer = KiAllocateHeteroConfigBuffer();
  if ( HeteroConfigBuffer < 0 )
    KeBugCheckEx(0x32u, HeteroConfigBuffer, 0xDuLL, 0LL, 0LL);
  return v1;
}
