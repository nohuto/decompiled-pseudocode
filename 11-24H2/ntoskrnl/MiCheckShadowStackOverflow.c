/*
 * XREFs of MiCheckShadowStackOverflow @ 0x140A28288
 * Callers:
 *     MiCheckForUserStackOverflow @ 0x140A27F74 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     ZwAllocateVirtualMemory @ 0x1406A6710 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall MiCheckShadowStackOverflow(unsigned __int64 a1, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  void *v11; // rax
  int v12; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0;
  v2 = 0;
  *a2 = -1073741571;
  if ( (MiFlags & 0x1000000) != 0 )
  {
    v6 = MiObtainReferencedVadEx(a1, 2LL, &v12);
    if ( v6 )
    {
      v9 = *(unsigned int *)(v6 + 48);
      if ( (*(_DWORD *)(v6 + 48) & 0x4200000) == 0x200000 && (v9 & 0x10000000) != 0 )
      {
        v2 = 1;
        v10 = *(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32);
        MiUnlockAndDereferenceVadShared(v6, v9, v7, v8);
        RegionSize = 4096LL;
        v11 = (void *)((a1 & 0xFFFFFFFFFFFFF000uLL) - 4096);
        BaseAddress = v11;
        if ( (unsigned __int64)v11 <= a1
          && (unsigned __int64)v11 > v10 << 12
          && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x102u) >= 0 )
        {
          *a2 = 275;
        }
      }
      else
      {
        MiUnlockAndDereferenceVadShared(v6, v9, v7, v8);
      }
    }
  }
  return v2;
}
