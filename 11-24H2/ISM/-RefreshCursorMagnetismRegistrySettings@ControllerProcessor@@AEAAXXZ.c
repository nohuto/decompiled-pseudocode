/*
 * XREFs of ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x18007AF68
 * Callers:
 *     _lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_ @ 0x18009C3B0 (_lambda_828562b8234057b7c70d01bfff3fe312_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017AB58 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z @ 0x180096F94 (-ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z.c)
 */

void __fastcall ControllerProcessor::RefreshCursorMagnetismRegistrySettings(ControllerProcessor *this)
{
  bool v2; // zf
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rax
  ControllerProcessor *v10; // rcx
  unsigned int v11; // eax
  ControllerProcessor *v12; // rcx
  ControllerProcessor *v13; // rcx
  float v14; // xmm7_4
  ControllerProcessor *v15; // rcx
  float v16; // xmm6_4
  ControllerProcessor *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v20[4]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int pvData; // [rsp+C0h] [rbp+48h] BYREF
  DWORD pcbData; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v24; // [rsp+D8h] [rbp+60h] BYREF

  pvData = 0;
  pcbData = 4;
  v2 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
         L"VelocityInDIPSPerSecond",
         0x10u,
         0LL,
         &pvData,
         &pcbData) == 0;
  v3 = 360;
  if ( v2 )
    v3 = pvData;
  v23 = v3;
  pvData = 0;
  pcbData = 4;
  v2 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
         L"DistanceThresholdInDIPS",
         0x10u,
         0LL,
         &pvData,
         &pcbData) == 0;
  v4 = 40;
  if ( v2 )
    v4 = pvData;
  v24 = v4;
  pvData = 0;
  pcbData = 4;
  v2 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
         L"AttractionRectInsetInDIPS",
         0x10u,
         0LL,
         &pvData,
         &pcbData) == 0;
  v5 = 5;
  if ( v2 )
    v5 = pvData;
  v20[0] = v5;
  pvData = 0;
  pcbData = 4;
  v6 = 50;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
          L"MagnetismDelayInMilliseconds",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
    v6 = pvData;
  pvData = 0;
  pcbData = 4;
  v7 = 16;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
          L"MagnetismUpdateIntervalInMilliseconds",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
    v7 = pvData;
  pvData = 0;
  pcbData = 4;
  v8 = 100;
  v2 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
         L"ClosestInteractiveBoundsUpdateIntervalInMilliseconds",
         0x10u,
         0LL,
         &pvData,
         &pcbData) == 0;
  v9 = 100LL;
  if ( v2 )
    v9 = pvData;
  *((_QWORD *)this + 966) = v9;
  pvData = 0;
  pcbData = 4;
  v2 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
         L"SearchWidthInDIPS",
         0x10u,
         0LL,
         &pvData,
         &pcbData) == 0;
  v11 = 100;
  if ( v2 )
    v11 = pvData;
  pvData = v11;
  *((_DWORD *)this + 1934) = ControllerProcessor::ConvertDIPSToPixels(v10, &pvData);
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
          L"SearchHeightInDIPS",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
    v8 = pvData;
  pvData = v8;
  *((_DWORD *)this + 1935) = ControllerProcessor::ConvertDIPSToPixels(v12, &pvData);
  v14 = (float)(int)ControllerProcessor::ConvertDIPSToPixels(v13, &v23) * (float)((float)(int)v7 / 1000.0);
  v16 = (float)(int)ControllerProcessor::ConvertDIPSToPixels(v15, &v24);
  v18 = ControllerProcessor::ConvertDIPSToPixels(v17, v20);
  *((float *)this + 1898) = v14;
  *((float *)this + 1899) = v16;
  *((_DWORD *)this + 1900) = v18;
  *((_QWORD *)this + 963) = 10000LL * v6;
  v19 = 10000LL * *((_QWORD *)this + 966);
  *((_QWORD *)this + 964) = 10000LL * v7;
  *((_QWORD *)this + 965) = v19;
}
