/*
 * XREFs of ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x140200F84
 * Callers:
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x140201394 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x140200954 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x140200EA8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailEnsureConnection(DXGSESSIONDATA *this)
{
  struct DXGFASTMUTEX *v1; // rbp
  struct _EX_RUNDOWN_REF *v3; // rcx
  BOOLEAN v4; // al
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rsi
  struct DXGVMBUSCHANNEL *v8; // rcx
  _BYTE v10[16]; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-18h] BYREF

  v1 = (DXGSESSIONDATA *)((char *)this + 18920);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONDATA *)((char *)this + 18920), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( *((_QWORD *)this + 2372) )
    ++*((_DWORD *)this + 4742);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  v3 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2372);
  if ( v3 && ExAcquireRundownProtection(v3 + 8) )
  {
    v4 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2372) + 72LL) + 64LL));
    v5 = *((_QWORD *)this + 2372);
    if ( v4 )
    {
      v6 = 0;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v5 + 72) + 64LL));
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(v5 + 16), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      WdLogSingleEntry0(3LL);
      v7 = *((_QWORD *)this + 2372);
      WdLogGlobalForLineNumber = 2407;
      if ( *(struct _KTHREAD **)(v7 + 40) != KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 485;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_VailMutex.IsOwner()", 485LL, 0LL, 0LL, 0LL, 0LL);
      }
      v8 = *(struct DXGVMBUSCHANNEL **)(v7 + 72);
      v6 = -1073741823;
      if ( v8 )
        v6 = EnableVmBusChannel(v8, 1);
      if ( v6 < 0 )
      {
        WdLogSingleEntry1(2LL, v6);
        WdLogGlobalForLineNumber = 2416;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Reconnect failed with (0x%I64x).",
          v6,
          0LL,
          0LL,
          0LL,
          0LL);
        v6 = -1071775727;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2372) + 64LL));
  }
  else
  {
    v6 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
    WdLogGlobalForLineNumber = 2427;
  }
  if ( *((_QWORD *)this + 2372) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, v1, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  }
  return (unsigned int)v6;
}
