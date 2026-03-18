/*
 * XREFs of ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x14002F4B0
 * Callers:
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1402DD1B4 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1402DDD64 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexedSet<DMMVIDPNSOURCEMODE>::FindById(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a1 + 24;
  if ( v2 == a1 + 24 )
    return 0LL;
  result = v2 - 8;
  while ( result )
  {
    if ( *(_DWORD *)(result + 24) == a2 )
      break;
    v5 = *(_QWORD *)(result + 8);
    result = v5 - 8;
    if ( v5 == v3 )
      result = 0LL;
  }
  return result;
}
