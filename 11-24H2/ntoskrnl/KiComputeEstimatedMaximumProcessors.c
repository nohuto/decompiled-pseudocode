/*
 * XREFs of KiComputeEstimatedMaximumProcessors @ 0x1405B3A50
 * Callers:
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     HalEnumerateProcessors @ 0x14053EF20 (HalEnumerateProcessors.c)
 */

__int64 __fastcall KiComputeEstimatedMaximumProcessors(unsigned int *a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  unsigned int MaximumProcessorCount; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  bool v12; // zf
  __int64 result; // rax

  v6 = HalEnumerateProcessors(KeRegisteredProcessors);
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  if ( KeBootprocSpecified && KeBootprocSpecified < v6 )
    v6 = KeBootprocSpecified;
  if ( MaximumProcessorCount > 0x800 )
    MaximumProcessorCount = 2048;
  v8 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
  if ( MaximumProcessorCount <= v8 )
    v8 = MaximumProcessorCount;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
  if ( v8 <= v10 )
    v10 = v8;
  if ( KeNumprocSpecified && KeNumprocSpecified < v10 )
    v10 = KeNumprocSpecified;
  v11 = v10;
  if ( v6 <= v10 )
    v11 = v6;
  if ( !KeDynamicPartitioningSupported )
    v10 = v11;
  *a1 = v11;
  v12 = KeMaxprocSpecified == 0;
  result = v10;
  *a2 = v10;
  if ( !v12 )
    result = 2048LL;
  *a3 = result;
  return result;
}
