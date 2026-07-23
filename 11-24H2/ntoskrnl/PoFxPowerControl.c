/*
 * XREFs of PoFxPowerControl @ 0x1403A58C0
 * Callers:
 *     DifPoFxPowerControlWrapper @ 0x140635C60 (DifPoFxPowerControlWrapper.c)
 * Callees:
 *     PopFxTryReferenceDevice @ 0x1403A6408 (PopFxTryReferenceDevice.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopPluginRequestPowerControl @ 0x1404A513C (PopPluginRequestPowerControl.c)
 */

__int64 __fastcall PoFxPowerControl(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  int v9; // ebp
  int v11; // ebx
  __int64 v12; // rcx

  v9 = a3;
  v11 = PopFxTryReferenceDevice(a1, 1LL, a3);
  if ( v11 >= 0 )
  {
    v11 = -1073741637;
    v12 = *(_QWORD *)(a1 + 56);
    if ( a7 )
      *a7 = 0LL;
    if ( *(_BYTE *)(v12 + 124) )
      v11 = PopPluginRequestPowerControl(*(_QWORD *)(v12 + 32), a2, v9, a4, a5, a6, (__int64)a7);
    PopFxDereferenceDevice(a1, 1LL);
  }
  return (unsigned int)v11;
}
