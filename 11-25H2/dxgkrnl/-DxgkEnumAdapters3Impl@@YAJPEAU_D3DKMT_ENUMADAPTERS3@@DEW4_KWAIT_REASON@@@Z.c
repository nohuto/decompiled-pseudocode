/*
 * XREFs of ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x14031CA60
 * Callers:
 *     DxgkEnumAdapters3Internal @ 0x1401AA2F0 (DxgkEnumAdapters3Internal.c)
 *     NtDxgkEnumAdapters3 @ 0x14031CA30 (NtDxgkEnumAdapters3.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x14031D0E8 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x14031D170 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x14031E194 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters3Impl(__m128i *a1, char a2, unsigned __int8 a3, enum _KWAIT_REASON a4)
{
  char *v6; // rcx
  __m128i v7; // xmm6
  __int64 v8; // xmm7_8
  char *v9; // r14
  DXGGLOBAL *v10; // rax
  __int64 v11; // r9
  unsigned int v12; // r15d
  __int64 v13; // rdi
  int v14; // edi
  unsigned int v15; // eax
  unsigned int MaximumAdapterCountInSession; // eax
  __m128i v17; // xmm6
  _BYTE **v18; // rcx
  size_t v19; // r8
  const void *v20; // rdx
  PVOID v21; // rcx
  bool v22; // zf
  DXGGLOBAL *Global; // rax
  struct DXGPROCESS *i; // rsi
  int v26; // ecx
  DXGGLOBAL *v27; // rax
  __int64 v29; // [rsp+60h] [rbp-148h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-140h]
  __int64 v31; // [rsp+78h] [rbp-130h]
  _BYTE v32[24]; // [rsp+80h] [rbp-128h] BYREF
  _KWAIT_REASON v33; // [rsp+98h] [rbp-110h]
  PVOID P; // [rsp+A0h] [rbp-108h]
  _BYTE v35[160]; // [rsp+A8h] [rbp-100h] BYREF
  int v36; // [rsp+148h] [rbp-60h]

  v33 = a4;
  if ( !a1 )
  {
    v14 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1379;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkEnumAdapters3 caller specified NULL D3DKMT_ENUMADAPTERS3, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v14;
  }
  memset(v32, 0, sizeof(v32));
  v29 = 0LL;
  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v36 = 0;
  if ( a2 == 1 )
  {
    v6 = &a1[1].m128i_i8[8];
    if ( v6 < (char *)a1 || (unsigned __int64)v6 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = *a1;
    *(__m128i *)v32 = *a1;
    v8 = a1[1].m128i_i64[0];
    *(_QWORD *)&v32[16] = v8;
  }
  else
  {
    v7 = *a1;
    *(__m128i *)v32 = *a1;
    v8 = a1[1].m128i_i64[0];
    *(_QWORD *)&v32[16] = v8;
  }
  if ( (v7.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v31 = v7.m128i_i64[0];
    v9 = *(char **)&v32[16];
    if ( !*(_QWORD *)&v32[16] )
    {
      v14 = 0;
      Global = DXGGLOBAL::GetGlobal();
      MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
      goto LABEL_27;
    }
    v10 = DXGGLOBAL::GetGlobal();
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
    if ( DXGGLOBAL::GetMaximumAdapterCountInSession(v10) < v12 )
    {
      v27 = DXGGLOBAL::GetGlobal();
      v12 = DXGGLOBAL::GetMaximumAdapterCountInSession(v27);
      *(_DWORD *)&v32[8] = v12;
    }
    v13 = 1LL;
    if ( v12 > 1 )
      v13 = v12;
    if ( (unsigned int)v13 <= 8 )
    {
      P = v35;
      memset(v35, 0, 20 * v13);
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v13 < 0x14 )
      {
LABEL_17:
        if ( !P )
        {
          v14 = -1073741801;
          WdLogSingleEntry1(2LL, -1073741801LL);
          WdLogGlobalForLineNumber = 1446;
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
          v21 = 0LL;
          v22 = v35 == 0LL;
          goto LABEL_42;
        }
        Src[1] = P;
        HIDWORD(v29) = v12;
        v14 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v29, a2, a3, v33);
        if ( (unsigned int)v29 > v12 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1469;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
            1469LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (unsigned int)v29 > HIDWORD(v29) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1470;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
            1470LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v15 = (unsigned int)Src[0];
        if ( (unsigned int)v29 > LODWORD(Src[0]) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1471;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
            1471LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v15 = (unsigned int)Src[0];
        }
        if ( v14 < 0 )
          goto LABEL_57;
        if ( HIDWORD(v29) < v15 )
        {
          v14 = -1073741789;
          *(_DWORD *)&v32[8] = 0;
LABEL_28:
          v17 = *(__m128i *)v32;
          if ( v14 >= 0 )
          {
            if ( a2 == 1 )
            {
              v18 = (_BYTE **)MmUserProbeAddress;
              if ( &a1[1].m128i_u64[1] < (unsigned __int64 *)a1
                || (unsigned __int64)&a1[1].m128i_u64[1] > MmUserProbeAddress )
              {
                *(_BYTE *)MmUserProbeAddress = 0;
                v18 = (_BYTE **)MmUserProbeAddress;
              }
              *a1 = v17;
              a1[1].m128i_i64[0] = v8;
              goto LABEL_34;
            }
            *a1 = *(__m128i *)v32;
            a1[1].m128i_i64[0] = v8;
          }
LABEL_57:
          v18 = (_BYTE **)MmUserProbeAddress;
LABEL_34:
          if ( v14 < 0 )
          {
            for ( i = DXGPROCESS::GetCurrent((__int64)v18);
                  ;
                  DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src[1] + 5 * (unsigned int)(v26 - 1))) )
            {
              v26 = v29;
              if ( !(_DWORD)v29 )
                break;
              LODWORD(v29) = v29 - 1;
            }
          }
          else if ( v9 )
          {
            if ( a2 == 1 )
            {
              v19 = 20LL * (unsigned int)v29;
              v20 = Src[1];
              if ( &v9[v19] <= v9 || &v9[v19] > *v18 )
                **v18 = 0;
              memmove(v9, v20, v19);
            }
            else
            {
              memmove(v9, Src[1], 20LL * (unsigned int)v29);
            }
          }
          goto LABEL_41;
        }
        MaximumAdapterCountInSession = v29;
LABEL_27:
        *(_DWORD *)&v32[8] = MaximumAdapterCountInSession;
        goto LABEL_28;
      }
      P = (PVOID)ExAllocatePool2(256LL, 20 * v13, 1265072196LL, v11);
    }
    v36 = v13;
    goto LABEL_17;
  }
  v14 = -1073741811;
  WdLogSingleEntry2(2LL, v7.m128i_i64[0], -1073741811LL);
  WdLogGlobalForLineNumber = 1412;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"DxgkEnumAdapters3 caller specified an invalid filter 0x%I64x, returning 0x%I64x",
    v7.m128i_i64[0],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_41:
  v21 = P;
  v22 = P == v35;
LABEL_42:
  if ( !v22 && v21 )
    ExFreePoolWithTag(v21, 0);
  return (unsigned int)v14;
}
