/*
 * XREFs of ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14008F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x14000ABC4 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140018FCC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14008D684 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14008EBB8 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14008F974 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialCrossProcessClientEndpoint::Initialize(
        CSpatialCrossProcessClientEndpoint *this,
        struct ICrossProcessMemory *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  LPCRITICAL_SECTION v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ICrossProcessMemory *v13; // [rsp+40h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v11, (struct _RTL_CRITICAL_SECTION *)((char *)this - 1296));
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessClientEndpoint::Initialize", 136, v4, v5);
  if ( *((_BYTE *)this - 1232) )
  {
    v6 = -2005139440;
    v7 = 138LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpclientendpoint.cpp",
      (const char *)v6);
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v6 = -2147024809;
    v7 = 139LL;
    goto LABEL_5;
  }
  v13 = a2;
  (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = CSpatialCrossProcessBaseEndpoint::MapCPMemory((CSpatialCrossProcessClientEndpoint *)((char *)this - 1328), a2);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v8 = CSparseIndexMapRT::SetMapSize(
           (CSpatialCrossProcessClientEndpoint *)((char *)this + 24),
           *((_DWORD *)this - 260) + *((_DWORD *)this - 259));
    v6 = v8;
    if ( v8 >= 0 )
    {
      *((_QWORD *)this - 149) = 0LL;
      *((_QWORD *)this - 151) = 0LL;
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 3) + 64LL), 1u);
      _InterlockedExchange((volatile __int32 *)this - 308, 1);
      wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this - 155, (__int64)a2);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v13);
      v6 = 0;
      goto LABEL_12;
    }
    v9 = 150LL;
  }
  else
  {
    v9 = 144LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpclientendpoint.cpp",
    (const char *)(unsigned int)v8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v13);
LABEL_12:
  ATL::CCritSecLock::~CCritSecLock(v11);
  return v6;
}
