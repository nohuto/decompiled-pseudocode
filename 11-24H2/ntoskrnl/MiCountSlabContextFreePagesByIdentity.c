/*
 * XREFs of MiCountSlabContextFreePagesByIdentity @ 0x140687AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCountSlabContextFreePagesByIdentity(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  _QWORD *v5; // rcx
  _QWORD *v6; // r9
  __int64 v7; // rdx

  v3 = *(unsigned __int8 *)(a3 + 88);
  v5 = (_QWORD *)(16 * v3 + *(_QWORD *)(a2 + 88));
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 != v5 )
  {
    v7 = *(_QWORD *)(a3 + 8 * v3 + 96);
    do
    {
      v7 += *((unsigned int *)v6 + 15);
      *(_QWORD *)(a3 + 8 * v3 + 96) = v7;
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)(16 * v3 + *(_QWORD *)(a2 + 88)) );
  }
  return 0LL;
}
