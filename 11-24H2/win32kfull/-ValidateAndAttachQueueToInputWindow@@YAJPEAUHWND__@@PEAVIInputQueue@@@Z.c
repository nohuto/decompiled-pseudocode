/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14008AE58
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x14008AE40 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     GetMessageWindow @ 0x14008A42C (GetMessageWindow.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14008ACA8 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(__int64 a1, struct IInputQueue *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  struct tagWND *v7; // rdi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  unsigned int v12; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // [rsp+40h] [rbp+18h] BYREF

  v17 = IS_USERCRIT_OWNED_EXCLUSIVE(a1, (__int64)a2, a3);
  if ( !v17 )
    EnterCrit(1LL, 0LL);
  LOBYTE(v5) = 1;
  v6 = HMValidateHandleNoSecure(a1, v5);
  v7 = (struct tagWND *)v6;
  if ( v6 && (v8 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v8 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v10 = (_QWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
    v11 = (_QWORD *)*((_QWORD *)v7 + 2);
    if ( v10 == (_QWORD *)v11[58] || (unsigned int)IsProcessDwm(*v10) )
      goto LABEL_8;
    if ( v7 == (struct tagWND *)GetDesktopWindow((__int64)v7)
      || v7 == (struct tagWND *)GetMessageWindow(v14)
      || (v15 = *((_QWORD *)v7 + 13)) == 0 )
    {
      v15 = 0LL;
    }
    if ( v11[198] == v15 && (v16 = v11[199]) != 0 && v10 == *(_QWORD **)(*(_QWORD *)(v16 + 16) + 464LL) )
    {
LABEL_8:
      v12 = AttachInputQueueToWindow(v7, a2);
      ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
      return v12;
    }
    else
    {
      ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
      return 3221225506LL;
    }
  }
  else
  {
    ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
    return 3221225485LL;
  }
}
