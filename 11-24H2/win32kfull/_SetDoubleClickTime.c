/*
 * XREFs of _SetDoubleClickTime @ 0x140214894
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     NtUserSetDoubleClickTime @ 0x14029D830 (NtUserSetDoubleClickTime.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x140093660 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall SetDoubleClickTime(unsigned int a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx

  result = CheckWinstaAttributeAccess(16LL);
  if ( (_DWORD)result )
  {
    if ( a1 )
    {
      if ( a1 > 0x1388 )
        a1 = 5000;
    }
    else
    {
      a1 = 500;
    }
    *(_DWORD *)(W32GetUserSessionState(v4, v3) + 14720) = a1;
    v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19928);
    *(_DWORD *)(v7 + 4980) = 4 * a1;
    v9 = *(_QWORD *)(W32GetUserSessionState(v7, v8) + 19928);
    LODWORD(v10) = (3435973837u * (unsigned __int64)*(unsigned int *)(v9 + 4980)) >> 32;
    v11 = *(_DWORD *)(v9 + 4980) / 5u;
    v12 = *(_QWORD *)(W32GetUserSessionState(v9, v10) + 19928);
    result = 1LL;
    *(_DWORD *)(v12 + 4976) = v11;
  }
  return result;
}
