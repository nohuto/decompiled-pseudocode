/*
 * XREFs of _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology_0_1_ @ 0x14026AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F168 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x14007E72C (DxgkIsMSBDDFallbackEnabled.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x14026B324 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology_0_1_(
        DXGADAPTER *this,
        BTL_TOPOLOGY_CONSTRUCTOR *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  struct DXGADAPTER *v11; // rcx
  _BYTE v13[32]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-A8h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13, this, 1);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v10[3] = this;
      v10[4] = *((int *)this + 104);
      v10[5] = *((unsigned int *)this + 103);
      v10[6] = a2;
      WdLogGlobalForLineNumber = 60;
      goto LABEL_9;
    }
LABEL_8:
    v9 = v4;
    goto LABEL_9;
  }
  if ( !*((_BYTE *)this + 3017) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v4 = BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology(v11, a2);
    goto LABEL_8;
  }
LABEL_9:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return v9;
}
