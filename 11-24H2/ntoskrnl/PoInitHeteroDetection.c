/*
 * XREFs of PoInitHeteroDetection @ 0x140C2F1BC
 * Callers:
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140B579EC (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeWpsWorkloadClasses @ 0x140B58790 (KiInitializeWpsWorkloadClasses.c)
 *     PpmInitHeteroEngine @ 0x140C337F8 (PpmInitHeteroEngine.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140C33AC0 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PpmHeteroInitializeWpsSimSupport @ 0x140C35CD0 (PpmHeteroInitializeWpsSimSupport.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C35D58 (PpmHeteroInitializeIntelWpsSupport.c)
 *     PpmHeteroInitializeAmdWpsSupport @ 0x140C3611C (PpmHeteroInitializeAmdWpsSupport.c)
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
