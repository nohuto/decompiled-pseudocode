/*
 * XREFs of NtUserfnPOINTERINPUT @ 0x1400A8DE0
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x1400A9570 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     IsPointerInputMessage @ 0x14008EC20 (IsPointerInputMessage.c)
 *     xxxSendPointerMessage @ 0x1400A8EFC (xxxSendPointerMessage.c)
 *     IsPointerParentNotify @ 0x1400A9600 (IsPointerParentNotify.c)
 */

__int64 __fastcall NtUserfnPOINTERINPUT(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v8; // esi
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // r10
  int v12; // r9d
  __int64 v13; // r8

  v8 = a2;
  v10 = 0LL;
  v11 = PtiCurrent(a1, a2);
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    UserSetLastError(1400);
    return v10;
  }
  v12 = a6;
  v13 = (unsigned int)(a6 - 689);
  if ( a6 == 689
    || (v13 = (unsigned int)(a6 - 691), a6 == 691)
    || (v13 = (unsigned int)(a6 - 695), (unsigned int)v13 <= 1) )
  {
    if ( v8 == 528 )
    {
      if ( !(unsigned int)IsPointerParentNotify(528LL, a3, v13) )
        return v10;
      a3 >>= 16;
      return xxxSendPointerMessage((_DWORD)v11, (unsigned __int16)a3, a1, v8, v10, a5, v12);
    }
    if ( v8 == 587 )
    {
      v10 = a4;
      return xxxSendPointerMessage((_DWORD)v11, (unsigned __int16)a3, a1, v8, v10, a5, v12);
    }
    if ( (v8 != 592 || (*((_DWORD *)v11 + 340) & 0x2000LL) != 0)
      && (unsigned int)IsPointerInputMessage(v8)
      && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) == *((_QWORD *)v11 + 58) )
    {
      return xxxSendPointerMessage((_DWORD)v11, (unsigned __int16)a3, a1, v8, v10, a5, v12);
    }
  }
  return v10;
}
