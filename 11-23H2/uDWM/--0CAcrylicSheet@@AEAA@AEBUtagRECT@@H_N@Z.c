/*
 * XREFs of ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x1800A223C
 * Callers:
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x1800A2990 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180036E6C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CAcrylicSheet *__fastcall CAcrylicSheet::CAcrylicSheet(CAcrylicSheet *this, const struct tagRECT *a2)
{
  __int64 v2; // rcx
  _OWORD *v3; // r10
  CAcrylicSheet *result; // rax
  char v5; // r9
  int v6; // r8d

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)v2 = &CAcrylicSheet::`vftable';
  *(_OWORD *)(v2 + 288) = *v3;
  *(_QWORD *)(v2 + 304) = 0LL;
  *(_QWORD *)(v2 + 312) = 0LL;
  *(_QWORD *)(v2 + 320) = 0LL;
  *(_QWORD *)(v2 + 328) = 0LL;
  *(_QWORD *)(v2 + 392) = 0LL;
  *(_QWORD *)(v2 + 456) = 0LL;
  result = (CAcrylicSheet *)v2;
  *(_BYTE *)(v2 + 465) = v5;
  *(_DWORD *)(v2 + 468) = v6;
  return result;
}
