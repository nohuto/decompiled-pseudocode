/*
 * XREFs of MmGetEnclaveModuleList @ 0x1406753B8
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x1404C00D0 (PsGetProcessEnclaveModuleInfo.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MmGetEnclaveModuleList(unsigned __int64 a1, __int64 *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 **v9; // rsi
  __int64 v10; // rax
  __int64 **v11; // rcx
  __int64 Pool; // r8
  __int64 *v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v17 = 0;
  v6 = MiObtainReferencedVadEx(a1, 2, (int *)&v17);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return v17;
  if ( (*(_DWORD *)(v6 + 48) & 0xC200000) != 0x8200000 || (*(_DWORD *)(v6 + 64) & 1) != 0 )
  {
    v3 = -1073741800;
  }
  else
  {
    v9 = (__int64 **)(v6 + 80);
    v10 = 0LL;
    v11 = (__int64 **)v7[10];
    while ( v11 != v9 )
    {
      if ( (_DWORD)v10 == -1 )
        goto LABEL_9;
      v11 = (__int64 **)*v11;
      v10 = (unsigned int)(v10 + 1);
    }
    Pool = MiAllocatePool(0x100uLL, 24 * v10, 1280132438);
    if ( !Pool )
    {
LABEL_9:
      v3 = -1073741670;
      goto LABEL_16;
    }
    v13 = *v9;
    v14 = 0;
    while ( v13 != (__int64 *)v9 )
    {
      v15 = v14++;
      v16 = 3 * v15;
      *(_QWORD *)(Pool + 8 * v16) = v13[2];
      *(_QWORD *)(Pool + 8 * v16 + 8) = v13[3];
      *(_DWORD *)(Pool + 8 * v16 + 16) = *((_DWORD *)v13 + 9);
      *(_DWORD *)(Pool + 8 * v16 + 20) = *((_DWORD *)v13 + 10);
      v13 = (__int64 *)*v13;
    }
    *a2 = Pool;
    *a3 = v14;
  }
LABEL_16:
  MiUnlockAndDereferenceVadShared(v7);
  return v3;
}
