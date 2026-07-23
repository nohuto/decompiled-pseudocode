/*
 * XREFs of EtwpCovSampStrideSamplerInitialize @ 0x1407A3508
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1407A2BCC (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 */

__int64 __fastcall EtwpCovSampStrideSamplerInitialize(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v6; // ecx
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 36) = ExGenRandom(0);
  *(_DWORD *)(a1 + 8) = 10 * a2 / KeMaximumIncrement;
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = MEMORY[0xFFFFF78000000320] - v6 - 1;
  if ( !v6 )
  {
    if ( a2 )
    {
      v7 = v3 * (KeMaximumIncrement / 0xA / a2);
      LODWORD(v3) = 0x10000000;
      if ( v7 < 0x10000000 )
        LODWORD(v3) = v7;
    }
  }
  result = (unsigned int)(4 * v3);
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
