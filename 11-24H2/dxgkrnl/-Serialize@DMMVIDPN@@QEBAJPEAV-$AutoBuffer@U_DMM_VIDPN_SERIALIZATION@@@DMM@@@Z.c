/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x140311AA4
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x14008EEF0 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140256108 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140256CC4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1402661FC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140023444 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x140043580 (-GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14008F000 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetPathsFromSourceSerialization@@YAPEAU_DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION@@QEBU_DMM_VIDPN_SERIALIZATION@@E@Z @ 0x14009059C (-GetPathsFromSourceSerialization@@YAPEAU_DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION@@QEBU_DMM_VIDPN_.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140311390 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140311E38 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  unsigned __int8 v5; // bl
  __int64 v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // r14
  struct DMMVIDPNSOURCE *NextSource; // r14
  DMMVIDPNSOURCESET *v11; // r12
  unsigned int v12; // edx
  int NumPathsFromSource; // eax
  unsigned __int64 v14; // rax
  unsigned __int8 v15; // di
  unsigned __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // edi
  unsigned __int8 v19; // r13
  unsigned __int8 v20; // cl
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  struct DMMVIDPNSOURCE *i; // rdi
  unsigned int v24; // r12d
  int v25; // eax
  unsigned __int64 v26; // rax
  const struct _DMM_VIDPN_SERIALIZATION *v27; // rcx
  struct _DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION *PathsFromSourceSerialization; // r14
  struct DMMVIDPNTARGETMODESET *v29; // rbx
  DMMVIDPNSOURCEMODE *v30; // rcx
  unsigned __int64 v31; // rsi
  DMMVIDPNTOPOLOGY *v32; // r15
  _DWORD *v33; // rbx
  DMMVIDPNTARGET **Path; // r14
  struct DMMVIDPNTARGETMODESET *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // [rsp+20h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v38; // [rsp+28h] [rbp-28h]
  DMMVIDPNSOURCESET *v39; // [rsp+30h] [rbp-20h]
  _QWORD *v40; // [rsp+40h] [rbp-10h]
  unsigned int v42; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v43; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 665;
    }
    v5 = 0;
    v38 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v6 = 12LL;
    v7 = *(_QWORD **)(a1 + 304);
    v39 = (DMMVIDPNSOURCESET *)v7;
    v8 = v7 + 3;
    v9 = (_QWORD *)v7[3];
    v40 = v7 + 3;
    if ( v9 == v7 + 3 )
      goto LABEL_16;
    NextSource = (struct DMMVIDPNSOURCE *)(v9 - 1);
    if ( !NextSource )
      goto LABEL_16;
    v11 = (DMMVIDPNSOURCESET *)v7;
    do
    {
      v12 = *((_DWORD *)NextSource + 6);
      v37 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v12, &v37);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 696;
        }
        ++v5;
        v14 = 1LL;
        if ( v37 > 1 )
          v14 = v37;
        v6 += 440 * v14 + 48;
      }
      v15 = v5;
      NextSource = DMMVIDPNSOURCESET::GetNextSource(v11, NextSource);
    }
    while ( NextSource );
    v2 = a2;
    v8 = v40;
    if ( v5 <= 1u )
LABEL_16:
      v15 = 1;
    v16 = v6 + 4LL * v15 - 4;
    v17 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v2, v16);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v19 = 0;
      v20 = 1;
      **(_DWORD **)(v2 + 32) = v16;
      *(_BYTE *)(*(_QWORD *)(v2 + 32) + 4LL) = v5;
      v21 = (_QWORD *)*v8;
      if ( v5 > 1u )
        v20 = v5;
      v22 = 4LL * v20 + 8;
      if ( v21 != v8 )
      {
        for ( i = (struct DMMVIDPNSOURCE *)(v21 - 1); i; i = DMMVIDPNSOURCESET::GetNextSource(v39, i) )
        {
          v24 = *((_DWORD *)i + 6);
          v43 = 0LL;
          v25 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v38, v24, &v43);
          if ( v25 != -1071774919 )
          {
            if ( v25 < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 753;
            }
            *(_DWORD *)(*(_QWORD *)(v2 + 32) + 4LL * v19 + 8) = v22;
            v26 = 1LL;
            v27 = *(const struct _DMM_VIDPN_SERIALIZATION **)(v2 + 32);
            if ( v43 > 1 )
              v26 = v43;
            v40 = (_QWORD *)(440 * v26 + 48 + v22);
            PathsFromSourceSerialization = GetPathsFromSourceSerialization(v27, v19);
            v29 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(i);
            v30 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v29 + 18);
            if ( v30 )
              DMMVIDPNSOURCEMODE::Serialize(v30, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)PathsFromSourceSerialization);
            ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v29 + 88));
            v31 = 0LL;
            *((_BYTE *)PathsFromSourceSerialization + 40) = v43;
            if ( v43 )
            {
              v32 = v38;
              v33 = (_DWORD *)((char *)PathsFromSourceSerialization + 472);
              do
              {
                v42 = -1;
                if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v32, v24, v31, &v42) < 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 800;
                }
                Path = (DMMVIDPNTARGET **)DMMVIDPNTOPOLOGY::FindPath(v32, v24, v42);
                if ( !Path )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 809;
                }
                DMMVIDPNPRESENTPATH::Serialize(
                  (DMMVIDPNPRESENTPATH *)Path,
                  (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v33 - 106));
                v35 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(Path[12]);
                v36 = *((_QWORD *)v35 + 18);
                if ( v36 )
                {
                  *(v33 - 16) = *(_DWORD *)(v36 + 24);
                  *(_OWORD *)(v33 - 14) = *(_OWORD *)(v36 + 72);
                  *(_OWORD *)(v33 - 10) = *(_OWORD *)(v36 + 88);
                  *(_OWORD *)(v33 - 6) = *(_OWORD *)(v36 + 104);
                  *((_QWORD *)v33 - 1) = *(_QWORD *)(v36 + 120);
                  *v33 = *(_DWORD *)(v36 + 128);
                }
                ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v35 + 88));
                ++v31;
                v33 += 110;
              }
              while ( v31 < v43 );
              v2 = a2;
            }
            v22 = (__int64)v40;
            ++v19;
          }
        }
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v16, a1, v17);
      result = v18;
      WdLogGlobalForLineNumber = 718;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 659;
  }
  return result;
}
