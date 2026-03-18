/*
 * XREFs of SetIconMetrics @ 0x1C00D1B34
 * Callers:
 *     UserOnGreTextReady @ 0x1C001A438 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C0096B94 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01C70A0 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     UserSetFont @ 0x1C00D04FC (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1C00D0848 (UserSetAltScaleFont.c)
 *     GreMarkDeletableFont @ 0x1C00D16B0 (GreMarkDeletableFont.c)
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C00D2110 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     ?GetLocalizedInt@@YAHIH@Z @ 0x1C00D2184 (-GetLocalizedInt@@YAHIH@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00D2224 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, unsigned int *a2)
{
  struct HLFONT__ **v4; // rbx
  int v5; // esi
  __int64 v6; // rax
  int v7; // edx
  int LocalizedInt; // eax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rdx
  signed int v12; // r8d
  int v13; // ecx
  _BYTE v15[4]; // [rsp+40h] [rbp-98h] BYREF
  int TWIPSMetricById; // [rsp+44h] [rbp-94h]
  int v17; // [rsp+48h] [rbp-90h]
  int v18; // [rsp+4Ch] [rbp-8Ch]

  memset_0(v15, 0, 0x6CuLL);
  v4 = (struct HLFONT__ **)(GetSessionDpiMetrics() + 64);
  v5 = UserSetFont(
         a1,
         (unsigned __int64)(a2 + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
         154LL,
         v4);
  if ( v5 )
  {
    v6 = Get96DpiMetrics();
    v5 = UserSetAltScaleFont((HBRUSH)*v4, (__int64 *)(v6 + 64));
    if ( !v5 )
    {
      GreMarkDeletableFont(*v4);
      GreDeleteObject(*v4);
      *v4 = 0LL;
      InvalidateKMDpiMetricsCacheDPIMETRICS();
      return 0LL;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  if ( !v5 )
    return 0LL;
  if ( !a2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 66LL, 1LL);
    v18 = 0;
    LocalizedInt = GetLocalizedInt(0x71u, v7);
    TWIPSMetricById = GetTWIPSMetricById(a1, 0x40u, LocalizedInt);
    v10 = GetLocalizedInt(0x72u, v9);
    v17 = GetTWIPSMetricById(a1, 0x41u, v10);
    a2 = (unsigned int *)v15;
  }
  v11 = a2[1];
  v12 = a2[2];
  v13 = *(_DWORD *)(gpsi + 2304LL);
  if ( (int)v11 <= v13 )
    v11 = (unsigned int)v13;
  a2[1] = v11;
  if ( v12 <= *(_DWORD *)(gpsi + 2308LL) )
    v12 = *(_DWORD *)(gpsi + 2308LL);
  a2[2] = v12;
  SetDpiDepSysMet(18LL, v11);
  SetDpiDepSysMet(19LL, a2[2]);
  *(_DWORD *)(gpsi + 2476LL) = EngMulDiv(*(_DWORD *)(gpsi + 2356LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2480LL) = EngMulDiv(*(_DWORD *)(gpsi + 2360LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  if ( a2[3] )
    gdwPUDFlags |= 0x200000u;
  else
    gdwPUDFlags &= ~0x200000u;
  return 1LL;
}
