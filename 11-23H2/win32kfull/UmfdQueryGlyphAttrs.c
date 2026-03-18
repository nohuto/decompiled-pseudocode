/*
 * XREFs of UmfdQueryGlyphAttrs @ 0x1C0305820
 * Callers:
 *     <none>
 * Callees:
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C0093434 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00C8440 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00C9140 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C02B6EE8 (FONTOBJ_SetCachedGlyphAttrs.c)
 */

__int64 __fastcall UmfdQueryGlyphAttrs(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  struct _SLIST_ENTRY v6[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  unsigned int v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  result = FONTOBJ_GetCachedGlyphAttrs(a1, a2);
  if ( !result )
  {
    FontDriverDdiRequest::FontDriverDdiRequest((__int64)v6, 7);
    v10 = 0LL;
    v9 = 0LL;
    v6[0].Next = (struct _SLIST_ENTRY *)&QueryGlyphAttrsRequest::`vftable';
    v7 = a1;
    v8 = a2;
    if ( (int)UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL), v6) >= 0 )
    {
      v5 = v9;
      if ( v9 )
        FONTOBJ_SetCachedGlyphAttrs(a1, a2, v9);
      return v5;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
