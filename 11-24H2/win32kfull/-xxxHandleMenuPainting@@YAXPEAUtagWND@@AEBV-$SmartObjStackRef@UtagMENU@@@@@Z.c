/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BD38C
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140035878 (xxxEndPaint.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140046AF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxHandleMenuPainting(unsigned int **a1, struct tagMENU ***a2)
{
  __int64 v4; // rdx
  struct tagMENU *v5; // rdx
  __int64 v6; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-78h] BYREF
  HDC v9[10]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(v9, 0, 0x48uLL);
  v4 = (__int64)a2[2];
  if ( !v4 )
    v4 = (__int64)**a2;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v4);
  xxxBeginPaint(a1, (__int64)v9);
  v5 = (struct tagMENU *)a2[2];
  if ( !v5 )
    v5 = **a2;
  xxxMenuDraw(v9[0], v5, (__int64)a1);
  xxxEndPaint((struct tagWND *)a1, v9);
  return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v6);
}
