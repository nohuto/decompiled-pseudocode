/*
 * XREFs of ApiSetEditionFindNodeQueuedMessage @ 0x1C020605C
 * Callers:
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01C29C0 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     EditionFindNodeQueuedMessage @ 0x1C0232A08 (EditionFindNodeQueuedMessage.c)
 */

__int64 __fastcall ApiSetEditionFindNodeQueuedMessage(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v15[7]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0LL;
  if ( qword_1C0296AC0 && (int)qword_1C0296AC0() >= 0 )
  {
    v9 = a1[1];
    v15[0] = *a1;
    v15[2] = a1[2];
    v10 = a1[4];
    v15[1] = v9;
    v11 = a1[3];
    v15[4] = v10;
    v12 = a1[6];
    v15[3] = v11;
    v13 = a1[5];
    v15[6] = v12;
    v15[5] = v13;
    return ((__int64 (__fastcall *)(_OWORD *, __int64, __int64, __int64))EditionFindNodeQueuedMessage)(v15, a2, v8, a4);
  }
  return v4;
}
