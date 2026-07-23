/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1402F73C0
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402F7648 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x1402F6C50 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ZwQueryVirtualMemory @ 0x1406A7810 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1406AAF70 (ZwUnlockVirtualMemory.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

unsigned int __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
        __int64 a1,
        _DWORD *a2,
        PVOID *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned int v8; // ebx
  unsigned int v12; // ebp
  unsigned int v13; // ebp
  ULONG_PTR MemoryInformationLength; // rdi
  PVOID *Pool2; // rax
  PVOID *v16; // rsi
  unsigned int v17; // r11d
  PVOID *v18; // r10
  char *v19; // rcx
  PVOID *v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // ebx
  unsigned int v23; // ebp
  int v24; // eax
  unsigned int v25; // edi
  PVOID v26; // rcx
  unsigned int result; // eax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rbx
  bool v31; // zf
  __int64 v32; // rbx
  PVOID BaseAddress; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-30h] BYREF
  int v36; // [rsp+98h] [rbp+30h]

  v6 = a1;
  v7 = a4;
  v8 = 0;
  BaseAddress = 0LL;
  StLockReleaseShared((struct VLOCK *)(a1 + 6840));
  v12 = *(_DWORD *)(v6 + 7016);
  RegionSize = v12;
  if ( a6 )
  {
    v13 = v12 >> 12;
    MemoryInformationLength = 16 * v7 * v13;
    v36 = v13;
    Pool2 = (PVOID *)ExAllocatePool2(0x40uLL, MemoryInformationLength, 0x71576D73u);
    v16 = Pool2;
    if ( Pool2 )
    {
      v17 = 0;
      if ( (_DWORD)v7 )
      {
        v18 = a3;
        do
        {
          v19 = (char *)*v18;
          ++v17;
          BaseAddress = *v18;
          if ( v8 < v13 * v17 )
          {
            v20 = &Pool2[2 * v8];
            v21 = v13 * v17 - v8;
            v8 = v13 * v17;
            do
            {
              *v20 = v19;
              v20 += 2;
              v19 = (char *)BaseAddress + 4096;
              BaseAddress = (char *)BaseAddress + 4096;
              --v21;
            }
            while ( v21 );
          }
          ++v18;
        }
        while ( v17 < (unsigned int)v7 );
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *Pool2,
             MemoryWorkingSetExInformation,
             Pool2,
             MemoryInformationLength,
             0LL) < 0 )
      {
        *a6 = 0LL;
      }
      else
      {
        v22 = 0;
        v23 = 0;
        if ( (_DWORD)v7 )
        {
          v24 = v36;
          v25 = v36;
          do
          {
            v26 = 0LL;
            BaseAddress = 0LL;
            if ( v22 < v25 )
            {
              do
              {
                if ( ((__int64)v16[2 * v22 + 1] & 1) != 0 )
                {
                  v31 = (*a6)-- == 1LL;
                  v26 = *a3;
                  BaseAddress = *a3;
                  if ( v31 )
                    break;
                }
                ++v22;
              }
              while ( v22 < v25 );
              if ( v26 )
                ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
              v24 = v36;
            }
            if ( !*a6 )
              break;
            ++v23;
            v25 += v24;
            ++a3;
          }
          while ( v23 < (unsigned int)v7 );
        }
      }
      ExFreePoolWithTag(v16, 0);
    }
    else
    {
      *a6 = 0LL;
    }
    v6 = a1;
LABEL_22:
    result = StLockAcquireShared((struct VLOCK *)(v6 + 6840));
    if ( !(_DWORD)v7 )
      return result;
    goto LABEL_23;
  }
  if ( !(_DWORD)v7 )
    goto LABEL_22;
  v32 = v7;
  do
  {
    BaseAddress = *a3;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    ++a3;
    --v32;
  }
  while ( v32 );
  StLockAcquireShared((struct VLOCK *)(v6 + 6840));
LABEL_23:
  v30 = v7;
  do
  {
    result = SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *a2++, v28, v29);
    --v30;
  }
  while ( v30 );
  return result;
}
