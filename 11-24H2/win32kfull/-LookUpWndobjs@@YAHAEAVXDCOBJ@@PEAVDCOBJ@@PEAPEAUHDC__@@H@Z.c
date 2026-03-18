/*
 * XREFs of ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140326B28
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FBC0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     UserGetHwnd @ 0x140285ACC (UserGetHwnd.c)
 */

__int64 __fastcall LookUpWndobjs(struct XDCOBJ *a1, struct DCOBJ *a2, HDC *a3, int a4)
{
  unsigned int v4; // esi
  int v8; // ebp
  __int64 v9; // r15
  HDC v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  while ( v8 < a4 )
  {
    XDCOBJ::vLock(a2, *a3);
    if ( !*(_QWORD *)a2 )
      return 0xFFFFFFFFLL;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == v9 )
    {
      v10 = *a3;
      v12 = 0LL;
      if ( !(unsigned int)UserGetHwnd(v10, &v12, (__int64 *)a3) )
        return 0xFFFFFFFFLL;
      v4 |= 1 << v8;
    }
    else
    {
      XDCOBJ::vUnlockNoNullSet(a2);
      *(_QWORD *)a2 = 0LL;
      *a3 = 0LL;
    }
    ++a3;
    a2 = (struct DCOBJ *)((char *)a2 + 72);
    ++v8;
  }
  return v4;
}
