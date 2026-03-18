/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140036FE4
 * Callers:
 *     DxgkReleaseKeyedMutex @ 0x1401F5C00 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1402B2CE0 (DxgkReleaseKeyedMutex2.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B513C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403949B8 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140041BF8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGKEYEDMUTEX **a4)
{
  unsigned int v8; // eax
  struct _KTHREAD *v9; // r9
  int v10; // ecx
  DXGKEYEDMUTEX *v12; // rcx
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]

  v15 = 0;
  v14 = (char *)(a3 + 31);
  if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v13);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)a3 + 74) )
    goto LABEL_10;
  v9 = a3[35];
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)v9 + 16 * v8 + 8) & 0x60) )
    goto LABEL_10;
  if ( (*((_DWORD *)v9 + 4 * v8 + 2) & 0x2000) != 0 )
    goto LABEL_10;
  v10 = *((_DWORD *)v9 + 4 * v8 + 2) & 0x1F;
  if ( !v10 )
    goto LABEL_10;
  if ( v10 != 9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    *(_QWORD *)this = 0LL;
    goto LABEL_11;
  }
  v12 = (DXGKEYEDMUTEX *)*((_QWORD *)v9 + 2 * v8);
  *(_QWORD *)this = v12;
  if ( v12 )
    DXGKEYEDMUTEX::AcquireReference(v12);
LABEL_11:
  *a4 = *(struct DXGKEYEDMUTEX **)this;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  return this;
}
