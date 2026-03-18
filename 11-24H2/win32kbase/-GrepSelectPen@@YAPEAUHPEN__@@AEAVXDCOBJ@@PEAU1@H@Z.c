/*
 * XREFs of ?GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1401C3CA0
 * Callers:
 *     GreSelectPen @ 0x140151CE0 (GreSelectPen.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     GreDCSelectPen @ 0x14003ABF0 (GreDCSelectPen.c)
 */

__int64 __fastcall GrepSelectPen(DC **a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*a1) + 8) & 0xFFFFFFFE) != 0 )
    return GreDCSelectPen(*a1, a2);
  return v3;
}
