/*
 * XREFs of ?GreQueryFonts@@YAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x14032663C
 * Callers:
 *     NtGdiQueryFonts @ 0x140338260 (NtGdiQueryFonts.c)
 * Callees:
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x140259878 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall GreQueryFonts(struct _UNIVERSAL_FONT_ID *a1, __int64 a2, union _LARGE_INTEGER *a3)
{
  unsigned int v4; // edi
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v7[0] = *(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 20416LL);
  return PUBLIC_PFTOBJ::QueryFonts((PUBLIC_PFTOBJ *)v7, a1, v4, a3);
}
