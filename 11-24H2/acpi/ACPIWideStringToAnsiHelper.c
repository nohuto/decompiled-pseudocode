/*
 * XREFs of ACPIWideStringToAnsiHelper @ 0x14003F8E8
 * Callers:
 *     ACPIGetConvertToInstanceID @ 0x14003EBAC (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToCompatibleID @ 0x14003EDF8 (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToPnpID @ 0x14003F684 (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToDeviceID @ 0x14005496C (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToString @ 0x140054D74 (ACPIGetConvertToString.c)
 *     ACPIGetConvertToHardwareID @ 0x140060BB4 (ACPIGetConvertToHardwareID.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIWideStringToAnsiHelper(_BYTE *a1, unsigned int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // edx
  _BYTE *v4; // r8
  __int64 v5; // r11
  char *v6; // r9
  char v7; // al
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    v2 = 0;
    v3 = a2 >> 1;
    if ( v3 )
    {
      v4 = a1;
      v5 = v3;
      v6 = a1;
      v2 = v3;
      do
      {
        v7 = *v6;
        v6 += 2;
        *v4++ = v7;
        --v5;
      }
      while ( v5 );
    }
    result = v2;
    a1[v2] = 0;
  }
  return result;
}
