/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14020AA10
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020AC98 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14020A29C (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14020BC20 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x14020C858 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ZwQueryVirtualMemory @ 0x14069B5A0 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x14069ED00 (ZwUnlockVirtualMemory.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  PVOID *Pool2; // rax
  PVOID *v15; // rsi
  unsigned int v16; // r11d
  PVOID *v17; // r10
  char *v18; // rcx
  PVOID *v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ebx
  unsigned int v22; // ebp
  int v23; // eax
  unsigned int v24; // edi
  PVOID v25; // rcx
  unsigned int result; // eax
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rbx
  bool v30; // zf
  __int64 v31; // rbx
  PVOID BaseAddress; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-30h] BYREF
  int v35; // [rsp+98h] [rbp+30h]

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
    v35 = v13;
    Pool2 = (PVOID *)ExAllocatePool2(0x40uLL);
    v15 = Pool2;
    if ( Pool2 )
    {
      v16 = 0;
      if ( (_DWORD)v7 )
      {
        v17 = a3;
        do
        {
          v18 = (char *)*v17;
          ++v16;
          BaseAddress = *v17;
          if ( v8 < v13 * v16 )
          {
            v19 = &Pool2[2 * v8];
            v20 = v13 * v16 - v8;
            v8 = v13 * v16;
            do
            {
              *v19 = v18;
              v19 += 2;
              v18 = (char *)BaseAddress + 4096;
              BaseAddress = (char *)BaseAddress + 4096;
              --v20;
            }
            while ( v20 );
          }
          ++v17;
        }
        while ( v16 < (unsigned int)v7 );
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *Pool2,
             MemoryWorkingSetExInformation,
             Pool2,
             16 * v7 * v13,
             0LL) < 0 )
      {
        *a6 = 0LL;
      }
      else
      {
        v21 = 0;
        v22 = 0;
        if ( (_DWORD)v7 )
        {
          v23 = v35;
          v24 = v35;
          do
          {
            v25 = 0LL;
            BaseAddress = 0LL;
            if ( v21 < v24 )
            {
              do
              {
                if ( ((__int64)v15[2 * v21 + 1] & 1) != 0 )
                {
                  v30 = (*a6)-- == 1LL;
                  v25 = *a3;
                  BaseAddress = *a3;
                  if ( v30 )
                    break;
                }
                ++v21;
              }
              while ( v21 < v24 );
              if ( v25 )
                ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
              v23 = v35;
            }
            if ( !*a6 )
              break;
            ++v22;
            v24 += v23;
            ++a3;
          }
          while ( v22 < (unsigned int)v7 );
        }
      }
      ExFreePoolWithTag(v15, 0);
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
  v31 = v7;
  do
  {
    BaseAddress = *a3;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    ++a3;
    --v31;
  }
  while ( v31 );
  StLockAcquireShared((struct VLOCK *)(v6 + 6840));
LABEL_23:
  v29 = v7;
  do
  {
    result = SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *a2++, v27, v28);
    --v29;
  }
  while ( v29 );
  return result;
}
