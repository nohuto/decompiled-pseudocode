/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1402D71F0
 * Callers:
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1402D6B28 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1402D8188 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402D8D1C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1402D9B64 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     DxgkGetPathsModality @ 0x14031E370 (DxgkGetPathsModality.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1403615D0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1403EDFA0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // edi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  struct DXGADAPTER *v7; // rbx
  __int64 v8; // rcx
  char v9[8]; // [rsp+50h] [rbp-28h] BYREF
  struct DXGADAPTER *v10; // [rsp+58h] [rbp-20h]
  char v11; // [rsp+60h] [rbp-18h]
  unsigned __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  v12 = 0LL;
  AdapterDefaultScaling = D3DKMDT_VPPS_STRETCHED;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v12);
  v7 = v6;
  if ( v6 )
  {
    if ( *((_QWORD *)v6 + 390) )
    {
      if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8843;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"Potentinal Deadlock code path, Please contact basevid",
          8843LL,
          0LL,
          0LL,
          0LL,
          0LL);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64 *)&v12,
          *(_QWORD *)(*((_QWORD *)v7 + 390) + 104LL));
        AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v7 + 390) + 104LL));
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
      }
      else
      {
        v10 = v7;
        v11 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
        if ( *((_DWORD *)v7 + 50) == 1 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
            (__int64 *)&v12,
            *(_QWORD *)(*((_QWORD *)v7 + 390) + 104LL));
          v8 = *((_QWORD *)v7 + 390);
          if ( *(_BYTE *)(v8 + 289) )
            AdapterDefaultScaling = D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX;
          else
            AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v8 + 104));
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
        }
        else
        {
          WdLogSingleEntry3(3LL, v7, *((int *)v7 + 104), *((unsigned int *)v7 + 103));
          WdLogGlobalForLineNumber = 8876;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
      }
      DXGADAPTER::ReleaseReference(v7);
    }
    else
    {
      WdLogSingleEntry2(3LL, a1->HighPart, a1->LowPart);
      WdLogGlobalForLineNumber = 8822;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, a1->HighPart, a1->LowPart);
    WdLogGlobalForLineNumber = 8816;
  }
  *a2 = AdapterDefaultScaling;
}
