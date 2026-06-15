/*
 * XREFs of ?RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?RemovePipeFromRightSubmixMixSplitConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z @ 0x14002DFC4 (-RemovePipeFromRightSubmixMixSplitConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14002F48C (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x14002F5C0 (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CSubmixImpl::RemovePipeFromMixSplitConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  _QWORD **Head; // rax
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rcx
  __int64 MixSplitConnection_Internal; // rax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v17 = v2;
  v5 = CSubmixImpl::RemovePipeFromRightSubmixMixSplitConnection(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
    {
      Head = (_QWORD **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)(v7 + 64));
      v9 = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(*Head);
      v10 = CPipeInstance::UnresolvePendingConnections(a2, *(_QWORD *)(*(_QWORD *)v9 + 8LL));
      v11 = v10;
      if ( v10 >= 0 )
        goto LABEL_4;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x386,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v10);
      if ( v2 )
        LeaveCriticalSection(v2);
    }
    else
    {
      v13 = *((_QWORD *)this + 34);
      if ( !v13
        || (MixSplitConnection_Internal = CPipeInstance::GetMixSplitConnection_Internal(v13, 0LL),
            v15 = CPipeInstance::UnresolvePendingConnections(a2, *(_QWORD *)(MixSplitConnection_Internal + 8)),
            v11 = v15,
            v15 >= 0) )
      {
LABEL_4:
        if ( v2 )
          LeaveCriticalSection(v2);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38C,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v15);
      CSAutoLock<1>::~CSAutoLock<1>(&v17);
    }
    return v11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37E,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v5);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v6;
}
