/*
 * XREFs of ValidatePssCore @ 0x14002FA48
 * Callers:
 *     ValidateAcpi2PStates @ 0x14002DB34 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x14002FD60 (ValidateXPssPStates.c)
 * Callees:
 *     WPP_RECORDER_SF_Ss @ 0x14000B9C8 (WPP_RECORDER_SF_Ss.c)
 *     WPP_RECORDER_SF_SsD @ 0x14000BB68 (WPP_RECORDER_SF_SsD.c)
 *     Display_PSS @ 0x140034838 (Display_PSS.c)
 */

__int64 __fastcall ValidatePssCore(_DWORD *a1, const char *a2, const wchar_t *a3)
{
  unsigned int v3; // r9d
  __int64 i; // rdx
  unsigned int v7; // esi
  int v9; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( a1[2] )
  {
    for ( i = 1LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    {
      v7 = a1[12 * (unsigned int)i + 2];
      if ( v7 >= a1[12 * (unsigned int)(i - 1) + 2]
        || a1[12 * (unsigned int)i + 3] > a1[12 * (unsigned int)(i - 1) + 3]
        || !v7 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_SsD((__int64)WPP_GLOBAL_Control->DeviceExtension, i, (__int64)a3, 0x2Au, v9, a3, a2);
        Display_PSS(a1);
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ss((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, (__int64)a3, 0x29u, v9, a3, a2);
    return (unsigned int)-1073741811;
  }
  return v3;
}
