/*
 * XREFs of SetPerfStateIO @ 0x1400014D0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x140001A70 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x140002350 (ReadGenAddr.c)
 *     WPP_RECORDER_SF_DD @ 0x140003804 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall SetPerfStateIO(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  int GenAddr; // eax
  int v8; // edx

  v5 = 0;
  WriteGenAddr(a1, a2);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( a3 )
    {
      GenAddr = ReadGenAddr(a1 + 12);
      if ( GenAddr != (_DWORD)a3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 3;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            3,
            23,
            (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
            a3,
            GenAddr);
        }
        return (unsigned int)-1073741823;
      }
    }
  }
  return v5;
}
