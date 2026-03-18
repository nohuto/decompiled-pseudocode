/*
 * XREFs of DpiFdoInitializeConnectionChangePackage @ 0x140028DF0
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x140027534 (DpiFdoHandleDisplayDetectControl.c)
 *     DpIndicateChildStatus @ 0x14007C110 (DpIndicateChildStatus.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

_DWORD *__fastcall DpiFdoInitializeConnectionChangePackage(
        _OWORD *a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  int v14; // eax
  _DWORD *result; // rax

  v12 = ExAllocateFromNPagedLookasideList(&Lookaside);
  v13 = v12;
  if ( v12 )
  {
    memset(v12, 0, 0x58uLL);
    v13[4] = 1953656900;
    v13[5] = 13;
    *((_OWORD *)v13 + 4) = *a1;
    *((_QWORD *)v13 + 3) = _InterlockedIncrement64(&qword_1401612A8);
    v14 = v13[8];
    v13[9] = a4;
    v13[8] = v14 ^ (v14 ^ (a3 << 24)) & 0xF000000 ^ (a2 ^ v14 ^ (v14 ^ (a3 << 24)) & 0xF000000) & 0xFFFFFF;
    *((_BYTE *)v13 + 84) = a5;
    *((_BYTE *)v13 + 85) = a6;
    *((_BYTE *)v13 + 87) = a8;
    *((_BYTE *)v13 + 86) = a7;
    result = v13;
    *((_BYTE *)v13 + 80) = HIBYTE(a2);
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741670LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 18979;
  }
  return result;
}
