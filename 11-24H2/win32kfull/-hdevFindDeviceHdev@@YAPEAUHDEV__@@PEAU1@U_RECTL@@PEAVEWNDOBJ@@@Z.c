/*
 * XREFs of ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x140331CAC
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1400C2818 (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x1403275F8 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z @ 0x14033C804 (-GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x14033C948 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     NtGdiSetPixelFormat @ 0x14033CA10 (NtGdiSetPixelFormat.c)
 *     NtGdiSwapBuffers @ 0x14033CCA0 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x140300714 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall hdevFindDeviceHdev(_QWORD *a1, struct _RECTL *a2, struct EWNDOBJ *a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  int v9; // ebp

  v3 = (_QWORD *)a1[223];
  v4 = 0LL;
  v6 = 0LL;
  if ( a3 && EWNDOBJ::bValid(a3) )
  {
    v7 = (_QWORD *)*v3;
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 21) + 32LL) + 48LL);
    while ( v7 )
    {
      if ( v6 == v7[6] )
        return v6;
      v7 = (_QWORD *)*v7;
    }
  }
  v9 = 0;
  while ( 1 )
  {
    v3 = (_QWORD *)*v3;
    if ( !v3 )
      break;
    if ( *((_DWORD *)v3 + 7) <= a2->left
      && *((_DWORD *)v3 + 9) >= a2->right
      && *((_DWORD *)v3 + 8) <= a2->top
      && *((_DWORD *)v3 + 10) >= a2->bottom )
    {
      return v3[6];
    }
    if ( (unsigned int)bIntersect((char *)v3 + 28, a2, a3) )
    {
      v6 = v3[6];
      if ( (*(_DWORD *)(v6 + 2112) & 0x100) != 0 )
        return v6;
      ++v9;
    }
  }
  if ( v9 == 1 )
    return v6;
  return v4;
}
