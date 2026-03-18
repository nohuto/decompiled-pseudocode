/*
 * XREFs of ?ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z @ 0x1401FB484
 * Callers:
 *     DxgkReleaseGdiViewId @ 0x1401FD0EC (DxgkReleaseGdiViewId.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionGdiViewId(DXGSESSIONDATA *this, signed __int32 a2, char a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // edx
  unsigned int v9; // ecx
  _BYTE v10[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONDATA *)((char *)this + 19120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 4793) + *((_DWORD *)this + 4792);
  if ( v7 )
  {
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 2398) + 4 * v6) == a2 )
        break;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v7 );
  }
  if ( (unsigned int)v6 >= v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5040;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"i < m_NumSessionViewIds + m_NumPendingSessionViewIds",
      5040LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_DWORD *)this + 4793);
  v9 = *((_DWORD *)this + 4792);
  if ( (unsigned int)v6 < v9 + v8 )
  {
    if ( (unsigned int)v6 >= v9 )
      *((_DWORD *)this + 4793) = --v8;
    else
      *((_DWORD *)this + 4792) = --v9;
    if ( (unsigned int)v6 < v9 + v8 )
      memmove(
        (void *)(*((_QWORD *)this + 2398) + 4 * v6),
        (const void *)(*((_QWORD *)this + 2398) + 4LL * (unsigned int)(v6 + 1)),
        4LL * (v9 + v8 - (unsigned int)v6));
  }
  if ( a3 )
    _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, a2 - 1, a2);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
}
