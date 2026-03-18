/*
 * XREFs of ?GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x14013B540
 * Callers:
 *     <none>
 * Callees:
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     GreDCSelectBrush @ 0x140035920 (GreDCSelectBrush.c)
 */

__int64 __fastcall GrepSelectBrush(struct XDCOBJ *a1, struct HOBJ__ *a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*(_DWORD **)a1) + 8) & 0xFFFFFFFE) != 0 )
    return GreDCSelectBrush(*(_QWORD *)a1, a2);
  return v3;
}
