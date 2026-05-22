/*
 * XREFs of ?Reset@TwoFingerGestureRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1801AE760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TwoFingerGestureRecognizer::Reset(TwoFingerGestureRecognizer *this, const struct GestureSession *a2)
{
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16);
  (*(void (__fastcall **)(char *, const struct GestureSession *))(*((_QWORD *)this + 11) + 32LL))((char *)this + 88, a2);
}
