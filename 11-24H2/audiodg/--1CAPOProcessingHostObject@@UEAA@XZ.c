/*
 * XREFs of ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x140038E3C
 * Callers:
 *     ??_ECAPOProcessingHostObject@@UEAAPEAXI@Z @ 0x140038E00 (--_ECAPOProcessingHostObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x14001A11C (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 */

void __fastcall CAPOProcessingHostObject::~CAPOProcessingHostObject(CAPOProcessingHostObject *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  std::_Ref_count_base *v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  *(_QWORD *)this = &CAPOProcessingHostObject::`vftable';
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  if ( *((_QWORD *)this + 10) )
  {
    v4 = CAPOProcessingHostObject::ShutdownWorkQueue(this);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x40,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (const char *)(unsigned int)v4);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  DeleteCriticalSection(v2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 3);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
