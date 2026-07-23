/*
 * XREFs of PipDmgGetDeviceDmarPolicy @ 0x140724E90
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x140981740 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140724F20 (PipDmgGetDeviceDmarRegistryValue.c)
 *     PipDmgIsDmaVerifierEnabled @ 0x1407251B4 (PipDmgIsDmaVerifierEnabled.c)
 */

__int64 __fastcall PipDmgGetDeviceDmarPolicy(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rbp
  int DeviceDmarRegistryValue; // edi
  _QWORD *v6; // rcx
  char v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a1;
  v9 = 0;
  v8 = 0;
  DeviceDmarRegistryValue = PipDmgGetDeviceDmarRegistryValue(v2, &v9, &v8);
  if ( DeviceDmarRegistryValue >= 0 )
  {
    if ( v8 )
    {
      if ( (v9 & 1) == 0
        || (v6 = (_QWORD *)a1[5]) != 0LL && (unsigned __int8)PipDmgIsDmaVerifierEnabled(*v6)
        || (*(_BYTE *)(*(_QWORD *)(v2 + 720) + 16LL) & 0x24) != 0 )
      {
        *a2 = 2;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      *a2 = 1;
    }
  }
  return (unsigned int)DeviceDmarRegistryValue;
}
