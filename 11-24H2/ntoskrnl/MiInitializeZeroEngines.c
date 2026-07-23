/*
 * XREFs of MiInitializeZeroEngines @ 0x1407FFB34
 * Callers:
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 * Callees:
 *     MiGetOptimalProcessorWriteCount @ 0x1404AF460 (MiGetOptimalProcessorWriteCount.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 *     MiZeroEngineSetOptimalCount @ 0x1406910EC (MiZeroEngineSetOptimalCount.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406942A8 (MiComputeCacheAttributeSpeeds.c)
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInitializeZeroEngines(__int64 a1)
{
  int v2; // r15d
  int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // r14d
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r8
  int v11; // eax
  _BYTE v13[80]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(v13, 0, sizeof(v13));
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = 1;
  do
  {
    v6 = v4 + a1 + 136;
    if ( !*(_QWORD *)(v6 + 176) )
    {
      *(_QWORD *)(v6 + 176) = a1;
      *(_DWORD *)v6 = v3;
      *(_QWORD *)(v6 + 208) = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 57216LL * *(unsigned int *)(a1 + 56);
      *(_QWORD *)(v6 + 200) = v6 + 192;
      *(_QWORD *)(v6 + 192) = v6 + 192;
      *(_QWORD *)(v6 + 128) = v6 + 120;
      *(_QWORD *)(v6 + 120) = v6 + 120;
      if ( *(_BYTE *)(a1 + 80) )
        *(_WORD *)(v6 + 29) = 257;
    }
    *(_BYTE *)(v6 + 32) = 0;
    MiAbsorbPossibleEngineChanges((int *)(v4 + a1 + 136), v13);
    if ( v13[1] )
    {
      if ( v13[0] || *(_BYTE *)(v6 + 33) )
        v2 |= 1 << v3;
    }
    else
    {
      *(_BYTE *)(v6 + 32) = 1;
      v5 = 0;
      *(_BYTE *)(v6 + 35) = 1;
    }
    ++v3;
    v4 += 304LL;
  }
  while ( v3 < 3 );
  v7 = 0;
  v8 = 0LL;
  do
  {
    v9 = v8 + a1 + 136;
    if ( *(_DWORD *)(v9 + 172) && _bittest(&v2, v7) )
    {
      *(_BYTE *)(v9 + 33) = 0;
      if ( (unsigned int)MiZeroPageCalibrate((int *)(v8 + a1 + 136)) )
      {
        MiComputeCacheAttributeSpeeds((_QWORD *)(v8 + a1 + 136));
        v11 = MiGetOptimalProcessorWriteCount(*(_DWORD *)(a1 + 56), v7, v10, 0);
        MiZeroEngineSetOptimalCount(v8 + a1 + 136, v11);
      }
      else
      {
        *(_BYTE *)(v9 + 33) = 1;
        v5 = 0;
        *(_BYTE *)(v9 + 35) = 1;
      }
    }
    ++v7;
    v8 += 304LL;
  }
  while ( v7 < 3 );
  return v5;
}
