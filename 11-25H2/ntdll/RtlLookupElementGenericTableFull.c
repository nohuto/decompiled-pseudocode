/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800C4770
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800C48C0 (RtlSplay.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFull(__int64 *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  int v9; // eax
  __int64 v10; // rax

  v4 = *a1;
  if ( !*a1 )
  {
    *a4 = 0;
    return 0LL;
  }
  while ( 1 )
  {
    v9 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a1[5])(a1, a2, v4 + 40);
    if ( !v9 )
      break;
    if ( v9 != 1 )
    {
      *a3 = v4;
      *a4 = 1;
      *a1 = RtlSplay(*a3);
      return *a3 + 40LL;
    }
    v10 = *(_QWORD *)(v4 + 16);
    if ( !v10 )
    {
      *a3 = v4;
      *a4 = 3;
      return 0LL;
    }
LABEL_4:
    v4 = v10;
  }
  v10 = *(_QWORD *)(v4 + 8);
  if ( v10 )
    goto LABEL_4;
  *a3 = v4;
  *a4 = 2;
  return 0LL;
}
