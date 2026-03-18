/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x1403E3D50
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1403E3170 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int16 v3; // ax
  __int16 v4; // ax
  __int16 v5; // r9
  unsigned __int16 v6; // r9
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // [rsp+0h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 1744);
  v9 = KiSpeculationFeatures;
  if ( !v2 || v2 == *(_QWORD *)(a2 + 1888) || (KiSpeculationFeatures & 0x400) != 0 )
  {
    v4 = *(_WORD *)(a1 + 1752) & 0xFFDB;
  }
  else
  {
    v3 = *(_WORD *)(a1 + 1752) | 4;
    *(_WORD *)(a1 + 1752) = v3;
    if ( (v9 & 8) != 0 )
      goto LABEL_8;
    v4 = v3 | 0x20;
  }
  *(_WORD *)(a1 + 1752) = v4;
LABEL_8:
  v5 = *(_WORD *)(a1 + 1766);
  *(_WORD *)(a1 + 1768) = 1;
  v6 = v5 | 1;
  *(_WORD *)(a1 + 1762) = 1;
  *(_WORD *)(a1 + 1772) = 1;
  result = *(unsigned int *)(a2 + 1532);
  v8 = *(_QWORD *)(a2 + 1888);
  if ( (result & 0x400000) == 0 )
    v8 = 1LL;
  if ( (v9 & 0x4000000000LL) != 0 && KiSsbdMsr == 72 )
  {
    *(_WORD *)(a1 + 1768) |= 4u;
    *(_WORD *)(a1 + 1772) |= 4u;
    *(_WORD *)(a1 + 1762) |= 4u;
    v6 |= 4u;
  }
  else if ( (v9 & 0x8000000000LL) != 0 )
  {
    if ( v8 )
    {
      *(_WORD *)(a1 + 1768) |= 4u;
      *(_WORD *)(a1 + 1762) |= 4u;
      v6 |= 4u;
    }
    if ( (*(_DWORD *)(a2 + 1876) & 0x2000) != 0 )
      *(_WORD *)(a1 + 1772) |= 4u;
  }
  if ( (v9 & 0x40000000000000LL) != 0 )
  {
    *(_WORD *)(a1 + 1768) |= 0x400u;
    *(_WORD *)(a1 + 1762) |= 0x400u;
    *(_WORD *)(a1 + 1772) |= 0x400u;
    *(_WORD *)(a1 + 1770) |= 0x400u;
    v6 |= 0x400u;
  }
  if ( v8 && (*(_BYTE *)(a1 + 1756) & 0x30) != 0 )
  {
    *(_WORD *)(a1 + 1752) |= 0x80u;
  }
  else
  {
    result = 65407LL;
    *(_WORD *)(a1 + 1752) &= ~0x80u;
    if ( !v8 && (v9 & 0x800) != 0 && ((*(_DWORD *)(a2 + 1532) & 0x1000) == 0 || (*(_BYTE *)(a1 + 1766) & 1) == 0) )
    {
      *(_WORD *)(a1 + 1768) &= ~1u;
      v6 &= ~1u;
      *(_WORD *)(a1 + 1762) &= ~1u;
      *(_WORD *)(a1 + 1772) &= ~1u;
    }
  }
  if ( (v9 & 0x2000) != 0 )
  {
    *(_WORD *)(a1 + 1768) |= 0x80u;
    *(_WORD *)(a1 + 1762) |= 0x80u;
  }
  if ( v6 != *(_WORD *)(a1 + 1766) )
  {
    result = v6;
    *(_WORD *)(a1 + 1766) = v6;
    __writemsr(0x48u, v6);
  }
  return result;
}
