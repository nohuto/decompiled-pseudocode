/*
 * XREFs of NvmeNamespaceDsmWriteZeroes @ 0x1400FF274
 * Callers:
 *     NvmeNamespaceDataSetManagementIoctl @ 0x1401A15F8 (NvmeNamespaceDataSetManagementIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     SetPrpFromBuffer @ 0x1400BFE7C (SetPrpFromBuffer.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     Feature_FixTrimRequestParameterValidation__private_IsEnabledDeviceUsageNoInline @ 0x1400FA258 (Feature_FixTrimRequestParameterValidation__private_IsEnabledDeviceUsageNoInline.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeNamespaceDsmWriteZeroes(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int DmaBuffer; // r12d
  unsigned int v5; // ebp
  __int64 *ExtendedCommand; // rdi
  unsigned int v7; // eax
  __int64 v8; // r15
  __int64 *v9; // rcx
  unsigned __int64 v10; // r8
  __int64 *v11; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rsi
  unsigned int v14; // r8d
  __int64 v15; // r9
  unsigned __int64 v16; // r15
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r8
  _OWORD v24[4]; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+88h] [rbp+10h]
  __int64 v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+90h] [rbp+18h]

  v3 = *(unsigned int *)(a2 + 20);
  DmaBuffer = 0;
  v5 = 0;
  ExtendedCommand = 0LL;
  v24[0] = 0LL;
  if ( !(_DWORD)v3 )
    return 3221225485LL;
  v7 = *(_DWORD *)(a2 + 24);
  if ( v7 < 0x10 )
    return 3221225485LL;
  if ( (v7 & 0xFFFFFFF0) != 0x10 )
    return 3221225485LL;
  v8 = *(unsigned int *)(a1 + 64);
  v9 = (__int64 *)(a2 + v3);
  v26 = *v9;
  if ( *v9 % v8 )
    return 3221225485LL;
  v10 = v9[1];
  if ( v10 % v8 )
    return 3221225485LL;
  v11 = (__int64 *)(a1 + 16);
  v12 = v10 / v8;
  if ( v10 / v8 )
  {
    v13 = *(unsigned int *)(*v11 + 620);
    if ( v13 >= v12 * (unsigned int)v8 )
      v13 = v12 * (unsigned int)v8;
    DmaBuffer = NvmeAllocateDmaBuffer(*v11, v13, v10, (void **)v24, (_QWORD *)v24 + 1, 0);
    v5 = v13;
    if ( DmaBuffer >= 0 )
    {
      ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(*v11);
      if ( ExtendedCommand )
      {
        v14 = 0;
        v25 = 0;
        v15 = 0LL;
        v27 = v26 / v8;
        do
        {
          v16 = v13 / *(unsigned int *)(a1 + 64);
          if ( v16 >= v12 - v15 )
            LODWORD(v16) = v12 - v14;
          IsEnabledDeviceUsageNoInline = Feature_FixTrimRequestParameterValidation__private_IsEnabledDeviceUsageNoInline();
          v18 = *(unsigned int *)(a1 + 64);
          v19 = *ExtendedCommand + 4096;
          v20 = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(v19 + 48) &= 0xFF0FFFFF;
          *(_BYTE *)v19 = 1;
          *(_DWORD *)v19 &= 0xFFFFFCFF;
          *(_WORD *)(v19 + 54) = 0;
          *(_DWORD *)(v19 + 4) = v20;
          *(_QWORD *)(v19 + 16) = 0LL;
          if ( IsEnabledDeviceUsageNoInline )
            v21 = v27 * (unsigned int)v18;
          else
            v21 = v27;
          *(_QWORD *)(v19 + 40) = v21 / v18;
          *(_WORD *)(v19 + 48) = v16 - 1;
          *(_DWORD *)(v19 + 48) &= 0x3FFFFFFu;
          *(_BYTE *)(v19 + 52) = 0;
          *(_DWORD *)(v19 + 56) = 0;
          *(_WORD *)(v19 + 60) = 0;
          *(_WORD *)(v19 + 62) = 0;
          if ( !(unsigned int)SetPrpFromBuffer(
                                *ExtendedCommand,
                                *ExtendedCommand + 4096,
                                *((__int64 *)&v24[0] + 1),
                                *(_DWORD *)(a1 + 64) * (int)v16,
                                (_QWORD *)*ExtendedCommand,
                                ExtendedCommand[1]) )
            break;
          *(_DWORD *)(*ExtendedCommand + 4256) &= ~1u;
          *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
          *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
          *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
          *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
          *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
          *(_OWORD *)(*ExtendedCommand + 4160) = v24[0];
          *(_DWORD *)(*ExtendedCommand + 4248) = *(_DWORD *)(a1 + 64) * v16;
          DmaBuffer = NvmeControllerProcessCommandSync(*v11, ExtendedCommand, 0);
          if ( DmaBuffer < 0 )
            break;
          v14 = v16 + v25;
          v27 += (unsigned int)v16;
          v15 = v14;
          v25 += v16;
        }
        while ( v14 < v12 );
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(*v11, ExtendedCommand);
  if ( *(_QWORD *)&v24[0] )
    NvmeFreeDmaBuffer(*v11, v5, v22, *(__int64 *)&v24[0], *((__int64 *)&v24[0] + 1));
  return (unsigned int)DmaBuffer;
}
