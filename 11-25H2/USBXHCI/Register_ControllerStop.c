/*
 * XREFs of Register_ControllerStop @ 0x14000C7B8
 * Callers:
 *     Controller_D0Exit @ 0x14000C6D0 (Controller_D0Exit.c)
 *     Register_BiosHandoff @ 0x14000C998 (Register_BiosHandoff.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InitiateRecovery @ 0x1400409DC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int *v3; // rbx
  int Ulong; // eax
  int i; // ebp
  int v6; // edx
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  Interval.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      6,
      57,
      (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(unsigned int **)(a1 + 32);
    Ulong = XilRegister_ReadUlong(a1, v3);
    XilRegister_WriteUlong(a1, v3, Ulong & 0xFFFFFFFE);
    for ( i = 16; ; --i )
    {
      if ( (XilRegister_ReadUlong(a1, v3 + 1) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v6,
            6,
            58,
            (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
            16 - i,
            1);
        }
        return v1;
      }
      if ( !i )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v6,
        6,
        59,
        (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
        16);
    }
    return (unsigned int)-1073741823;
  }
  return v1;
}
