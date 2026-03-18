/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x140264440
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x14025D394 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1400224E4 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140023444 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x140040B1C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056850 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x14006015C (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140266DA0 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140311390 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140311E38 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
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
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  DMMVIDPNPRESENTPATH *v14; // rbx
  DMMVIDPNTARGET *v15; // rcx
  struct DMMVIDPNTARGETMODESET *v16; // rax
  DMMVIDPNTARGETMODESET *v17; // rbx
  int v18; // eax
  size_t v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rdi
  int v22; // eax
  DMMVIDPNPRESENTPATH *v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  int v28; // eax
  unsigned __int8 v29; // dl
  unsigned __int8 *v30; // r8
  unsigned __int8 *v31; // rsi
  __int64 v32; // rbx
  _QWORD *v33; // rax
  DMMVIDPNTARGETMODESET *v34; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-79h]
  void **v37; // [rsp+50h] [rbp-69h] BYREF
  void **v38; // [rsp+58h] [rbp-61h] BYREF
  int v39; // [rsp+60h] [rbp-59h]
  _QWORD v40[2]; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-41h]
  int v42; // [rsp+80h] [rbp-39h]
  __int64 v43; // [rsp+88h] [rbp-31h]
  struct DMMVIDPNTARGETMODESET *v44; // [rsp+90h] [rbp-29h] BYREF
  DMMVIDPNPRESENTPATH *Path; // [rsp+98h] [rbp-21h]
  void **v46; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-11h]
  void **v48; // [rsp+B8h] [rbp-1h]
  void *Src; // [rsp+C0h] [rbp+7h]
  size_t Size; // [rsp+C8h] [rbp+Fh]
  __int64 v51; // [rsp+D0h] [rbp+17h]
  unsigned int v52; // [rsp+130h] [rbp+77h] BYREF
  __int64 (__fastcall ***v53)(_QWORD, __int64); // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = a2;
  if ( a3 )
  {
    if ( a3[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1556;
    }
    v35 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v4, &v35);
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
        v44 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
        if ( !*((_QWORD *)v44 + 18) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1583;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v44, 0LL);
        v39 = 0;
        v37 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
        v41 = 0LL;
        v38 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
        v40[1] = v40;
        v40[0] = v40;
        v12 = 0LL;
        v42 = 2;
        v43 = 0LL;
        while ( 1 )
        {
          v36 = v12;
          if ( v12 >= v35 )
            break;
          v52 = -1;
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v4, v12, &v52) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1602;
          }
          v13 = v52;
          Path = DMMVIDPNTOPOLOGY::FindPath(this, v4, v52);
          v14 = Path;
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1611;
          }
          Src = 0LL;
          v46 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
          Size = 0LL;
          v48 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v47 = 0LL;
          v51 = 256LL;
          v15 = (DMMVIDPNTARGET *)*((_QWORD *)v14 + 12);
          v34 = 0LL;
          v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v15);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v34, (__int64)v16);
          v17 = v34;
          if ( !v34 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1623;
          }
          if ( *((_QWORD *)v17 + 18) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1627;
          }
          v18 = DMMVIDPNTARGETMODESET::Serialize(v17);
          v9 = v18;
          if ( v18 < 0 )
          {
            WdLogSingleEntry4(2LL, v4, v13, this, v18);
            WdLogGlobalForLineNumber = 1636;
            auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v34, 0LL);
            goto LABEL_35;
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v34, 0LL);
          v19 = Size;
          v20 = (_QWORD *)operator new(0x38uLL, 0x4E506456u, 256LL);
          v21 = (__int64)v20;
          if ( v20 )
          {
            v20[1] = 0LL;
            v20[2] = 0LL;
            *v20 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
            v20[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
            v20[4] = 0LL;
            v20[5] = 0LL;
            v20[6] = 256LL;
          }
          else
          {
            v21 = 0LL;
          }
          v53 = (__int64 (__fastcall ***)(_QWORD, __int64))v21;
          if ( !v21 )
          {
            WdLogSingleEntry3(6LL, 56LL, v4, v13);
            WdLogGlobalForLineNumber = 1660;
            auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v53);
            v9 = -1073741801;
            goto LABEL_35;
          }
          v22 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v21, v19 + 360);
          v9 = v22;
          if ( v22 < 0 )
          {
            WdLogSingleEntry4(2LL, v4, v13, this, v22);
            WdLogGlobalForLineNumber = 1677;
            auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v53);
LABEL_35:
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v46);
            goto LABEL_55;
          }
          v23 = Path;
          if ( *((_DWORD *)Path + 28) != 254 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1689;
          }
          if ( *((_DWORD *)v23 + 29) != 254 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1690;
          }
          DMMVIDPNPRESENTPATH::Serialize(v23, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v21 + 32));
          memmove((void *)(*(_QWORD *)(v21 + 32) + 360LL), Src, Size);
          v53 = 0LL;
          Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v37, v21);
          auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v53);
          DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v46);
          v12 = v36 + 1;
          v3 = 0;
        }
        v24 = 1LL;
        if ( v41 > 1 )
          v24 = v41;
        v25 = 4 * v24 + 4;
        if ( (_QWORD *)v40[0] != v40 )
        {
          v26 = v40[0] - 8LL;
          if ( v40[0] != 8LL )
          {
            do
            {
              v25 += *(_QWORD *)(v26 + 40);
              v27 = *(_QWORD **)(v26 + 8);
              v26 = (__int64)(v27 - 1);
              if ( v27 == v40 )
                v26 = 0LL;
            }
            while ( v26 );
          }
        }
        v28 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a3, v25);
        v9 = v28;
        if ( v28 >= 0 )
        {
          v29 = 1;
          *(_BYTE *)a3[4] = v41;
          v30 = (unsigned __int8 *)a3[4];
          if ( *v30 > 1u )
            v29 = *v30;
          v31 = &v30[4 * v29 + 4];
          if ( (_QWORD *)v40[0] != v40 )
          {
            v32 = v40[0] - 8LL;
            if ( v40[0] != 8LL )
            {
              do
              {
                *(_DWORD *)(a3[4] + 4LL * v3 + 4) = (_DWORD)v31 - *((_DWORD *)a3 + 8);
                memmove(v31, *(const void **)(v32 + 32), *(_QWORD *)(v32 + 40));
                v31 += *(_QWORD *)(v32 + 40);
                v33 = *(_QWORD **)(v32 + 8);
                v32 = (__int64)(v33 - 1);
                if ( v33 == v40 )
                  v32 = 0LL;
                ++v3;
              }
              while ( v32 );
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
          WdLogSingleEntry4(2LL, a3, v4, this, v28);
          WdLogGlobalForLineNumber = 1733;
        }
LABEL_55:
        v37 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
        v38 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
        DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v38);
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
