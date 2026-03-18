/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1403AAD74
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x14008DC20 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x14024FE94 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x14025F2FC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x1400438A0 (-GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140059CD8 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14008DD30 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1403AA660 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1403AB104 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 result; // rax
  unsigned __int8 v7; // bl
  __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r12
  _QWORD *v11; // r14
  struct DMMVIDPNSOURCE *NextSource; // r14
  DMMVIDPNSOURCESET *v13; // r12
  unsigned int v14; // edx
  int NumPathsFromSource; // eax
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // di
  unsigned __int64 v18; // rsi
  int v19; // eax
  unsigned int v20; // edi
  unsigned __int8 v21; // r13
  unsigned __int8 v22; // cl
  _QWORD *v23; // rdi
  __int64 v24; // rbx
  struct DMMVIDPNSOURCE *i; // rdi
  unsigned int v26; // r12d
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r14
  struct DMMVIDPNTARGETMODESET *v32; // rbx
  DMMVIDPNSOURCEMODE *v33; // rcx
  unsigned __int64 v34; // rsi
  DMMVIDPNTOPOLOGY *v35; // r15
  _DWORD *v36; // rbx
  DMMVIDPNTARGET **Path; // r14
  struct DMMVIDPNTARGETMODESET *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // [rsp+20h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v41; // [rsp+28h] [rbp-28h]
  DMMVIDPNSOURCESET *v42; // [rsp+30h] [rbp-20h]
  _QWORD *v43; // [rsp+40h] [rbp-10h]
  unsigned int v45; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v46; // [rsp+A8h] [rbp+58h] BYREF

  v4 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 665;
    }
    v7 = 0;
    v41 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v8 = 12LL;
    v9 = *(_QWORD **)(a1 + 304);
    v42 = (DMMVIDPNSOURCESET *)v9;
    v10 = v9 + 3;
    v11 = (_QWORD *)v9[3];
    v43 = v9 + 3;
    if ( v11 == v9 + 3 )
      goto LABEL_16;
    NextSource = (struct DMMVIDPNSOURCE *)(v11 - 1);
    if ( !NextSource )
      goto LABEL_16;
    v13 = (DMMVIDPNSOURCESET *)v9;
    do
    {
      v14 = *((_DWORD *)NextSource + 6);
      v40 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v14, &v40);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 696;
        }
        ++v7;
        v16 = 1LL;
        if ( v40 > 1 )
          v16 = v40;
        v8 += 440 * v16 + 48;
      }
      v17 = v7;
      NextSource = DMMVIDPNSOURCESET::GetNextSource(v13, NextSource);
    }
    while ( NextSource );
    v4 = a2;
    v10 = v43;
    if ( v7 <= 1u )
LABEL_16:
      v17 = 1;
    v18 = v8 + 4LL * v17 - 4;
    v19 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v4, v18, a3, a4);
    v20 = v19;
    if ( v19 >= 0 )
    {
      v21 = 0;
      v22 = 1;
      **(_DWORD **)(v4 + 32) = v18;
      *(_BYTE *)(*(_QWORD *)(v4 + 32) + 4LL) = v7;
      v23 = (_QWORD *)*v10;
      if ( v7 > 1u )
        v22 = v7;
      v24 = 4LL * v22 + 8;
      if ( v23 != v10 )
      {
        for ( i = (struct DMMVIDPNSOURCE *)(v23 - 1); i; i = DMMVIDPNSOURCESET::GetNextSource(v42, i) )
        {
          v26 = *((_DWORD *)i + 6);
          v46 = 0LL;
          v27 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v41, v26, &v46);
          if ( v27 != -1071774919 )
          {
            if ( v27 < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 753;
            }
            *(_DWORD *)(*(_QWORD *)(v4 + 32) + 4LL * v21 + 8) = v24;
            v28 = 1LL;
            if ( v46 > 1 )
              v28 = v46;
            v29 = 440 * v28 + 48 + v24;
            v30 = *(_QWORD *)(v4 + 32);
            v43 = (_QWORD *)v29;
            v31 = v30 + *(unsigned int *)(v30 + 4LL * v21 + 8);
            v32 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(i);
            v33 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v32 + 18);
            if ( v33 )
              DMMVIDPNSOURCEMODE::Serialize(v33, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)v31);
            ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v32 + 88));
            v34 = 0LL;
            *(_BYTE *)(v31 + 40) = v46;
            if ( v46 )
            {
              v35 = v41;
              v36 = (_DWORD *)(v31 + 472);
              do
              {
                v45 = -1;
                if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v35, v26, v34, &v45) < 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 800;
                }
                Path = (DMMVIDPNTARGET **)DMMVIDPNTOPOLOGY::FindPath(v35, v26, v45);
                if ( !Path )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 809;
                }
                DMMVIDPNPRESENTPATH::Serialize(
                  (DMMVIDPNPRESENTPATH *)Path,
                  (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v36 - 106));
                v38 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(Path[12]);
                v39 = *((_QWORD *)v38 + 18);
                if ( v39 )
                {
                  *(v36 - 16) = *(_DWORD *)(v39 + 24);
                  *(_OWORD *)(v36 - 14) = *(_OWORD *)(v39 + 72);
                  *(_OWORD *)(v36 - 10) = *(_OWORD *)(v39 + 88);
                  *(_OWORD *)(v36 - 6) = *(_OWORD *)(v39 + 104);
                  *((_QWORD *)v36 - 1) = *(_QWORD *)(v39 + 120);
                  *v36 = *(_DWORD *)(v39 + 128);
                }
                ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v38 + 88));
                ++v34;
                v36 += 110;
              }
              while ( v34 < v46 );
              v4 = a2;
            }
            v24 = (__int64)v43;
            ++v21;
          }
        }
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v18, a1, v19);
      result = v20;
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
