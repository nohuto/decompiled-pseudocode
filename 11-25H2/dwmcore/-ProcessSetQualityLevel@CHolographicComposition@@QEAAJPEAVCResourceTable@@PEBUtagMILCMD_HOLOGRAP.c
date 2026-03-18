/*
 * XREFs of ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z @ 0x1802DA224
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicComposition::ProcessSetQualityLevel(
        CHolographicComposition *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL *a3)
{
  __int64 v3; // rdx
  CHolographicInteropTaskQueue *v4; // r10

  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 125) )
    {
      *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
      if ( *((_BYTE *)this + 124) )
      {
        v4 = *(CHolographicInteropTaskQueue **)(v3 + 48);
        if ( v4 )
        {
          if ( *(_BYTE *)(v3 + 240) )
            CHolographicInteropTaskQueue::PostMessageW(
              v4,
              0xBu,
              (struct IUnknown *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)),
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
  }
  return 0LL;
}
