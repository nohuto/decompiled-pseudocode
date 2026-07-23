/*
 * XREFs of sub_140A47FA0 @ 0x140A47FA0
 * Callers:
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     WbHeapExecutionUnloadModule @ 0x140A480AC (WbHeapExecutionUnloadModule.c)
 *     sub_140A481B8 @ 0x140A481B8 (sub_140A481B8.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A47FA0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rdi
  int v6; // ebx
  __int64 Pool2; // rax
  unsigned __int64 v8; // rax
  _QWORD *v10; // [rsp+58h] [rbp+20h]

  v5 = 0LL;
  v10 = 0LL;
  if ( a3 >= 0x10 && *a2 == 9LL )
  {
    v6 = 0;
    Pool2 = ExAllocatePool2(0x100uLL, 0x10uLL, 0x42524157u);
    if ( Pool2 )
    {
      v5 = (_QWORD *)Pool2;
      v10 = (_QWORD *)Pool2;
    }
    else
    {
      v6 = -1073741801;
    }
    SddlpFree(0LL);
    if ( v6 >= 0 )
    {
      v8 = a2[1];
      if ( v8 + 16 > 0x7FFFFFFF0000LL || v8 + 16 < v8 )
        v5 = v10;
      *(_OWORD *)v5 = *(_OWORD *)a2[1];
      if ( *(_DWORD *)v5 )
      {
        v6 = -1073741811;
      }
      else
      {
        WbHeapExecutionUnloadModule(a1, v5[1]);
        sub_140A481B8(a1, v5[1]);
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  SddlpFree(v5);
  return (unsigned int)v6;
}
