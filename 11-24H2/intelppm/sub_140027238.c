/*
 * XREFs of sub_140027238 @ 0x140027238
 * Callers:
 *     sub_140027008 @ 0x140027008 (sub_140027008.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_14002F38C @ 0x14002F38C (sub_14002F38C.c)
 */

__int64 __fastcall sub_140027238(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx

  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  if ( qword_140019740 )
  {
    v3 = 0;
  }
  else
  {
    dword_140019718 = -1;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 1632))(qword_140019128, a1);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, void *, char *, __int16, __int16, _QWORD))(qword_140019120 + 1048))(
           qword_140019128,
           v2,
           &unk_140013F00,
           byte_1400196F8,
           128,
           1,
           0LL);
    if ( v3 >= 0 )
    {
      v3 = sub_14002F38C(qword_140019740);
      if ( v3 < 0 )
      {
        ((void (__fastcall *)(__int64))qword_140019710)(qword_140019700);
        sub_140010680(byte_1400196F8, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  return (unsigned int)v3;
}
