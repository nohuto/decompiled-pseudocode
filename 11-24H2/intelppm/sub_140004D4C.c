/*
 * XREFs of sub_140004D4C @ 0x140004D4C
 * Callers:
 *     sub_140004D30 @ 0x140004D30 (sub_140004D30.c)
 *     sub_140004DA0 @ 0x140004DA0 (sub_140004DA0.c)
 *     sub_1400054F0 @ 0x1400054F0 (sub_1400054F0.c)
 *     sub_140009140 @ 0x140009140 (sub_140009140.c)
 *     sub_1400092C0 @ 0x1400092C0 (sub_1400092C0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140004D4C(__int64 a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rbx

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = *(__int64 (**)(void))(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_BYTE *)(a1 + 16) )
      KeSetEvent(&Event, 0, 0);
    return v2();
  }
  return result;
}
