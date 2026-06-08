/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x14002F62C
 * Callers:
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x140004B78 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400053BC (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_SSii @ 0x14000B098 (WPP_RECORDER_SF_SSii.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     ValidateCpcSymmetry @ 0x14002EE80 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x14002F374 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x14002F438 (ValidatePepPerformanceSymmetry.c)
 *     ValidatePssSymmetry @ 0x14002FB38 (ValidatePssSymmetry.c)
 *     ValidateTssSymmetry @ 0x14002FC74 (ValidateTssSymmetry.c)
 *     GetPerfDomain @ 0x140045878 (GetPerfDomain.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  unsigned int v2; // esi
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r14
  __int64 *v10; // r12
  __int64 v11; // rcx
  _DWORD *v12; // r13
  const wchar_t **v13; // r15
  _DWORD *v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  bool v17; // sf
  int v18; // eax
  const wchar_t **v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r11
  __int64 v27; // rbx
  int v29; // [rsp+20h] [rbp-60h]
  _OWORD v30[2]; // [rsp+58h] [rbp-28h] BYREF
  const wchar_t **v31; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v32; // [rsp+D0h] [rbp+50h] BYREF
  _DWORD *v33; // [rsp+D8h] [rbp+58h]

  v2 = 0;
  v32 = 0LL;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  memset(v30, 0, sizeof(v30));
  v3(WdfDriverGlobals, qword_140019188, 0LL);
  if ( (unsigned int)GetPerfDomain(a1, v30, &v31) != 1 )
  {
    v4 = 0LL;
    ResetEnumerationContext((__int64 *)v30);
    v5 = EnumerateNextDevice((__int64 *)v30, &v32);
    v8 = 0x10FF300000LL;
    while ( !v5 )
    {
      v9 = v32;
      if ( v32 != a1 )
      {
        v10 = (__int64 *)(a1 + 280);
        v11 = *(_QWORD *)(a1 + 280);
        v12 = (_DWORD *)(a1 + 280);
        if ( (v8 & v11) == (v8 & *(_QWORD *)(v32 + 280)) )
        {
          v13 = (const wchar_t **)(a1 + 64);
        }
        else
        {
          v13 = (const wchar_t **)(a1 + 64);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_SSii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v8 & v11,
              v6,
              v7,
              v29,
              *v13,
              *(const wchar_t **)(v32 + 64));
            v8 = 0x10FF300000LL;
          }
          v11 = *v10;
          v12 = (_DWORD *)(a1 + 280);
          v4 |= v8 & (*(_QWORD *)(v9 + 280) ^ *v10);
        }
        v14 = v12;
        if ( (v11 & 0x70000000) != 0 )
        {
          v15 = ValidatePctPtcSymmetry(
                  *(const wchar_t **)(a1 + 64),
                  a1 + 424,
                  *(const wchar_t **)(v9 + 64),
                  a1 + 424,
                  "_PCT");
          v33 = v12;
          v16 = v4 | 0x70000000;
          v17 = v15 < 0;
          v18 = *(_DWORD *)(a1 + 280);
          if ( !v17 )
            v16 = v4;
          v4 = v16;
          v19 = (const wchar_t **)(a1 + 64);
          v31 = (const wchar_t **)(a1 + 64);
          if ( (v18 & 0x40000000) != 0 )
          {
            v20 = *(_QWORD *)(v9 + 456);
            v21 = *(_QWORD *)(v9 + 64);
            v22 = *(_QWORD *)(a1 + 456);
            v23 = *(_QWORD *)(a1 + 64);
            v33 = v12;
            v31 = (const wchar_t **)(a1 + 64);
            if ( (int)ValidatePssSymmetry(v23, v22, v21, v20, (__int64)"XPSS") >= 0 )
            {
              v19 = (const wchar_t **)(a1 + 64);
            }
            else
            {
              v4 |= 0x40000000uLL;
              v19 = (const wchar_t **)(a1 + 64);
              v33 = (_DWORD *)(a1 + 280);
              v31 = (const wchar_t **)(a1 + 64);
            }
          }
          v14 = v12;
          v13 = v19;
          if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_QWORD *)(a1 + 64),
                      *(_QWORD *)(a1 + 448),
                      *(_QWORD *)(v9 + 64),
                      *(_QWORD *)(v9 + 448),
                      (__int64)"_PSS") < 0 )
          {
            v14 = v33;
            v4 |= 0x30000000uLL;
            v13 = v31;
          }
        }
        if ( (*v14 & 0x3300000) != 0 )
        {
          v13 = (const wchar_t **)(a1 + 64);
          v24 = ValidatePctPtcSymmetry(
                  *(const wchar_t **)(a1 + 64),
                  a1 + 480,
                  *(const wchar_t **)(v9 + 64),
                  a1 + 480,
                  "_PTC");
          v25 = v4 | 0x3300000;
          if ( v24 >= 0 )
            v25 = v4;
          v4 = v25;
          if ( (int)ValidateTssSymmetry(*v13, *(_QWORD *)(a1 + 504), *(_QWORD *)(v9 + 64), *(_QWORD *)(v9 + 504)) < 0 )
            v4 |= 0x3300000uLL;
        }
        if ( (*v14 & 0x8000000) != 0
          && (int)ValidateCpcSymmetry(*v13, *(_QWORD *)(a1 + 592), *(const wchar_t **)(v9 + 64), *(_QWORD *)(v9 + 592)) < 0 )
        {
          v4 |= 0x8000000uLL;
        }
        if ( (*(_QWORD *)v14 & 0x1000000000LL) != 0
          && (int)ValidatePepPerformanceSymmetry(
                    *v13,
                    *(_QWORD *)(a1 + 1184),
                    *(const wchar_t **)(v9 + 64),
                    *(_QWORD *)(v9 + 1184)) < 0 )
        {
          v4 |= 0x1000000000uLL;
        }
      }
      v5 = EnumerateNextDevice((__int64 *)v30, &v32);
    }
    ResetEnumerationContext((__int64 *)v30);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v30, &v32) )
    {
      v27 = ~v4;
      do
        *(_QWORD *)(v32 + 280) &= v27;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v30, &v32) );
    }
    v2 = (v26 & *(_QWORD *)(a1 + 280)) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019188);
  return v2;
}
