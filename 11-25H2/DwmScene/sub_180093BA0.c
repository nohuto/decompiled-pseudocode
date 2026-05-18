/*
 * XREFs of sub_180093BA0 @ 0x180093BA0
 * Callers:
 *     sub_180094AD0 @ 0x180094AD0 (sub_180094AD0.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180093BA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 68)
    || *(_QWORD *)(a1 + 24) != *(_QWORD *)(a1 + 8)
    || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    sub_18001244C((__int64 *)(a1 + 24), (_QWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 160LL))(a2, a1 + 24);
  }
  *(_BYTE *)(a1 + 68) = 0;
  return result;
}
