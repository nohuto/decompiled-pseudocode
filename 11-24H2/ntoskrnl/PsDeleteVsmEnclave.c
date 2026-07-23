/*
 * XREFs of PsDeleteVsmEnclave @ 0x14077B070
 * Callers:
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsDereferenceVsmEnclave @ 0x140A20164 (PsDereferenceVsmEnclave.c)
 */

__int64 __fastcall PsDeleteVsmEnclave(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v4; // rbx
  char *v5; // rax
  char *v6; // rsi
  __int64 v7; // r11
  _QWORD *i; // r8
  __int64 v10; // [rsp+48h] [rbp+10h]

  if ( !*((_BYTE *)a2 + 76) )
  {
    v4 = (unsigned __int64 *)(a1 + 1624);
    v5 = (char *)KeAbPreAcquire(a1 + 1624, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
    if ( v6 )
      v6[10] = 1;
    v7 = *(_QWORD *)(a1 + 1608);
    v10 = a2[1] & (-1LL << (*(_DWORD *)(v7 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(v7 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v10)
                          + 37
                          * (BYTE5(v10)
                           + 37
                           * (BYTE4(v10)
                            + 37
                            * (BYTE3(v10)
                             + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                         + HIBYTE(v10)) & (unsigned int)((*(_DWORD *)(v7 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == a2 )
      {
        *i = *a2;
        --*(_DWORD *)v7;
        *a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  return PsDereferenceVsmEnclave(a2);
}
