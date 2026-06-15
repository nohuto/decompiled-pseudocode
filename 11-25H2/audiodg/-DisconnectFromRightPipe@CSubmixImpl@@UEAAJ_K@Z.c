/*
 * XREFs of ?DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z @ 0x14006E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x140019168 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x14002F8C0 (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140032A94 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSubmixImpl::DisconnectFromRightPipe(CSubmixImpl *this, __int64 a2)
{
  CPipeInstance *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  CPipeInstance *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 *Next; // rax
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  _QWORD *v17; // [rsp+40h] [rbp+20h] BYREF
  __int64 v18; // [rsp+50h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+58h] [rbp+38h] BYREF

  v4 = (CPipeInstance *)*((_QWORD *)this + 34);
  if ( v4 )
  {
    v5 = CPipeInstance::UnresolvePendingConnections(v4, a2);
    if ( v5 < 0 )
    {
      v6 = 1156LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else
  {
    v7 = (CPipeInstance *)*((_QWORD *)this + 3);
    if ( v7 )
    {
      v5 = CPipeInstance::UnresolvePendingConnections(v7, a2);
      if ( v5 < 0 )
      {
        v6 = 1161LL;
        goto LABEL_4;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v9 = (_QWORD *)*((_QWORD *)this + 9);
  v17 = v9;
  v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  while ( v9 )
  {
    Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v8, &v17);
    wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
      &v18,
      *Next);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, a2);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x493,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v11);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
      goto LABEL_19;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
    v9 = v17;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 15);
  v17 = v12;
  while ( v12 )
  {
    v13 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v8, &v17);
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)*v13 + 176LL))(*(_QWORD *)*v13, a2);
    v5 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49B,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_19;
    }
    v12 = v17;
  }
  v5 = 0;
LABEL_19:
  CSAutoLock<1>::~CSAutoLock<1>(&v19);
  return (unsigned int)v5;
}
