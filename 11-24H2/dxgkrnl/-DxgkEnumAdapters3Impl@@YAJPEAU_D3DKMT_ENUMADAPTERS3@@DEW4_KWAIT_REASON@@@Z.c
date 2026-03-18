/*
 * XREFs of ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x140348E00
 * Callers:
 *     DxgkEnumAdapters3Internal @ 0x1401AC780 (DxgkEnumAdapters3Internal.c)
 *     NtDxgkEnumAdapters3 @ 0x140348DD0 (NtDxgkEnumAdapters3.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x140322E94 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140349488 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140349510 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters3Impl(__m128i *a1, char a2, unsigned __int8 a3, enum _KWAIT_REASON a4)
{
  char *v6; // rcx
  __m128i v7; // xmm6
  __int64 v8; // xmm7_8
  char *v9; // r14
  DXGGLOBAL *v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rdi
  int v13; // edi
  unsigned int v14; // eax
  unsigned int MaximumAdapterCountInSession; // eax
  __m128i v16; // xmm6
  _BYTE **v17; // rcx
  size_t v18; // r8
  const void *v19; // rdx
  PVOID v20; // rcx
  bool v21; // zf
  DXGGLOBAL *Global; // rax
  struct _KTHREAD **i; // rsi
  int v25; // ecx
  DXGGLOBAL *v26; // rax
  __int64 v28; // [rsp+60h] [rbp-148h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-140h]
  __int64 v30; // [rsp+78h] [rbp-130h]
  _BYTE v31[24]; // [rsp+80h] [rbp-128h] BYREF
  _KWAIT_REASON v32; // [rsp+98h] [rbp-110h]
  PVOID P; // [rsp+A0h] [rbp-108h]
  _BYTE v34[160]; // [rsp+A8h] [rbp-100h] BYREF
  int v35; // [rsp+148h] [rbp-60h]

  v32 = a4;
  if ( !a1 )
  {
    v13 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1381;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DxgkEnumAdapters3 caller specified NULL D3DKMT_ENUMADAPTERS3, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v13;
  }
  memset(v31, 0, sizeof(v31));
  v28 = 0LL;
  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v35 = 0;
  if ( a2 == 1 )
  {
    v6 = &a1[1].m128i_i8[8];
    if ( v6 < (char *)a1 || (unsigned __int64)v6 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = *a1;
    *(__m128i *)v31 = *a1;
    v8 = a1[1].m128i_i64[0];
    *(_QWORD *)&v31[16] = v8;
  }
  else
  {
    v7 = *a1;
    *(__m128i *)v31 = *a1;
    v8 = a1[1].m128i_i64[0];
    *(_QWORD *)&v31[16] = v8;
  }
  if ( (v7.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v30 = v7.m128i_i64[0];
    v9 = *(char **)&v31[16];
    if ( !*(_QWORD *)&v31[16] )
    {
      v13 = 0;
      Global = DXGGLOBAL::GetGlobal();
      MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
      goto LABEL_27;
    }
    v10 = DXGGLOBAL::GetGlobal();
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
    if ( DXGGLOBAL::GetMaximumAdapterCountInSession(v10) < v11 )
    {
      v26 = DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::GetMaximumAdapterCountInSession(v26);
      *(_DWORD *)&v31[8] = v11;
    }
    v12 = 1LL;
    if ( v11 > 1 )
      v12 = v11;
    if ( (unsigned int)v12 <= 8 )
    {
      P = v34;
      memset(v34, 0, 20 * v12);
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 < 0x14 )
      {
LABEL_17:
        if ( !P )
        {
          v13 = -1073741801;
          WdLogSingleEntry1(2LL, -1073741801LL);
          WdLogGlobalForLineNumber = 1448;
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
          v20 = 0LL;
          v21 = v34 == 0LL;
          goto LABEL_42;
        }
        Src[1] = P;
        HIDWORD(v28) = v11;
        v13 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v28, a2, a3, v32);
        if ( (unsigned int)v28 > v11 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1471;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
            1471LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (unsigned int)v28 > HIDWORD(v28) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1472;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
            1472LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v14 = (unsigned int)Src[0];
        if ( (unsigned int)v28 > LODWORD(Src[0]) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1473;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
            1473LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v14 = (unsigned int)Src[0];
        }
        if ( v13 < 0 )
          goto LABEL_57;
        if ( HIDWORD(v28) < v14 )
        {
          v13 = -1073741789;
          *(_DWORD *)&v31[8] = 0;
LABEL_28:
          v16 = *(__m128i *)v31;
          if ( v13 >= 0 )
          {
            if ( a2 == 1 )
            {
              v17 = (_BYTE **)MmUserProbeAddress;
              if ( &a1[1].m128i_u64[1] < (unsigned __int64 *)a1
                || (unsigned __int64)&a1[1].m128i_u64[1] > MmUserProbeAddress )
              {
                *(_BYTE *)MmUserProbeAddress = 0;
                v17 = (_BYTE **)MmUserProbeAddress;
              }
              *a1 = v16;
              a1[1].m128i_i64[0] = v8;
              goto LABEL_34;
            }
            *a1 = *(__m128i *)v31;
            a1[1].m128i_i64[0] = v8;
          }
LABEL_57:
          v17 = (_BYTE **)MmUserProbeAddress;
LABEL_34:
          if ( v13 < 0 )
          {
            for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v17);
                  ;
                  DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src[1] + 5 * (unsigned int)(v25 - 1))) )
            {
              v25 = v28;
              if ( !(_DWORD)v28 )
                break;
              LODWORD(v28) = v28 - 1;
            }
          }
          else if ( v9 )
          {
            if ( a2 == 1 )
            {
              v18 = 20LL * (unsigned int)v28;
              v19 = Src[1];
              if ( &v9[v18] <= v9 || &v9[v18] > *v17 )
                **v17 = 0;
              memmove(v9, v19, v18);
            }
            else
            {
              memmove(v9, Src[1], 20LL * (unsigned int)v28);
            }
          }
          goto LABEL_41;
        }
        MaximumAdapterCountInSession = v28;
LABEL_27:
        *(_DWORD *)&v31[8] = MaximumAdapterCountInSession;
        goto LABEL_28;
      }
      P = (PVOID)ExAllocatePool2(256LL, 20 * v12, 1265072196LL);
    }
    v35 = v12;
    goto LABEL_17;
  }
  v13 = -1073741811;
  WdLogSingleEntry2(2LL, v7.m128i_i64[0], -1073741811LL);
  WdLogGlobalForLineNumber = 1414;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"DxgkEnumAdapters3 caller specified an invalid filter 0x%I64x, returning 0x%I64x",
    v7.m128i_i64[0],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_41:
  v20 = P;
  v21 = P == v34;
LABEL_42:
  if ( !v21 && v20 )
    ExFreePoolWithTag(v20, 0);
  return (unsigned int)v13;
}
