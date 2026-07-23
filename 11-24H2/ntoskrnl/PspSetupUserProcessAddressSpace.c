/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x1408DF5FC
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     PspWow64SetupUserProcessAddressSpace @ 0x14047FDE4 (PspWow64SetupUserProcessAddressSpace.c)
 *     KeCopyXfdMaskToPeb @ 0x1404A2E20 (KeCopyXfdMaskToPeb.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     PspMapSiloSharedDataView @ 0x1408DD840 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1408DDA88 (MmMapApiSetView.c)
 *     PspUpdatePebForAffinityChange @ 0x1408DF878 (PspUpdatePebForAffinityChange.c)
 *     PspCopyAndFixupParameters @ 0x1408DF930 (PspCopyAndFixupParameters.c)
 *     PspPrepareSystemDllInitBlock @ 0x1408DFC08 (PspPrepareSystemDllInitBlock.c)
 *     PspLocateInPEManifest @ 0x1408DFF78 (PspLocateInPEManifest.c)
 *     PspGetStandardHandleList @ 0x140A7C9A4 (PspGetStandardHandleList.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(__int64 a1, _KPROCESS *a2, __int64 a3, __int64 a4)
{
  __int128 *v5; // r15
  unsigned int *v8; // rbp
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // r14d
  __int64 ProcessServerSilo; // rax
  int VirtualMemory; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // rdx
  __int64 result; // rax
  unsigned __int64 ReadyTime; // rcx
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-78h]
  __int128 v23; // [rsp+48h] [rbp-70h] BYREF
  __int64 v24; // [rsp+58h] [rbp-60h]

  RegionSize[0] = 0LL;
  v5 = 0LL;
  v24 = 0LL;
  v8 = *(unsigned int **)(a4 + 216);
  v10 = (*(unsigned __int8 *)(a4 + 17) >> 2) & 3;
  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      v5 = (__int128 *)(v8 + 8);
  }
  else if ( *(_DWORD *)(a4 + 88) == *(_DWORD *)(a4 + 288) )
  {
    v5 = &v23;
    result = PspGetStandardHandleList(a1, &v23);
    if ( (int)result < 0 )
      return result;
  }
  v12 = v8[2];
  v13 = v12 & 0x1000060;
  if ( (PspGlobalFlags & 1) != 0 )
  {
    v12 |= 0x8000u;
    v8[2] = v12;
  }
  if ( !v8[259] )
    v8[259] = PsDefaultLoaderThreads;
  ProcessServerSilo = PsGetProcessServerSilo((__int64)a2);
  if ( *((_BYTE *)PsGetServerSiloGlobals(ProcessServerSilo) + 1016) )
    v8[2] = v12 | 0x20000000;
  KiStackAttachProcess(a2, 0, a3);
  if ( (*(_BYTE *)(a4 + 16) & 0x10) == 0 || (VirtualMemory = PspLocateInPEManifest(a2, a4), VirtualMemory >= 0) )
  {
    v18 = *v8 + *((_QWORD *)v8 + 126);
    RegionSize[0] = v18;
    if ( !v13 && v18 < 0x20000 )
      RegionSize[0] = 0x20000LL;
    *(_QWORD *)(a4 + 224) = 0LL;
    VirtualMemory = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)(a4 + 224),
                      0LL,
                      RegionSize,
                      0x3000u,
                      4u);
    if ( VirtualMemory >= 0 )
    {
      VirtualMemory = PspCopyAndFixupParameters(a1, v5, a4);
      if ( VirtualMemory >= 0 )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0
          || (VirtualMemory = PspPrepareSystemDllInitBlock(0LL, a4), VirtualMemory >= 0) )
        {
          VirtualMemory = PspWow64SetupUserProcessAddressSpace((__int64)a2, a4);
          if ( VirtualMemory >= 0 )
          {
            ReadyTime = a2[1].ReadyTime;
            if ( !ReadyTime
              || (VirtualMemory = PspPrepareSystemDllInitBlock(*(unsigned int *)(ReadyTime + 8), a4), VirtualMemory >= 0) )
            {
              KeCopyXfdMaskToPeb(a2);
              PspUpdatePebForAffinityChange(CurrentThread, a2);
              if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
              {
                VirtualMemory = MmMapApiSetView((__int64)a2);
                if ( VirtualMemory >= 0 )
                  VirtualMemory = PspMapSiloSharedDataView((__int64)a2);
              }
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(a3, 0, v16, v17);
  return (unsigned int)VirtualMemory;
}
