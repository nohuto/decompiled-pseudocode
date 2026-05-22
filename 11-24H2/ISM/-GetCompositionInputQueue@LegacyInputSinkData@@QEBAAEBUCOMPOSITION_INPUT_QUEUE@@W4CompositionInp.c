/*
 * XREFs of ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180052450
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180031D30 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?GetProcessId@LegacyInputSinkData@@QEBAIXZ @ 0x1800523D4 (-GetProcessId@LegacyInputSinkData@@QEBAIXZ.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800F5540 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800FF9FC (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801A7238 (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B78C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B814 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F32E8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall LegacyInputSinkData::GetCompositionInputQueue(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rbx
  char v7; // dl
  bool v8; // cl
  bool v9; // zf
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  __int128 v16; // [rsp+20h] [rbp-49h] BYREF
  __int128 v17; // [rsp+30h] [rbp-39h]
  __int128 v18; // [rsp+40h] [rbp-29h]
  __int64 v19; // [rsp+50h] [rbp-19h]
  _BYTE v20[64]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a2 - 1;
  if ( v4 )
  {
    v13 = v4 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 )
            wil::details::in1diag3::FailFast_UnexpectedMsg(
              retaddr,
              (void *)0xB7,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
              "Invalid input type provided.",
              (const char *)v16);
          v5 = 296LL;
        }
        else
        {
          v5 = 232LL;
        }
      }
      else
      {
        v5 = 168LL;
      }
    }
    else
    {
      v5 = 104LL;
    }
  }
  else
  {
    v5 = 40LL;
  }
  v6 = a1 + v5;
  v7 = *(_BYTE *)(a1 + v5 + 56);
  v8 = v7 == 0;
  if ( a2 == 5 )
    v8 = 1;
  if ( v8 )
  {
    v19 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    memset_0(v20, 0, sizeof(v20));
    if ( *(_BYTE *)(a1 + 8) > 1u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputQueueAndTransform(*(_QWORD *)a1, a2, &v16, v20);
    v9 = *(_BYTE *)(v6 + 56) == 0;
    v10 = v17;
    *(_OWORD *)v6 = v16;
    v11 = v18;
    *(_OWORD *)(v6 + 16) = v10;
    *(_QWORD *)&v10 = v19;
    *(_OWORD *)(v6 + 32) = v11;
    *(_QWORD *)(v6 + 48) = v10;
    if ( v9 )
      *(_BYTE *)(v6 + 56) = 1;
  }
  else if ( !v7 )
  {
    std::_Throw_bad_optional_access();
  }
  return v6;
}
