/*
 * XREFs of MmGetEnclaveModuleList @ 0x140680BD8
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x1404BEA10 (PsGetProcessEnclaveModuleInfo.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MmGetEnclaveModuleList(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 Pool; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v17 = 0;
  v6 = MiObtainReferencedVadEx(a1, 2LL, (int *)&v17);
  v10 = v6;
  if ( !v6 )
    return v17;
  if ( (*(_DWORD *)(v6 + 48) & 0xC200000) != 0x8200000 || (*(_DWORD *)(v6 + 64) & 1) != 0 )
  {
    v3 = -1073741800;
  }
  else
  {
    v12 = (__int64 *)(v6 + 80);
    v13 = 0LL;
    v14 = *(__int64 **)(v10 + 80);
    while ( v14 != v12 )
    {
      if ( (_DWORD)v13 == -1 )
        goto LABEL_9;
      v14 = (__int64 *)*v14;
      v13 = (unsigned int)(v13 + 1);
    }
    Pool = MiAllocatePool(0x100uLL, 24 * v13, 1280132438);
    if ( !Pool )
    {
LABEL_9:
      v3 = -1073741670;
      goto LABEL_16;
    }
    v7 = *v12;
    v9 = 0LL;
    while ( (__int64 *)v7 != v12 )
    {
      v15 = (unsigned int)v9;
      v9 = (unsigned int)(v9 + 1);
      v16 = 3 * v15;
      *(_QWORD *)(Pool + 8 * v16) = *(_QWORD *)(v7 + 16);
      *(_QWORD *)(Pool + 8 * v16 + 8) = *(_QWORD *)(v7 + 24);
      *(_DWORD *)(Pool + 8 * v16 + 16) = *(_DWORD *)(v7 + 36);
      *(_DWORD *)(Pool + 8 * v16 + 20) = *(_DWORD *)(v7 + 40);
      v7 = *(_QWORD *)v7;
    }
    *a2 = Pool;
    *a3 = v9;
  }
LABEL_16:
  MiUnlockAndDereferenceVadShared(v10, v7, Pool, v9);
  return v3;
}
