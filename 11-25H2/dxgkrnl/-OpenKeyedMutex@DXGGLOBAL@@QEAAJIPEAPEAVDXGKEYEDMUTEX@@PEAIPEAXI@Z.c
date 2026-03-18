/*
 * XREFs of ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1403BDF5C
 * Callers:
 *     DxgkOpenKeyedMutex @ 0x1401EF650 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1403B7B10 (DxgkOpenKeyedMutex2.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14001BA6C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402FF39C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        unsigned int a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  volatile signed __int64 *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  int v14; // eax
  unsigned int v15; // edi
  _BYTE v17[16]; // [rsp+50h] [rbp-18h] BYREF

  v6 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5045;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"ppKeyedMutex", 5045LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5046;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"phKeyedMutex", 5046LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v6, 9);
  v11 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v12 = *(_QWORD *)(ObjectA + 24);
    do
    {
      if ( !v12 )
      {
        WdLogSingleEntry2(3LL, v6, -1073741811LL);
        WdLogGlobalForLineNumber = 5067;
        goto LABEL_13;
      }
      v13 = v12;
      v12 = _InterlockedCompareExchange64(v11 + 3, v12 + 1, v12);
    }
    while ( v13 != v12 );
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
    v14 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v11, a4, a5, a6, 1);
    v15 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry2(3LL, v6, v14);
      WdLogGlobalForLineNumber = 5098;
    }
    else
    {
      *a3 = (struct DXGKEYEDMUTEX *)v11;
    }
    DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v11);
    return v15;
  }
  else
  {
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 5075;
LABEL_13:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
    return 3221225485LL;
  }
}
