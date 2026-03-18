/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00C8440
 * Callers:
 *     UmfdDestroyFont @ 0x1C00933C0 (UmfdDestroyFont.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C009A184 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFontTree @ 0x1C00C4E10 (UmfdQueryFontTree.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00C5B58 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryAdvanceWidths @ 0x1C00C75B0 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryTrueTypeTable @ 0x1C00C8120 (UmfdQueryTrueTypeTable.c)
 *     UmfdLoadFontFile @ 0x1C00C8200 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C00C83B0 (UmfdQueryFontFile.c)
 *     UmfdDrvFreeInternal @ 0x1C03055D0 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C0305630 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C03056E0 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C03057A0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C0305820 (UmfdQueryGlyphAttrs.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C03058C0 (UmfdQueryTrueTypeOutline.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall FontDriverDdiRequest::FontDriverDdiRequest(__int64 a1, int a2)
{
  __int128 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &FontDriverDdiRequest::`vftable';
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_BYTE *)(a1 + 32) = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    *(_QWORD *)(a1 + 24) = ThreadInformation;
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}
