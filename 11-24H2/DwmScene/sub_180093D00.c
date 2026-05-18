/*
 * XREFs of sub_180093D00 @ 0x180093D00
 * Callers:
 *     sub_180094C30 @ 0x180094C30 (sub_180094C30.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180093D00(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 68)
    || *(_QWORD *)(a1 + 24) != *(_QWORD *)(a1 + 8)
    || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    sub_18001254C((__int64 *)(a1 + 24), (_QWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 160LL))(a2, a1 + 24);
  }
  *(_BYTE *)(a1 + 68) = 0;
  return result;
}
