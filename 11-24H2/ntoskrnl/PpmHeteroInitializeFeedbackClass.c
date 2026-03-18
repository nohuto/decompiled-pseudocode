/*
 * XREFs of PpmHeteroInitializeFeedbackClass @ 0x1405D76BC
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x1405D72FC (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmHeteroInitializeFeedbackClass(_QWORD *a1)
{
  _DWORD *Pool2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rdx
  void *v9; // rcx
  unsigned int v10; // ebx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax

  if ( a1[4426] )
    return 0;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  a1[4426] = Pool2;
  if ( Pool2 )
  {
    v3 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    *Pool2 = *(_DWORD *)(v3 + 4);
    v4 = ExAllocatePool2(0x40uLL);
    a1[4427] = v4;
    v5 = (_DWORD *)v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      *v5 = *(_DWORD *)(v6 + 4);
      v7 = ExAllocatePool2(0x40uLL);
      a1[4428] = v7;
      v8 = (_DWORD *)v7;
      if ( v7 )
      {
        v13 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        *v8 = *(_DWORD *)(v13 + 4);
        return 0;
      }
    }
  }
  v9 = (void *)a1[4426];
  v10 = -1073741670;
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x704D5050u);
    a1[4426] = 0LL;
  }
  v11 = (void *)a1[4427];
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x704D5050u);
    a1[4427] = 0LL;
  }
  v12 = (void *)a1[4428];
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x704D5050u);
    a1[4428] = 0LL;
  }
  return v10;
}
