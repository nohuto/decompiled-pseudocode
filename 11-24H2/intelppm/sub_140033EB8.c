/*
 * XREFs of sub_140033EB8 @ 0x140033EB8
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140033EB8(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  void (__fastcall *v4)(_QWORD); // rax
  __int16 v6; // [rsp+20h] [rbp-28h]
  __int16 v7; // [rsp+28h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 1632))(qword_140019128, a1);
  v7 = 1;
  v6 = 88;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64, __int16, __int16, _QWORD))(qword_140019120 + 1048))(
         qword_140019128,
         v2,
         &unk_140013E90,
         a1 + 96,
         v6,
         v7,
         0LL);
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall *)(__int64, int), __int64))(a1 + 168))(
           *(_QWORD *)(a1 + 8),
           sub_140003690,
           a1);
    if ( v3 < 0 )
    {
      v4 = *(void (__fastcall **)(_QWORD))(a1 + 120);
      if ( v4 )
        v4(*(_QWORD *)(a1 + 104));
      *(_QWORD *)(a1 + 168) = 0LL;
      *(_QWORD *)(a1 + 120) = 0LL;
    }
  }
  return (unsigned int)v3;
}
