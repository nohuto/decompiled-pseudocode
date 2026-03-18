/*
 * XREFs of AcpiPccInitPlatformInterruptAck @ 0x1400A02BC
 * Callers:
 *     AcpiPccInitType2Subspace @ 0x1400A05E0 (AcpiPccInitType2Subspace.c)
 *     AcpiPccInitType34Subspace @ 0x1400A0780 (AcpiPccInitType34Subspace.c)
 * Callees:
 *     AcpiPccInitMapRegister @ 0x1400A010C (AcpiPccInitMapRegister.c)
 */

__int64 __fastcall AcpiPccInitPlatformInterruptAck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v9; // eax

  if ( !a1 || (*(_DWORD *)(a1 + 8) & 1) == 0 )
    return 3221225473LL;
  if ( (unsigned __int8)RtlIsZeroMemory(a2, 12LL) )
    return (*(_BYTE *)(a1 + 132) & 2) == 0 ? 0xC000000D : 0;
  if ( (a3 & a4) != 0 )
    return 3221225473LL;
  v9 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 232) = v9;
  *(_QWORD *)(a1 + 240) = a3;
  *(_QWORD *)(a1 + 248) = a4;
  result = AcpiPccInitMapRegister(a1 + 224, (_QWORD *)(a1 + 216));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
