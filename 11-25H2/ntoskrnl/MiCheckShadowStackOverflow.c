/*
 * XREFs of MiCheckShadowStackOverflow @ 0x140A299E0
 * Callers:
 *     MiCheckForUserStackOverflow @ 0x140A296B4 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     ZwAllocateVirtualMemory @ 0x14069B440 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall MiCheckShadowStackOverflow(unsigned __int64 a1, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rbx
  void *v10; // rax
  int v11; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  v2 = 0;
  *a2 = -1073741571;
  if ( (MiFlags & 0x1000000) != 0 )
  {
    v6 = MiObtainReferencedVadEx(a1, 2, &v11);
    v7 = v6;
    if ( v6 )
    {
      v8 = *(_DWORD *)(v6 + 48);
      if ( (v8 & 0x200000) != 0 && (v8 & 0x14000000) == 0x10000000 )
      {
        v2 = 1;
        v9 = *(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32);
        MiUnlockAndDereferenceVadShared((PVOID)v7);
        RegionSize = 4096LL;
        v10 = (void *)((a1 & 0xFFFFFFFFFFFFF000uLL) - 4096);
        BaseAddress = v10;
        if ( (unsigned __int64)v10 <= a1
          && (unsigned __int64)v10 > v9 << 12
          && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x102u) >= 0 )
        {
          *a2 = 275;
        }
      }
      else
      {
        MiUnlockAndDereferenceVadShared((PVOID)v7);
      }
    }
  }
  return v2;
}
