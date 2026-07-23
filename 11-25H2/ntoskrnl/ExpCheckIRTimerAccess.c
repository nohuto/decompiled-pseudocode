/*
 * XREFs of ExpCheckIRTimerAccess @ 0x140A1671C
 * Callers:
 *     NtCreateTimer2 @ 0x140A16540 (NtCreateTimer2.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140472D90 (RtlCheckTokenMembership.c)
 *     ExpGetIRTimerDesc @ 0x1404DA760 (ExpGetIRTimerDesc.c)
 *     ExCheckValidIRTimerId @ 0x1404F84E8 (ExCheckValidIRTimerId.c)
 *     ExpCheckWakeTimerAccess @ 0x140A95FE8 (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpCheckIRTimerAccess(unsigned int a1)
{
  wchar_t **IRTimerDesc; // rax
  char v3; // dl
  __int64 v4; // rcx
  wchar_t *v5; // rax
  unsigned int v6; // edi
  BOOLEAN v7; // al
  unsigned __int16 v9; // [rsp+32h] [rbp+Ah]
  BOOLEAN IsMember; // [rsp+40h] [rbp+18h] BYREF

  v9 = HIWORD(a1);
  if ( (unsigned int)(unsigned __int16)a1 - 1 > 0x12 )
    return 3221225485LL;
  IRTimerDesc = ExpGetIRTimerDesc((unsigned __int16)a1);
  v4 = HIWORD(a1);
  if ( (unsigned int)HIWORD(a1) > *((unsigned __int8 *)IRTimerDesc + 16) )
    return 3221225485LL;
  v5 = IRTimerDesc[1];
  v6 = 0;
  if ( v3 )
  {
    IsMember = 0;
    if ( v5 )
    {
      if ( RtlCheckTokenMembership(0LL, v5, &IsMember) >= 0 )
        v7 = IsMember;
      else
        v7 = 0;
    }
    else
    {
      LOBYTE(v4) = v3;
      if ( (int)ExpCheckWakeTimerAccess(v4) < 0 || !ExCheckValidIRTimerId(a1, v9) )
        return (unsigned int)-1073741790;
      v7 = 1;
    }
    if ( v7 )
      return v6;
    return (unsigned int)-1073741790;
  }
  if ( v5 || !ExCheckValidIRTimerId(a1, v9) )
    __fastfail(5u);
  return 0LL;
}
