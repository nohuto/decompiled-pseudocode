/*
 * XREFs of AuthzBasepResetOperands @ 0x14042A600
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepResetOperands(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax

  *(_WORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( *a2 )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 16) + 24LL), 0);
    result = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(result + 24) = 0LL;
    *a2 = 0;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( a2[1] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 56) + 24LL), 0);
    result = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(result + 24) = 0LL;
    a2[1] = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
