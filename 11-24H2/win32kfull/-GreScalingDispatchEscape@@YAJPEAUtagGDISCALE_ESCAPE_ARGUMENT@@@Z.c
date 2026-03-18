/*
 * XREFs of ?GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x1403306E8
 * Callers:
 *     NtGdiExtEscape @ 0x14025E9E0 (NtGdiExtEscape.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400135CC (GreCreateCompatibleBitmapEx.c)
 */

__int64 __fastcall GreScalingDispatchEscape(struct tagGDISCALE_ESCAPE_ARGUMENT *a1)
{
  HBITMAP CompatibleBitmap; // rsi
  HDC v4[2]; // [rsp+30h] [rbp-28h]
  __int64 v5[2]; // [rsp+40h] [rbp-18h] BYREF

  CompatibleBitmap = 0LL;
  *(_OWORD *)v5 = 0LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(_OWORD *)v4 = *(_OWORD *)a1;
  *(_OWORD *)v5 = *((_OWORD *)a1 + 1);
  if ( LODWORD(v4[0]) )
    return 3221225659LL;
  if ( (unsigned __int16)(LOWORD(v5[1]) - 96) <= 0x180u )
    CompatibleBitmap = GreCreateCompatibleBitmapEx(v4[1], v5[0], SHIDWORD(v5[0]), 0, 0LL, (unsigned __int16 *)&v5[1]);
  ProbeForWrite((char *)a1 + 8, 8uLL, 4u);
  *((_QWORD *)a1 + 1) = CompatibleBitmap;
  return 0LL;
}
