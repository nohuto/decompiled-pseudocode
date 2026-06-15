/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x18001B530
 * Callers:
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18000B714 (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18001A234 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18001CD40 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18001CFB0 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18005EC00 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800608E0 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180063E60 (-OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18006B274 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800FD8CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014E40 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A4DEE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(__int64 *a1, char *a2, __int64 a3)
{
  char *v3; // rdi
  __int64 v5; // rbx
  __int64 result; // rax
  char *v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp

  v3 = a2;
  if ( !a2 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)&a2[2 * v5] );
  if ( !(_DWORD)v5 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  v9 = *(unsigned int *)(*a1 - 16);
  v10 = (__int64)&a2[-*a1] >> 1;
  if ( (int)((*(_DWORD *)(*a1 - 12) - v5) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v5);
  v7 = (char *)*a1;
  v8 = 2LL * (int)v5;
  if ( v10 > v9 )
  {
    if ( !v8 )
      goto LABEL_7;
    if ( v7 )
    {
      memcpy_0(v7, v3, 2LL * (int)v5);
      goto LABEL_7;
    }
    goto LABEL_14;
  }
  a2 = &v7[2 * v10];
  if ( v8 )
  {
    if ( !v7 || !a2 )
    {
LABEL_14:
      *(_DWORD *)_o__errno(v7, a2, a3) = 22;
      invalid_parameter_noinfo();
      goto LABEL_7;
    }
    memmove_0(v7, a2, 2LL * (int)v5);
  }
LABEL_7:
  if ( (int)v5 < 0 || (int)v5 > *(_DWORD *)(*a1 - 12) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*a1 - 16) = v5;
  result = *a1;
  *(_WORD *)(v8 + *a1) = 0;
  return result;
}
