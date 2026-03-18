/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140036AF8
 * Callers:
 *     DxgkReleaseKeyedMutex @ 0x1401EF9C0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1402A8640 (DxgkReleaseKeyedMutex2.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402FE4BC (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403A1B48 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140042268 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGKEYEDMUTEX **a4)
{
  struct _KTHREAD **v4; // rdi
  unsigned int v9; // eax
  __int64 v10; // r9
  int v11; // ecx
  DXGKEYEDMUTEX *v13; // rcx
  _BYTE v14[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]

  v16 = 0;
  v4 = (struct _KTHREAD **)((char *)a3 + 248);
  v15 = (char *)a3 + 248;
  if ( a3 != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v4[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v14);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( v9 >= *((_DWORD *)a3 + 74) )
    goto LABEL_10;
  v10 = *((_QWORD *)a3 + 35);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) != 0 )
    goto LABEL_10;
  v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
  if ( !v11 )
    goto LABEL_10;
  if ( v11 != 9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    *(_QWORD *)this = 0LL;
    goto LABEL_11;
  }
  v13 = *(DXGKEYEDMUTEX **)(v10 + 16LL * v9);
  *(_QWORD *)this = v13;
  if ( v13 )
    DXGKEYEDMUTEX::AcquireReference(v13);
LABEL_11:
  *a4 = *(struct DXGKEYEDMUTEX **)this;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  return this;
}
