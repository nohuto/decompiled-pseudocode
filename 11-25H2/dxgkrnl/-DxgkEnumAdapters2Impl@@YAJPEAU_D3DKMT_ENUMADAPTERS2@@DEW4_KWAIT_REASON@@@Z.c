/*
 * XREFs of ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x14031EA60
 * Callers:
 *     DxgkEnumAdapters2 @ 0x14031EA30 (DxgkEnumAdapters2.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034810 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140037274 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ??0DXGCRITICALREGION@@QEAA@XZ @ 0x140050278 (--0DXGCRITICALREGION@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     _DxgkEnumAdapters2Impl_::_2_::ENSURE_CLEANUP::_ENSURE_CLEANUP @ 0x140181F94 (_DxgkEnumAdapters2Impl_--_2_--ENSURE_CLEANUP--_ENSURE_CLEANUP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x14031D0E8 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x14031D170 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x14031E194 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x14031F120 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 */

__int64 __fastcall DxgkEnumAdapters2Impl(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rax
  WatchdogTimeoutReport *v9; // rdi
  __m128i v10; // xmm6
  char *v11; // rsi
  DXGGLOBAL *Global; // rax
  ULONG MaximumAdapterCountInSession; // eax
  DXGGLOBAL *v14; // rax
  unsigned int v15; // r12d
  DXGGLOBAL *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v20; // eax
  struct _D3DKMT_ENUMADAPTERS2 v21; // xmm6
  _BYTE **v22; // rcx
  size_t v23; // r8
  const void *v24; // rdx
  struct _KTHREAD **i; // rsi
  int v26; // ecx
  unsigned __int8 v27[4]; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int8 v28; // [rsp+64h] [rbp-144h]
  char v29; // [rsp+68h] [rbp-140h]
  struct _D3DKMT_ENUMADAPTERS2 v30; // [rsp+70h] [rbp-138h]
  __int64 v31; // [rsp+80h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-120h]
  __int64 v33; // [rsp+98h] [rbp-110h]
  enum _KWAIT_REASON v34; // [rsp+A0h] [rbp-108h]
  WatchdogTimeoutReport *v35; // [rsp+A8h] [rbp-100h] BYREF
  PVOID P; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v37[160]; // [rsp+B8h] [rbp-F0h] BYREF
  int v38; // [rsp+158h] [rbp-50h]

  v34 = a4;
  v28 = a3;
  v29 = a2;
  if ( !a1 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1129;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkEnumAdapters2 caller specified NULL D3DKMT_ENUMADAPTERS2, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  DXGCRITICALREGION::DXGCRITICALREGION((DXGCRITICALREGION *)v27);
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)v27);
  v8 = operator new(0x100uLL, 0x4B677844u, 64LL, v7);
  if ( v8 )
    v9 = (WatchdogTimeoutReport *)WatchdogTimeoutReport::WatchdogTimeoutReport(
                                    v8,
                                    403LL,
                                    2069LL,
                                    2LL,
                                    KeGetCurrentThread(),
                                    0LL,
                                    7,
                                    0LL,
                                    0LL,
                                    1,
                                    10000);
  else
    v9 = 0LL;
  v35 = v9;
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1172;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for wdTimeoutReport",
      1172LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v30 = 0LL;
  v31 = 0LL;
  *(_OWORD *)Src = 0LL;
  v33 = 2LL;
  P = 0LL;
  v38 = 0;
  if ( a2 == 1 )
  {
    if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v10 = *(__m128i *)a1;
    v30 = *a1;
  }
  else
  {
    v10 = *(__m128i *)a1;
    v30 = *a1;
  }
  v11 = (char *)_mm_srli_si128(v10, 8).m128i_u64[0];
  if ( !v11 )
  {
    v6 = 0;
    Global = DXGGLOBAL::GetGlobal();
    MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
    goto LABEL_37;
  }
  v14 = DXGGLOBAL::GetGlobal();
  v15 = _mm_cvtsi128_si32(v10);
  if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCountInSession(v14) < v15 )
  {
    v16 = DXGGLOBAL::GetGlobal();
    v15 = DXGGLOBAL::GetMaximumAdapterCountInSession(v16);
    v30.NumAdapters = v15;
  }
  v17 = 1LL;
  if ( v15 > 1 )
    v17 = v15;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v17);
  if ( P )
  {
    Src[1] = P;
    HIDWORD(v31) = v15;
    LOBYTE(v18) = v28;
    v6 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v31, a2, v18, v34);
    if ( (unsigned int)v31 > v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1254;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
        1254LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)v31 > HIDWORD(v31) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1255;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
        1255LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v20 = (unsigned int)Src[0];
    if ( (unsigned int)v31 > LODWORD(Src[0]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1256;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
        1256LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v20 = (unsigned int)Src[0];
    }
    if ( v6 < 0 )
      goto LABEL_45;
    if ( HIDWORD(v31) < v20 )
    {
      v6 = -1073741789;
      v30.NumAdapters = 0;
      goto LABEL_38;
    }
    MaximumAdapterCountInSession = v31;
LABEL_37:
    v30.NumAdapters = MaximumAdapterCountInSession;
LABEL_38:
    v21 = v30;
    if ( v6 >= 0 )
    {
      if ( a2 == 1 )
      {
        v22 = (_BYTE **)MmUserProbeAddress;
        if ( (unsigned __int64)&a1[1] > MmUserProbeAddress || &a1[1] <= a1 )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v22 = (_BYTE **)MmUserProbeAddress;
        }
        *a1 = v21;
        goto LABEL_46;
      }
      *a1 = v30;
    }
LABEL_45:
    v22 = (_BYTE **)MmUserProbeAddress;
LABEL_46:
    if ( v6 < 0 )
    {
      for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v22);
            ;
            DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src[1] + 5 * (unsigned int)(v26 - 1))) )
      {
        v26 = v31;
        if ( !(_DWORD)v31 )
          break;
        LODWORD(v31) = v31 - 1;
      }
    }
    else if ( v11 )
    {
      if ( a2 == 1 )
      {
        v23 = 20LL * (unsigned int)v31;
        v24 = Src[1];
        if ( &v11[v23] > *v22 || &v11[v23] <= v11 )
          **v22 = 0;
        memmove(v11, v24, v23);
      }
      else
      {
        memmove(v11, Src[1], 20LL * (unsigned int)v31);
      }
    }
    if ( P != v37 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v38 = 0;
    DxgkEnumAdapters2Impl_::_2_::ENSURE_CLEANUP::_ENSURE_CLEANUP(&v35);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v27);
    return (unsigned int)v6;
  }
  WdLogSingleEntry1(2LL, -1073741801LL);
  WdLogGlobalForLineNumber = 1231;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to allocate memory for D3DKMT_ADAPTERINFO buffer, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v37 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v38 = 0;
  if ( v9 )
  {
    WatchdogTimeoutReport::~WatchdogTimeoutReport(v9);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  }
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v27);
  return 3221225495LL;
}
