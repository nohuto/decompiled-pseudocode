/*
 * XREFs of MiAdjustPteBins @ 0x1403F5F00
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     MiPteBinsNeedTrimming @ 0x1403F601C (MiPteBinsNeedTrimming.c)
 *     MiEmptyPteBins @ 0x1403F67B4 (MiEmptyPteBins.c)
 *     MiAttemptCoalesce @ 0x140468B98 (MiAttemptCoalesce.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char MiAdjustPteBins()
{
  __int64 v0; // rdi
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx
  _QWORD v10[5]; // [rsp+20h] [rbp-38h] BYREF

  v0 = 5LL;
  v10[0] = &qword_140E376A8;
  v1 = v10;
  v2 = 5LL;
  v10[1] = &unk_140E35F20;
  v10[2] = &unk_140E35F80;
  v10[3] = &unk_140E35EC0;
  v10[4] = &unk_140E35E60;
  do
  {
    v3 = *v1;
    MiEmptyPteBins(*v1, -1LL, 0LL);
    if ( (unsigned int)MiPteBinsNeedTrimming(v3) )
      MiEmptyPteBins(v3, -1LL, 1LL);
    ++v1;
    --v2;
  }
  while ( v2 );
  LOBYTE(v5) = byte_140E35FE6 + 1;
  byte_140E35FE6 = v5;
  if ( (v5 & 0xF) == 0 )
  {
    v6 = v10;
    do
    {
      v7 = (_QWORD *)*v6;
      v8 = *(_QWORD *)(*v6 + 88LL);
      if ( v8 > 0x200000 )
      {
        v5 = v7[7] >> 2;
        if ( v8 > v5 )
          LOBYTE(v5) = MiAttemptCoalesce(v7, v7[9], *v7 - v7[9], v4);
      }
      ++v6;
      --v0;
    }
    while ( v0 );
  }
  return v5;
}
