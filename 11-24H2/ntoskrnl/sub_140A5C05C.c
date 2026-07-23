/*
 * XREFs of sub_140A5C05C @ 0x140A5C05C
 * Callers:
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A5C05C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rdi
  int v6; // ebx
  __int64 Pool2; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  __int64 v12; // [rsp+58h] [rbp+20h]

  v5 = 0LL;
  v12 = 0LL;
  if ( a3 >= 0x10 && *a2 == 8LL )
  {
    v6 = 0;
    Pool2 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x42524157u);
    if ( Pool2 )
    {
      v5 = Pool2;
      v12 = Pool2;
    }
    else
    {
      v6 = -1073741801;
    }
    SddlpFree(0LL);
    if ( v6 >= 0 )
    {
      v8 = a2[1];
      if ( v8 + 24 > 0x7FFFFFFF0000LL || v8 + 24 < v8 )
        v5 = v12;
      v9 = a2[1];
      *(_OWORD *)v5 = *(_OWORD *)v9;
      *(_QWORD *)(v5 + 16) = *(_QWORD *)(v9 + 16);
      if ( *(_DWORD *)v5 )
      {
        v6 = -1073741811;
      }
      else if ( *(_DWORD *)(a1 + 56) )
      {
        v10 = 60;
        if ( *(_DWORD *)(v5 + 4) < 0x3Cu )
          v10 = *(_DWORD *)(v5 + 4);
        *(_DWORD *)(a1 + 56) = v10;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  SddlpFree((void *)v5);
  return (unsigned int)v6;
}
