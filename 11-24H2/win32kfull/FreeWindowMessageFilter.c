/*
 * XREFs of FreeWindowMessageFilter @ 0x14019679C
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E770 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     _ChangeWindowMessageFilterEx @ 0x14024ED84 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1401967E4 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x14019690C (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeWindowMessageFilter(struct tagWND *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  void **v5; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = 0LL;
  if ( (unsigned int)VWPLRemoveBase(
                       (struct tagVWPL **)(*(_QWORD *)(v4 + 464) + 856LL),
                       a2,
                       a1,
                       a4,
                       (unsigned __int64 *)&v5) )
    MsgLookupTableCleanUp(v5);
}
