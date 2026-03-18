/*
 * XREFs of IsPointerInputHookCall @ 0x140147DF0
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x140148320 (IsPointerInputClientMessage.c)
 */

_BOOL8 __fastcall IsPointerInputHookCall(int a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( a1 == 6 )
    goto LABEL_2;
  if ( a1 != 4 )
  {
    if ( a1 == 12 )
    {
      v2 = *(unsigned int *)(a2 + 24);
      goto LABEL_3;
    }
    if ( a1 != 3 && a1 != -1 )
    {
      v2 = 0LL;
      goto LABEL_5;
    }
LABEL_2:
    v2 = *(unsigned int *)(a2 + 8);
LABEL_3:
    v3 = *(_QWORD *)(a2 + 16);
    goto LABEL_4;
  }
  v2 = *(unsigned int *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 8);
LABEL_4:
  if ( (unsigned int)(v2 - 577) <= 3 )
    goto LABEL_6;
LABEL_5:
  if ( (unsigned int)IsPointerInputClientMessage(v2) )
  {
LABEL_6:
    if ( (_DWORD)v2 != 595 )
      return 1LL;
  }
  return (_DWORD)v2 == 528 && (_WORD)v3 == 582;
}
