/*
 * XREFs of ?GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z @ 0x180062490
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelCount(CVolumeControlBase *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 29);
    *a2 = v3;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids, this, v3);
    }
  }
  else
  {
    v2 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelCount", 437, -2147467261);
  }
  return v2;
}
