/*
 * XREFs of PopAdaptiveGetConsoleSessionState @ 0x1409A2014
 * Callers:
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409A1AAC (PopAdaptiveGetSessionStateUnsafe.c)
 * Callees:
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x14075E15C (PopAdaptiveConsoleSessionOverrideClear.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     PopSetSessionUserStatus @ 0x1409A2C18 (PopSetSessionUserStatus.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopAdaptiveCalculateInputRelativeTimeout @ 0x1409A4028 (PopAdaptiveCalculateInputRelativeTimeout.c)
 */

__int64 __fastcall PopAdaptiveGetConsoleSessionState(
        unsigned int a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5)
{
  char v5; // r15
  unsigned int v8; // edi
  char IsEnabled; // al
  int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // ebx
  unsigned int *v13; // r14
  unsigned int v14; // ebp
  unsigned int i; // r15d
  int v16; // esi
  unsigned int v17; // eax
  int v18; // eax
  unsigned __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int v23; // eax
  _BYTE *v24; // rsi
  unsigned int j; // r14d
  bool v26; // cc
  unsigned int v27; // eax
  int v28; // [rsp+30h] [rbp-48h] BYREF
  int v29; // [rsp+34h] [rbp-44h]
  char v31; // [rsp+88h] [rbp+10h]

  v5 = 0;
  v31 = 0;
  v29 = PopInputTimeout;
  v8 = 3;
  IsEnabled = TtmIsEnabled();
  v10 = *((_DWORD *)a2 + 6);
  v11 = 0;
  if ( IsEnabled )
  {
    v12 = PopDisplayTimeout;
    v14 = 0;
    v29 = 0;
    v28 = PopDisplayTimeout;
    v8 = v10 == 0 ? 2 : 0;
    *a4 = 256;
    *a5 = 258;
    goto LABEL_18;
  }
  if ( v10 )
  {
    if ( !byte_140F07661
      || byte_140F07662
      || (v12 = PopAdaptiveLockConsoleTimeout,
          v26 = PopAdaptiveLockConsoleTimeout <= (unsigned int)PopDisplayTimeout,
          v28 = PopAdaptiveLockConsoleTimeout,
          *a4 = 257,
          !v26)
      && !PopEnforceConsoleLockScreenTimeout )
    {
      v12 = PopDisplayTimeout;
      v28 = PopDisplayTimeout;
      *a4 = 256;
    }
    v13 = (unsigned int *)&unk_140F07694;
    v14 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( *((_BYTE *)v13 - 20) != (_BYTE)v11 )
      {
        v20 = *(_QWORD *)(v13 - 3);
        if ( v20 < a2[1] )
        {
          PopAdaptiveConsoleSessionOverrideClear(i, 1);
          v11 = 0;
        }
        else
        {
          v21 = *v13;
          v31 = 1;
          if ( (_DWORD)v21 )
          {
            v27 = PopAdaptiveCalculateInputRelativeTimeout(v20, v21, *a2);
            if ( !v14 || v27 < v14 )
            {
              v14 = v27;
              *a5 = i;
            }
          }
          v22 = *(v13 - 1);
          if ( (_DWORD)v22 )
          {
            v23 = PopAdaptiveCalculateInputRelativeTimeout(v20, v22, *a2);
            if ( !v12 || v23 < v12 )
            {
              v12 = v23;
              *a4 = i;
            }
            v8 = 2;
          }
        }
      }
      v13 += 6;
    }
    v28 = v12;
    v16 = 256;
    if ( v8 != 3 )
      goto LABEL_12;
    if ( *a2 > (unsigned __int64)qword_140F07670 )
    {
      if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                            - *a2)
         / 0x3E8 < (unsigned int)PopInputTimeout
        || !PopInputTimeout )
      {
        v12 = v28;
        v8 = v11;
        goto LABEL_12;
      }
      v12 = v28;
    }
    v8 = 2;
    v31 = 1;
LABEL_12:
    v17 = PopAdaptiveDimTimeout;
    if ( PopAdaptiveDimTimeout )
    {
      if ( PopAdaptiveManualDimTimeout == v11 )
        v17 = v12 > 0x3C ? v12 - 15 : v11;
      else
        v16 = 258;
      if ( v17 && (!v14 || v17 < v14) )
      {
        v14 = v17;
        *a5 = v16;
      }
    }
    v5 = v31;
    goto LABEL_18;
  }
  v14 = 0;
  v12 = dword_140F07664;
  v8 = 2;
  v28 = dword_140F07664;
  *a4 = 256;
  *a5 = 258;
  if ( qword_140F07670 != a2[2] )
  {
    qword_140F07670 = a2[2];
    v24 = byte_140F07680;
    for ( j = 0; j < 2; ++j )
    {
      if ( *v24 && *((_QWORD *)v24 + 1) <= a2[2] )
      {
        PopAdaptiveConsoleSessionOverrideClear(j, 0);
        v11 = 0;
      }
      v24 += 24;
    }
  }
LABEL_18:
  dword_140F07664 = v12;
  qword_140F07668 = *a2;
  v18 = v29;
  *(_DWORD *)a3 = v12;
  if ( v8 )
    v18 = v11;
  *(_DWORD *)(a3 + 4) = v14;
  *(_BYTE *)(a3 + 12) = v5;
  *(_DWORD *)(a3 + 8) = v18;
  PopSetSessionUserStatus(a1, v8);
  PopSetPowerSettingValue(&GUID_CONSOLE_VIDEO_TIMEOUT, 0xFFFFFFFFLL, 0LL, 4LL, &v28);
  return PopSetPowerSettingValue(&GUID_CONSOLE_VIDEO_TIMEOUT, 0xFFFFFFFFLL, 1LL, 4LL, &v28);
}
