/*
 * XREFs of RIMIsEssentialUsage @ 0x14017D14C
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1401DDEA4 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMIsEssentialUsage(__int16 a1, __int16 a2, unsigned __int16 a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v4; // dx
  int v5; // ecx
  bool v6; // di
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v3 = 0;
  if ( a1 == 1 )
  {
    if ( (a3 == 1 || (unsigned int)a3 - 4 <= 1) && (unsigned __int16)(a2 - 48) <= 1u )
      return 1;
    goto LABEL_14;
  }
  if ( a1 == 13 )
  {
    if ( a3 == 1 )
    {
      v4 = a2 - 48;
      if ( v4 > 0x11u )
        goto LABEL_14;
      v5 = 155649;
    }
    else
    {
      if ( (unsigned int)a3 - 4 > 1 )
        goto LABEL_14;
      v4 = a2 - 48;
      if ( v4 > 0x19u )
        goto LABEL_14;
      v5 = 50364417;
    }
    if ( _bittest(&v5, v4) )
      return 1;
  }
LABEL_14:
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      36,
      (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
  }
  return v3;
}
