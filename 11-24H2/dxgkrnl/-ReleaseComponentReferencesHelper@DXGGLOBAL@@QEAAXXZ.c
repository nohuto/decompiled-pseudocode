/*
 * XREFs of ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1403E2248
 * Callers:
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1403D0024 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 *     ?CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z @ 0x1403E2230 (-CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x140011BF0 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::ReleaseComponentReferencesHelper(DXGGLOBAL *this)
{
  volatile signed __int32 **v1; // r14
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  int v6; // eax
  unsigned int i; // esi
  DXGADAPTERLISTLOCK *v8[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v9[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (volatile signed __int32 **)((char *)this + 800);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v8, (DXGGLOBAL *)((char *)this + 672));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v8);
  v2 = *v1;
LABEL_2:
  while ( v2 != (volatile signed __int32 *)v1 && v2 )
  {
    v3 = v2;
    v2 = *(volatile signed __int32 **)v2;
    if ( *((_DWORD *)v3 + 976) )
    {
      _m_prefetchw((const void *)(v3 + 6));
      v4 = *((_QWORD *)v3 + 3);
      do
      {
        if ( !v4 )
        {
          WdLogSingleEntry1(3LL, v3);
          WdLogGlobalForLineNumber = 953;
          goto LABEL_2;
        }
        v5 = v4;
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 3, v4 + 1, v4);
      }
      while ( v5 != v4 );
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, (struct DXGADAPTER *const)v3, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v3);
      v6 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9, 0LL);
      if ( v6 >= 0 )
      {
        for ( i = 0; i < *((_DWORD *)v3 + 842); ++i )
        {
          if ( !*(_DWORD *)(520LL * i + *((_QWORD *)v3 + 403) + 208) )
            DXGADAPTER::SetPowerComponentIdleCBInternal((DXGADAPTER *)v3, i, 0);
        }
        _InterlockedDecrement(v3 + 976);
      }
      else
      {
        WdLogSingleEntry2(3LL, v3, v6);
        WdLogGlobalForLineNumber = 948;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v8);
}
