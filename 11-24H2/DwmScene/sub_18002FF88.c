/*
 * XREFs of sub_18002FF88 @ 0x18002FF88
 * Callers:
 *     sub_18002D68C @ 0x18002D68C (sub_18002D68C.c)
 *     sub_18002FD6C @ 0x18002FD6C (sub_18002FD6C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_18002FF88(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_18001060C(v2);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
    return sub_180010644(v4);
  return result;
}
