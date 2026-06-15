/*
 * XREFs of ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140045DD4
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140028610 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x140019168 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140027AB0 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14002F78C (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x14002F8C0 (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140032A94 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::DeleteExistingFormatConverter(CSubmixImpl *this)
{
  void **v2; // rsi
  __int64 v3; // rcx
  __int64 v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *Next; // rax
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 *v12; // rax
  int v13; // eax
  CPipeInstance *v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  _QWORD *v17; // [rsp+50h] [rbp+30h] BYREF
  __int64 v18; // [rsp+58h] [rbp+38h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp+40h] BYREF

  v2 = (void **)((char *)this + 272);
  v3 = *((_QWORD *)this + 34);
  if ( v3 )
  {
    v5 = *(_QWORD *)(CPipeInstance::GetMixSplitConnection_Internal(v3, 0) + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    v7 = (_QWORD *)*((_QWORD *)this + 15);
    v17 = v7;
    while ( v7 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v6, &v17);
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)*Next + 176LL))(*(_QWORD *)*Next, v5);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DE,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v9);
LABEL_13:
        CSAutoLock<1>::~CSAutoLock<1>(&v19);
        return v10;
      }
      v7 = v17;
    }
    v11 = (_QWORD *)*((_QWORD *)this + 9);
    v17 = v11;
    while ( v11 )
    {
      v12 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v6, &v17);
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        &v18,
        *v12);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v5);
      v10 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E6,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v13);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
        goto LABEL_13;
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
      v11 = v17;
    }
    CSAutoLock<1>::~CSAutoLock<1>(&v19);
    v14 = (CPipeInstance *)*((_QWORD *)this + 3);
    if ( v14 )
    {
      v15 = CPipeInstance::UnresolvePendingConnections(v14, v5);
      v10 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1ED,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v15);
        return v10;
      }
    }
  }
  CFormatConverterPipe::Reset(v2);
  return 0LL;
}
