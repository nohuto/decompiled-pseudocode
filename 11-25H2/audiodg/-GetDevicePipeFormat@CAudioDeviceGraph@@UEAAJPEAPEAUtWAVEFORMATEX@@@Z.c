/*
 * XREFs of ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140002D30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000471C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetDevicePipeFormat(CAudioDeviceGraph *this, struct tWAVEFORMATEX **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  const struct tWAVEFORMATEX *v8; // rax
  int v9; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v15 = v4;
  if ( !*((_DWORD *)this + 60) )
  {
    v7 = -2005139437;
    v11 = 899LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v7,
      v12);
LABEL_12:
    if ( v4 )
      LeaveCriticalSection(v4);
    return v7;
  }
  v5 = *(_QWORD *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(*((_QWORD *)this + 18) + 16LL);
  if ( !v5 )
  {
    v7 = -2005139430;
    v11 = 903LL;
    goto LABEL_16;
  }
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 8LL))(v5, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v6,
      v12);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    goto LABEL_12;
  }
  v8 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
  v9 = CloneWaveFormat(v8, a2);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v9,
      v12);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
    CSAutoLock<1>::~CSAutoLock<1>(&v15);
    return v7;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
