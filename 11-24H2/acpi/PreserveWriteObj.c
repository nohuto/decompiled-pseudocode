/*
 * XREFs of PreserveWriteObj @ 0x140042070
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     PushAccFieldObj @ 0x140011520 (PushAccFieldObj.c)
 */

__int64 __fastcall PreserveWriteObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  _QWORD *v8; // rcx

  v3 = a3;
  if ( a3 )
    goto LABEL_8;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) == 0 )
  {
    ++*(_DWORD *)(a2 + 16);
    return (unsigned int)PushAccFieldObj(
                           a1,
                           (__int64)ReadFieldObj,
                           *(_QWORD *)(a2 + 32),
                           (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL),
                           a2 + 56,
                           4u);
  }
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 2 )
      return v3;
LABEL_8:
    v8 = *(_QWORD **)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v8[1];
    HeapFree(v8);
    return v3;
  }
  v5 = *(_QWORD *)(a2 + 48) & *(_QWORD *)(a2 + 56);
  ++*(_DWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 40) |= v5;
  return (unsigned int)PushAccFieldObj(
                         a1,
                         (__int64)WriteFieldObj,
                         *(_QWORD *)(a2 + 32),
                         (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL),
                         a2 + 40,
                         4u);
}
