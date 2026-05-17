/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x180089ED0
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x180089AB0 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rbx
  __int64 result; // rax
  _QWORD v4[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v5; // [rsp+40h] [rbp-10h]
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  v1 = (HANDLE)qword_1801CE428;
  if ( qword_1801CE428 )
    goto LABEL_2;
  Handle = 0LL;
  v4[2] = &unk_180173AE8;
  v4[0] = 48LL;
  v4[3] = 576LL;
  v4[1] = 0LL;
  v5 = 0LL;
  result = NtOpenKey(&Handle, 9LL, v4);
  if ( (int)result >= 0 )
  {
    v1 = Handle;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_1801CE428, (signed __int64)v1, 0LL) )
    {
      NtClose(v1);
      v1 = (HANDLE)qword_1801CE428;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
