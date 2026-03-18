/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1403C4B50
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x14024B5F0 (DpiMiracastFindDisplayAdapterFdo.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1403C4A80 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x140041808 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x14024B90C (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiMiracastGetForcedMode @ 0x1403C4D60 (DpiMiracastGetForcedMode.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1403C4E78 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1403C4EDC (DpiMiracastQueryMiracastSupportForFDO.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // bl
  char v3; // r14
  bool v4; // r12
  __int64 v5; // rdi
  int ForcedMode; // eax
  int v7; // esi
  __int64 RenderAdapterForSession; // rax
  __int64 v9; // r15
  int v10; // edi
  char v12; // bp
  PVOID v13; // rsi
  char v14; // r15
  PVOID Tag; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v2 = 1;
  }
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  ForcedMode = DpiMiracastGetForcedMode();
  v7 = ForcedMode;
  if ( ForcedMode != 3 )
  {
    if ( ForcedMode != 1 )
    {
      RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
      v9 = RenderAdapterForSession;
      if ( RenderAdapterForSession )
      {
        LODWORD(Tag) = 0;
        v10 = DpiMiracastQueryMiracastSupportForFDO(RenderAdapterForSession, &Tag);
        if ( v10 < 0 )
        {
          if ( v2 )
            ReleaseMiniportListMutex();
          return (unsigned int)v10;
        }
        v12 = BYTE1(Tag);
        v5 = *(_QWORD *)(v9 + 2696);
        v4 = (_BYTE)Tag != 0;
        if ( (_BYTE)Tag )
        {
          if ( BYTE1(Tag) )
            goto LABEL_24;
        }
        if ( v7 == 2 )
          goto LABEL_24;
      }
    }
    Tag = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv((__int64 *)&Tag) >= 0 )
    {
      v13 = Tag;
      if ( Tag )
      {
        LODWORD(Tag) = 0;
        v14 = 0;
        v12 = 0;
        if ( (int)DpiMiracastQueryMiracastSupportForFDO(v13, &Tag) >= 0 )
        {
          v12 = BYTE3(Tag);
          v14 = BYTE2(Tag);
          if ( BYTE2(Tag) )
          {
            v5 = *((_QWORD *)v13 + 337);
            v3 = 1;
          }
        }
        if ( *((_BYTE *)v13 + 484) )
          DpiEnableD3Requests(*((_QWORD *)v13 + 3));
        ExReleaseResourceLite(*((PERESOURCE *)v13 + 21));
        KeLeaveCriticalRegion();
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)v13 + 2, v13, 0x20u);
        if ( v14 )
          goto LABEL_24;
      }
    }
    if ( v4 )
    {
      v12 = 0;
      v3 = 0;
LABEL_24:
      DWORD1(xmmword_140161288) = dword_1401611E4;
      LOBYTE(xmmword_140161288) = v12;
      BYTE8(xmmword_140161288) = v3;
      *(_QWORD *)((char *)&xmmword_140161288 + 12) = v5;
      if ( a1 )
      {
        *(_OWORD *)a1 = xmmword_140161288;
        *(_DWORD *)(a1 + 16) = dword_140161298;
      }
      if ( v2 )
        ReleaseMiniportListMutex();
      return 0LL;
    }
    xmmword_140161288 = 0LL;
    dword_140161298 = 0;
  }
  if ( v2 )
    ReleaseMiniportListMutex();
  return 3221225659LL;
}
