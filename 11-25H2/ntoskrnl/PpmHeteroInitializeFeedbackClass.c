/*
 * XREFs of PpmHeteroInitializeFeedbackClass @ 0x1405D2B98
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x1405D2868 (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmHeteroInitializeFeedbackClass(_QWORD *a1)
{
  _DWORD *Pool2; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  void *v5; // rcx
  unsigned int v6; // ebx
  void *v7; // rcx
  void *v8; // rcx

  if ( a1[4426] )
    return 0;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  a1[4426] = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *(_DWORD *)(PpmHeteroCapability + 4);
    v3 = (_DWORD *)ExAllocatePool2(0x40uLL);
    a1[4427] = v3;
    if ( v3 )
    {
      *v3 = *(_DWORD *)(PpmHeteroCapability + 4);
      v4 = (_DWORD *)ExAllocatePool2(0x40uLL);
      a1[4428] = v4;
      if ( v4 )
      {
        *v4 = *(_DWORD *)(PpmHeteroCapability + 4);
        return 0;
      }
    }
  }
  v5 = (void *)a1[4426];
  v6 = -1073741670;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x704D5050u);
    a1[4426] = 0LL;
  }
  v7 = (void *)a1[4427];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x704D5050u);
    a1[4427] = 0LL;
  }
  v8 = (void *)a1[4428];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x704D5050u);
    a1[4428] = 0LL;
  }
  return v6;
}
