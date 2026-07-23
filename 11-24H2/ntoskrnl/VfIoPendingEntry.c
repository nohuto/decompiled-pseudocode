/*
 * XREFs of VfIoPendingEntry @ 0x1406108F0
 * Callers:
 *     <none>
 * Callees:
 *     VfIoPendingUnload @ 0x1406109C0 (VfIoPendingUnload.c)
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 *     PpvUtilInit @ 0x140B84C48 (PpvUtilInit.c)
 *     VfPendingInitPhase1 @ 0x140B93AB4 (VfPendingInitPhase1.c)
 */

__int64 __fastcall VfIoPendingEntry(__int64 a1)
{
  int v1; // ebx
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v4; // [rsp+40h] [rbp-18h]

  v3[0] = 0LL;
  v3[1] = VfIoPendingUnload;
  LOBYTE(a1) = 1;
  v4 = 0LL;
  PpvUtilInit(a1);
  if ( !VfForcedPendingLog )
  {
    if ( (unsigned int)VfForcedPendingLogLength > 0x100000 )
      VfForcedPendingLogLength = 0x100000;
    VfForcedPendingLog = (PVOID)ExAllocatePool3(0x40uLL, 1);
    if ( !VfForcedPendingLog )
    {
      v1 = -1073741801;
LABEL_6:
      VfIoPendingUnload();
      return (unsigned int)v1;
    }
  }
  v1 = DifRegisterPlugin(0LL, 0LL, 9LL, v3);
  if ( v1 < 0 )
    goto LABEL_6;
  if ( (unsigned int)InitializationPhase > 1 && !ViPendingWorkersCount )
    VfPendingInitPhase1();
  return (unsigned int)v1;
}
