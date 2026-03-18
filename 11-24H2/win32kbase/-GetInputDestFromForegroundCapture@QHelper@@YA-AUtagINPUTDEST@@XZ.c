/*
 * XREFs of ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x140121954
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14021D248 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     memset @ 0x14023F500 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundCapture(_OWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  _OWORD v12[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( *(_QWORD *)(W32GetUserSessionState(v2) + 18944) )
    v4 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3) + 18944) + 112LL);
  else
    v4 = 0LL;
  if ( v4 )
  {
    memset(v12, 0, sizeof(v12));
    v6 = v12[1];
    LODWORD(v12[0]) = 4;
    *(_QWORD *)&v12[5] = v4;
    HIDWORD(v12[5]) = 2;
    *a1 = v12[0];
    v7 = v12[2];
    a1[1] = v6;
    v8 = v12[3];
    a1[2] = v7;
    v9 = v12[4];
    a1[3] = v8;
    v10 = v12[5];
    a1[4] = v9;
    v11 = v12[6];
    a1[5] = v10;
    a1[6] = v11;
  }
  return a1;
}
