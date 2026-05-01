/*
 * XREFs of ?InitializeConfig@MultitaskingViewGestureHandler@@AEAAXXZ @ 0x1801F4574
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180299190 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::InitializeConfig(MultitaskingViewGestureHandler *this)
{
  LSTATUS ValueW; // eax
  bool v3; // sf
  LSTATUS v4; // eax
  bool v5; // sf
  LSTATUS v6; // eax
  bool v7; // sf
  DWORD pcbData[4]; // [rsp+40h] [rbp-10h] BYREF
  int pvData; // [rsp+78h] [rbp+28h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+38h] BYREF

  pvData = 0;
  pcbData[0] = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\",
             L"HorizontalThresholdPercentage",
             0x10u,
             0LL,
             &pvData,
             pcbData);
  v3 = ValueW < 0;
  if ( ValueW > 0 )
    v3 = 1;
  if ( !v3 )
    *((double *)this + 19) = (double)pvData / 100.0;
  v10 = 0;
  pcbData[0] = 4;
  v4 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\",
         L"VerticalThresholdPercentage",
         0x10u,
         0LL,
         &v10,
         pcbData);
  v5 = v4 < 0;
  if ( v4 > 0 )
    v5 = 1;
  if ( !v5 )
    *((double *)this + 18) = (double)v10 / 100.0;
  v11 = 0;
  pcbData[0] = 4;
  v6 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\",
         L"StartGestureTimeout",
         0x10u,
         0LL,
         &v11,
         pcbData);
  v7 = v6 < 0;
  if ( v6 > 0 )
    v7 = 1;
  if ( !v7 )
    *((_QWORD *)this + 24) = v11;
}
