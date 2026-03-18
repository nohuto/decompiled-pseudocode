/*
 * XREFs of DrvSetVideoParameters @ 0x14015B8E4
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140017264 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     DrvGetDeviceFromName @ 0x140017410 (DrvGetDeviceFromName.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 */

__int64 __fastcall DrvSetVideoParameters(PCUNICODE_STRING String1, __int64 a2, _OWORD *a3, int a4, int a5)
{
  unsigned int v9; // esi
  __int64 DeviceFromName; // r14
  __int64 v11; // rdx
  __int64 v13; // rbx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  _OWORD *v20; // rax
  unsigned int v21; // [rsp+80h] [rbp+8h] BYREF

  v9 = -5;
  DeviceFromName = 0LL;
  WdLogSingleEntry2(4LL, String1, a2);
  WdLogGlobalForLineNumber = 27369;
  if ( !String1 )
  {
    if ( a2 )
      DeviceFromName = *(_QWORD *)(a2 + 2568);
    if ( !DeviceFromName )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 27394;
      return v9;
    }
LABEL_8:
    if ( DeviceFromName == -4 )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 27402;
      return v9;
    }
    if ( DeviceFromName )
    {
      if ( !a3 )
        return v9;
      if ( a5 && (*(_DWORD *)(DeviceFromName + 160) & 0x800000) == 0 )
        return 0xFFFFFFFFLL;
      v21 = 0;
      v13 = PALLOCNOZ(712LL, 0x73726447u);
      if ( !v13 )
      {
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 27423;
        return 0xFFFFFFFFLL;
      }
      v14 = (_OWORD *)v13;
      v15 = a3;
      v16 = 2LL;
      v17 = 2LL;
      do
      {
        *v14 = *v15;
        v14[1] = v15[1];
        v14[2] = v15[2];
        v14[3] = v15[3];
        v14[4] = v15[4];
        v14[5] = v15[5];
        v14[6] = v15[6];
        v14 += 8;
        *(v14 - 1) = v15[7];
        v15 += 8;
        --v17;
      }
      while ( v17 );
      *v14 = *v15;
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v14[4] = v15[4];
      v14[5] = v15[5];
      *((_DWORD *)v14 + 24) = *((_DWORD *)v15 + 24);
      if ( a4 )
      {
        v18 = *(_DWORD *)(v13 + 20);
        if ( v18 != 1
          && (v18 != 2
           || ((*(_DWORD *)(v13 + 24) & 0x100) == 0 || *(_DWORD *)(v13 + 84) != 2)
           && ((*(_DWORD *)(v13 + 24) & 0x100) == 0 || *(_DWORD *)(v13 + 84) != 4 || *(_DWORD *)(v13 + 96))) )
        {
          GreDeleteFastMutex((char *)v13);
          return v9;
        }
      }
      v19 = GreDeviceIoControlImpl(
              *(PDEVICE_OBJECT *)(DeviceFromName + 136),
              0x230020u,
              (PVOID)v13,
              0x164u,
              (PVOID)v13,
              0x164u,
              &v21,
              0,
              1);
      if ( v19 )
        v19 = -5;
      v9 = v19;
      v20 = (_OWORD *)v13;
      do
      {
        *a3 = *v20;
        a3[1] = v20[1];
        a3[2] = v20[2];
        a3[3] = v20[3];
        a3[4] = v20[4];
        a3[5] = v20[5];
        a3[6] = v20[6];
        a3 += 8;
        *(a3 - 1) = v20[7];
        v20 += 8;
        --v16;
      }
      while ( v16 );
      *a3 = *v20;
      a3[1] = v20[1];
      a3[2] = v20[2];
      a3[3] = v20[3];
      a3[4] = v20[4];
      a3[5] = v20[5];
      *((_DWORD *)a3 + 24) = *((_DWORD *)v20 + 24);
      GreDeleteFastMutex((char *)v13);
    }
    WdLogSingleEntry1(5LL, (int)v9);
    WdLogGlobalForLineNumber = 27492;
    return v9;
  }
  DeviceFromName = DrvGetDeviceFromName(String1, v11);
  if ( DeviceFromName )
    goto LABEL_8;
  WdLogSingleEntry0(5LL);
  WdLogGlobalForLineNumber = 27378;
  return v9;
}
