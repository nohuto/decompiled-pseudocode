/*
 * XREFs of RtlpHpConvertCreationFlags @ 0x180026540
 * Callers:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpConvertCreationFlags(int a1, __int16 a2, __int64 a3)
{
  unsigned int v5; // r10d
  int v6; // r8d
  bool v7; // zf
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int result; // eax

  v5 = ((a1 & 0xFFFFFFFC) << 29) | 2;
  if ( (a1 & 8) == 0 )
    v5 = (a1 & 0xFFFFFFFC) << 29;
  v6 = v5 | 0x20000000;
  if ( (a1 & 0x8000000) == 0 && (a2 & 0x1000) == 0 )
    v6 = v5;
  v7 = (a2 & 0x10) == 0;
  v8 = v6 | 0x2000;
  if ( (a1 & 0x20) == 0 && v7 )
    v8 = v6;
  v9 = v8 | 0x40000000;
  if ( (a1 & 0x40000) == 0 )
    v9 = v8;
  v10 = v9 | 0x10000000;
  if ( (a1 & 0x10) == 0 )
    v10 = v9;
  result = v10;
  if ( a3 )
  {
    if ( (*(_BYTE *)(a3 + 4) & 2) != 0 )
      return v10 | 0x400000;
  }
  return result;
}
