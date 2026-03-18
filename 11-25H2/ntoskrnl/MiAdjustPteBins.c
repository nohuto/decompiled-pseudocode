/*
 * XREFs of MiAdjustPteBins @ 0x1403F4BB4
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x140327B3C (MiAttemptCoalesce.c)
 *     MiPteBinsNeedTrimming @ 0x1403F4CD0 (MiPteBinsNeedTrimming.c)
 *     MiEmptyPteBins @ 0x1403F5470 (MiEmptyPteBins.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char MiAdjustPteBins()
{
  __int64 v0; // rdi
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-38h] BYREF

  v0 = 5LL;
  v9[0] = &qword_140E37328;
  v1 = v9;
  v2 = 5LL;
  v9[1] = &unk_140E35BA0;
  v9[2] = &unk_140E35C00;
  v9[3] = &unk_140E35B40;
  v9[4] = &unk_140E35AE0;
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
  LOBYTE(v4) = byte_140E35C66 + 1;
  byte_140E35C66 = v4;
  if ( (v4 & 0xF) == 0 )
  {
    v5 = v9;
    do
    {
      v6 = (_QWORD *)*v5;
      v7 = *(_QWORD *)(*v5 + 88LL);
      if ( v7 > 0x200000 )
      {
        v4 = v6[7] >> 2;
        if ( v7 > v4 )
          LOBYTE(v4) = MiAttemptCoalesce((__int64)v6, v6[9], *v6 - v6[9]);
      }
      ++v5;
      --v0;
    }
    while ( v0 );
  }
  return v4;
}
