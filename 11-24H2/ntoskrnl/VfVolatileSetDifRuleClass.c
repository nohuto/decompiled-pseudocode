/*
 * XREFs of VfVolatileSetDifRuleClass @ 0x140613054
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     VfRlrsVolatileConfigUpdate @ 0x140613A74 (VfRlrsVolatileConfigUpdate.c)
 *     CarCleanup @ 0x140614ABC (CarCleanup.c)
 *     CarInit @ 0x140614FAC (CarInit.c)
 *     DifRegisterKernelPlugins @ 0x140616FF0 (DifRegisterKernelPlugins.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfClearDifWithoutReboot @ 0x140B85890 (VfClearDifWithoutReboot.c)
 *     VfInitDifWithoutReboot @ 0x140B8590C (VfInitDifWithoutReboot.c)
 */

__int64 __fastcall VfVolatileSetDifRuleClass(void *Src, size_t Size)
{
  size_t v2; // rsi
  __int64 v4; // r15
  int v5; // r12d
  char v6; // r14
  _DWORD *Pool2; // rax
  _DWORD *v9; // rdi
  __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // r8
  int inited; // ebx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rdx

  v2 = (unsigned int)Size;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( InitSafeBootMode )
    return 3221228554LL;
  if ( (_DWORD)VfRuleClasses )
    return 3221228669LL;
  if ( (_DWORD)Size != 16 && (_DWORD)Size != 96 )
    return 3221225476LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, 0x60uLL, 0x63536656u);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  VfAllowedVolatileRC = 0LL;
  v10 = VfAllowedVolatileRCId;
  v11 = 17LL;
  v12 = &VfAllowedVolatileRC;
  do
  {
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 < 0x40u )
    {
      v4 = v13 >> 5;
      v5 = 1 << (v13 & 0x1F);
    }
    *((_DWORD *)&VfAllowedVolatileRC + v4) |= v5;
    v10 = (__int64 *)((char *)v10 + 4);
    --v11;
  }
  while ( v11 );
  memmove(Pool2, Src, v2);
  v14 = 2LL;
  v15 = 2LL;
  do
  {
    if ( (*(_DWORD *)v12 & *(_DWORD *)((_BYTE *)v12 + (char *)v9 - (char *)&VfAllowedVolatileRC)) != 0 )
      v6 = 1;
    v12 = (__int64 *)((char *)v12 + 4);
    --v15;
  }
  while ( v15 );
  if ( !v6 )
  {
    inited = -1073738626;
LABEL_34:
    VfAllowedVolatileRC = 0LL;
    VfRuleClasses = 0LL;
    DifpPoolTags = 0LL;
    xmmword_140E68100 = 0LL;
    qword_140E68110 = 0LL;
    MmVerifierData = 0;
    VfClearDifWithoutReboot();
    VfDifRunningWithoutReboot = 0;
    DifIsVolatileMode = 0;
    if ( ViWdmThunksWithIatIndex )
    {
      ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
      ViWdmThunksWithIatIndex = 0LL;
    }
    LOBYTE(v21) = 1;
    VfRlrsVolatileConfigUpdate(v9 + 14, v21);
    CarCleanup();
    goto LABEL_37;
  }
  inited = VfInitDifWithoutReboot();
  if ( inited >= 0 )
  {
    ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(0x40uLL, 24LL * (unsigned int)ViNumberOfWdmThunks, 0x6D4D7644u);
    if ( !ViWdmThunksWithIatIndex )
    {
      inited = -1073741801;
      goto LABEL_34;
    }
    v17 = (unsigned __int64)&VfRuleClasses;
    do
    {
      *(_DWORD *)v17 = *(_DWORD *)((char *)v9 - (char *)&VfRuleClasses + v17);
      v17 += 4LL;
      --v14;
    }
    while ( v14 );
    if ( (VfRuleClasses & 4) == 0 || (inited = VfRlrsVolatileConfigUpdate(v9 + 14, 0LL), inited >= 0) )
    {
      DifpPoolTagsSize = 0;
      DifpPoolTagsSizeBytes = 0;
      v18 = v9 + 4;
      v19 = 10LL;
      do
      {
        if ( *v18 )
        {
          v20 = DifpPoolTagsSize;
          *((_DWORD *)&DifpPoolTags + (unsigned int)DifpPoolTagsSize) = *v18;
          v17 = (unsigned int)(v20 + 1);
          DifpPoolTagsSize = v17;
          DifpPoolTagsSizeBytes += 4;
        }
        ++v18;
        --v19;
      }
      while ( v19 );
      VfOptionFlags = v9[2];
      VfTriageContext = v9[3];
      MmVerifierData = VfRuleClasses;
      VfDifRunningWithoutReboot = 1;
      DifIsVolatileMode = 1;
      inited = CarInit(v17, v18);
      if ( inited >= 0 )
      {
        DifRebootlessRundown.Count = 0LL;
        DifRegisterKernelPlugins();
      }
    }
  }
  if ( inited < 0 )
    goto LABEL_34;
LABEL_37:
  ExFreePoolWithTag(v9, 0x63536656u);
  return (unsigned int)inited;
}
