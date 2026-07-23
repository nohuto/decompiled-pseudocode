/*
 * XREFs of KeCapturePersistentThreadState @ 0x140420EC0
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x1407064C0 (DbgkpWerCaptureLiveTriageDump.c)
 *     LkmdTelCreateReport @ 0x14082FE24 (LkmdTelCreateReport.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     RtlGetNtProductType @ 0x1404213A0 (RtlGetNtProductType.c)
 *     IopWriteDriverList @ 0x1404A6D78 (IopWriteDriverList.c)
 *     IoGetLoadedDriverInfo @ 0x1404A6EC8 (IoGetLoadedDriverInfo.c)
 *     IopValidateSectionSize @ 0x1404D1640 (IopValidateSectionSize.c)
 *     IopAddCodeRegion @ 0x140590288 (IopAddCodeRegion.c)
 *     KdCopyDataBlock @ 0x1405AC454 (KdCopyDataBlock.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeCapturePersistentThreadState(
        __int64 a1,
        struct _KTHREAD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        size_t Size)
{
  size_t v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  char *v13; // rdx
  _DWORD *v14; // r10
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  ULONG ActiveProcessorCount; // eax
  __int64 v19; // rdx
  _OWORD *v20; // rcx
  int v21; // eax
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  unsigned int v25; // r15d
  const void *StackLimit; // rax
  void *StackBase; // rdi
  const void *v28; // rsi
  unsigned int v29; // edi
  unsigned int i; // r14d
  __int64 result; // rax
  int v32; // edi
  size_t v33; // r8
  struct _KTHREAD *v34; // rax
  unsigned int v35; // edi
  __int64 v36; // rcx
  int v37; // esi
  unsigned int v38; // r14d
  __int64 v39; // rdx
  int v40; // eax
  _DWORD v41[8]; // [rsp+20h] [rbp-20h] BYREF

  v8 = Size;
  CurrentThread = a2;
  if ( !Size )
    return 0LL;
  if ( !a2 )
    CurrentThread = KeGetCurrentThread();
  if ( ForceDumpDisabled || !AllowCrashDump || byte_140E661D4 && SecureDmpEncryptionContext == 2 )
    return 0LL;
  memset_0((void *)(Size + 4), 0, 0x3FFFCuLL);
  v13 = (char *)v8;
  if ( (v8 & 4) != 0 )
  {
    v13 = (char *)(v8 + 4);
    v15 = 1023LL;
    v14 = (_DWORD *)(v8 + 4);
    v16 = 1LL;
    v17 = 8184LL;
  }
  else
  {
    v14 = (_DWORD *)(v8 + 4);
    v15 = 1024LL;
    v16 = 0LL;
    v17 = 8188LL;
  }
  memset64(v13, 0x4547415045474150uLL, v15);
  if ( v16 )
    *(_DWORD *)&v13[v17] = 1162297680;
  *(_DWORD *)v8 = 1162297680;
  *v14 = 875976004;
  *(_DWORD *)(v8 + 12) = (unsigned __int16)NtBuildNumber;
  *(_DWORD *)(v8 + 8) = (unsigned int)NtBuildNumber >> 28;
  *(_QWORD *)(v8 + 16) = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v8 + 24) = MmPfnDatabase;
  *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
  *(_QWORD *)(v8 + 40) = &PsActiveProcessHead;
  *(_DWORD *)(v8 + 48) = 34404;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_QWORD *)(v8 + 3848) = 0LL;
  *(_DWORD *)(v8 + 3864) = 0;
  *(_DWORD *)(v8 + 52) = ActiveProcessorCount;
  *(_QWORD *)(v8 + 72) = a5;
  *(_QWORD *)(v8 + 80) = a6;
  *(_QWORD *)(v8 + 88) = a7;
  *(_DWORD *)(v8 + 56) = a3;
  *(_QWORD *)(v8 + 64) = a4;
  *(_DWORD *)(v8 + 3840) = -2147483645;
  *(_DWORD *)(v8 + 3844) = 1;
  *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v8 + 4000) = 0x40000LL;
  *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
  *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(v8 + 4148) = MEMORY[0xFFFFF7800000000C];
  *(_DWORD *)(v8 + 3992) = 4;
  *(_DWORD *)(v8 + 4152) = 130;
  *(_DWORD *)(v8 + 4176) = 24;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)(v8 + 4160));
  v19 = 9LL;
  *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
  v20 = (_OWORD *)a1;
  *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
  *(_DWORD *)(v8 + 8260) = 0;
  v21 = CmNtCSDVersion;
  *(_DWORD *)(v8 + 8256) = 0;
  *(_DWORD *)(v8 + 0x2000) = v21;
  v22 = (_OWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 8196) = 0x40000;
  *(_DWORD *)(v8 + 8208) = 3840;
  *(_DWORD *)(v8 + 4152) |= 1u;
  *(_DWORD *)(v8 + 8204) = 840;
  do
  {
    *v22 = *v20;
    v22[1] = v20[1];
    v22[2] = v20[2];
    v22[3] = v20[3];
    v22[4] = v20[4];
    v22[5] = v20[5];
    v22[6] = v20[6];
    v22 += 8;
    v23 = v20[7];
    v20 += 8;
    *(v22 - 1) = v23;
    --v19;
  }
  while ( v19 );
  *v22 = *v20;
  v22[1] = v20[1];
  v22[2] = v20[2];
  v22[3] = v20[3];
  v24 = v20[4];
  *(_DWORD *)(v8 + 4152) |= 0x400u;
  v22[4] = v24;
  *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
  *(_DWORD *)(v8 + 8304) = 8320;
  *(_DWORD *)(v8 + 8308) = 928;
  KdCopyDataBlock(v8 + 8320);
  *(_DWORD *)(v8 + 4152) |= 4u;
  *(_DWORD *)(v8 + 8220) = 9248;
  memmove((void *)(v8 + 9248), KeGetCurrentPrcb(), 0xCF00uLL);
  *(_DWORD *)(v8 + 4152) |= 8u;
  *(_DWORD *)(v8 + 8224) = 62240;
  memmove((void *)(v8 + 62240), CurrentThread->ApcState.Process, 0x840uLL);
  *(_DWORD *)(v8 + 4152) |= 0x10u;
  *(_DWORD *)(v8 + 8228) = 64352;
  memmove((void *)(v8 + 64352), CurrentThread, 0x798uLL);
  v25 = 66296;
  if ( CurrentThread == KeGetCurrentThread() && (*((_DWORD *)&CurrentThread->0 + 1) & 0x20000) != 0 )
  {
    StackLimit = CurrentThread->StackLimit;
    StackBase = CurrentThread->StackBase;
    v28 = *(const void **)(a1 + 152);
    if ( StackLimit <= v28 && StackBase > v28 || (v28 = StackLimit, StackBase > StackLimit) )
      v29 = (_DWORD)StackBase - (_DWORD)v28;
    else
      v29 = 0;
    if ( v29 >= 0x7FFF )
      v29 = 0x7FFF;
    for ( i = 0; i < v29; ++i )
    {
      if ( !MmIsAddressValidEx((__int64)v28 + i) )
        break;
    }
    LODWORD(Size) = i;
    if ( i )
    {
      if ( !(unsigned __int8)IopValidateSectionSize(66296LL, &Size) )
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      *(_DWORD *)(v8 + 4152) |= 0x20u;
      v32 = Size;
      v33 = (unsigned int)Size;
      *(_DWORD *)(v8 + 8232) = 66296;
      *(_DWORD *)(v8 + 8236) = v32;
      *(_QWORD *)(v8 + 8264) = v28;
      memmove((void *)(v8 + 66296), v28, v33);
      v25 = v32 + 66296;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    v34 = KeGetCurrentThread();
    LODWORD(Size) = 0;
    v41[0] = 0;
    v35 = (v25 + 7) & 0xFFFFFFF8;
    --v34->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    if ( (int)IoGetLoadedDriverInfo(v36, &Size, v41) >= 0 )
    {
      v37 = Size;
      LODWORD(Size) = 144 * Size;
      if ( (_DWORD)Size
        && (unsigned __int8)IopValidateSectionSize(v35, &Size)
        && (v38 = v35 + Size, LODWORD(Size) = (v41[0] + 7 + 6 * v37) & 0xFFFFFFF8, (_DWORD)Size)
        && (unsigned __int8)IopValidateSectionSize(v38, &Size) )
      {
        if ( (int)IopWriteDriverList(v8, v39, v35, v38) >= 0 )
        {
          *(_DWORD *)(v8 + 4152) |= 0x40u;
          v40 = Size;
          *(_DWORD *)(v8 + 8240) = v35;
          *(_DWORD *)(v8 + 8244) = v37;
          *(_DWORD *)(v8 + 8248) = v38;
          v25 = v38 + v40;
          *(_DWORD *)(v8 + 8252) = v40;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      }
      IopAddCodeRegion(a1, v25, v8);
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(v8 + 8200) = 262140;
  result = 0x40000LL;
  *(_DWORD *)(v8 + 262140) = 1145524820;
  return result;
}
