/*
 * XREFs of AMLIEvalPkgDataElement @ 0x14002CC08
 * Callers:
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     ACPIFanFSTCallback @ 0x14002C010 (ACPIFanFSTCallback.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x14009DCC8 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIThermalBuildConstraints @ 0x1400A7698 (ACPIThermalBuildConstraints.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1400AEEAC (ACPIProcessPhysicalDeviceLocationPackage.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     EvalPackageElement @ 0x14002CD0C (EvalPackageElement.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 */

__int64 __fastcall AMLIEvalPkgDataElement(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  const void *ObjectTypeName; // rax

  dword_140089138 = 0;
  v5 = a2;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  if ( (gDebugger & 8) != 0 )
    PrintDebugMessage(0x31u, KeGetCurrentThread(), (const void *)a1, (const void *)v5, 0LL);
  if ( *(_WORD *)(a1 + 2) == 4 )
  {
    v6 = EvalPackageElement(*(_QWORD *)(a1 + 32), (unsigned int)v5, a3);
    if ( v6 == 32772 )
      return 259;
  }
  else
  {
    v6 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
    PrintDebugMessage(0x32u, ObjectTypeName, 0LL, 0LL, 0LL);
  }
  return v6;
}
