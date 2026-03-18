/*
 * XREFs of ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x140349F80
 * Callers:
 *     DxgkEnumAdapters2 @ 0x140349F50 (DxgkEnumAdapters2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034740 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140036D88 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ??0DXGCRITICALREGION@@QEAA@XZ @ 0x14004FCF8 (--0DXGCRITICALREGION@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     _DxgkEnumAdapters2Impl_::_2_::ENSURE_CLEANUP::_ENSURE_CLEANUP @ 0x14018445C (_DxgkEnumAdapters2Impl_--_2_--ENSURE_CLEANUP--_ENSURE_CLEANUP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x140322E94 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140349488 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140349510 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x14034A640 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 */

__int64 __fastcall DxgkEnumAdapters2Impl(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  int v6; // edi
  __int64 v7; // rax
  WatchdogTimeoutReport *v8; // rdi
  __m128i v9; // xmm6
  char *v10; // rsi
  DXGGLOBAL *Global; // rax
  ULONG MaximumAdapterCountInSession; // eax
  DXGGLOBAL *v13; // rax
  unsigned int v14; // r12d
  DXGGLOBAL *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v19; // eax
  struct _D3DKMT_ENUMADAPTERS2 v20; // xmm6
  _BYTE **v21; // rcx
  size_t v22; // r8
  const void *v23; // rdx
  struct _KTHREAD **i; // rsi
  int v25; // ecx
  unsigned __int8 v26[4]; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int8 v27; // [rsp+64h] [rbp-144h]
  char v28; // [rsp+68h] [rbp-140h]
  struct _D3DKMT_ENUMADAPTERS2 v29; // [rsp+70h] [rbp-138h]
  __int64 v30; // [rsp+80h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-120h]
  __int64 v32; // [rsp+98h] [rbp-110h]
  enum _KWAIT_REASON v33; // [rsp+A0h] [rbp-108h]
  WatchdogTimeoutReport *v34; // [rsp+A8h] [rbp-100h] BYREF
  PVOID P; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v36[160]; // [rsp+B8h] [rbp-F0h] BYREF
  int v37; // [rsp+158h] [rbp-50h]

  v33 = a4;
  v27 = a3;
  v28 = a2;
  if ( !a1 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1131;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DxgkEnumAdapters2 caller specified NULL D3DKMT_ENUMADAPTERS2, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  DXGCRITICALREGION::DXGCRITICALREGION((DXGCRITICALREGION *)v26);
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)v26);
  v7 = operator new(0x100uLL, 0x4B677844u, 64LL);
  if ( v7 )
    v8 = (WatchdogTimeoutReport *)WatchdogTimeoutReport::WatchdogTimeoutReport(
                                    v7,
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
    v8 = 0LL;
  v34 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1174;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for wdTimeoutReport",
      1174LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v29 = 0LL;
  v30 = 0LL;
  *(_OWORD *)Src = 0LL;
  v32 = 2LL;
  P = 0LL;
  v37 = 0;
  if ( a2 == 1 )
  {
    if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v9 = *(__m128i *)a1;
    v29 = *a1;
  }
  else
  {
    v9 = *(__m128i *)a1;
    v29 = *a1;
  }
  v10 = (char *)_mm_srli_si128(v9, 8).m128i_u64[0];
  if ( !v10 )
  {
    v6 = 0;
    Global = DXGGLOBAL::GetGlobal();
    MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
    goto LABEL_37;
  }
  v13 = DXGGLOBAL::GetGlobal();
  v14 = _mm_cvtsi128_si32(v9);
  if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCountInSession(v13) < v14 )
  {
    v15 = DXGGLOBAL::GetGlobal();
    v14 = DXGGLOBAL::GetMaximumAdapterCountInSession(v15);
    v29.NumAdapters = v14;
  }
  v16 = 1LL;
  if ( v14 > 1 )
    v16 = v14;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v16);
  if ( P )
  {
    Src[1] = P;
    HIDWORD(v30) = v14;
    LOBYTE(v17) = v27;
    v6 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v30, a2, v17, v33);
    if ( (unsigned int)v30 > v14 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1256;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
        1256LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)v30 > HIDWORD(v30) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1257;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
        1257LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = (unsigned int)Src[0];
    if ( (unsigned int)v30 > LODWORD(Src[0]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1258;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
        1258LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v19 = (unsigned int)Src[0];
    }
    if ( v6 < 0 )
      goto LABEL_45;
    if ( HIDWORD(v30) < v19 )
    {
      v6 = -1073741789;
      v29.NumAdapters = 0;
      goto LABEL_38;
    }
    MaximumAdapterCountInSession = v30;
LABEL_37:
    v29.NumAdapters = MaximumAdapterCountInSession;
LABEL_38:
    v20 = v29;
    if ( v6 >= 0 )
    {
      if ( a2 == 1 )
      {
        v21 = (_BYTE **)MmUserProbeAddress;
        if ( (unsigned __int64)&a1[1] > MmUserProbeAddress || &a1[1] <= a1 )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v21 = (_BYTE **)MmUserProbeAddress;
        }
        *a1 = v20;
        goto LABEL_46;
      }
      *a1 = v29;
    }
LABEL_45:
    v21 = (_BYTE **)MmUserProbeAddress;
LABEL_46:
    if ( v6 < 0 )
    {
      for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v21);
            ;
            DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src[1] + 5 * (unsigned int)(v25 - 1))) )
      {
        v25 = v30;
        if ( !(_DWORD)v30 )
          break;
        LODWORD(v30) = v30 - 1;
      }
    }
    else if ( v10 )
    {
      if ( a2 == 1 )
      {
        v22 = 20LL * (unsigned int)v30;
        v23 = Src[1];
        if ( &v10[v22] > *v21 || &v10[v22] <= v10 )
          **v21 = 0;
        memmove(v10, v23, v22);
      }
      else
      {
        memmove(v10, Src[1], 20LL * (unsigned int)v30);
      }
    }
    if ( P != v36 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v37 = 0;
    DxgkEnumAdapters2Impl_::_2_::ENSURE_CLEANUP::_ENSURE_CLEANUP(&v34);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v26);
    return (unsigned int)v6;
  }
  WdLogSingleEntry1(2LL, -1073741801LL);
  WdLogGlobalForLineNumber = 1233;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to allocate memory for D3DKMT_ADAPTERINFO buffer, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v36 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v37 = 0;
  if ( v8 )
  {
    WatchdogTimeoutReport::~WatchdogTimeoutReport(v8);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  }
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v26);
  return 3221225495LL;
}
