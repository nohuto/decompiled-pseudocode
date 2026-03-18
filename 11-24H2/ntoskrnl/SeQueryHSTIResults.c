/*
 * XREFs of SeQueryHSTIResults @ 0x140AE89C8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline @ 0x1406A372C (Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlCopyToUser @ 0x1406FC3C8 (RtlCopyToUser.c)
 */

__int64 __fastcall SeQueryHSTIResults(void *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  v4 = dword_140FF2440;
  *a3 = dword_140FF2440;
  v5 = 0;
  if ( v4 )
  {
    if ( a2 >= v4 )
    {
      if ( (unsigned int)Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( KeGetCurrentThread()->PreviousMode )
          RtlCopyToUser(a1, qword_140FF2448, (unsigned int)dword_140FF2440);
        else
          RtlCopyVolatileMemory(a1, qword_140FF2448, (unsigned int)dword_140FF2440);
      }
      else
      {
        memmove(a1, qword_140FF2448, (unsigned int)dword_140FF2440);
      }
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v5;
}
