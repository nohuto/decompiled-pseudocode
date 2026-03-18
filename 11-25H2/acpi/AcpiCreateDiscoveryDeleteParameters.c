/*
 * XREFs of AcpiCreateDiscoveryDeleteParameters @ 0x140064834
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x140064BA8 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiCreateDiscoveryDeleteParameters(__int64 *a1, char a2, __int64 *a3)
{
  __int64 Pool2; // rax
  unsigned int v7; // r9d

  Pool2 = ExAllocatePool2(64LL, 48LL, 1315988289LL);
  v7 = 0;
  if ( Pool2 )
  {
    *a1 = Pool2;
    a1[1] = Pool2;
    *(_QWORD *)Pool2 = a1;
    *(_QWORD *)(Pool2 + 8) = a1;
    *(_BYTE *)(Pool2 + 16) = a2;
    *(_QWORD *)(Pool2 + 24) = qword_140089EA8;
    *(_QWORD *)(Pool2 + 32) = AcpiNotifyDiscoverDeleteMainCompletion;
    *(_QWORD *)(Pool2 + 40) = Pool2;
    *a3 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
