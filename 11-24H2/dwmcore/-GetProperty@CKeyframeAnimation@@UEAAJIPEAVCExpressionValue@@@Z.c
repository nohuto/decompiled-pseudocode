/*
 * XREFs of ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18029EA40
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800040D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180153FB0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 */

__int64 __fastcall CKeyframeAnimation::GetProperty(CKeyframeAnimation *this, int a2, struct CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // xmm0_4
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  float v13; // xmm0_4
  __int64 v15[3]; // [rsp+40h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2 - 15;
  if ( !v4 )
  {
    v13 = (float)*((int *)this + 110);
    goto LABEL_20;
  }
  v5 = v4 - 14;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 2 )
      {
        v7 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x89Cu, 0LL);
        return v7;
      }
      v8 = *((_DWORD *)this + 121);
    }
    else
    {
      v8 = *((_DWORD *)this + 120);
    }
    *(_DWORD *)a3 = v8;
    *((_DWORD *)a3 + 18) = 18;
    return 0;
  }
  if ( *((_QWORD *)this + 44) )
  {
    v13 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
LABEL_20:
    *(float *)a3 = v13;
    *((_DWORD *)a3 + 18) = 42;
    return 0;
  }
  if ( (unsigned int)dword_1803F8D18 > 4 && tlgKeywordOn((__int64)&dword_1803F8D18, 4LL) )
  {
    v11 = *(_QWORD *)(v9 + 56);
    if ( v11 )
    {
      v17 = *(void **)(v11 + 72);
      v12 = *(_DWORD *)(v11 + 28);
    }
    else
    {
      v17 = &unk_180381440;
      v12 = 0;
    }
    v16 = v12;
    v15[0] = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v11,
      (__int64)&unk_1803CE1AD,
      v9,
      v10,
      (__int64)v15,
      (__int64)&v16,
      &v17);
  }
  *(_DWORD *)a3 = 0;
  *((_DWORD *)a3 + 18) = 42;
  v7 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x885u, 0LL);
  return v7;
}
