/*
 * XREFs of MiInitializeAffinityWalker @ 0x1402717A8
 * Callers:
 *     MiInitializeZeroGroup @ 0x1402714C4 (MiInitializeZeroGroup.c)
 * Callees:
 *     MiObtainParkedCoreMasks @ 0x14020D180 (MiObtainParkedCoreMasks.c)
 *     MiInitializeDpcGroupAffinity @ 0x140271B88 (MiInitializeDpcGroupAffinity.c)
 */

__int64 __fastcall MiInitializeAffinityWalker(__int64 a1, _DWORD *a2, unsigned int a3, int a4)
{
  _DWORD *v4; // r14
  void **v6; // rbp
  char v7; // al
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 v10; // r13
  __int64 v11; // r15
  int v12; // r12d
  __int64 v13; // r9

  v4 = a2;
  v6 = *(void ***)(384LL * a3 + qword_140E2DC38 + 376);
  if ( (*((_DWORD *)v6 + 9) & 1) == 0 || *a2 )
  {
    v7 = 0;
  }
  else
  {
    v6 = &Src;
    v7 = 1;
  }
  *(_BYTE *)(a1 + 8) = v7;
  result = MiObtainParkedCoreMasks((_OWORD *)(a1 + 16), 0);
  v9 = *(_DWORD *)(a1 + 4);
  v10 = a1 + 376;
  v11 = a1 + 288;
  v12 = 0;
  v13 = 0LL;
  do
  {
    if ( *v4 )
    {
      if ( !v12 )
      {
        *(_DWORD *)(a1 + 12) = v13;
        v12 = 1;
      }
      *(_DWORD *)(v11 + 20) = *((_DWORD *)v6 + 2);
      *(_DWORD *)(v11 - 8) = *v4;
      *(_DWORD *)v11 = v9;
      *(_QWORD *)(v11 + 8) = v10;
      result = MiInitializeDpcGroupAffinity(v10, *v6, v9, v13);
      v10 += 16LL * v9;
    }
    v13 = (unsigned int)(v13 + 1);
    v11 += 32LL;
    ++v4;
  }
  while ( (int)v13 < 3 );
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = a4;
  return result;
}
