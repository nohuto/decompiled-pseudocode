/*
 * XREFs of PpmHeteroInitializeFeedbackClass @ 0x1405D4BFC
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x1405D48A0 (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmHeteroInitializeFeedbackClass(_QWORD *a1)
{
  __int64 v2; // rax
  _DWORD *Pool2; // rax
  __int64 v4; // rcx
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rdx
  void *v11; // rcx
  unsigned int v12; // ebx
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rax

  if ( a1[4426] )
    return 0;
  v2 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, (unsigned int)(4 * *(_DWORD *)(v2 + 4) + 4), 0x704D5050u);
  a1[4426] = Pool2;
  if ( Pool2 )
  {
    v4 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    *Pool2 = *(_DWORD *)(v4 + 4);
    v5 = (unsigned int)(8 * *(_DWORD *)(v4 + 4) + 8);
    v6 = ExAllocatePool2(0x40uLL, v5, 0x704D5050u);
    a1[4427] = v6;
    v7 = (_DWORD *)v6;
    if ( v6 )
    {
      v8 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      *v7 = *(_DWORD *)(v8 + 4);
      v9 = ExAllocatePool2(0x40uLL, (unsigned int)v5, 0x704D5050u);
      a1[4428] = v9;
      v10 = (_DWORD *)v9;
      if ( v9 )
      {
        v15 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        *v10 = *(_DWORD *)(v15 + 4);
        return 0;
      }
    }
  }
  v11 = (void *)a1[4426];
  v12 = -1073741670;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x704D5050u);
    a1[4426] = 0LL;
  }
  v13 = (void *)a1[4427];
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x704D5050u);
    a1[4427] = 0LL;
  }
  v14 = (void *)a1[4428];
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x704D5050u);
    a1[4428] = 0LL;
  }
  return v12;
}
