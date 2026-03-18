/*
 * XREFs of ?ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETHANDOFF@@@Z @ 0x180293054
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::ProcessSetHandoff(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETHANDOFF *a3)
{
  unsigned int v6; // edx
  __int64 Resource; // rax

  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 2);
  *((_QWORD *)this + 27) = *((_QWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 6);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 2u);
    *((_QWORD *)this + 28) = Resource;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
    *((_BYTE *)this + 297) = *((_BYTE *)a3 + 32) != 0;
    *((_QWORD *)this + 29) = *((_QWORD *)a3 + 5);
    *((_QWORD *)this + 30) = *((_QWORD *)a3 + 6);
  }
  *((_DWORD *)this + 70) = *((_DWORD *)a3 + 7);
  return 0LL;
}
