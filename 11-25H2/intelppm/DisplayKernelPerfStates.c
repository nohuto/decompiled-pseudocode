/*
 * XREFs of DisplayKernelPerfStates @ 0x140029E40
 * Callers:
 *     InitLegacyPccInternal @ 0x14000D764 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x14000D6B8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelPerfStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-18h]
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      HIDWORD(v6) = HIDWORD(a1);
      result = WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x66u, v5);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v6) = *(unsigned __int16 *)(a1 + 4);
        result = WPP_RECORDER_SF_D(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x67u,
                   (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
                   v6);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v6) = *(_DWORD *)(a1 + 16);
          result = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x68u,
                     (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
                     v6);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v6) = *(_DWORD *)(a1 + 20);
            result = WPP_RECORDER_SF_D(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0x69u,
                       (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
                       v6);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              return WPP_RECORDER_SF_(
                       WPP_GLOBAL_Control->DeviceExtension,
                       a2,
                       2,
                       106,
                       (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
            }
          }
        }
      }
    }
  }
  return result;
}
