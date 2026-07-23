/*
 * XREFs of PpmAllocatePerfCheck @ 0x140757260
 * Callers:
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmAllocatePerfCheck(__int64 a1)
{
  _QWORD *Pool2; // rdi
  int v3; // ebx
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  if ( *(_QWORD *)(a1 + 16) )
    return 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x578uLL, 0x704D5050u);
  if ( Pool2 )
  {
    v3 = PpmHeteroWorkloadClasses;
    v4 = 112 * PpmHeteroWorkloadClasses + 56;
    v5 = ExAllocatePool2(0x40uLL, v4, 0x704D5050u);
    Pool2[19] = v5;
    if ( v5 )
    {
      v6 = ExAllocatePool2(0x40uLL, v4, 0x704D5050u);
      Pool2[11] = v6;
      if ( v6 )
      {
        v7 = ExAllocatePool2(0x40uLL, v4, 0x704D5050u);
        Pool2[27] = v7;
        if ( v7 )
        {
          *(_DWORD *)(Pool2[19] + 48LL) = v3;
          *(_DWORD *)(Pool2[11] + 48LL) = v3;
          *(_DWORD *)(Pool2[27] + 48LL) = v3;
          *(_QWORD *)(a1 + 16) = Pool2;
          return 0;
        }
      }
    }
  }
  v8 = -1073741670;
  if ( Pool2 )
  {
    v9 = (void *)Pool2[19];
    if ( v9 )
      ExFreePoolWithTag(v9, 0x704D5050u);
    v10 = (void *)Pool2[11];
    if ( v10 )
      ExFreePoolWithTag(v10, 0x704D5050u);
    v11 = (void *)Pool2[27];
    if ( v11 )
      ExFreePoolWithTag(v11, 0x704D5050u);
    ExFreePoolWithTag(Pool2, 0x704D5050u);
  }
  return v8;
}
