/*
 * XREFs of ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1402587FC
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1401C9940 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1400347C0 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x140040B1C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1402DD1B4 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316B60 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        struct _D3DDDI_MULTISAMPLINGMETHOD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // r12
  unsigned __int64 *v10; // r14
  __int64 result; // rax
  __int64 v12; // rbx
  VIDPN_MGR *v13; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v15; // ebx
  DMMVIDPN *v16; // rdi
  DMMVIDPNTARGET *SourceFromId; // rax
  DMMVIDPNTARGET *v18; // r15
  unsigned __int64 *v19; // rbx
  unsigned __int64 v20; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  int v22; // eax
  __int64 v23; // r9
  int v24; // eax
  unsigned __int64 v25; // r8
  _DWORD v26[2]; // [rsp+50h] [rbp-20h] BYREF
  VIDPN_MGR *v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h] BYREF
  DMMVIDPN *v29; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+50h]
  unsigned int v31; // [rsp+C8h] [rbp+58h]

  v31 = a4;
  v30 = a3;
  v8 = a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 9882;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9890;
  }
  v12 = *((_QWORD *)this + 390);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 9895;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v13 = *(VIDPN_MGR **)(v12 + 104);
  v27 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 9909;
    return result;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, (__int64)v13);
  v29 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
  v15 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v16 = v29;
    SourceFromId = DMMVIDPN::GetSourceFromId(v29, v8);
    v18 = SourceFromId;
    if ( SourceFromId )
    {
      v19 = (unsigned __int64 *)DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
      a8 = v19;
      v20 = v19[18];
      if ( v20 )
      {
        BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                      (DMMVIDPNSOURCEMODESET *)v19,
                      v30,
                      v31,
                      a5,
                      (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v20 + 72));
        if ( BestMatch )
        {
          v22 = DMMVIDPNSOURCEMODESET::PinMode((DMMVIDPNSOURCEMODESET *)v19, *((_DWORD *)BestMatch + 6));
          v15 = v22;
          if ( v22 >= 0 )
          {
            v26[1] = -1;
            v26[0] = v8;
            LOBYTE(v23) = 1;
            v24 = VIDPN_MGR::FormalizeVidPnChange(
                    v27,
                    (unsigned __int64)v16 & -(__int64)((DMMVIDPN *)((char *)v16 + 88) != 0LL),
                    3LL,
                    v23,
                    v26);
            v15 = v24;
            if ( v24 >= 0 )
            {
              v25 = *((_QWORD *)v18 + 21) >> 3;
              if ( v10 )
                *v10 = 8 * v25;
              if ( a6 >= v25 )
              {
                if ( a7 )
                  memmove(a7, *((const void **)v18 + 20), 8 * v25);
                auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
                v15 = 0;
              }
              else
              {
                WdLogSingleEntry2(7LL, a6, v25);
                WdLogGlobalForLineNumber = 10047;
                if ( !v10 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 10050;
                }
                auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
                v15 = -1073741789;
              }
              goto LABEL_38;
            }
            if ( v24 == -1071774970 )
            {
              WdLogSingleEntry3(3LL, v16, v8, this);
              WdLogGlobalForLineNumber = 10018;
            }
            else
            {
              WdLogSingleEntry5(2LL, v30, v31, a5, v8, v24);
              WdLogGlobalForLineNumber = 10023;
            }
          }
          else
          {
            WdLogSingleEntry5(2LL, v8, v30, v31, a5, v22);
            WdLogGlobalForLineNumber = 9994;
          }
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
        }
        else
        {
          WdLogSingleEntry5(7LL, v30, v31, a5, v8, this);
          WdLogGlobalForLineNumber = 9979;
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
          v15 = -1071774970;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v18);
        WdLogGlobalForLineNumber = 9959;
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
        v15 = 1075708679;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v8);
      WdLogGlobalForLineNumber = 9940;
      v15 = -1071774972;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, ClientVidPnFromLastClientCommitedVidPn);
    WdLogGlobalForLineNumber = 9926;
  }
LABEL_38:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v29, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
  return v15;
}
