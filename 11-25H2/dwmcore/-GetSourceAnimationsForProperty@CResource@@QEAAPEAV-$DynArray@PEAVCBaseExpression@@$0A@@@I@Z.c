/*
 * XREFs of ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x1801C8720
 * Callers:
 *     ?ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ @ 0x1802AAD64 (-ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall CResource::GetSourceAnimationsForProperty(__int64 a1, int a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rcx
  char *v3; // rbx
  char *v4; // rax
  void *v5; // rdi
  char *result; // rax
  HANDLE ProcessHeap; // rax
  int v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 lpMem; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]

  v2 = *(struct _RTL_GENERIC_TABLE **)(a1 + 48);
  v3 = 0LL;
  if ( v2 )
  {
    v8 = a2;
    lpMem = 0LL;
    v10 = 0LL;
    v11 = 0;
    v4 = (char *)RtlLookupElementGenericTable(v2, &v8);
    v5 = (void *)lpMem;
    v3 = v4;
    if ( (_QWORD)lpMem != *((_QWORD *)&lpMem + 1) )
    {
      if ( (_QWORD)lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v5);
      }
    }
  }
  result = v3 + 8;
  if ( !v3 )
    return 0LL;
  return result;
}
