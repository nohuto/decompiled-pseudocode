/*
 * XREFs of PoInitHeteroDetection @ 0x140C2D09C
 * Callers:
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140B5599C (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeWpsWorkloadClasses @ 0x140B56740 (KiInitializeWpsWorkloadClasses.c)
 *     PpmInitHeteroEngine @ 0x140C316D8 (PpmInitHeteroEngine.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140C319A0 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PpmHeteroInitializeWpsSimSupport @ 0x140C33B90 (PpmHeteroInitializeWpsSimSupport.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C33C18 (PpmHeteroInitializeIntelWpsSupport.c)
 *     PpmHeteroInitializeAmdWpsSupport @ 0x140C33FDC (PpmHeteroInitializeAmdWpsSupport.c)
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
