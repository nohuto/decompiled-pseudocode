/*
 * XREFs of ?SetProcessAttribution@CWindowNode@@QEAAJAEBUDCOMPOSITION_PROCESS_ATTRIBUTION@@@Z @ 0x1801E6D94
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x1801E70C0 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 */

__int64 __fastcall CWindowNode::SetProcessAttribution(
        CWindowNode *this,
        const struct DCOMPOSITION_PROCESS_ATTRIBUTION *a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // edx
  int ProcessAttribution; // eax
  unsigned int v6; // ebx
  CDrawListCache *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CDrawListCache *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 1);
  v3 = *(_DWORD *)a2;
  v10 = 0LL;
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(qword_1803FAFC0, v3, v2, &v10);
  v6 = ProcessAttribution;
  if ( ProcessAttribution < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x727,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)(unsigned int)ProcessAttribution);
    if ( v10 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v10);
    return v6;
  }
  else
  {
    v7 = (CDrawListCache *)*((_QWORD *)this + 103);
    *((_QWORD *)this + 103) = v10;
    if ( v7 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v7);
    return 0LL;
  }
}
