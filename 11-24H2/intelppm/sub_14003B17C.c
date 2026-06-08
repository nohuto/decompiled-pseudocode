/*
 * XREFs of sub_14003B17C @ 0x14003B17C
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14003B17C(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  char v5; // [rsp+20h] [rbp-18h]

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 1632))(qword_140019128, a1);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, void *, _QWORD))(qword_140019120 + 616))(
         qword_140019128,
         v2,
         &unk_140014B70,
         0LL);
  if ( v3 >= 0 )
  {
    v5 = 1;
    (*(void (__fastcall **)(__int64, __int64, void *, _QWORD, char))(qword_140019120 + 624))(
      qword_140019128,
      v2,
      &unk_140014B70,
      0LL,
      v5);
    *(_WORD *)(a1 + 1256) = ((__int64 (__fastcall *)(__int64, __int64))qword_140019408)(a1, 0x800000000000LL);
  }
  return (unsigned int)v3;
}
