/*
 * XREFs of ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C024C320
 * Callers:
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C024C25C (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     GreGetLayout @ 0x1C003CC34 (GreGetLayout.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0212608 (xxxClientLpkDrawTextEx.c)
 *     CALL_LPK @ 0x1C0225724 (CALL_LPK.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C024C448 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 */

__int64 __fastcall DT_DrawStr(
        Gre::Base *a1,
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
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r15d
  struct tagTHREADINFO *v18; // rax
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-48h]

  v17 = a2 - 1;
  if ( (GreGetLayout((HDC)a1) & 1) == 0 )
    v17 = a2;
  if ( *((_DWORD *)a8 + 15) )
  {
    v18 = PtiCurrentShared(v14, v13, v15, v16);
    result = CALL_LPK((__int64)v18);
    if ( (_DWORD)result )
      return xxxClientLpkDrawTextEx(a1, v17, a3, a4, a5, a6, a7, (__int64)a8, 1, a9);
  }
  else
  {
    if ( a6 )
    {
      v20 = a5;
      (*((void (__fastcall **)(Gre::Base *, _QWORD, _QWORD, const unsigned __int16 *))a8 + 6))(a1, v17, a3, a4);
    }
    return (unsigned int)DT_GetExtentMinusPrefixes((HDC)a1, a4, a5, a7, v20, a8, a9) - *((_DWORD *)a8 + 14);
  }
  return result;
}
