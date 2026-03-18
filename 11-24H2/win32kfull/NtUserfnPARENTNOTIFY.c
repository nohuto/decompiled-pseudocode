/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x1400A9570
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NtUserfnPOINTERINPUT @ 0x1400A8DE0 (NtUserfnPOINTERINPUT.c)
 *     IsPointerParentNotify @ 0x1400A9600 (IsPointerParentNotify.c)
 *     NtUserfnEMPTY @ 0x1400A9630 (NtUserfnEMPTY.c)
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v8; // edi
  __int64 v10; // r8

  v8 = a2;
  PtiCurrent(a1, a2);
  if ( (unsigned int)IsPointerParentNotify(v8, a3, v10) )
    return NtUserfnPOINTERINPUT(a1, v8, a3, a4, a5, a6);
  else
    return NtUserfnEMPTY(a1, v8, a3, a4, a5, a6);
}
