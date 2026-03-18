/*
 * XREFs of ApiSetGetPTPShellTarget @ 0x1C0207CF0
 * Callers:
 *     ?GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z @ 0x1C01DF228 (-GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     memset @ 0x1C00D69C0 (memset.c)
 *     GetPTPShellTarget @ 0x1C0232FA4 (GetPTPShellTarget.c)
 *     IsGetPTPShellTargetSupported @ 0x1C023312C (IsGetPTPShellTargetSupported.c)
 */

_OWORD *__fastcall ApiSetGetPTPShellTarget(_OWORD *a1)
{
  _OWORD *PTPShellTarget; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _BYTE v10[120]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)GetPTPShellTarget(v10);
    v3 = PTPShellTarget[1];
    *a1 = *PTPShellTarget;
    v4 = PTPShellTarget[2];
    a1[1] = v3;
    v5 = PTPShellTarget[3];
    a1[2] = v4;
    v6 = PTPShellTarget[4];
    a1[3] = v5;
    v7 = PTPShellTarget[5];
    a1[4] = v6;
    v8 = PTPShellTarget[6];
    a1[5] = v7;
    a1[6] = v8;
  }
  return a1;
}
