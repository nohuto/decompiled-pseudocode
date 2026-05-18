/*
 * XREFs of sub_1800374A0 @ 0x1800374A0
 * Callers:
 *     sub_1800370B0 @ 0x1800370B0 (sub_1800370B0.c)
 *     sub_1800C32A0 @ 0x1800C32A0 (sub_1800C32A0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800374A0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_180011B04(a1 + 72, &v4);
  result = v4;
  if ( v4 )
  {
    result = *(unsigned int *)(v4 + 3544);
    *(_DWORD *)(a1 + 104) = result;
  }
  if ( v5 )
    return sub_18001050C(v5);
  return result;
}
