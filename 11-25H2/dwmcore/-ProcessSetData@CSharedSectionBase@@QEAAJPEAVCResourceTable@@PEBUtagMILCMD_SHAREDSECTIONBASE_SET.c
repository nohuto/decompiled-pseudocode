/*
 * XREFs of ?ProcessSetData@CSharedSectionBase@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONBASE_SETDATA@@PEBXI@Z @ 0x1802AFDB8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CSharedSectionBase::ProcessSetData(
        CSharedSectionBase *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTIONBASE_SETDATA *a3,
        const void *a4)
{
  __int64 v4; // rdx
  unsigned int v5; // eax

  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 20);
    if ( *((_DWORD *)a3 + 2) < v5 && *((_DWORD *)a3 + 3) <= v5 - *((_DWORD *)a3 + 2) )
      memcpy_0((void *)(v4 + *((unsigned int *)a3 + 2)), a4, *((unsigned int *)a3 + 3));
  }
  return 0LL;
}
