/*
 * XREFs of ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140064990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007C18 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x140039F14 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFormat(CAudioDeviceGraph *this, __int64 a2, struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct CPipeInstance *PipeInstance; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  const struct tWAVEFORMATEX *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v7 = *((_DWORD *)this + 64) == 0;
  v18 = v3;
  if ( v7 )
  {
    v8 = -2005139437;
    v9 = 864LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v8);
    goto LABEL_15;
  }
  PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
  if ( !PipeInstance )
  {
    v9 = 868LL;
LABEL_5:
    v8 = -2005139430;
    goto LABEL_6;
  }
  v11 = *(_QWORD *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)PipeInstance + 2);
  if ( !v11 )
  {
    v9 = 872LL;
    goto LABEL_5;
  }
  v17 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 8LL))(v11, &v17);
  v8 = v12;
  if ( v12 >= 0 )
  {
    v14 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
    v12 = CloneWaveFormat(v14, a3);
    v8 = v12;
    if ( v12 >= 0 )
    {
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
      v8 = 0;
      goto LABEL_15;
    }
    v13 = 882LL;
  }
  else
  {
    v13 = 876LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)v12);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
LABEL_15:
  CSAutoLock<1>::~CSAutoLock<1>(&v18);
  return v8;
}
