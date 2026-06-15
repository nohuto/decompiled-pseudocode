/*
 * XREFs of ?RemovePipeFromMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z @ 0x14002F53C (-RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipeFromMixSplitConnection(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD **Head; // rax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  Head = (_QWORD **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)(*((_QWORD *)this + 18) + 64LL));
  v6 = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(*Head);
  v7 = CAudioDeviceGraph::RemovePipeInternal(
         (CAudioDeviceGraph *)((char *)this - 16),
         a2,
         *(_QWORD *)(*(_QWORD *)v6 + 8LL));
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FB,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v7);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v8;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
