/*
 * XREFs of PopCloneRange @ 0x140B6DB44
 * Callers:
 *     PopSetRange @ 0x14046AEE0 (PopSetRange.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PopCloneRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *result; // rax
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax

  v7 = a2;
  RtlSetBits((PRTL_BITMAP)(a1 + 48), a2, a3);
  v8 = v7 + a3;
  v9 = 0LL;
  RtlClearBits((PRTL_BITMAP)(a1 + 32), v7, a3);
  v10 = *(_QWORD **)(a1 + 80);
  while ( v10 != (_QWORD *)(a1 + 80) )
  {
    v12 = v10;
    v10 = (_QWORD *)*v10;
    v13 = v12[3];
    if ( (v7 < v13 || v7 > v12[4]) && (v8 < v13 || v8 > v12[4]) )
    {
      if ( v7 <= v13 )
      {
        if ( v13 <= v8 )
          goto LABEL_13;
        if ( v7 < v13 )
        {
          v10 = (_QWORD *)v10[1];
          break;
        }
      }
    }
    else
    {
LABEL_13:
      if ( v7 > v13 )
        v7 = v12[3];
      if ( v8 < v12[4] )
        v8 = v12[4];
      --*(_DWORD *)(a1 + 96);
      v14 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 )
        goto LABEL_5;
      v15 = (_QWORD *)v12[1];
      if ( (_QWORD *)*v15 != v12 )
        goto LABEL_5;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      if ( v9 )
        ExFreePoolWithTag(v12, 0x70616D48u);
      else
        v9 = v12;
    }
  }
  if ( v9 || (result = (_QWORD *)ExAllocatePool2(0x40uLL, 0x30uLL, 0x70616D48u), (v9 = result) != 0LL) )
  {
    *((_DWORD *)v9 + 4) = a4;
    v9[3] = v7;
    v9[4] = v8;
    result = (_QWORD *)v10[1];
    if ( (_QWORD *)*result != v10 )
LABEL_5:
      __fastfail(3u);
    *v9 = v10;
    v9[1] = result;
    *result = v9;
    v10[1] = v9;
    ++*(_DWORD *)(a1 + 96);
  }
  else if ( *(int *)(a1 + 204) >= 0 )
  {
    *(_DWORD *)(a1 + 204) = -1073741670;
  }
  return result;
}
