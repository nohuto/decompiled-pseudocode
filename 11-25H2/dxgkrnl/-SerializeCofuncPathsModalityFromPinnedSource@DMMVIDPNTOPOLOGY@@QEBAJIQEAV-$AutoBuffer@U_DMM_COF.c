/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x14025D540
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1402564F4 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x140013054 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004106C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056FA0 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140059CD8 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x14005F8A4 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x14025FEA0 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1403AA660 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1403AB104 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned __int8 v3; // di
  __int64 v4; // rsi
  __int64 result; // rax
  int NumPathsFromSource; // eax
  unsigned int v9; // ebx
  DMMVIDPN *Container; // rax
  DMMVIDPNTARGET *SourceFromId; // rax
  _QWORD *v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  DMMVIDPNPRESENTPATH *v16; // rbx
  DMMVIDPNTARGET *v17; // rcx
  struct DMMVIDPNTARGETMODESET *v18; // rax
  DMMVIDPNTARGETMODESET *v19; // rbx
  int v20; // eax
  size_t v21; // rbx
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  int v27; // eax
  DMMVIDPNPRESENTPATH *v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  int v33; // eax
  unsigned __int8 v34; // dl
  unsigned __int8 *v35; // r8
  unsigned __int8 *v36; // rsi
  __int64 v37; // rbx
  _QWORD *v38; // rax
  DMMVIDPNTARGETMODESET *v39; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-79h]
  void **v42; // [rsp+50h] [rbp-69h] BYREF
  void **v43; // [rsp+58h] [rbp-61h] BYREF
  int v44; // [rsp+60h] [rbp-59h]
  _QWORD v45[2]; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-41h]
  int v47; // [rsp+80h] [rbp-39h]
  __int64 v48; // [rsp+88h] [rbp-31h]
  struct DMMVIDPNTARGETMODESET *v49; // [rsp+90h] [rbp-29h] BYREF
  DMMVIDPNPRESENTPATH *Path; // [rsp+98h] [rbp-21h]
  void **v51; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-11h]
  void **v53; // [rsp+B8h] [rbp-1h]
  void *Src; // [rsp+C0h] [rbp+7h]
  size_t Size; // [rsp+C8h] [rbp+Fh]
  __int64 v56; // [rsp+D0h] [rbp+17h]
  unsigned int v57; // [rsp+130h] [rbp+77h] BYREF
  __int64 (__fastcall ***v58)(_QWORD, __int64); // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = a2;
  if ( a3 )
  {
    if ( a3[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1556;
    }
    v40 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v4, &v40);
    v9 = NumPathsFromSource;
    if ( NumPathsFromSource == -1071774919 )
    {
      WdLogSingleEntry2(7LL, v4, this);
      result = 3223192377LL;
      WdLogGlobalForLineNumber = 1566;
    }
    else
    {
      if ( NumPathsFromSource >= 0 )
      {
        Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        SourceFromId = DMMVIDPN::GetSourceFromId(Container, v4);
        v49 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
        if ( !*((_QWORD *)v49 + 18) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1583;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v49, 0LL);
        v44 = 0;
        v42 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
        v46 = 0LL;
        v43 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
        v45[1] = v45;
        v45[0] = v45;
        v14 = 0LL;
        v47 = 2;
        v48 = 0LL;
        while ( 1 )
        {
          v41 = v14;
          if ( v14 >= v40 )
            break;
          v57 = -1;
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v4, v14, &v57) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1602;
          }
          v15 = v57;
          Path = DMMVIDPNTOPOLOGY::FindPath(this, v4, v57);
          v16 = Path;
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1611;
          }
          Src = 0LL;
          v51 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
          Size = 0LL;
          v53 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v52 = 0LL;
          v56 = 256LL;
          v17 = (DMMVIDPNTARGET *)*((_QWORD *)v16 + 12);
          v39 = 0LL;
          v18 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v17);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v39, (__int64)v18);
          v19 = v39;
          if ( !v39 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1623;
          }
          if ( *((_QWORD *)v19 + 18) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1627;
          }
          v20 = DMMVIDPNTARGETMODESET::Serialize(v19);
          v9 = v20;
          if ( v20 < 0 )
          {
            WdLogSingleEntry4(2LL, v4, v15, this, v20);
            WdLogGlobalForLineNumber = 1636;
            auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v39, 0LL);
            goto LABEL_35;
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v39, 0LL);
          v21 = Size;
          v23 = (_QWORD *)operator new(0x38uLL, 0x4E506456u, 256LL, v22);
          v26 = (__int64)v23;
          if ( v23 )
          {
            v23[1] = 0LL;
            v23[2] = 0LL;
            *v23 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
            v23[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
            v23[4] = 0LL;
            v23[5] = 0LL;
            v23[6] = 256LL;
          }
          else
          {
            v26 = 0LL;
          }
          v58 = (__int64 (__fastcall ***)(_QWORD, __int64))v26;
          if ( !v26 )
          {
            WdLogSingleEntry3(6LL, 56LL, v4, v15);
            WdLogGlobalForLineNumber = 1660;
            auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v58);
            v9 = -1073741801;
            goto LABEL_35;
          }
          v27 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(
                  (_QWORD *)v26,
                  v21 + 360,
                  v24,
                  v25);
          v9 = v27;
          if ( v27 < 0 )
          {
            WdLogSingleEntry4(2LL, v4, v15, this, v27);
            WdLogGlobalForLineNumber = 1677;
            auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v58);
LABEL_35:
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v51);
            goto LABEL_55;
          }
          v28 = Path;
          if ( *((_DWORD *)Path + 28) != 254 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1689;
          }
          if ( *((_DWORD *)v28 + 29) != 254 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1690;
          }
          DMMVIDPNPRESENTPATH::Serialize(v28, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v26 + 32));
          memmove((void *)(*(_QWORD *)(v26 + 32) + 360LL), Src, Size);
          v58 = 0LL;
          Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v42, v26);
          auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v58);
          DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v51);
          v14 = v41 + 1;
          v3 = 0;
        }
        v29 = 1LL;
        if ( v46 > 1 )
          v29 = v46;
        v30 = 4 * v29 + 4;
        if ( (_QWORD *)v45[0] != v45 )
        {
          v31 = v45[0] - 8LL;
          if ( v45[0] != 8LL )
          {
            do
            {
              v30 += *(_QWORD *)(v31 + 40);
              v12 = v45;
              v32 = *(_QWORD **)(v31 + 8);
              v31 = (__int64)(v32 - 1);
              if ( v32 == v45 )
                v31 = 0LL;
            }
            while ( v31 );
          }
        }
        v33 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a3, v30, (__int64)v12, v13);
        v9 = v33;
        if ( v33 >= 0 )
        {
          v34 = 1;
          *(_BYTE *)a3[4] = v46;
          v35 = (unsigned __int8 *)a3[4];
          if ( *v35 > 1u )
            v34 = *v35;
          v36 = &v35[4 * v34 + 4];
          if ( (_QWORD *)v45[0] != v45 )
          {
            v37 = v45[0] - 8LL;
            if ( v45[0] != 8LL )
            {
              do
              {
                *(_DWORD *)(a3[4] + 4LL * v3 + 4) = (_DWORD)v36 - *((_DWORD *)a3 + 8);
                memmove(v36, *(const void **)(v37 + 32), *(_QWORD *)(v37 + 40));
                v36 += *(_QWORD *)(v37 + 40);
                v38 = *(_QWORD **)(v37 + 8);
                v37 = (__int64)(v38 - 1);
                if ( v38 == v45 )
                  v37 = 0LL;
                ++v3;
              }
              while ( v37 );
            }
          }
          if ( v3 != *(_BYTE *)a3[4] )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1773;
          }
          v9 = 0;
        }
        else
        {
          WdLogSingleEntry4(2LL, a3, v4, this, v33);
          WdLogGlobalForLineNumber = 1733;
        }
LABEL_55:
        v42 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
        v43 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
        DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v43);
      }
      else
      {
        WdLogSingleEntry3(2LL, v4, this, NumPathsFromSource);
        WdLogGlobalForLineNumber = 1573;
      }
      return v9;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1550;
  }
  return result;
}
