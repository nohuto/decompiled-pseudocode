/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E49A0
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01E41C0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E4BE4 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E56D0 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     DwmSyncHitTestQuery @ 0x1C026D7A0 (DwmSyncHitTestQuery.c)
 */

void __fastcall xxxSendNCHitTest(
        unsigned __int64 *BugCheckParameter2,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        int *a5,
        struct tagPNTRWINDOWHITTTESTARGS *a6)
{
  int v6; // ebp
  float *v8; // rax
  int v9; // ecx
  int v10; // eax
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  BOOL v13; // edi
  struct tagPNTRWINDOWHITTTESTARGS *v14; // r14
  int *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF
  struct tagPOINT v24; // [rsp+98h] [rbp+10h]
  struct tagPOINT v25; // [rsp+A0h] [rbp+18h]
  __int64 v26; // [rsp+A8h] [rbp+20h]

  v25 = a3;
  v24 = a2;
  v6 = 0;
  LODWORD(v23) = 0;
  if ( a4 )
  {
    v25.x += a4->x;
    v25.y += a4->y;
    v26 = (__int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(BugCheckParameter2) && (v8 = (float *)BugCheckParameter2[27]) != 0LL )
    {
      v9 = (int)(float)((float)(int)v26 * *v8);
      v10 = (int)(float)((float)SHIDWORD(v26) * v8[5]);
    }
    else
    {
      v10 = HIDWORD(v26);
      v9 = v26;
    }
    v24.x += v9;
    v24.y += v10;
    a3 = v25;
  }
  if ( PtInRect((_DWORD *)(BugCheckParameter2[5] + 88), *(_QWORD *)&a3) )
  {
    v13 = (*(_BYTE *)(v12 + 31) & 0x20) != 0 || !PtInRect((_DWORD *)(v12 + 104), v11);
    if ( BugCheckParameter2[2] == gptiCurrent )
    {
      v14 = a6;
      v15 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)BugCheckParameter2)
        && (*(_BYTE *)(BugCheckParameter2[5] + 26) & 8) != 0
        && v13 )
      {
        v18 = (void *)ReferenceDwmApiPort(v17, v16);
        LODWORD(v23) = 1;
        UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
        DwmSyncHitTestQuery(v18, *((_QWORD *)v14 + 1), *((_QWORD *)v14 + 2), -2, (__int64)v15, (__int64)&v23);
        EnterCrit(1LL, 0LL);
        v6 = v23;
      }
      if ( !*((_DWORD *)v14 + 21) || !v6 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        *v15 = xxxSendTransformableMessageTimeout(
                 BugCheckParameter2,
                 0x84u,
                 0LL,
                 (__int128 *)(LOWORD(v25.x) | (LOWORD(v25.y) << 16)),
                 0,
                 0,
                 0LL,
                 1,
                 0);
      }
    }
    else
    {
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
}
