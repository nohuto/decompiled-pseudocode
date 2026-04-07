/*
 * XREFs of ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800563F0
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180055F14 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x18004D698 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x1800585B0 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x1800585C4 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800599A0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 */

__int64 __fastcall CDisplayModeChangeHelper::IsModeChangeBetweenDuplicateAndExtend(
        CDWMDisplaySet *this,
        CDWMDisplaySet *a2,
        __int64 a3)
{
  int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // r14d
  const struct CDWMDisplay *v9; // rdi
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const struct CDWMDisplay *v14; // r13
  __m128i v15; // xmm6
  _BYTE *v16; // rdx
  void *v17; // rdx
  int *v18; // rax
  _BYTE *v19; // rdx
  _BYTE *v20; // rdx
  unsigned __int64 v21; // r9
  int v23; // r8d
  BOOL v24; // r9d
  int *v25; // [rsp+38h] [rbp-69h]
  int *v26; // [rsp+40h] [rbp-61h]
  int *v27; // [rsp+48h] [rbp-59h]
  int *v28; // [rsp+50h] [rbp-51h]
  BOOL *v29; // [rsp+58h] [rbp-49h]
  const struct CDWMDisplay *v30; // [rsp+68h] [rbp-39h] BYREF
  int v31; // [rsp+70h] [rbp-31h] BYREF
  int v32; // [rsp+74h] [rbp-2Dh] BYREF
  BOOL v33; // [rsp+78h] [rbp-29h] BYREF
  int v34; // [rsp+7Ch] [rbp-25h] BYREF
  int v35; // [rsp+80h] [rbp-21h] BYREF
  int v36; // [rsp+84h] [rbp-1Dh] BYREF
  int v37; // [rsp+88h] [rbp-19h] BYREF
  int v38; // [rsp+8Ch] [rbp-15h] BYREF
  BOOL v39; // [rsp+90h] [rbp-11h] BYREF
  int v40; // [rsp+94h] [rbp-Dh] BYREF
  int v41; // [rsp+98h] [rbp-9h] BYREF
  int v42; // [rsp+9Ch] [rbp-5h] BYREF
  int v43; // [rsp+A0h] [rbp-1h] BYREF
  int v44; // [rsp+A4h] [rbp+3h] BYREF
  BOOL v45; // [rsp+108h] [rbp+67h] BYREF
  int v46; // [rsp+110h] [rbp+6Fh] BYREF
  int v47; // [rsp+118h] [rbp+77h] BYREF
  int v48; // [rsp+120h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)a3 != *(_QWORD *)(a3 + 8) )
    *(_QWORD *)(a3 + 8) = *(_QWORD *)a3;
  v6 = *((_DWORD *)a2 + 16);
  v7 = 0;
  if ( v6 != *((_DWORD *)this + 16) )
    return 0LL;
  v8 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v30 = CDWMDisplaySet::DisplayNoRef(a2, v8);
      v9 = v30;
      MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(this, v30);
      if ( MatchedPhysicalDisplayNoRef )
        break;
LABEL_30:
      if ( ++v8 >= *((_DWORD *)a2 + 16) )
        goto LABEL_31;
    }
    v14 = (const struct CDWMDisplay *)((char *)v9 + 96);
    v15 = *(__m128i *)((char *)v9 + 56);
    if ( *((_BYTE *)MatchedPhysicalDisplayNoRef + 288) )
    {
      if ( !*((_BYTE *)v9 + 288) )
      {
        v16 = *(_BYTE **)(a3 + 8);
        v7 = 3;
        if ( v16 == *(_BYTE **)(a3 + 16) )
        {
          std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>((void **)a3, v16, &v30);
          v9 = v30;
        }
        else
        {
          *(_QWORD *)v16 = v9;
          *(_QWORD *)(a3 + 8) += 8LL;
        }
        if ( (unsigned int)dword_180125130 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_180125130, 2LL) )
          goto LABEL_30;
        v17 = &unk_180111519;
        v45 = *((_QWORD *)v9 + 11) != (_QWORD)v9;
        v46 = *((unsigned __int8 *)v9 + 288);
        v29 = &v45;
        v28 = &v46;
        v27 = &v47;
        v26 = &v48;
        v47 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
        v25 = &v31;
        v18 = &v32;
        v48 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
        v31 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
        v32 = _mm_cvtsi128_si32(v15);
        goto LABEL_29;
      }
    }
    else if ( *((_BYTE *)v9 + 288) )
    {
      v19 = *(_BYTE **)(a3 + 8);
      v7 = 7;
      if ( v19 == *(_BYTE **)(a3 + 16) )
      {
        std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>((void **)a3, v19, &v30);
        v9 = v30;
      }
      else
      {
        *(_QWORD *)v19 = v9;
        *(_QWORD *)(a3 + 8) += 8LL;
      }
      if ( (unsigned int)dword_180125130 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_180125130, 2LL) )
        goto LABEL_30;
      v17 = &unk_180111489;
      v33 = *((_QWORD *)v9 + 11) != (_QWORD)v9;
      v34 = *((unsigned __int8 *)v9 + 288);
      v29 = &v33;
      v28 = &v34;
      v27 = &v35;
      v26 = &v36;
      v35 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
      v25 = &v37;
      v18 = &v38;
      v36 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
      v37 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
      v38 = _mm_cvtsi128_si32(v15);
LABEL_29:
      v30 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (int)v17,
        v12,
        v13,
        (void **)&v30,
        (__int64)v18,
        (__int64)v25,
        (__int64)v26,
        (__int64)v27,
        (__int64)v28,
        (__int64)v29);
      goto LABEL_30;
    }
    LOBYTE(v11) = *((_QWORD *)v9 + 11) != (_QWORD)v9;
    if ( (*((_QWORD *)MatchedPhysicalDisplayNoRef + 11) != (_QWORD)MatchedPhysicalDisplayNoRef) == (_BYTE)v11 )
      goto LABEL_30;
    v20 = *(_BYTE **)(a3 + 8);
    v7 = 14;
    if ( v20 == *(_BYTE **)(a3 + 16) )
    {
      std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>((void **)a3, v20, &v30);
      v9 = v30;
    }
    else
    {
      *(_QWORD *)v20 = v9;
      *(_QWORD *)(a3 + 8) += 8LL;
    }
    if ( (unsigned int)dword_180125130 <= 5 || (byte_180125140 & 2) == 0 || (qword_180125148 & 2) != qword_180125148 )
      goto LABEL_30;
    v17 = &unk_180111394;
    v39 = *((_QWORD *)v9 + 11) != (_QWORD)v9;
    v40 = *((unsigned __int8 *)v9 + 288);
    v29 = &v39;
    v28 = &v40;
    v27 = &v41;
    v26 = &v42;
    v41 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
    v25 = &v43;
    v18 = &v44;
    v42 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
    v43 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
    v44 = _mm_cvtsi128_si32(v15);
    goto LABEL_29;
  }
LABEL_31:
  v21 = (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 3;
  if ( v21 == 1 )
    return v7;
  if ( v21 <= 1 )
    return 0LL;
  if ( (unsigned int)dword_180125130 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_180125130, 2LL) )
    {
      v45 = v24;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (unsigned int)&v45,
        (unsigned int)&unk_180111422,
        v23,
        v24,
        (__int64)&v45);
    }
  }
  return 14LL;
}
