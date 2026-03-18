/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x1C01E24C0
 * Callers:
 *     <none>
 * Callees:
 *     NtUserfnDWORD @ 0x1C0073CD0 (NtUserfnDWORD.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NtUserfnPOINTERINPUT @ 0x1C01E2570 (NtUserfnPOINTERINPUT.c)
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v8; // edi

  v8 = a2;
  PtiCurrentShared(a1, a2, a3, a4);
  if ( v8 == 528 && (_WORD)a3 == 582 )
    return NtUserfnPOINTERINPUT(a1, 528, a3, a4, a5, a6);
  else
    return NtUserfnDWORD(a1, v8, a3, a4, a5, a6);
}
