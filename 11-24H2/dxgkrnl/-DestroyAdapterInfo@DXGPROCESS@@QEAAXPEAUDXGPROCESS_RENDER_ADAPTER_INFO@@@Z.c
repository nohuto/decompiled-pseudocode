/*
 * XREFs of ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x14036CF30
 * Callers:
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019CD40 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1402CEA6C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U6@U6@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@33333333AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@8888AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x14003FF4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrappe.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1400660F0 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ??1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ @ 0x140398B90 (--1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403AD330 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1403AD370 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1403C0508 (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROCESS::DestroyAdapterInfo(DXGPROCESS *this, struct DXGPROCESS_RENDER_ADAPTER_INFO *a2)
{
  ADAPTER_RENDER *v4; // rdi
  __int64 v5; // r13
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r14
  char *v11; // rdi
  __int64 v12; // rcx
  char **v13; // rax
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v14; // rdi
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v15; // r15
  void *v16; // r12
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // r10
  __int64 v20; // r11
  __int64 v21; // rcx
  __int128 v22; // xmm0
  char v23; // [rsp+D0h] [rbp-80h] BYREF
  char v24; // [rsp+D1h] [rbp-7Fh] BYREF
  bool v25; // [rsp+D2h] [rbp-7Eh] BYREF
  bool v26; // [rsp+D3h] [rbp-7Dh] BYREF
  _BYTE v27[2]; // [rsp+D4h] [rbp-7Ch] BYREF
  __int16 v28; // [rsp+D6h] [rbp-7Ah] BYREF
  int v29; // [rsp+D8h] [rbp-78h] BYREF
  unsigned __int16 *v30; // [rsp+E0h] [rbp-70h] BYREF
  __int128 *v31; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-60h] BYREF
  void *v33; // [rsp+F8h] [rbp-58h] BYREF
  const CHAR *v34; // [rsp+100h] [rbp-50h] BYREF
  __int64 v35; // [rsp+108h] [rbp-48h] BYREF
  __int64 v36; // [rsp+110h] [rbp-40h] BYREF
  __int64 v37; // [rsp+118h] [rbp-38h] BYREF
  __int64 v38; // [rsp+120h] [rbp-30h] BYREF
  __int64 v39; // [rsp+128h] [rbp-28h] BYREF
  __int64 v40; // [rsp+130h] [rbp-20h] BYREF
  __int64 v41; // [rsp+138h] [rbp-18h] BYREF
  __int64 v42; // [rsp+140h] [rbp-10h] BYREF
  __int64 v43; // [rsp+148h] [rbp-8h] BYREF
  __int64 v44; // [rsp+150h] [rbp+0h] BYREF
  _QWORD v45[8]; // [rsp+160h] [rbp+10h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp+50h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2532;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pAdapterInfo != nullptr", 2532LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 10);
  v5 = *((_QWORD *)v4 + 2);
  if ( *((_BYTE *)a2 + 109) )
  {
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(a2, this, *((struct ADAPTER_RENDER **)a2 + 10));
    v6 = (void *)*((_QWORD *)a2 + 6);
    if ( v6 )
    {
      ADAPTER_RENDER::DdiDestroyProcess(*((ADAPTER_RENDER **)a2 + 10), v6);
      *((_QWORD *)a2 + 6) = 0LL;
    }
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(a2);
    v4 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 10);
  }
  memset(v45, 0, sizeof(v45));
  if ( !*(_BYTE *)(v5 + 209) )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = *((_QWORD *)v4 + 92);
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 8LL * (unsigned int)(*(_DWORD *)v8 - 1) + 16);
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)(v8 + 8) + 1064LL))(
          *((_QWORD *)v4 + 93),
          v9,
          v45);
        v4 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 10);
      }
    }
  }
  if ( *((_DWORD *)a2 + 15) )
    ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(v4);
  v10 = *((_QWORD *)a2 + 10);
  v11 = (char *)a2 + 88;
  if ( *(struct _KTHREAD **)(v10 + 80) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4629;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_OpenAdapterLock.IsExclusiveOwner()",
      4629LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = *(_QWORD *)v11;
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || (v13 = (char **)*((_QWORD *)a2 + 12), *v13 != v11) )
    __fastfail(3u);
  *v13 = (char *)v12;
  *(_QWORD *)(v12 + 8) = v13;
  --*(_DWORD *)(v10 + 312);
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(v5 + 240)) = 0LL;
  v14 = (struct DXGPROCESS_RENDER_ADAPTER_INFO *)*((_QWORD *)a2 + 17);
  while ( v14 != (struct DXGPROCESS_RENDER_ADAPTER_INFO *)((char *)a2 + 136) )
  {
    v15 = v14;
    v14 = *(struct DXGPROCESS_RENDER_ADAPTER_INFO **)v14;
    if ( *((_QWORD *)v15 + 3) )
    {
      v16 = &unk_1400C6B88;
      if ( (*((_DWORD *)this + 102) & 0x100) != 0 )
        v16 = (void *)*((_QWORD *)this + 78);
      if ( (unsigned int)dword_14015E650 > 5 && tlgKeywordOn((__int64)&dword_14015E650, 0x400000000010LL) )
      {
        v21 = *((_QWORD *)this + 8);
        v30 = *(unsigned __int16 **)(v5 + 1928);
        v31 = &v46;
        v22 = *(_OWORD *)(v21 + 140);
        v33 = v16;
        v46 = v22;
        v23 = *(_BYTE *)(v21 + 138);
        v24 = *(_BYTE *)(v21 + 137);
        v25 = (v19 & 0x20) != 0;
        LOBYTE(v18) = v18 & 1;
        v32 = *(_QWORD *)(v5 + 412);
        v26 = (v19 & 0x10) != 0;
        v27[0] = v18;
        v34 = *(const CHAR **)(v21 + 96);
        v35 = *(_QWORD *)(v21 + 80);
        v29 = *((_DWORD *)v15 + 4);
        v36 = v45[7];
        v37 = v45[5];
        v38 = v45[4];
        v39 = v45[3];
        v40 = v45[1];
        v41 = v45[0];
        v42 = v45[2];
        v28 = 7;
        v43 = v20;
        v44 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>>(
          v21,
          (__int64)&unk_14013E1C4,
          v17,
          v18,
          (__int64)&v44,
          (__int64)&v28,
          (__int64)&v43,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v29,
          (__int64)&v35,
          &v34,
          &v33,
          (__int64)&v32,
          (__int64)v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64 *)&v31,
          &v30);
      }
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
  }
  DXGPROCESS_ADAPTER_INFO_PASID_DATA::~DXGPROCESS_ADAPTER_INFO_PASID_DATA(a2);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
}
