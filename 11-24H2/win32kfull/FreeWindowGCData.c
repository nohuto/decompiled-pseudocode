/*
 * XREFs of FreeWindowGCData @ 0x140196640
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E770 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     SetGestureConfigSettings @ 0x1401B2654 (SetGestureConfigSettings.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1401967E4 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1401969B0 (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 */

__int64 __fastcall FreeWindowGCData(struct tagWND *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  void **v7; // rbx
  void *v8; // rdi
  unsigned __int64 v9; // rdx
  int v10; // r9d
  void **v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v11 = 0LL;
  result = VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(v4 + 464) + 864LL), a2, a1, a4, (unsigned __int64 *)&v11);
  if ( (_DWORD)result )
  {
    v7 = v11;
    if ( v11 )
    {
      if ( *v11 )
      {
        Win32FreePool(*v11);
        *v7 = 0LL;
      }
      v8 = v7[2];
      if ( v8 )
      {
        FreeWindowGCList((struct tagGESTURECONFIGLIST **)v7[2]);
        Win32FreePool(v8);
        v7[2] = 0LL;
      }
      Win32FreePool(v7);
      return VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 864LL), v9, a1, v10, 0LL);
    }
  }
  return result;
}
