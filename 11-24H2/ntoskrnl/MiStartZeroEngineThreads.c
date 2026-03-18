/*
 * XREFs of MiStartZeroEngineThreads @ 0x1407FF9CC
 * Callers:
 *     MiNodeZeroConductor @ 0x1407FF7C0 (MiNodeZeroConductor.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiInsertNewZeroThread @ 0x14068F930 (MiInsertNewZeroThread.c)
 *     MiSignalZeroingPassComplete @ 0x14068FE80 (MiSignalZeroingPassComplete.c)
 *     MiZeroBootCalibratorStarted @ 0x14068FFD8 (MiZeroBootCalibratorStarted.c)
 *     MiCreateZeroThreadContext @ 0x1407FF2B0 (MiCreateZeroThreadContext.c)
 */

__int64 __fastcall MiStartZeroEngineThreads(__int64 a1)
{
  __int64 v1; // rbp
  _BYTE *v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // r14
  __int64 v5; // rdi
  _QWORD *ZeroThreadContext; // rax

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (_BYTE *)(a1 + 170);
  v3 = 1;
  v4 = 3LL;
  do
  {
    v5 = (__int64)(v2 - 34);
    while ( *(_DWORD *)(v2 - 30) < *(_DWORD *)(v2 - 26) )
    {
      v5 = (__int64)(v2 - 34);
      ZeroThreadContext = (_QWORD *)MiCreateZeroThreadContext((__int64)(v2 - 34));
      if ( !ZeroThreadContext || (int)MiInsertNewZeroThread(ZeroThreadContext) < 0 )
      {
        v3 = 0;
        *v2 = 1;
        break;
      }
    }
    if ( !*(v2 - 3) )
    {
      if ( *(v2 - 5) )
      {
        MiZeroBootCalibratorStarted(v5);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 16948), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v1 + 16952), 0, 0);
      }
      MiSignalZeroingPassComplete(v5);
    }
    v2 += 304;
    --v4;
  }
  while ( v4 );
  return v3;
}
