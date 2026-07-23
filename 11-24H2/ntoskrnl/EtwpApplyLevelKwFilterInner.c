/*
 * XREFs of EtwpApplyLevelKwFilterInner @ 0x1404630B8
 * Callers:
 *     EtwpApplyLevelKwFilter @ 0x140455B40 (EtwpApplyLevelKwFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpApplyLevelKwFilterInner(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int8 v5; // al

  v4 = *(_QWORD *)(104LL * a2 + *(_QWORD *)(a1 + 640) + 64);
  if ( !v4 )
    return 1;
  v5 = *(_BYTE *)(v4 + 16);
  if ( (a3 <= v5 || !v5) && (!a4 || (a4 & *(_QWORD *)v4) != 0 && (a4 & *(_QWORD *)(v4 + 8)) == *(_QWORD *)(v4 + 8)) )
    return *(_BYTE *)(v4 + 17);
  else
    return *(_BYTE *)(v4 + 17) == 0;
}
