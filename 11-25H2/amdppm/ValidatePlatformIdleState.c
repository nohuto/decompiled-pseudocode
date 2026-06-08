/*
 * XREFs of ValidatePlatformIdleState @ 0x1400312E8
 * Callers:
 *     RegisterKernelPlatformStates @ 0x140035E64 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x140036420 (UpdateKernelPlatformStates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003618 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidatePlatformIdleState(int *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // edx
  _DWORD *v3; // r11
  __int64 v4; // rax
  int v5; // eax
  int v6; // r9d
  unsigned int i; // r11d
  _DWORD *v8; // r14
  __int64 v9; // rax
  unsigned __int16 v10; // r9

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD **)(v1 + 1144);
    v4 = *((unsigned __int8 *)a1 + 16);
    if ( (unsigned int)v4 >= *v3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = *a1;
        v6 = 87;
        goto LABEL_5;
      }
      return (unsigned int)-1073741811;
    }
    if ( (v3[3 * v4 + 1] & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 88;
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    }
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= a1[7] )
      return v2;
    v8 = *(_DWORD **)(*(_QWORD *)&a1[4 * i + 10] + 1144LL);
    if ( (unsigned int)LOBYTE(a1[4 * i + 12]) >= *v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v10 = 89;
      goto LABEL_26;
    }
    if ( !BYTE2(a1[4 * i + 12]) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v10 = 90;
LABEL_26:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v10,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        *a1,
        i);
      return (unsigned int)-1073741811;
    }
    if ( v1 )
      continue;
    v9 = *((unsigned __int8 *)a1 + 16);
    if ( (unsigned int)v9 >= *v8 )
      break;
    if ( (v8[3 * v9 + 1] & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v6 = 93;
      goto LABEL_9;
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (unsigned int)-1073741811;
  v6 = 92;
LABEL_9:
  v5 = *a1;
LABEL_5:
  LOBYTE(v2) = 2;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    1,
    v6,
    (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
    v5);
  return (unsigned int)-1073741811;
}
