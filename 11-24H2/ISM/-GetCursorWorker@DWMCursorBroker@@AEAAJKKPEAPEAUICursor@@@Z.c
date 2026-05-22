/*
 * XREFs of ?GetCursorWorker@DWMCursorBroker@@AEAAJKKPEAPEAUICursor@@@Z @ 0x180014F34
 * Callers:
 *     ?GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z @ 0x180015090 (-GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::GetCursorWorker(
        DWMCursorBroker *this,
        unsigned int a2,
        __int64 a3,
        struct ICursor **a4)
{
  __int64 v4; // r10
  __int64 v6; // rbx
  int v7; // esi
  unsigned __int64 i; // r11
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 j; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  struct ICursor *v23; // rbx
  __int64 result; // rax
  unsigned __int64 v25; // [rsp+40h] [rbp+8h]

  v4 = 0xCBF29CE484222325uLL;
  v25 = __PAIR64__(a3, a2);
  v6 = 0xCBF29CE484222325uLL;
  v7 = a3;
  for ( i = 0LL; i < 4; ++i )
  {
    v11 = *((unsigned __int8 *)&v25 + i);
    v6 = 0x100000001B3LL * (v11 ^ v6);
  }
  v12 = 0xCBF29CE484222325uLL;
  for ( j = 0LL; j < 4; ++j )
  {
    v14 = *((unsigned __int8 *)&v25 + j + 4);
    v12 = 0x100000001B3LL * (v14 ^ v12);
  }
  v15 = *((_QWORD *)this + 17);
  v16 = 2 * (*((_QWORD *)this + 20) & (v6 ^ v12));
  v17 = *(_QWORD *)(v15 + 8 * v16 + 8);
  if ( v17 == *((_QWORD *)this + 15) )
  {
LABEL_6:
    v17 = 0LL;
  }
  else
  {
    a3 = *(_QWORD *)(v15 + 8 * v16);
    while ( a2 != *(_DWORD *)(v17 + 16) || v7 != *(_DWORD *)(v17 + 20) )
    {
      if ( v17 == a3 )
        goto LABEL_6;
      v17 = *(_QWORD *)(v17 + 8);
    }
  }
  if ( !v17 || v17 == *((_QWORD *)this + 15) )
    return 2147500037LL;
  v18 = *(_QWORD *)(v17 + 24);
  v19 = 0LL;
  v25 = v18;
  do
  {
    v20 = *((unsigned __int8 *)&v25 + v19++);
    v4 = 0x100000001B3LL * (v20 ^ v4);
  }
  while ( v19 < 4 );
  v21 = *((_QWORD *)this + 9);
  v22 = *(_QWORD *)(v21 + 16 * (v4 & *((_QWORD *)this + 12)) + 8);
  if ( v22 == *((_QWORD *)this + 7) )
  {
LABEL_26:
    v22 = 0LL;
  }
  else
  {
    a3 = *(_QWORD *)(v21 + 16 * (v4 & *((_QWORD *)this + 12)));
    while ( (_DWORD)v18 != *(_DWORD *)(v22 + 16) )
    {
      if ( v22 == a3 )
        goto LABEL_26;
      v22 = *(_QWORD *)(v22 + 8);
    }
  }
  if ( !v22 || v22 == *((_QWORD *)this + 7) )
    return 2147500037LL;
  v23 = *(struct ICursor **)(v22 + 24);
  (*(void (__fastcall **)(struct ICursor *, __int64, __int64, __int64))(*(_QWORD *)v23 + 8LL))(
    v23,
    v21,
    a3,
    0x100000001B3LL);
  result = 0LL;
  *a4 = v23;
  return result;
}
