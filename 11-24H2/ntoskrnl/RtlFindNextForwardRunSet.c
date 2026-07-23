/*
 * XREFs of RtlFindNextForwardRunSet @ 0x14042AD00
 * Callers:
 *     HvpResetPageProtection @ 0x140967690 (HvpResetPageProtection.c)
 *     RtlpFcDrainDelayedUsageReportBuffer @ 0x140A2B710 (RtlpFcDrainDelayedUsageReportBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunSet(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r9d
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned int *v8; // r8
  unsigned int v9; // r10d
  _DWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // r10d
  unsigned int v13; // r10d
  __int64 v14; // rax
  unsigned int v15; // r9d

  v3 = *(_DWORD *)a1;
  v4 = 0;
  if ( *(_DWORD *)a1 > a2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v6 + 4 * ((unsigned __int64)(v3 - 1) >> 5);
    v8 = (unsigned int *)(v6 + 4 * ((unsigned __int64)a2 >> 5));
    v9 = (-1 << (a2 & 0x1F)) & *v8;
    v10 = v8 + 1;
    while ( !v9 )
    {
      if ( (unsigned __int64)v10 > v7 )
        goto LABEL_16;
      ++v8;
      ++v10;
      v9 = *v8;
    }
    _BitScanForward64((unsigned __int64 *)&v11, v9);
    a2 = v11 + 32 * (((__int64)v8 - v6) >> 2);
    if ( a2 > v3 )
    {
LABEL_16:
      a2 = v3;
      goto LABEL_15;
    }
    v12 = ((1 << v11) - 1) | v9;
    while ( 1 )
    {
      v13 = ~v12;
      if ( v13 )
      {
        _BitScanForward64((unsigned __int64 *)&v14, v13);
        goto LABEL_12;
      }
      if ( (unsigned __int64)(v8 + 1) > v7 )
        break;
      v12 = v8[1];
      ++v8;
    }
    LODWORD(v14) = 32;
LABEL_12:
    v15 = v3;
    if ( 32 * (unsigned int)(((__int64)v8 - v6) >> 2) + (unsigned int)v14 <= v3 )
      v15 = 32 * (((__int64)v8 - v6) >> 2) + v14;
    v4 = v15 - a2;
  }
LABEL_15:
  *a3 = a2;
  return v4;
}
