/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180199350
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1801989A4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ShrinkExpressionList@CExpressionManager@@CAXAEAV?$DynArray@PEAVCBaseExpression@@$00@@@Z @ 0x1801FEBA0 (-ShrinkExpressionList@CExpressionManager@@CAXAEAV-$DynArray@PEAVCBaseExpression@@$00@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

void __fastcall DynArrayImpl<1>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v2; // rdi
  void *v4; // rcx
  unsigned __int64 v5; // r8
  unsigned int v6; // esi
  HANDLE v7; // rax
  LPVOID v8; // rax
  int v9; // eax
  void *v10; // rdi
  HANDLE ProcessHeap; // rax

  v2 = *(void **)a1;
  v4 = *(void **)(a1 + 8);
  if ( v2 != v4 )
  {
    v5 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v5 <= 0xFFFFFFFF )
    {
      v6 = a2 * *(_DWORD *)(a1 + 24);
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v4, v2, (unsigned int)v5);
        v10 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v10);
        }
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v9 = *(_DWORD *)(a1 + 16);
        goto LABEL_11;
      }
      if ( v2 )
      {
        v7 = GetProcessHeap();
        v8 = HeapReAlloc(v7, 0, v2, v6);
      }
      else
      {
        v8 = MIDL_user_allocate((unsigned int)v5);
      }
      if ( v8 )
      {
        *(_QWORD *)a1 = v8;
        v9 = *(_DWORD *)(a1 + 24);
LABEL_11:
        *(_DWORD *)(a1 + 20) = v9;
      }
    }
  }
}
