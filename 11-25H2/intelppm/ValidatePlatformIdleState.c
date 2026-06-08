/*
 * XREFs of ValidatePlatformIdleState @ 0x1400403A0
 * Callers:
 *     RegisterKernelPlatformStates @ 0x140038AC4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x14003FD54 (UpdateKernelPlatformStates.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x14000452C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidatePlatformIdleState(int *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // edx
  unsigned int i; // r11d
  _DWORD *v4; // r14
  __int64 v5; // rax
  _DWORD *v7; // r11
  __int64 v8; // rax
  int v9; // eax
  unsigned __int16 v10; // r9
  unsigned __int16 v11; // r9

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  if ( !v1 )
  {
LABEL_2:
    for ( i = 0; ; ++i )
    {
      if ( i >= a1[7] )
        return v2;
      v4 = *(_DWORD **)(*(_QWORD *)&a1[4 * i + 10] + 1144LL);
      if ( (unsigned int)LOBYTE(a1[4 * i + 12]) >= *v4 )
        break;
      if ( !BYTE2(a1[4 * i + 12]) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741811;
        v11 = 90;
        goto LABEL_28;
      }
      if ( !v1 )
      {
        v5 = *((unsigned __int8 *)a1 + 16);
        if ( (unsigned int)v5 >= *v4 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v10 = 92;
LABEL_16:
          v9 = *a1;
LABEL_17:
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v10,
            (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
            v9);
          return (unsigned int)-1073741811;
        }
        if ( (v4[3 * v5 + 1] & 1) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v10 = 93;
          goto LABEL_16;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v11 = 89;
LABEL_28:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v11,
      (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      *a1,
      i);
    return (unsigned int)-1073741811;
  }
  v7 = *(_DWORD **)(v1 + 1144);
  v8 = *((unsigned __int8 *)a1 + 16);
  if ( (unsigned int)v8 < *v7 )
  {
    if ( (v7[3 * v8 + 1] & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 88;
        goto LABEL_16;
      }
      return (unsigned int)-1073741811;
    }
    goto LABEL_2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *a1;
    v10 = 87;
    goto LABEL_17;
  }
  return (unsigned int)-1073741811;
}
