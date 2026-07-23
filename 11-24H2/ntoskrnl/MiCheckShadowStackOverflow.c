/*
 * XREFs of MiCheckShadowStackOverflow @ 0x140A1CD08
 * Callers:
 *     MiCheckForUserStackOverflow @ 0x140A1C9F4 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall MiCheckShadowStackOverflow(unsigned __int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  void *v13; // rax
  int v14; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  v4 = 0;
  *a2 = -1073741571;
  if ( (MiFlags & 0x1000000) != 0 )
  {
    v8 = MiObtainReferencedVadEx(a1, 2LL, &v14, a4);
    if ( v8 )
    {
      v11 = *(unsigned int *)(v8 + 48);
      if ( (*(_DWORD *)(v8 + 48) & 0x4200000) == 0x200000 && (v11 & 0x10000000) != 0 )
      {
        v4 = 1;
        v12 = *(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32);
        MiUnlockAndDereferenceVadShared(v8, v11, v9, v10);
        RegionSize = 4096LL;
        v13 = (void *)((a1 & 0xFFFFFFFFFFFFF000uLL) - 4096);
        BaseAddress = v13;
        if ( (unsigned __int64)v13 <= a1
          && (unsigned __int64)v13 > v12 << 12
          && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x102u) >= 0 )
        {
          *a2 = 275;
        }
      }
      else
      {
        MiUnlockAndDereferenceVadShared(v8, v11, v9, v10);
      }
    }
  }
  return v4;
}
