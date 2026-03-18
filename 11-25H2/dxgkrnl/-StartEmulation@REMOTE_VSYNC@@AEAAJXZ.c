/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403D1918
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1403D1878 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgCreateEvent@@YAJPEAPEAU_KEVENT@@W4_EVENT_TYPE@@E@Z @ 0x1400676FC (-DxgCreateEvent@@YAJPEAPEAU_KEVENT@@W4_EVENT_TYPE@@E@Z.c)
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x14007775C (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x14027C330 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1403A596C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1403F3334 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x14042DD5C (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this, enum _EVENT_TYPE a2, __int64 a3, __int64 a4)
{
  struct _KEVENT **v4; // rdi
  NTSTATUS Event; // esi
  unsigned int v8; // esi
  BLTQUEUE *v9; // rax
  BLTQUEUE *v10; // rax
  BLTQUEUE **v11; // rdi
  int v12; // eax
  __int64 v13; // r14
  int v14; // ecx

  v4 = (struct _KEVENT **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (Event = DxgCreateEvent((PVOID *)this + 2, a2), Event >= 0) )
  {
    v8 = 64;
    v9 = (BLTQUEUE *)operator new(0xB98uLL, 0x4B677844u, 64LL, a4);
    if ( v9 )
      v10 = BLTQUEUE::BLTQUEUE(v9, 0LL, 0xFFFFFFFF, *v4, 0);
    else
      v10 = 0LL;
    v11 = (BLTQUEUE **)((char *)this + 8);
    *((_QWORD *)this + 1) = v10;
    if ( v10 )
    {
      v12 = BLTQUEUE::Startup(v10);
      v13 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(2LL, v12);
        WdLogGlobalForLineNumber = 90;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to start remote VSync emulation, status 0x%I64x",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( *v11 )
        {
          BLTQUEUE::`scalar deleting destructor'(*v11, 1);
          *v11 = 0LL;
        }
      }
      else
      {
        BLTQUEUE::EnableVSync((struct _KTHREAD **)*v11);
        if ( !*((_BYTE *)this + 1) )
        {
          v14 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 76280);
          if ( !v14 || (v8 = 0x3E8u / (v14 + 1)) == 0 )
          {
            v8 = 32;
            v11 = (BLTQUEUE **)((char *)this + 8);
          }
        }
        BLTQUEUE::UpdateDisplayModeInfo(
          (struct _D3DDDI_RATIONAL *)*v11,
          (struct _D3DDDI_RATIONAL)(v8 | 0x100000000LL),
          0x300u);
      }
      return (unsigned int)v13;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 57;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to create remote VSync emulation class",
        57LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 48;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to create remote VSync event",
      48LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)Event;
  }
}
