/*
 * XREFs of ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x14004CC00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140014480 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::ResetEndpoint(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v10; // [rsp+40h] [rbp+20h] BYREF
  __int64 v11; // [rsp+48h] [rbp+28h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+30h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v12 = v2;
  if ( !*((_DWORD *)this + 64) )
  {
    v3 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
LABEL_11:
    CSAutoLock<1>::~CSAutoLock<1>(&v12);
    return v3;
  }
  v4 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                  + 32LL);
  v10 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v4)(
         *v4,
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v10);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x186,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v5);
LABEL_10:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v10);
    goto LABEL_11;
  }
  v11 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
         v10,
         &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
         &v11);
  v3 = v6;
  if ( v6 < 0 )
  {
    v7 = 394LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v6);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v11);
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
  v3 = v6;
  if ( v6 < 0 )
  {
    v7 = 399LL;
    goto LABEL_9;
  }
  (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 112LL))(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 80LL))(*((_QWORD *)this + 19));
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
