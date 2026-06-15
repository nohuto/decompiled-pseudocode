/*
 * XREFs of ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BD04
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC20 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000B2DC (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B88C (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000CAE8 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000CCC0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ?ContinueWaitingForRTActive@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BF64 (-ContinueWaitingForRTActive@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14005D394 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealTimeSafeStruct<CProcessingData,1>::SwapRTPointer(__int64 a1)
{
  int v2; // r14d
  signed __int64 v3; // rdx
  __int64 *v4; // rcx
  int v5; // r14d
  __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 *v8; // rcx
  int v10; // eax
  unsigned int v11; // esi
  ATL::CAtlException *v13; // rbx
  const char *v14; // [rsp+28h] [rbp-C0h]
  __int128 v15; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-A8h]
  __int64 v17; // [rsp+48h] [rbp-A0h]
  __int64 v18; // [rsp+50h] [rbp-98h]
  int v19; // [rsp+58h] [rbp-90h]
  __int128 v20; // [rsp+60h] [rbp-88h] BYREF
  __int64 v21; // [rsp+70h] [rbp-78h]
  __int64 v22; // [rsp+78h] [rbp-70h]
  __int64 v23; // [rsp+80h] [rbp-68h]
  int v24; // [rsp+88h] [rbp-60h]
  __int128 v25; // [rsp+90h] [rbp-58h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-48h]
  __int64 v27; // [rsp+A8h] [rbp-40h]
  __int64 v28; // [rsp+B0h] [rbp-38h]
  int v29; // [rsp+B8h] [rbp-30h]
  ATL::CAtlException *v30; // [rsp+C0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v2 = 0;
  while ( 1 )
  {
    v3 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)(a1 + 288),
           *(_QWORD *)(a1 + 320) ^ (a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL)),
           *(_QWORD *)(a1 + 320) ^ (a1 + 144LL * *(unsigned __int16 *)(a1 + 328)));
    if ( v3 )
      break;
    v10 = CRealTimeSafeStruct<CProcessingData,1>::ContinueWaitingForRTActive(a1);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BD,
        (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
    ++v2;
    if ( v2 == 100 * (v2 / 100) )
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x1C1,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)0x887C0033LL,
        (int)"Non-fatal. Will continue waiting for RT thread...",
        v14);
  }
  *(_BYTE *)(a1 + 376) = 1;
  v4 = (__int64 *)*(unsigned __int16 *)(a1 + 328);
  if ( v3 == (*(_QWORD *)(a1 + 320) ^ (a1 + 144LL * (_QWORD)v4)) )
  {
    LOWORD(v4) = (unsigned __int16)v4 ^ 1;
    *(_WORD *)(a1 + 328) = (_WORD)v4;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 10;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 10;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 10;
    v5 = 0;
    v6 = a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL);
    try
    {
      CProcessingData::CopyAPOList(v4, (__int64 **)(a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL)), (__int64)&v15);
      CProcessingData::CopyEndpointList(v7, (__int64 **)(v6 + 48), (__int64)&v20);
      CProcessingData::CopyEndpointList(v8, (__int64 **)(v6 + 96), (__int64)&v25);
    }
    catch ( ATL::CAtlException *v30 )
    {
      v13 = v30;
      if ( *(_DWORD *)v30 == -1073741571 )
        _o__resetstkoflw();
      v5 = *(_DWORD *)v13;
    }
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1DC,
        (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)(unsigned int)v5);
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((__int64 *)&v25);
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((__int64 *)&v20);
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)&v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D2,
      (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
      (const char *)0x8000000CLL);
    return 2147483660LL;
  }
}
