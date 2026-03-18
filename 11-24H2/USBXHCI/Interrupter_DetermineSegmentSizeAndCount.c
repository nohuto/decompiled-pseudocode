/*
 * XREFs of Interrupter_DetermineSegmentSizeAndCount @ 0x14007BF74
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x140082980 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Interrupter_DetermineSegmentSizeAndCount(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  unsigned int v4; // r10d
  unsigned int v5; // ecx

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(*(_QWORD *)(v1 + 128) + 64LL) )
  {
    result = 1LL;
  }
  else
  {
    result = 8LL;
    if ( (*(_QWORD *)(v1 + 736) & 0x10000000LL) == 0 )
      result = 4LL;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(v1 + 88) + 92LL);
  if ( v4 >= (unsigned int)result )
    v4 = result;
  if ( v4 > 2 && _bittest64((const signed __int64 *)(v1 + 736), 0x30u) )
    v4 = 2;
  *(_DWORD *)(a1 + 124) = v4;
  *(_DWORD *)(a1 + 128) = v4;
  v5 = 4096;
  *(_DWORD *)(a1 + 120) = 4096;
  if ( v4 == 1 && (*(_QWORD *)(v1 + 744) & 0x8000000LL) != 0 )
  {
    v5 = 0x10000;
    *(_DWORD *)(a1 + 120) = 0x10000;
  }
  *(_DWORD *)(a1 + 132) = v5 >> 4;
  return result;
}
