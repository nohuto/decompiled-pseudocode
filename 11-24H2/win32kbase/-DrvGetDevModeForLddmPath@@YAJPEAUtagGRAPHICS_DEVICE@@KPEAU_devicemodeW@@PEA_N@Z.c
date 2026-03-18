/*
 * XREFs of ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1400C7EA0
 * Callers:
 *     DrvEnumDisplaySettings @ 0x140024870 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x140013658 (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1400C80E0 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DrvGetDevModeForLddmPath(struct tagGRAPHICS_DEVICE *a1, int a2, struct _devicemodeW *a3, bool *a4)
{
  unsigned int v7; // esi
  unsigned int v8; // r14d
  char v9; // r15
  int v10; // eax
  int v11; // ebx
  char *v12; // rcx
  unsigned int i; // edx
  _DWORD *v14; // rsi
  __int64 DxgkWin32kInterface; // rax
  unsigned int v17; // eax
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  bool *v19; // [rsp+28h] [rbp-D8h]
  _BYTE v20[432]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+1E0h] [rbp+E0h]
  PVOID Buffer; // [rsp+1E8h] [rbp+E8h]

  v19 = a4;
  memset(v20, 0, sizeof(v20));
  v7 = 0;
  v21 = 0;
  Buffer = 0LL;
  if ( a2 == -1 )
  {
    v8 = 18;
  }
  else
  {
    if ( a2 != -2 )
      return 3221225485LL;
    v8 = 20;
  }
  v18 = 0;
  v9 = 1;
  do
  {
    v10 = QDC_AUTO_BUFFERS::TryFillOnce((QDC_AUTO_BUFFERS *)v20, v8, (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v18);
    v11 = v10;
    if ( v10 != -2147483643 && v10 != -1073741789 )
      break;
    v17 = v7++;
  }
  while ( v17 < 0xA );
  if ( v11 < 0 )
  {
LABEL_15:
    v12 = (char *)Buffer;
  }
  else
  {
    v12 = (char *)Buffer;
    v11 = -1073741275;
    for ( i = 0; i < v21; ++i )
    {
      v14 = (char *)Buffer + 216 * i;
      if ( *((_DWORD *)a1 + 62) == v14[6] && *((_DWORD *)a1 + 60) == v14[4] && *((_DWORD *)a1 + 61) == v14[5] )
      {
        v11 = 0;
        if ( a3 )
        {
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(Buffer);
          v11 = (*(__int64 (__fastcall **)(_DWORD *, struct _devicemodeW *))(DxgkWin32kInterface + 688))(v14, a3);
          if ( v11 < 0 )
            goto LABEL_15;
          v12 = (char *)Buffer;
        }
        if ( v19 )
        {
          if ( v14[49] != -2 || v14[50] != -2 )
            v9 = 0;
          *v19 = v9;
        }
        break;
      }
    }
  }
  if ( a2 == -2 && v11 == -1073741275 && a3 )
  {
    memset(a3, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&a3->dmSpecVersion = 67175425;
    a3->dmSize = 220;
    a3->dmFields = 410910848;
    DrvGetDisplayDriverDpiSetting(a3);
    v12 = (char *)Buffer;
    v11 = 0;
  }
  if ( v12 )
  {
    if ( v12 != v20 )
      GreDeleteFastMutex(v12);
  }
  return (unsigned int)v11;
}
