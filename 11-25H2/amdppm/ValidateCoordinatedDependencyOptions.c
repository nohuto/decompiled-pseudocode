/*
 * XREFs of ValidateCoordinatedDependencyOptions @ 0x14002FA94
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x140037DC8 (PepNotifyQueryCoordinatedStates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003618 (WPP_RECORDER_SF_DD.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     memset @ 0x14000DAC0 (memset.c)
 *     ValidateCoordinatedDependencyOptionsPlatform @ 0x14002FCD0 (ValidateCoordinatedDependencyOptionsPlatform.c)
 *     ValidateCoordinatedDependencyOptionsProcessor @ 0x14002FE28 (ValidateCoordinatedDependencyOptionsProcessor.c)
 */

__int64 __fastcall ValidateCoordinatedDependencyOptions(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rsi
  unsigned int v9; // eax
  __int64 result; // rax
  unsigned int v11; // ecx
  char v12; // al
  _BYTE *v13; // rdi
  __int64 v14; // rdx
  bool v15; // zf
  unsigned __int16 v16; // r9
  __int64 v17; // [rsp+28h] [rbp-160h]
  _BYTE v18[16]; // [rsp+40h] [rbp-148h] BYREF
  _BYTE v19[272]; // [rsp+50h] [rbp-138h] BYREF

  v6 = a2;
  memset(v19, 0, 0x108uLL);
  v9 = *(_DWORD *)(a5 + 12);
  v18[0] = 0;
  if ( v9 > a4 )
    KeBugCheckEx((ULONG)323, 2uLL, 0LL, v9, 0LL);
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x5Eu,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        v6,
        a3);
    return 3221225485LL;
  }
  KeInitializeAffinityEx2(v19, 32LL);
  if ( *(_QWORD *)(a5 + 16) )
    result = ValidateCoordinatedDependencyOptionsProcessor(v6, a3, a5, (unsigned int)v19, (__int64)v18);
  else
    result = ValidateCoordinatedDependencyOptionsPlatform(a1, v6, a3, a5, (__int64)v19, (__int64)v18);
  if ( (int)result >= 0 )
  {
    v11 = *(_DWORD *)(a5 + 12);
    v12 = 0;
    if ( !v11 )
      goto LABEL_25;
    v13 = (_BYTE *)(a5 + 27);
    v14 = v11;
    do
    {
      if ( *(v13 - 1) )
        v12 = 1;
      v15 = *v13 == 0;
      v13 += 4;
      if ( !v15 )
        v12 = 1;
      --v14;
    }
    while ( v14 );
    if ( v12 )
    {
      if ( v18[0] )
        *(_BYTE *)(a1 + 320 * v6 + 48 + 305) = 1;
      if ( !(unsigned int)KeAndAffinityEx2(v19, a1 + 320 * v6 + 48, 0LL) )
      {
        KeOrAffinityEx2(v19, a1 + 320 * v6 + 48, a1 + 320 * v6 + 48);
        return 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225659LL;
      v16 = 96;
    }
    else
    {
LABEL_25:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225659LL;
      v16 = 95;
    }
    LODWORD(v17) = v6;
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v16,
      (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      v17,
      a3);
    return 3221225659LL;
  }
  return result;
}
