/*
 * XREFs of ?EnsurePayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1400BEFF8
 * Callers:
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1402256AC (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CBatch::EnsurePayloadWritePointer(
        DirectComposition::CBatch *this,
        unsigned __int64 a2,
        void **a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // r10
  void *v6; // r10
  bool result; // al

  v3 = *((_QWORD *)this + 17);
  if ( !a3 )
    return a2 <= 4096LL - *(_QWORD *)(v3 + 40);
  v4 = *(_QWORD *)(v3 + 40);
  if ( a2 > 4096 - v4 )
    return 0;
  v5 = *(_QWORD *)(v3 + 56);
  *(_QWORD *)(v3 + 40) = v4 + a2;
  v6 = (void *)(v4 + v5);
  if ( !v6 )
    return 0;
  *a3 = v6;
  result = 1;
  *((_QWORD *)this + 19) += a2;
  return result;
}
