/*
 * XREFs of KeCopyXfdMaskToPeb @ 0x1404A2E20
 * Callers:
 *     PspEnableProcessOptionalXStateFeatures @ 0x140774AC0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeCopyXfdMaskToPeb(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 *v3; // rax

  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    v1 = a1[92];
    if ( v1 )
    {
      v2 = 0LL;
      v3 = (__int64 *)a1[98];
      if ( v3 )
        v2 = *v3;
      *(_QWORD *)(v1 + 1992) = a1[51];
      if ( v2 )
        *(_QWORD *)(v2 + 1152) = a1[51];
    }
  }
}
