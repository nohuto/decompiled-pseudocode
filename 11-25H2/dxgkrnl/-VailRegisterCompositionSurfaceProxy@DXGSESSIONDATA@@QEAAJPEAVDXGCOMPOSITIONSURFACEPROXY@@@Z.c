/*
 * XREFs of ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x140201394
 * Callers:
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401B3724 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x140200EA8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x140200F84 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailRegisterCompositionSurfaceProxy(
        struct _EX_RUNDOWN_REF **this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  int v4; // edi
  struct _EX_RUNDOWN_REF *v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = DXGSESSIONDATA::VailEnsureConnection((DXGSESSIONDATA *)this);
  if ( v4 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(this + 2365), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    if ( this[2372] )
      ++*((_DWORD *)this + 4742);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
    v5 = this[2372];
    if ( v5 && ExAcquireRundownProtection(v5 + 8) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(this[2372][9].Count + 64)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)&this[2372][2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
        v6 = *(_QWORD *)(this[2372][11].Count + 8);
        v7 = (*(__int64 (__fastcall **)(__int64, struct DXGCOMPOSITIONSURFACEPROXY *, __int64))(*(_QWORD *)v6 + 56LL))(
               v6,
               a2,
               18LL);
        if ( v7 )
        {
          *((_DWORD *)a2 + 4) = v7;
          _m_prefetchw((char *)a2 + 8);
          v8 = *((_DWORD *)a2 + 2);
          do
          {
            if ( !v8 )
              break;
            v9 = v8;
            v8 = _InterlockedCompareExchange((volatile signed __int32 *)a2 + 2, v8 + 1, v8);
          }
          while ( v9 != v8 );
          v4 = 0;
        }
        else
        {
          v4 = -1073741801;
          WdLogSingleEntry2(3LL, a2, -1073741801LL);
          WdLogGlobalForLineNumber = 1390;
          WdLogSingleEntry1(3LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2648;
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(this[2372][9].Count + 64));
      }
      else
      {
        v4 = -2147483611;
        WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
        WdLogGlobalForLineNumber = 2651;
      }
      ExReleaseRundownProtection(this[2372] + 8);
    }
    else
    {
      v4 = -2147483611;
      WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
      WdLogGlobalForLineNumber = 2651;
    }
    if ( this[2372] )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(this + 2365), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      DXGSESSIONDATA::ReleaseVailGuestReference((DXGSESSIONDATA *)this);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
    }
  }
  return (unsigned int)v4;
}
