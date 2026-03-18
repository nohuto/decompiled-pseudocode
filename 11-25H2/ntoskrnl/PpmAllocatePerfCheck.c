/*
 * XREFs of PpmAllocatePerfCheck @ 0x14074CB80
 * Callers:
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmAllocatePerfCheck(__int64 a1)
{
  _QWORD *Pool2; // rdi
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  if ( *(_QWORD *)(a1 + 16) )
    return 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v3 = PpmHeteroWorkloadClasses;
    v4 = ExAllocatePool2(0x40uLL);
    Pool2[19] = v4;
    if ( v4 )
    {
      v5 = ExAllocatePool2(0x40uLL);
      Pool2[11] = v5;
      if ( v5 )
      {
        v6 = ExAllocatePool2(0x40uLL);
        Pool2[27] = v6;
        if ( v6 )
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
  v7 = -1073741670;
  if ( Pool2 )
  {
    v8 = (void *)Pool2[19];
    if ( v8 )
      ExFreePoolWithTag(v8, 0x704D5050u);
    v9 = (void *)Pool2[11];
    if ( v9 )
      ExFreePoolWithTag(v9, 0x704D5050u);
    v10 = (void *)Pool2[27];
    if ( v10 )
      ExFreePoolWithTag(v10, 0x704D5050u);
    ExFreePoolWithTag(Pool2, 0x704D5050u);
  }
  return v7;
}
