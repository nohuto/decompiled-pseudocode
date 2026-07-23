/*
 * XREFs of RtlpCreateHashTable @ 0x14047C520
 * Callers:
 *     RtlCreateHashTable @ 0x14047C500 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x1405E78A0 (RtlCreateHashTableEx.c)
 *     SepBuildCapPolicyTable @ 0x140607C74 (SepBuildCapPolicyTable.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140C3D02C (SepInitializeSingletonAttributesStructures.c)
 * Callees:
 *     RtlpAllocateSecondLevelDir @ 0x14047C640 (RtlpAllocateSecondLevelDir.c)
 *     RtlpInitializeSecondLevelDir @ 0x14047C66C (RtlpInitializeSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x14047C690 (RtlDeleteHashTable.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char __fastcall RtlpCreateHashTable(__int64 *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // esi
  __int64 Pool2; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v14; // esi
  char v15; // cl
  unsigned int v16; // esi
  int v17; // ebp
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  __int64 v20; // rdi
  __int64 SecondLevelDir; // rax
  __int64 v22; // rdx
  __int64 v23; // r8

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Pool2 = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x28uLL, 0x62615448u);
    if ( !Pool2 )
      return 0;
    v10 = 1;
  }
  *(_QWORD *)(Pool2 + 20) = 0LL;
  *(_QWORD *)(Pool2 + 28) = 0LL;
  *(_DWORD *)(Pool2 + 36) = 0;
  *(_DWORD *)(Pool2 + 12) = 0;
  *(_DWORD *)Pool2 = a4 | v10;
  *(_DWORD *)(Pool2 + 8) = a2;
  *(_DWORD *)(Pool2 + 16) = v4;
  *(_DWORD *)(Pool2 + 4) = a3;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v14, a2 + 127);
    v15 = v14;
    v16 = v14 - 7;
    v17 = (a2 + 127) ^ (1 << v15);
    v18 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x80uLL, 0x62615448u);
    v19 = v18;
    if ( v18 )
    {
      memset_0(v18, 0, 0x80uLL);
      v20 = 0LL;
      *(_QWORD *)(Pool2 + 32) = v19;
      while ( (unsigned int)v20 <= v16 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v20);
        if ( !SecondLevelDir )
          goto LABEL_10;
        if ( (unsigned int)v20 >= v16 )
          v22 = (unsigned int)(v17 + 1);
        else
          v22 = (unsigned int)(1 << (v20 + 7));
        RtlpInitializeSecondLevelDir(SecondLevelDir, v22);
        v19[v20] = v23;
        v20 = (unsigned int)(v20 + 1);
      }
      goto LABEL_9;
    }
  }
  else
  {
    v11 = RtlpAllocateSecondLevelDir(0LL);
    if ( v11 )
    {
      RtlpInitializeSecondLevelDir(v11, *(unsigned int *)(Pool2 + 8));
      *(_QWORD *)(Pool2 + 32) = v12;
LABEL_9:
      *a1 = Pool2;
      return 1;
    }
  }
LABEL_10:
  RtlDeleteHashTable((PRTL_DYNAMIC_HASH_TABLE)Pool2);
  return 0;
}
