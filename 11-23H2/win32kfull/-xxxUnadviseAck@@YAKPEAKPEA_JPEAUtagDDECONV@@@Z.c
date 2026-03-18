/*
 * XREFs of ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA540
 * Callers:
 *     <none>
 * Callees:
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F92C4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F9A50 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA680 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxUnadviseAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  int v3; // ebx
  bool v5; // zf
  int v7; // esi
  struct tagINTDDEINFO *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *a1 == 996;
  v8 = 0LL;
  if ( !v5 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v7 = xxxCopyAckIn(a1, (void **)a2, a3, &v8);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    return v3;
  v3 = v7;
  if ( v7 != 2 )
    return v3;
  PopState(a3);
  return 2;
}
