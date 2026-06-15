/*
 * XREFs of ??1CRTThreadManager@@UEAA@XZ @ 0x14006DC04
 * Callers:
 *     ??_GCRTThreadManager@@UEAAPEAXI@Z @ 0x14006DD50 (--_GCRTThreadManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018588 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CRTThreadManager::~CRTThreadManager(CRTThreadManager *this)
{
  DWORD v2; // ecx
  HRESULT v3; // eax
  HRESULT v4; // eax
  _QWORD **v5; // rcx
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CRTThreadManager::`vftable';
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    v3 = RtwqUnlockWorkQueue(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x84,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v3);
  }
  if ( *((_BYTE *)this + 104) )
  {
    v4 = RtwqShutdown();
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x89,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = (_QWORD **)*((_QWORD *)this + 11);
  *v5[1] = 0LL;
  v6 = *v5;
  if ( *v5 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v6 + 2);
      std::_Deallocate<16,0>(v6, 0x18uLL);
      v6 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(*((void **)this + 11), 0x18uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 5);
  *((_DWORD *)this + 3) = -1073741823;
}
