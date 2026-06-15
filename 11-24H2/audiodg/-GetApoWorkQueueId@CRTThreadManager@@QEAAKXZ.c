/*
 * XREFs of ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x14004B6E4
 * Callers:
 *     ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x1400638AC (-GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@AEAPEBG@Z @ 0x140054CE8 (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMm.c)
 *     ??$_Emplace@AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@?$list@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@1@QEAU21@AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x14006D9EC (--$_Emplace@AEAV-$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@-$list@V-$.c)
 *     McTemplateU0pqqq_EtwEventWriteTransfer @ 0x14006DDC8 (McTemplateU0pqqq_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CRTThreadManager::GetApoWorkQueueId(CRTThreadManager *this, int a2)
{
  unsigned int v3; // esi
  int v4; // r14d
  int v5; // ecx
  int v6; // ecx
  const wchar_t *v7; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  const wchar_t *v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  LOBYTE(v4) = 0;
  v5 = *((_DWORD *)this + 4);
  if ( !v5 )
    goto LABEL_11;
  if ( !--v5 )
    goto LABEL_11;
  v6 = v5 - 1;
  if ( v6 )
  {
    v5 = v6 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        goto LABEL_12;
      goto LABEL_6;
    }
LABEL_11:
    v4 = *((_DWORD *)this + 5);
    v3 = *((_DWORD *)this + 6);
    goto LABEL_12;
  }
LABEL_6:
  v7 = L"Pro Audio";
  if ( !*((_DWORD *)this + 27) )
    v7 = L"Audio";
  v12 = v7;
  v11 = 0LL;
  if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,unsigned short const * &>(
              &v11,
              &v12) >= 0 )
  {
    v3 = *(_DWORD *)(v11 + 16);
    v4 = *(_DWORD *)(v11 + 20);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    try
    {
      v12 = (const wchar_t *)((char *)this + 48);
      std::list<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>>::_Emplace<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy> &>(
        (char *)this + 88,
        **((_QWORD **)this + 11),
        &v11);
      CSAutoLock<1>::~CSAutoLock<1>((struct _RTL_CRITICAL_SECTION **)&v12);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xB4,
                             (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
                             v8);
    }
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v11);
LABEL_12:
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0pqqq_EtwEventWriteTransfer(v5, a2, (_DWORD)this, *((_DWORD *)this + 4), v3, v4);
  return v3;
}
