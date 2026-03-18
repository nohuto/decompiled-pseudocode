/*
 * XREFs of NtUserPromotePointer @ 0x1400A8C50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxPromotePointerToMouse @ 0x1400A7304 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall NtUserPromotePointer(int a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebx

  EnterCrit(0LL, 0LL);
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_7;
  if ( (a2 & 0xFFFFFF) != 0 )
  {
    if ( (a2 & 0xFFFFFF) != 0x10001
      && (a2 & 0xFFFFFF) != 0x10002
      && (a2 & 0xFFFFFF) != 0x20001
      && (a2 & 0xFFFFFF) != 0x20002
      && (a2 & 0xFFFFFF) != 0x40001
      && (a2 & 0xFFFFFF) != 0x40002
      && (a2 & 0xFFFFFF) - 524289 >= 2 )
    {
      goto LABEL_7;
    }
  }
  else if ( a2 )
  {
LABEL_7:
    v5 = 0;
    UserSetLastError(87);
    goto LABEL_8;
  }
  v5 = xxxPromotePointerToMouse((unsigned __int16)a1, a2);
  if ( !v5 )
    goto LABEL_7;
LABEL_8:
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
