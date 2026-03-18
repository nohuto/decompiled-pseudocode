/*
 * XREFs of ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x140348A38
 * Callers:
 *     DxgkEnumAdapters @ 0x140348A20 (DxgkEnumAdapters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x140322E94 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140349510 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersImpl(struct _D3DKMT_ENUMADAPTERS *a1, __int64 a2, __int64 a3, enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // eax
  _OWORD *v8; // rax
  unsigned int v10; // [rsp+50h] [rbp-188h] BYREF
  unsigned int v11; // [rsp+54h] [rbp-184h]
  __int64 v12; // [rsp+58h] [rbp-180h]
  _DWORD *v13; // [rsp+60h] [rbp-178h]
  __int64 v14; // [rsp+68h] [rbp-170h]
  _DWORD v15[84]; // [rsp+70h] [rbp-168h] BYREF

  v4 = a1;
  if ( a1 )
  {
    memset(v15, 0, 0x144uLL);
    v10 = 0;
    v12 = 0LL;
    v13 = &v15[1];
    v11 = 16;
    v5 = 2LL;
    v14 = 2LL;
    v6 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v10, 1, 1u, UserRequest);
    v7 = v10;
    if ( v10 > 0x10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1034;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"EnumAdaptersInternal.NumAdapters <= MAX_ENUM_ADAPTERS",
        1034LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v7 = v10;
    }
    if ( v7 > v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1035;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
        1035LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v7 = v10;
    }
    if ( v7 > (unsigned int)v12 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1036;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
        1036LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v7 = v10;
    }
    if ( (int)v6 < 0 )
    {
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 1041;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkEnumAdaptersInternal failed, returning 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v15[0] = v7;
      if ( &v4[1] < v4 || (unsigned __int64)&v4[1] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v8 = v15;
      do
      {
        *(_OWORD *)&v4->NumAdapters = *v8;
        *(_OWORD *)&v4->Adapters[0].NumOfSources = v8[1];
        *(_OWORD *)&v4->Adapters[1].AdapterLuid.HighPart = v8[2];
        *(_OWORD *)&v4->Adapters[2].AdapterLuid.LowPart = v8[3];
        *(_OWORD *)&v4->Adapters[3].hAdapter = v8[4];
        *(_OWORD *)&v4->Adapters[3].bPresentMoveRegionsPreferred = v8[5];
        *(_OWORD *)&v4->Adapters[4].NumOfSources = v8[6];
        v4 = (struct _D3DKMT_ENUMADAPTERS *)((char *)v4 + 128);
        *(_OWORD *)&v4[-1].Adapters[15].AdapterLuid.LowPart = v8[7];
        v8 += 8;
        --v5;
      }
      while ( v5 );
      *(_OWORD *)&v4->NumAdapters = *v8;
      *(_OWORD *)&v4->Adapters[0].NumOfSources = v8[1];
      *(_OWORD *)&v4->Adapters[1].AdapterLuid.HighPart = v8[2];
      *(_OWORD *)&v4->Adapters[2].AdapterLuid.LowPart = v8[3];
      v4->Adapters[3].hAdapter = *((_DWORD *)v8 + 16);
    }
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1001;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DxgkEnumAdapters caller specified NULL D3DKMT_ENUMADAPTERS, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
