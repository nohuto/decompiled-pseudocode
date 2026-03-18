/*
 * XREFs of ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14025D34C
 * Callers:
 *     ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x14025B0F0 (-FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1402634C8 (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z @ 0x140042D84 (-GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402D597C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
        DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        DMMVIDPNTARGETSET *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v7; // r12
  __int64 Container; // r13
  bool v13; // di
  DMMVIDPNTARGETSET *v14; // rbx
  struct DMMVIDPNTARGET *i; // rbx
  __int64 v16; // rcx
  __int64 result; // rax
  DMMVIDPNTARGETSET *v20; // [rsp+80h] [rbp+28h]

  v7 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1276;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1277;
  }
  *a4 = -1;
  if ( a5 )
    *(_DWORD *)a5 = -2;
  if ( a6 )
    *a6 = -2;
  if ( a7 )
    *a7 = 0;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v13 = (_DWORD)v7 == -1;
  v20 = *(DMMVIDPNTARGETSET **)(Container + 312);
  v14 = (DMMVIDPNTARGETSET *)*((_QWORD *)v20 + 3);
  if ( v14 == (DMMVIDPNTARGETSET *)((char *)v20 + 24) )
  {
    i = 0LL;
  }
  else
  {
    for ( i = (DMMVIDPNTARGETSET *)((char *)v14 - 8); i; i = DMMVIDPNTARGETSET::GetNextTarget(v20, i) )
    {
      if ( v13 )
      {
        v16 = *((_QWORD *)i + 12);
        if ( *(_QWORD *)(v16 + 112)
          && (a3 != 2 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v16 + 80)))
          && DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(a1, *((_DWORD *)i + 6)) == -1 )
        {
          goto LABEL_19;
        }
      }
      else
      {
        v13 = *((_DWORD *)i + 6) == (_DWORD)v7;
      }
    }
  }
  if ( v13 )
  {
LABEL_19:
    if ( i )
    {
      *a4 = *((_DWORD *)i + 6);
      if ( a5 )
        *(_DWORD *)a5 = *(_DWORD *)(*((_QWORD *)i + 12) + 80LL);
      if ( a6 )
        *a6 = *(_DWORD *)(*((_QWORD *)i + 12) + 84LL);
      if ( a7 )
        *a7 = *(_DWORD *)(*((_QWORD *)i + 12) + 92LL);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(7LL, Container);
      result = 3223192371LL;
      WdLogGlobalForLineNumber = 1368;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, Container, v7);
    result = 3223192325LL;
    WdLogGlobalForLineNumber = 1360;
  }
  return result;
}
