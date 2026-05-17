/*
 * XREFs of RtlpOpenBaseImageFileOptionsKeyEx @ 0x18008B194
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x180162030 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKeyEx(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+40h] [rbp-30h] BYREF
  int v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+5Ch] [rbp-14h]
  __int128 v8; // [rsp+60h] [rbp-10h]
  __int64 v9; // [rsp+98h] [rbp+28h] BYREF

  v9 = 0LL;
  v7 = 0;
  v5[1] = 0LL;
  v5[0] = 48LL;
  v6 = 576;
  v5[2] = &unk_180173AE8;
  v8 = 0LL;
  if ( a3 )
    result = ZwCreateKey(&v9, a2, v5, 0LL, 0LL, 0, 0LL);
  else
    result = NtOpenKey(&v9, a2, v5);
  if ( (int)result >= 0 )
  {
    *a1 = v9;
    return 0LL;
  }
  return result;
}
