/*
 * XREFs of ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140325BB8
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSwapBuffers @ 0x14033CCA0 (NtGdiSwapBuffers.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     UserGetHwnd @ 0x140285ACC (UserGetHwnd.c)
 */

DEVLOCKOBJ_WNDOBJ *__fastcall DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ(
        DEVLOCKOBJ_WNDOBJ *this,
        struct XDCOBJ *a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  HDC v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  UserEnterUserCritSec(this, a2, a3);
  v5 = 0LL;
  *(_DWORD *)this = 0;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ_WNDOBJ *)((char *)this + 8));
  *((_QWORD *)this + 18) = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ_WNDOBJ *)((char *)this + 8), a2, 0);
  v6 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) == 0 || *(_DWORD *)(v6 + 32) )
  {
    v8 = *(_QWORD *)(v6 + 496);
    if ( v8 )
      v5 = *(_QWORD *)(v8 + 136);
    *((_QWORD *)this + 18) = v5;
  }
  else
  {
    v7 = *(HDC *)v6;
    v10 = 0LL;
    if ( !(unsigned int)UserGetHwnd(v7, &v10, (__int64 *)this + 18) )
      EngSetLastError(6u);
  }
  return this;
}
