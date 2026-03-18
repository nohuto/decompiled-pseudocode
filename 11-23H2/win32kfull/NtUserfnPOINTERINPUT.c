/*
 * XREFs of NtUserfnPOINTERINPUT @ 0x1C01E2570
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x1C01E24C0 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     IsPointerInputMessage @ 0x1C0118DA8 (IsPointerInputMessage.c)
 *     xxxSendPointerMessage @ 0x1C01C4E18 (xxxSendPointerMessage.c)
 */

__int64 __fastcall NtUserfnPOINTERINPUT(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // r10
  int v12; // edx

  v7 = a3;
  v8 = a2;
  v10 = 0LL;
  v11 = PtiCurrentShared(a1, a2, a3, a4);
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    UserSetLastError(1400);
    return v10;
  }
  v12 = a6;
  if ( a6 != 689 && a6 != 691 && (unsigned int)(a6 - 695) > 1 )
    return v10;
  if ( v8 == 528 )
  {
    if ( (_WORD)v7 != 582 )
      return v10;
    v7 >>= 16;
    return xxxSendPointerMessage((__int64)v11, v7, a1, v8, v10, a5, v12);
  }
  if ( v8 == 587 )
  {
    v10 = a4;
    return xxxSendPointerMessage((__int64)v11, v7, a1, v8, v10, a5, v12);
  }
  if ( (v8 != 592 || (*((_DWORD *)v11 + 318) & 0x2000) != 0)
    && IsPointerInputMessage(v8)
    && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == *((_QWORD *)v11 + 53) )
  {
    return xxxSendPointerMessage((__int64)v11, v7, a1, v8, v10, a5, v12);
  }
  return v10;
}
