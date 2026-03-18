/*
 * XREFs of UmfdDestroyFont @ 0x1401003F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x140100E58 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x14030E7B8 (FONTOBJ_SetCachedGlyphAttrs.c)
 */

__int64 __fastcall UmfdDestroyFont(_QWORD *a1)
{
  void *v1; // rdi
  void *v3; // rdi
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  v1 = (void *)a1[113];
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  if ( v1 )
  {
    EngFreeMem(v1);
    FONTOBJ_SetCachedGlyphAttrs(a1, 0LL, 0LL);
  }
  v3 = (void *)a1[114];
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  if ( v3 )
  {
    EngFreeMem(v3);
    FONTOBJ_SetCachedGlyphAttrs(a1, 1LL, 0LL);
  }
  FontDriverDdiRequest::FontDriverDdiRequest(v5, 3LL);
  v5[6] = 0LL;
  v5[0] = &DestroyFontRequest::`vftable';
  v5[5] = a1;
  return UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1[3] + 20LL), v5);
}
