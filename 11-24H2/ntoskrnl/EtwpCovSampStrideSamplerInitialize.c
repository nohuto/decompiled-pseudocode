/*
 * XREFs of EtwpCovSampStrideSamplerInitialize @ 0x1407B2D28
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1407B23EC (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

__int64 __fastcall EtwpCovSampStrideSamplerInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // esi
  int v7; // ecx
  unsigned __int64 v8; // rcx
  __int64 result; // rax

  v4 = (unsigned int)a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v6 = a2;
  *(_DWORD *)(a1 + 36) = ExGenRandom(0, a2, a3, a4);
  *(_DWORD *)(a1 + 8) = 10 * v6 / KeMaximumIncrement;
  v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = MEMORY[0xFFFFF78000000320] - v7 - 1;
  if ( !v7 )
  {
    if ( v6 )
    {
      v8 = v4 * (KeMaximumIncrement / 0xA / v6);
      LODWORD(v4) = 0x10000000;
      if ( v8 < 0x10000000 )
        LODWORD(v4) = v8;
    }
  }
  result = (unsigned int)(4 * v4);
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
