/*
 * XREFs of VfBranchTracingPluginEntry @ 0x140B957E0
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140B84EA0 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViIsBTSSupported @ 0x140B95A54 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140B95B80 (ViSetupBTSPerProcNoEnable.c)
 */

__int64 VfBranchTracingPluginEntry()
{
  int v1; // eax
  __int64 i; // rbx
  __int64 Pool2; // rax
  _QWORD *v4; // rax
  void **v5; // rcx
  void *v6; // rcx
  int v7; // eax

  if ( (MmVerifierData & 0x8000000) == 0 )
    return 3221225474LL;
  if ( VfBTSInitialized )
    return 3221226538LL;
  if ( (unsigned int)ViIsBTSSupported() )
  {
    memset_0(VfBTSDataManagementArea, 0, sizeof(VfBTSDataManagementArea));
    if ( ViVerifyBTSBufferSize )
      v1 = 24 * ViVerifyBTSBufferSize;
    else
      v1 = 240000;
    ViVerifyBTSBufferSize = v1;
    for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x800 )
        return 3221226537LL;
      Pool2 = ExAllocatePool2(0x40uLL, 0x58uLL, 0x6D535442uLL);
      VfBTSDataManagementArea[i] = (PVOID)Pool2;
      if ( !Pool2 )
        goto LABEL_16;
      *(_QWORD *)VfBTSDataManagementArea[i] = ExAllocatePool2(
                                                0x40uLL,
                                                (unsigned int)ViVerifyBTSBufferSize,
                                                0x62535442uLL);
      v4 = VfBTSDataManagementArea[i];
      if ( !*v4 )
        goto LABEL_16;
      v4[1] = *v4;
      *((_QWORD *)VfBTSDataManagementArea[i] + 3) = 0LL;
      *((_QWORD *)VfBTSDataManagementArea[i] + 2) = *(_QWORD *)VfBTSDataManagementArea[i]
                                                  + (unsigned int)ViVerifyBTSBufferSize
                                                  + 1LL;
    }
    if ( (unsigned int)ViSetupBTSPerProcNoEnable() )
    {
      VfBTSInitialized = 1;
      return 0LL;
    }
    if ( (unsigned int)i >= 0x800 )
      return 3221226537LL;
    do
    {
LABEL_16:
      v5 = (void **)VfBTSDataManagementArea[i];
      if ( v5 )
      {
        v6 = *v5;
        if ( v6 )
        {
          ExFreePoolWithTag(v6, 0x62535442u);
          *(_QWORD *)VfBTSDataManagementArea[i] = 0LL;
        }
        ExFreePoolWithTag(VfBTSDataManagementArea[i], 0x6D535442u);
        VfBTSDataManagementArea[i] = 0LL;
      }
      v7 = i;
      i = (unsigned int)(i - 1);
    }
    while ( v7 );
  }
  return 3221226537LL;
}
