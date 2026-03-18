/*
 * XREFs of ?NtDxgkGetNativeFenceLogDetailInternal@@YAJPEAU_D3DKMT_GETNATIVEFENCELOGDETAIL@@_N@Z @ 0x1401DAE28
 * Callers:
 *     NtDxgkGetNativeFenceLogDetail @ 0x1401DB320 (NtDxgkGetNativeFenceLogDetail.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkGetNativeFenceLogDetailInternal(struct _D3DKMT_GETNATIVEFENCELOGDETAIL *a1)
{
  struct _KTHREAD **Current; // rdi
  struct _D3DKMT_GETNATIVEFENCELOGDETAIL *v4; // rdx
  const wchar_t *v5; // r9
  struct DXGHWQUEUE *v6; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v7[24]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD Src[12]; // [rsp+70h] [rbp-78h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 829;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  memset(Src, 0, sizeof(Src));
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_GETNATIVEFENCELOGDETAIL *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v4, 0x60uLL);
  if ( HIDWORD(Src[0]) || !(unsigned __int8)RtlIsZeroMemory(&Src[4], 64LL) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 858;
    return 3221225485LL;
  }
  else
  {
    v6 = 0LL;
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v7, Src[0], Current, &v6, 0, 1);
    if ( !v6 )
    {
      WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
      WdLogGlobalForLineNumber = 869;
      v5 = L"Invalid hHwQueue (0x%I64x) specified, returning 0x%I64x";
LABEL_10:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v5, LODWORD(Src[0]), -1073741811LL, 0LL, 0LL, 0LL);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v7);
      return 3221225485LL;
    }
    if ( !*((_BYTE *)v6 + 140) && !g_NativeFenceDebugTest )
    {
      WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
      WdLogGlobalForLineNumber = 877;
      v5 = L"hHwQueue (0x%I64x) does not support user mode submission, returning 0x%I64x";
      goto LABEL_10;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, char *, _QWORD *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL)
                                                                                                 + 736LL)
                                                                                     + 8LL)
                                                                         + 1128LL))(
      *((_QWORD *)v6 + 5),
      &Src[1],
      (char *)&Src[1] + 4,
      &Src[2],
      &Src[3]);
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (struct _D3DKMT_GETNATIVEFENCELOGDETAIL *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a1, Src, 0x60uLL);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v7);
    return 0LL;
  }
}
