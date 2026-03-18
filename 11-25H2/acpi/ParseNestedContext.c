/*
 * XREFs of ParseNestedContext @ 0x14006F010
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AsyncCallBack @ 0x1400348D4 (AsyncCallBack.c)
 */

__int64 __fastcall ParseNestedContext(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  _QWORD *v9; // rcx

  v3 = a3;
  if ( !a3 )
  {
    v6 = *(_QWORD *)(a2 + 96);
    if ( v6 )
      v3 = DupObjData(gpheapGlobal, v6, a2 + 48);
  }
  AsyncCallBack((_QWORD *)a1, v3);
  FreeDataBuffs(a2 + 48, 1u);
  v7 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 64) = v7 & 0xFFFFFEFF;
  *(_DWORD *)(a1 + 64) = v7 ^ (*(_DWORD *)(a2 + 112) ^ v7) & 0x100;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 120);
  DereferenceObjectEx(*(_QWORD *)(a2 + 32));
  v8 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0LL;
  DereferenceObjectEx(v8);
  *(_QWORD *)(a2 + 40) = 0LL;
  v9 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v9[1];
  HeapFree(v9);
  return 0x8000LL;
}
