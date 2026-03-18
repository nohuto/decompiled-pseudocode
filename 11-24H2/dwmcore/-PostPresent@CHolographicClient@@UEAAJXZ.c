/*
 * XREFs of ?PostPresent@CHolographicClient@@UEAAJXZ @ 0x1802D4B60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1802D24B0 (-UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicClient::PostPresent(CHolographicClient *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  DXGI_FRAME_STATISTICS v5; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)this + 23);
  if ( v1 && !*(_BYTE *)(v1 + 91) )
  {
    v3 = *((_QWORD *)this + 1);
    memset(&v5, 0, sizeof(v5));
    (*(void (__fastcall **)(__int64, DXGI_FRAME_STATISTICS *))(*(_QWORD *)v3 + 224LL))(v3, &v5);
    CHolographicExclusiveView::UpdateFrameStatistics(*((CHolographicExclusiveView **)this + 23), &v5);
  }
  NtTokenManagerConfirmOutstandingAnalogToken();
  return 0LL;
}
