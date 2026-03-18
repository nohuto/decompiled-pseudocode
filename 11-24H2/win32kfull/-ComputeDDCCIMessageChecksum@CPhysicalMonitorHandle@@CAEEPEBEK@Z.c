/*
 * XREFs of ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEPEBEK@Z @ 0x140204D08
 * Callers:
 *     ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z @ 0x140222028 (-VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z.c)
 *     ?DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z @ 0x1403224C4 (-DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(
        char a1,
        const unsigned __int8 *a2,
        unsigned int a3)
{
  char v3; // r9
  __int64 v4; // rax

  v3 = 80;
  if ( a1 != 111 )
    v3 = a1;
  if ( a3 )
  {
    v4 = a3;
    do
    {
      v3 ^= *a2++;
      --v4;
    }
    while ( v4 );
  }
  return v3;
}
