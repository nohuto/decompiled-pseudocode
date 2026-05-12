/*
 * XREFs of RaidGetTotalStorPoFxDeviceSize @ 0x140072C84
 * Callers:
 *     StorpUnitInitializePoFxPower @ 0x14005456C (StorpUnitInitializePoFxPower.c)
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 *     NvmeAdapterInitializePoFx @ 0x14012EA7C (NvmeAdapterInitializePoFx.c)
 * Callees:
 *     RaidGetStorPoFxComponent @ 0x14002B0C0 (RaidGetStorPoFxComponent.c)
 *     RaidGetStorPoFxFState @ 0x140072C0C (RaidGetStorPoFxFState.c)
 */

__int64 __fastcall RaidGetTotalStorPoFxDeviceSize(int *a1)
{
  unsigned int v2; // edi
  int *StorPoFxComponent; // rax
  int v4; // r9d
  int v5; // r10d
  int *v6; // rsi
  int v7; // ebx
  unsigned int v8; // edx
  char *StorPoFxFState; // rax
  int v10; // edx
  int v11; // ecx

  v2 = 0;
  while ( 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(a1, v2++);
    v6 = StorPoFxComponent;
    if ( !StorPoFxComponent )
      break;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      StorPoFxFState = RaidGetStorPoFxFState(v6, v8);
      v8 = v10 + 1;
      if ( !StorPoFxFState )
        break;
      v11 = 32;
      if ( *(_DWORD *)StorPoFxFState != 1 )
        v11 = 0;
      v7 += v11;
    }
  }
  return (unsigned int)(v5 + v4);
}
