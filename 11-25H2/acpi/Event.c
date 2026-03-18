/*
 * XREFs of Event @ 0x14006EAA0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     InitEvent @ 0x14006EB00 (InitEvent.c)
 */

__int64 __fastcall Event(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 64);
  result = CreateNameSpaceObject(
             a1[40],
             *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL),
             a1[10],
             a1[11],
             (_QWORD *)(a2 + 64),
             0);
  if ( !(_DWORD)result )
    return InitEvent(a1, a1[40], *v2);
  return result;
}
