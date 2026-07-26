/*
 * XREFs of ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086F50
 * Callers:
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1400B9BF0 (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1400BF220 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisPktMonComponentNotify @ 0x140176750 (ndisPktMonComponentNotify.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x14017F420 (ndisReferenceNextUnprocessedMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 */

unsigned __int8 __fastcall ndisIsMiniportReady(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int32 Flags; // eax
  unsigned __int16 v3; // r9
  int *v4; // rdx

  Flags = a1->Flags;
  if ( (Flags & 0x80200020) != 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v3 = 263;
LABEL_16:
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      v3,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      Flags);
    return 0;
  }
  Flags = a1->PnPFlags;
  if ( (Flags & 0x1084910) != 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v3 = 264;
    goto LABEL_16;
  }
  Flags = a1->PnPDeviceState;
  if ( Flags != 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v3 = 265;
    goto LABEL_16;
  }
  Flags = a1->CurrentDevicePowerState;
  if ( Flags != 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v3 = 266;
    goto LABEL_16;
  }
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v4,
      13,
      267,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
  return 1;
}
