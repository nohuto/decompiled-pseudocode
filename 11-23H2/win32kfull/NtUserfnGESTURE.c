/*
 * XREFs of NtUserfnGESTURE @ 0x1C01DFDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     SendGestureMessage @ 0x1C0203FA4 (SendGestureMessage.c)
 */

__int64 __fastcall NtUserfnGESTURE(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbx
  int v7; // ebp
  int v8; // r14d
  int v9; // esi
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = a4;
  v12[0] = 0LL;
  v8 = a3;
  v9 = a2;
  PtiCurrentShared(a1, a2, a3, a4);
  if ( v9 == 281 )
  {
    if ( a6 > 0x2B2 )
    {
      if ( a6 != 691 && a6 != 692 && a6 - 695 > 1 )
        return v6;
    }
    else if ( a6 != 690 && a6 != 670 && a6 != 671 && a6 != 683 && a6 != 684 && a6 != 689 )
    {
      return v6;
    }
    if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400);
    }
    else if ( (unsigned int)SendGestureMessage(a1, 281, v8, v7, a5, a6, (__int64)v12) )
    {
      return v12[0];
    }
  }
  return v6;
}
