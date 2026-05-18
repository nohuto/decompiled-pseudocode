/*
 * XREFs of sub_18000F3AC @ 0x18000F3AC
 * Callers:
 *     sub_18000F890 @ 0x18000F890 (sub_18000F890.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000D3D4 @ 0x18000D3D4 (sub_18000D3D4.c)
 *     sub_18000D448 @ 0x18000D448 (sub_18000D448.c)
 *     sub_18000F154 @ 0x18000F154 (sub_18000F154.c)
 *     sub_18000F180 @ 0x18000F180 (sub_18000F180.c)
 *     sub_18000FCF0 @ 0x18000FCF0 (sub_18000FCF0.c)
 *     sub_18000FE08 @ 0x18000FE08 (sub_18000FE08.c)
 */

void *__fastcall sub_18000F3AC(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rdi
  _DWORD *v15; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v17; // rax
  void *result; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  v4 = sub_18000F180(*(_QWORD *)(a2 + 120));
  v5 = sub_18000F180(*(_QWORD *)(a2 + 96)) + v4;
  v6 = sub_18000F180(*(_QWORD *)(a2 + 24)) + v5;
  v7 = sub_18000F154(*(_QWORD *)(a2 + 112)) + v6;
  v8 = sub_18000F154(*(_QWORD *)(a2 + 88)) + v7;
  v9 = sub_18000F154(*(_QWORD *)(a2 + 72)) + v8;
  v10 = sub_18000F154(*(_QWORD *)(a2 + 56)) + v9;
  v11 = sub_18000F154(*(_QWORD *)(a2 + 48)) + v10;
  v12 = sub_18000F154(*(_QWORD *)(a2 + 40)) + v11;
  v13 = sub_18000F154(*(_QWORD *)(a2 + 128)) + v12;
  v14 = (_QWORD *)(a1 + 152);
  v15 = *(_DWORD **)(a1 + 152);
  if ( !v15 || *v15 != 1 || *(_QWORD *)(a1 + 160) < v13 )
  {
    sub_18000FE08(a1 + 152);
    if ( v13 )
    {
      ProcessHeap = GetProcessHeap();
      v17 = HeapAlloc(ProcessHeap, 0, v13 + 4);
      if ( v17 )
      {
        *v17 = 0;
        sub_18000FCF0(a1 + 152, v17, v13);
      }
    }
    else
    {
      sub_18000FE08(a1 + 152);
    }
  }
  result = (void *)-*v14;
  v19 = (*v14 + 4LL) & -(__int64)(*v14 != 0LL);
  if ( v19 )
  {
    v20 = v19 + *(_QWORD *)(a1 + 160);
    v21 = sub_18000D448(v19, v20, *(_WORD **)(a2 + 24), (_QWORD *)(a1 + 24));
    v22 = sub_18000D3D4(v21, v20, *(_BYTE **)(a2 + 40), (_QWORD *)(a1 + 40));
    v23 = sub_18000D3D4(v22, v20, *(_BYTE **)(a2 + 48), (_QWORD *)(a1 + 48));
    v24 = sub_18000D3D4(v23, v20, *(_BYTE **)(a2 + 56), (_QWORD *)(a1 + 56));
    v25 = sub_18000D3D4(v24, v20, *(_BYTE **)(a2 + 72), (_QWORD *)(a1 + 72));
    v26 = sub_18000D3D4(v25, v20, *(_BYTE **)(a2 + 128), (_QWORD *)(a1 + 128));
    v27 = sub_18000D3D4(v26, v20, *(_BYTE **)(a2 + 112), (_QWORD *)(a1 + 112));
    v28 = sub_18000D448(v27, v20, *(_WORD **)(a2 + 120), (_QWORD *)(a1 + 120));
    v29 = sub_18000D3D4(v28, v20, *(_BYTE **)(a2 + 88), (_QWORD *)(a1 + 88));
    v30 = (void *)sub_18000D448(v29, v20, *(_WORD **)(a2 + 96), (_QWORD *)(a1 + 96));
    return memset(v30, 0, v20 - (_QWORD)v30);
  }
  return result;
}
