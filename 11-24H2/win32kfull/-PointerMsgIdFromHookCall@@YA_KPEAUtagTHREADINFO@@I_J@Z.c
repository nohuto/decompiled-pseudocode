/*
 * XREFs of ?PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z @ 0x1400A75E0
 * Callers:
 *     xxxPointerCallHook @ 0x1400A7484 (xxxPointerCallHook.c)
 * Callees:
 *     IsMiPPointerMessage @ 0x1400A7680 (IsMiPPointerMessage.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1400A76E8 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall PointerMsgIdFromHookCall(struct tagTHREADINFO *a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 v7; // dx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rcx
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r8

  v3 = 0LL;
  v4 = a2 - 3;
  if ( v4 )
  {
    v10 = v4 - 1;
    if ( v10 )
    {
      if ( v10 == 8 && !(unsigned int)IsMiPPointerMessage(*(unsigned int *)(a3 + 24), *(_QWORD *)(a3 + 16)) )
        return *(_QWORD *)(v12 + 8);
    }
    else if ( !(unsigned int)IsMiPPointerMessage(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 8)) )
    {
      return *(_QWORD *)v11;
    }
  }
  else if ( !(unsigned int)IsMiPPointerMessage(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 16)) )
  {
    v7 = *(_WORD *)(v5 + 16);
    ThreadPointerData = *(struct tagTHREADPOINTERDATA **)(v6 + 1232);
    if ( ThreadPointerData )
    {
      if ( *((_WORD *)ThreadPointerData + 8) != v7 )
        return v3;
    }
    else
    {
      ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(v6 + 1208), v7);
      if ( !ThreadPointerData )
        return v3;
    }
    if ( (*((_DWORD *)ThreadPointerData + 12) & 8) == 0 )
      return *((_QWORD *)ThreadPointerData + 3);
  }
  return v3;
}
