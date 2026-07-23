/*
 * XREFs of PopRegisterEnergyEstimation @ 0x1405CAF90
 * Callers:
 *     <none>
 * Callees:
 *     PopDetermineBucketFrequencies @ 0x1405CABD8 (PopDetermineBucketFrequencies.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall PopRegisterEnergyEstimation(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  unsigned int *Pool2; // rax
  _DWORD *v5; // rax
  __int64 v6; // r8
  int v7; // r9d
  _DWORD *v8; // rdx
  unsigned int i; // ecx

  PopComputeEnergy = a1;
  PopSnapEnergyCounters = a2;
  v3 = 2 - (a3 != 0);
  if ( !PpmComputeEnergyData )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL, 56 * v3 + 8, 0x704D5050u);
    PpmComputeEnergyData = (__int64)Pool2;
    if ( Pool2 )
    {
      *Pool2 = v3;
      v5 = Pool2 + 12;
      v6 = v3;
      do
      {
        v7 = 0;
        v8 = v5;
        for ( i = 25; i < 0x7D; i += 25 )
        {
          *(v8 - 4) = i;
          *v8++ = ++v7;
        }
        v5 += 14;
        --v6;
      }
      while ( v6 );
      PopDetermineBucketFrequencies();
    }
  }
}
