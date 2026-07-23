/*
 * XREFs of PiDevCfgSplitDriverConfigurationId @ 0x14072A218
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072650C (PiDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14041A560 (RtlTimeFieldsToTime.c)
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     swscanf_s @ 0x140501FA0 (swscanf_s.c)
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B10 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PiDevCfgParseVersionString @ 0x1407285BC (PiDevCfgParseVersionString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgSplitDriverConfigurationId(
        const wchar_t *Src,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PLARGE_INTEGER Time,
        _QWORD *a6)
{
  unsigned int v7; // ebx
  wchar_t *v9; // rax
  wchar_t *v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  ULONG_PTR v13; // rdx
  void *Pool2; // rax
  wchar_t *v15; // rax
  wchar_t *v16; // rsi
  wchar_t *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  _WORD *v20; // r14
  wchar_t *v21; // rsi
  unsigned __int64 v22; // rbp
  int v23; // eax
  const wchar_t *v24; // rcx
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-58h] BYREF
  wchar_t Srca[12]; // [rsp+40h] [rbp-48h] BYREF

  v7 = 0;
  TimeFields = 0LL;
  v9 = wcschr(Src, 0x3Au);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741823;
  if ( a2 )
  {
    v11 = 2 * (unsigned int)(v9 - Src);
    v12 = v11;
    if ( v11 + 2 > 0xFFFE )
      return (unsigned int)-1073741562;
    *(_WORD *)a2 = v11;
    v13 = (unsigned __int16)(v11 + 2);
    *(_WORD *)(a2 + 2) = v13;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v13, 0x67727453u);
    *(_QWORD *)(a2 + 8) = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    memmove(Pool2, Src, 2 * (unsigned int)(v10 - Src));
    *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * (v12 >> 1)) = 0;
  }
  v15 = wcschr(v10 + 1, 0x2Cu);
  if ( !v15 )
    return (unsigned int)-1073741823;
  v16 = v15 + 1;
  v17 = wcschr(v15 + 1, 0x2Cu);
  v18 = -1LL;
  if ( !v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v16[v19] );
    v17 = &v16[v19];
  }
  if ( *v17 )
  {
    if ( Time || a6 )
    {
      v20 = v17 + 1;
      v21 = wcschr(v17 + 1, 0x2Cu);
      if ( !v21 )
      {
        do
          ++v18;
        while ( v20[v18] );
        v21 = &v20[v18];
      }
      if ( Time )
      {
        v22 = (unsigned int)(v21 - v20);
        if ( v22 * 2 + 2 > 0x16 )
          return (unsigned int)-1073741823;
        memmove(Srca, v20, (unsigned int)(v22 * 2));
        if ( v22 >= 11 )
          _report_rangecheckfailure();
        Srca[v22] = 0;
        if ( swscanf_s(Srca, L"%hu/%hu/%hu", &TimeFields.Month, &TimeFields.Day, &TimeFields) != 3
          || !RtlTimeFieldsToTime(&TimeFields, Time) )
        {
          return (unsigned int)-1073741823;
        }
      }
      if ( !a6 )
        return v7;
      if ( *v21 )
      {
        v23 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
        v24 = v21 + 1;
        if ( v23 )
        {
          if ( PiDevCfgParseVersionString(v24, 4, a6) )
            return v7;
        }
        else if ( swscanf_s(
                    v24,
                    L"%hu.%hu.%hu.%hu",
                    (char *)a6 + 6,
                    (char *)a6 + 4,
                    (char *)a6 + 2,
                    a6,
                    *(_QWORD *)&TimeFields.Year,
                    *(_QWORD *)&TimeFields.Minute) == 4 )
        {
          return v7;
        }
        return (unsigned int)-1073741823;
      }
LABEL_35:
      *a6 = 0LL;
    }
  }
  else
  {
    if ( Time )
      Time->QuadPart = 0LL;
    if ( a6 )
      goto LABEL_35;
  }
  return v7;
}
