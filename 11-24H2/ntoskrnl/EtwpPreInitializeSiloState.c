/*
 * XREFs of EtwpPreInitializeSiloState @ 0x1407A8F1C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     KeInitializeMutex @ 0x140473080 (KeInitializeMutex.c)
 *     EtwpCleanupSiloState @ 0x1407A722C (EtwpCleanupSiloState.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1408ACFB0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpPreInitializeSiloState(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 *Pool2; // rax
  __int64 *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // ebp
  _QWORD *v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx

  v4 = 0;
  Pool2 = (__int64 *)ExAllocatePool2(0x48uLL, 0x1348uLL, 0x61777445u);
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_10;
  *Pool2 = a1;
  Pool2[1] = (__int64)PsGetServerSiloGlobals(a1);
  v7 = 256;
  if ( a2 <= 0x100 )
  {
    v7 = a2;
    if ( a2 < 0x20 )
      v7 = 32;
  }
  v8 = 8 * v7;
  *((_DWORD *)v6 + 4) = v7;
  v9 = ExAllocatePool2(0x48uLL, (unsigned int)(16 * v7), 0x61777445u);
  v6[88] = v9;
  if ( v9 )
  {
    v10 = 0;
    v6[89] = v9 + v8;
    while ( v10 < *((_DWORD *)v6 + 4) )
    {
      *(_QWORD *)(v6[89] + 8LL * v10) = 1LL;
      *(_QWORD *)(v6[88] + 8LL * v10) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
      if ( !*(_QWORD *)(v6[88] + 8LL * v10) )
        goto LABEL_10;
      ++v10;
    }
    KeInitializeMutex((PRKMUTEX)(v6 + 610), 0);
    v11 = v6 + 90;
    *((_WORD *)v6 + 2152) = 3;
    v12 = 64LL;
    do
    {
      v11[6] = 0LL;
      v13 = v11;
      v14 = 3LL;
      do
      {
        v13[1] = v13;
        *v13 = v13;
        v13 += 2;
        --v14;
      }
      while ( v14 );
      v11 += 7;
      --v12;
    }
    while ( v12 );
    v6[86] = 0LL;
    v6[84] = (__int64)v6;
    *((GUID *)v6 + 4) = SecurityProviderGuid;
    *((_QWORD *)PsGetServerSiloGlobals(a1) + 104) = v6;
  }
  else
  {
LABEL_10:
    v4 = -1073741801;
    EtwpCleanupSiloState(v6);
  }
  return v4;
}
