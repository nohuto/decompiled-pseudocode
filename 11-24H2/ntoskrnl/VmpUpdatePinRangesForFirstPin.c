/*
 * XREFs of VmpUpdatePinRangesForFirstPin @ 0x14064B79C
 * Callers:
 *     VmpPinMemoryRange @ 0x14064ACC0 (VmpPinMemoryRange.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 */

void __fastcall VmpUpdatePinRangesForFirstPin(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v8; // rdx
  bool v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbx

  while ( 2 )
  {
    v8 = *(_QWORD **)(a1 + 40);
    v9 = 0;
    if ( !v8 )
      goto LABEL_9;
    while ( 1 )
    {
      if ( a2 < v8[3] )
      {
        v10 = (_QWORD *)*v8;
        if ( !*v8 )
          goto LABEL_9;
        goto LABEL_7;
      }
      if ( a2 <= v8[4] )
        goto LABEL_12;
      v10 = (_QWORD *)v8[1];
      if ( !v10 )
        break;
LABEL_7:
      v8 = v10;
    }
    v9 = 1;
LABEL_9:
    v11 = *(_QWORD **)a4;
    if ( *(_QWORD *)(*(_QWORD *)a4 + 8LL) != a4 || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11) )
      __fastfail(3u);
    *(_QWORD *)a4 = v12;
    *(_QWORD *)(v12 + 8) = a4;
    v13 = a2 - (a2 & (*(_QWORD *)(a1 + 64) - 1LL));
    v11[3] = v13;
    v11[4] = *(_QWORD *)(a1 + 64) - 1LL + v13;
    RtlRbInsertNodeEx((__int64 *)(a1 + 40), (unsigned __int64)v8, v9, (unsigned __int64)v11);
    v8 = v11;
LABEL_12:
    if ( a2 <= v8[3] )
      v14 = 0LL;
    else
      v14 = (unsigned int)(a2 - *((_DWORD *)v8 + 6));
    v15 = a3;
    if ( a3 >= v8[4] )
      v15 = *((_DWORD *)v8 + 8);
    v16 = v15 - *((_DWORD *)v8 + 6);
    while ( (unsigned int)v14 <= v16 )
    {
      ++*((_BYTE *)v8 + v14 + 40);
      v14 = (unsigned int)(v14 + 1);
    }
    v17 = v8[4];
    if ( a3 > v17 )
    {
      a2 = v17 + 1;
      continue;
    }
    break;
  }
}
