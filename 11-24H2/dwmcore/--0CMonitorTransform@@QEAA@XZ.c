/*
 * XREFs of ??0CMonitorTransform@@QEAA@XZ @ 0x180246D9C
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801892C0 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802743E4 (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x180280310 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180280640 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x180284AAC (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     <none>
 */

CMonitorTransform *__fastcall CMonitorTransform::CMonitorTransform(CMonitorTransform *this)
{
  char v1; // al
  char v2; // al
  char v3; // al
  CMonitorTransform *result; // rax

  *(_DWORD *)this = 1065353216;
  *(_QWORD *)((char *)this + 4) = 1065353216LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 1;
  *((_QWORD *)this + 14) = 1065353216LL;
  *(_QWORD *)((char *)this + 52) = 1065353216LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *((_DWORD *)this + 17) = 0;
  *((_QWORD *)this + 9) = 1065353216LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)((char *)this + 92) = 1065353216LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_DWORD *)this + 27) = 0;
  v1 = *((_BYTE *)this + 117);
  *((_BYTE *)this + 116) = -86;
  *((_BYTE *)this + 117) = v1 & 0xC0 | 0x29;
  *(_QWORD *)((char *)this + 180) = 1065353216LL;
  *((_QWORD *)this + 15) = 1065353216LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *(_QWORD *)((char *)this + 140) = 1065353216LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 39) = 0;
  *((_QWORD *)this + 20) = 1065353216LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  v2 = *((_BYTE *)this + 185);
  *((_BYTE *)this + 184) = -86;
  *((_BYTE *)this + 185) = v2 & 0xC0 | 0x29;
  *((_QWORD *)this + 31) = 1065353216LL;
  *(_QWORD *)((char *)this + 188) = 1065353216LL;
  *(_QWORD *)((char *)this + 196) = 0LL;
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 26) = 1065353216LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *(_QWORD *)((char *)this + 228) = 1065353216LL;
  *(_QWORD *)((char *)this + 236) = 0LL;
  *((_DWORD *)this + 61) = 0;
  v3 = *((_BYTE *)this + 253) & 0xE9;
  *((_BYTE *)this + 252) = -86;
  *((_BYTE *)this + 253) = v3 | 0x29;
  result = this;
  *((_DWORD *)this + 64) = 0;
  return result;
}
