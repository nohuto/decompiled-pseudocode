/*
 * XREFs of ProcessDivide @ 0x140040570
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 */

__int64 __fastcall ProcessDivide(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rcx
  int v14; // eax

  v3 = a3;
  if ( a3 )
    v6 = 2;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v14 = v6 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
        return v3;
      goto LABEL_12;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
    v8 = *(_QWORD *)(v7 + 80);
    v9 = *(_QWORD *)(v8 + 56);
    if ( v9 )
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = *(_QWORD *)(v8 + 16) % v9;
    else
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
    v3 = WriteObject(a1, *(_QWORD *)(v7 + 80) + 80LL, *(_QWORD *)(a2 + 48));
    if ( v3 == 32772 || a2 != *(_QWORD *)(a1 + 416) )
      return v3;
  }
  ++*(_DWORD *)(a2 + 16);
  *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
  v10 = *(_QWORD *)(v7 + 80);
  v11 = *(_QWORD *)(v10 + 56);
  if ( v11 )
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = *(_QWORD *)(v10 + 16) / v11;
  else
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
  v3 = WriteObject(a1, *(_QWORD *)(v7 + 80) + 120LL, *(_QWORD *)(a2 + 48));
  if ( v3 != 32772 && a2 == *(_QWORD *)(a1 + 416) )
  {
LABEL_12:
    v12 = *(_QWORD **)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v12[1];
    HeapFree(v12);
  }
  return v3;
}
