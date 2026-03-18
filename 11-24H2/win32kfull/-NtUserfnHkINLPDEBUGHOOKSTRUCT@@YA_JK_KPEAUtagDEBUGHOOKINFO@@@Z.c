/*
 * XREFs of ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1402917F8
 * Callers:
 *     NtUserCallNextHookEx @ 0x14007EB30 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14007FC00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPDEBUGHOOKSTRUCT(unsigned int a1, __int64 a2, struct tagDEBUGHOOKINFO *a3)
{
  ULONG64 v5; // rcx
  unsigned int v6; // ebx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *Address[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h]

  *(_OWORD *)Address = 0LL;
  v10 = 0LL;
  v5 = MmUserProbeAddress;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagDEBUGHOOKINFO *)MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a3;
  v10 = *((_OWORD *)a3 + 1);
  v6 = 0;
  switch ( a2 )
  {
    case 3LL:
      goto LABEL_11;
    case 4LL:
      v6 = 32;
      break;
    case 5LL:
      v5 = DWORD2(v10);
      if ( !DWORD2(v10) )
        goto LABEL_14;
      v5 = (unsigned int)(DWORD2(v10) - 3);
      if ( DWORD2(v10) == 3 )
        goto LABEL_14;
      v5 = (unsigned int)(DWORD2(v10) - 5);
      if ( DWORD2(v10) == 5 )
        goto LABEL_14;
      if ( DWORD2(v10) != 6 )
        break;
LABEL_19:
      v6 = 40;
      break;
    case 6LL:
LABEL_11:
      v6 = 48;
      break;
    case 7LL:
      goto LABEL_19;
    case 10LL:
      if ( DWORD2(v10) != 5 )
        break;
LABEL_14:
      v6 = 16;
      break;
    case 12LL:
      goto LABEL_19;
    case -1LL:
      goto LABEL_11;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, a2, a3);
  ProbeForRead(Address[1], v6, CurrentProcessWow64Process != 0 ? 1 : 4);
  return xxxCallNextHookEx(a1, a2, (__int64)Address);
}
