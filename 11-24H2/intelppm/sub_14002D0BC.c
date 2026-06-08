/*
 * XREFs of sub_14002D0BC @ 0x14002D0BC
 * Callers:
 *     sub_140049798 @ 0x140049798 (sub_140049798.c)
 * Callees:
 *     sub_140008FEC @ 0x140008FEC (sub_140008FEC.c)
 */

__int64 sub_14002D0BC()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+38h] [rbp-10h]
  int v3; // [rsp+3Ch] [rbp-Ch]

  v3 = 0;
  qword_140018EA8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_140009020;
  v1[2] = 0LL;
  v1[0] = sub_140008FEC(&off_1400179C8);
  v2 = 1;
  v1[1] = qword_140017AE0;
  result = RtlRegisterFeatureUsageProvider(sub_14002D040, v1, &qword_140018E80);
  if ( (_DWORD)result )
    qword_140018E80 = 0LL;
  return result;
}
