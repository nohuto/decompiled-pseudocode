/*
 * XREFs of ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x1801D72A0
 * Callers:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1801B82B8 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CResource::RemoveSourceAnimation(CResource *this, struct CBaseExpression *a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v5; // rcx
  unsigned int v6; // ebx
  _DWORD *v7; // rax
  void *v8; // rsi
  _DWORD *v9; // rbp
  unsigned int v10; // ecx
  __int64 v11; // r8
  struct _RTL_GENERIC_TABLE *v12; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 lpMem; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+40h] [rbp-18h]

  v15 = a3;
  v5 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
  v6 = 0;
  lpMem = 0LL;
  v17 = 0LL;
  v18 = 0;
  v7 = RtlLookupElementGenericTable(v5, &v15);
  v8 = (void *)lpMem;
  v9 = v7;
  if ( (_QWORD)lpMem != *((_QWORD *)&lpMem + 1) )
  {
    if ( (_QWORD)lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v8);
    }
    *(_QWORD *)&lpMem = 0LL;
  }
  if ( v9 )
  {
    v10 = v9[8];
    v11 = *((_QWORD *)v9 + 1);
    if ( v10 )
    {
      do
      {
        if ( a2 == *(struct CBaseExpression **)(v11 + 8LL * v6) )
          break;
        ++v6;
      }
      while ( v6 < v10 );
    }
    if ( v6 < v10 )
    {
      for ( ; v6 < v10 - 1; v10 = v9[8] )
      {
        v14 = v6++;
        *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v11 + 8LL * v6);
      }
      v9[8] = v10 - 1;
    }
    if ( !v9[8] )
    {
      v12 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(v9 + 2));
      if ( !RtlDeleteElementGenericTable(v12, v9) )
        RaiseFailFastException(0LL, 0LL, 1u);
    }
  }
}
