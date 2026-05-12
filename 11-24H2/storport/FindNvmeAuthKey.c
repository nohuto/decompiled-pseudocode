/*
 * XREFs of FindNvmeAuthKey @ 0x14006DD84
 * Callers:
 *     AddNvmeAuthKey @ 0x14006D86C (AddNvmeAuthKey.c)
 *     RemoveNvmeAuthKey @ 0x14006FB9C (RemoveNvmeAuthKey.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall FindNvmeAuthKey(unsigned __int16 a1, const void *a2)
{
  __int64 v3; // rdi
  _WORD *v4; // rax
  _WORD *v5; // rbx
  PVOID RestartKey; // [rsp+40h] [rbp+18h] BYREF

  RestartKey = 0LL;
  v3 = a1;
  do
  {
    v4 = RtlEnumerateGenericTableWithoutSplaying(&NvmeAuthKeyTable, &RestartKey);
    v5 = v4;
    if ( !v4 )
      return 0LL;
  }
  while ( v4[5] != (_WORD)v3 || RtlCompareMemory(v4 + 138, a2, (unsigned __int16)v4[5]) != v3 );
  return v5;
}
