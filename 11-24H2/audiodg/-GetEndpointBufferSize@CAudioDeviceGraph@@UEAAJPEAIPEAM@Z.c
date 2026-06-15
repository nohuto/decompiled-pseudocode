/*
 * XREFs of ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x140013BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140014310 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetEndpointBufferSize(CAudioDeviceGraph *this, unsigned int *a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v16 = v6;
  v7 = 0;
  if ( !*((_DWORD *)this + 64) )
  {
    v7 = -2005139437;
    v14 = 321LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v7);
    goto LABEL_28;
  }
  if ( !a2 )
  {
    v14 = 325LL;
LABEL_25:
    v7 = -2147467261;
    goto LABEL_26;
  }
  if ( !a3 )
  {
    v14 = 326LL;
    goto LABEL_25;
  }
  v8 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                  + 32LL);
  v19 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v8)(
         *v8,
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v19);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v9);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    goto LABEL_10;
  }
  v15 = 0LL;
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v19)(
          v19,
          &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
          &v15);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v18 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 32LL))(v15, &v18);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v13);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      goto LABEL_10;
    }
    *a2 = v18;
    *a3 = *((float *)this + 34);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
LABEL_28:
    CSAutoLock<1>::~CSAutoLock<1>(&v16);
    return v7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x155,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)v11);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_10:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v10;
}
