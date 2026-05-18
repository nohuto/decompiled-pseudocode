/*
 * XREFs of sub_180037600 @ 0x180037600
 * Callers:
 *     sub_180037210 @ 0x180037210 (sub_180037210.c)
 *     sub_1800C3400 @ 0x1800C3400 (sub_1800C3400.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180037600(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_180011C04(a1 + 72, &v4);
  result = v4;
  if ( v4 )
  {
    result = *(unsigned int *)(v4 + 3544);
    *(_DWORD *)(a1 + 104) = result;
  }
  if ( v5 )
    return sub_18001060C(v5);
  return result;
}
