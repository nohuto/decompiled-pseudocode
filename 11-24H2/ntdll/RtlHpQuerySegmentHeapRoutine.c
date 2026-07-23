/*
 * XREFs of RtlHpQuerySegmentHeapRoutine @ 0x18002B99C
 * Callers:
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x18002B7F0 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHpQuerySegmentHeapRoutine(__int64 a1, __int64 a2)
{
  unsigned int v4; // r10d
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    *(_QWORD *)a2 = a1;
    v4 = 0;
    v6 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a2 + 12) = 0;
    v7 = (4 * (v6 & 2)) | 0x8000000;
    if ( (v6 & 0x20000000) == 0 )
      v7 = 4 * (v6 & 2);
    v8 = v7 | 0x20;
    if ( (v6 & 0x2000) == 0 )
      v8 = v7;
    v9 = v8 | 0x40000;
    if ( (v6 & 0x40000000) == 0 )
      v9 = v8;
    v10 = v9 | 0x100;
    if ( (v6 & 0x100) == 0 )
      v10 = v9;
    v11 = v6 & 0xE00 | v10;
    if ( (v6 & 0xE00) == 0 )
      v11 = v10;
    v12 = v11 | 0x200;
    if ( (v6 & 0x8000000) == 0 )
      v12 = v11;
    *(_DWORD *)(a2 + 8) = v12;
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 104);
    *(_WORD *)(a2 + 14) = 0;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 136) << 12;
    *(_QWORD *)(a2 + 24) += *(_QWORD *)(a1 + 96) << 12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
