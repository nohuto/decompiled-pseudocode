/*
 * XREFs of Register_WaitForControllerReady @ 0x140019340
 * Callers:
 *     Register_ControllerReset @ 0x14001C654 (Register_ControllerReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Register_WaitForControllerReady(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // r14
  int v4; // edi
  char v5; // bp
  int v6; // edx
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  Interval.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      6,
      69,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = 100;
    v5 = 0;
    while ( (XilRegister_ReadUlong(a1, (unsigned int *)(v3 + 4)) & 0x800) != 0 )
    {
      if ( !v4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v6,
            6,
            71,
            (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
            16);
        }
        return (unsigned int)-1073741823;
      }
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v4;
      v5 += 100;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v6,
        6,
        70,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v5);
    }
  }
  return v1;
}
