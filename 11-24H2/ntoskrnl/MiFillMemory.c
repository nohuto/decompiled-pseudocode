/*
 * XREFs of MiFillMemory @ 0x140402AB0
 * Callers:
 *     MiSoloZeroHugeRange @ 0x140686F44 (MiSoloZeroHugeRange.c)
 *     MiZeroHugeRangeWorker @ 0x1406871C0 (MiZeroHugeRangeWorker.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406942A8 (MiComputeCacheAttributeSpeeds.c)
 *     MiZeroPageCalibrateDpc @ 0x140695350 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     AccelBuildDescriptorMemoryFill @ 0x140402B9C (AccelBuildDescriptorMemoryFill.c)
 *     AccelpSubmitWork @ 0x140403070 (AccelpSubmitWork.c)
 *     KeZeroPages @ 0x1406B4330 (KeZeroPages.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall MiFillMemory(__int64 a1, void *a2, size_t a3, __int64 a4, int a5)
{
  void *result; // rax
  __int64 v10; // r15
  int v11; // edx

  if ( !a1 )
  {
LABEL_2:
    if ( a4 )
    {
      v11 = (unsigned __int8)a4;
    }
    else
    {
      if ( a5 == 1 )
        return (void *)KeZeroPages(a2, a3);
      v11 = 0;
    }
    return memset_0(a2, v11, a3);
  }
  v10 = 3LL;
  if ( a5 != 1 )
    v10 = 1LL;
  if ( (int)AccelBuildDescriptorMemoryFill(a1, (_DWORD)a2, a3, a4, v10) < 0
    || (result = (void *)AccelpSubmitWork(a1, (unsigned int)v10), (int)result < 0) )
  {
    ++dword_140EF4ECC;
    goto LABEL_2;
  }
  return result;
}
