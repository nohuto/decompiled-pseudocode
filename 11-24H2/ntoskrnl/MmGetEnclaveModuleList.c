/*
 * XREFs of MmGetEnclaveModuleList @ 0x140681DD8
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x1404B9BD0 (PsGetProcessEnclaveModuleInfo.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MmGetEnclaveModuleList(unsigned __int64 a1, __int64 *a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 Pool; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v18 = 0;
  v7 = MiObtainReferencedVadEx(a1, 2LL, (int *)&v18, a4);
  v11 = v7;
  if ( !v7 )
    return v18;
  if ( (*(_DWORD *)(v7 + 48) & 0xC200000) != 0x8200000 || (*(_DWORD *)(v7 + 64) & 1) != 0 )
  {
    v4 = -1073741800;
  }
  else
  {
    v13 = (__int64 *)(v7 + 80);
    v14 = 0LL;
    v15 = *(__int64 **)(v11 + 80);
    while ( v15 != v13 )
    {
      if ( (_DWORD)v14 == -1 )
        goto LABEL_9;
      v15 = (__int64 *)*v15;
      v14 = (unsigned int)(v14 + 1);
    }
    Pool = MiAllocatePool(0x100uLL, 24 * v14, 1280132438);
    if ( !Pool )
    {
LABEL_9:
      v4 = -1073741670;
      goto LABEL_16;
    }
    v8 = *v13;
    v10 = 0LL;
    while ( (__int64 *)v8 != v13 )
    {
      v16 = (unsigned int)v10;
      v10 = (unsigned int)(v10 + 1);
      v17 = 3 * v16;
      *(_QWORD *)(Pool + 8 * v17) = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(Pool + 8 * v17 + 8) = *(_QWORD *)(v8 + 24);
      *(_DWORD *)(Pool + 8 * v17 + 16) = *(_DWORD *)(v8 + 36);
      *(_DWORD *)(Pool + 8 * v17 + 20) = *(_DWORD *)(v8 + 40);
      v8 = *(_QWORD *)v8;
    }
    *a2 = Pool;
    *a3 = v10;
  }
LABEL_16:
  MiUnlockAndDereferenceVadShared(v11, v8, Pool, v10);
  return v4;
}
