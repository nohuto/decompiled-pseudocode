/*
 * XREFs of ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x14007E4B4
 * Callers:
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x14007E3E8 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x14007C284 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x14007C360 (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     xxxClientLpkDrawTextEx @ 0x14007C3CC (xxxClientLpkDrawTextEx.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DT_DrawStr(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        int a5,
        int a6,
        unsigned int a7,
        struct DRAWTEXTDATA *a8,
        int a9)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r15d
  struct tagTHREADINFO *v16; // rax
  int v18; // [rsp+20h] [rbp-48h]

  v15 = a2 - 1;
  if ( (GreGetLayout(a1) & 1) == 0 )
    v15 = a2;
  if ( *((_DWORD *)a8 + 15) )
  {
    v16 = PtiCurrent(v14, v13);
    if ( (unsigned int)CALL_LPK(v16) )
      return xxxClientLpkDrawTextEx(a1, v15, a3, a4, a5, a6, a7, (__int64)a8, 1, a9);
    else
      return 0LL;
  }
  else
  {
    if ( a6 )
    {
      v18 = a5;
      (*((void (__fastcall **)(HDC, _QWORD, _QWORD, const unsigned __int16 *))a8 + 6))(a1, v15, a3, a4);
    }
    return (unsigned int)DT_GetExtentMinusPrefixes(a1, a4, a5, a7, v18, a8, a9) - *((_DWORD *)a8 + 14);
  }
}
