/*
 * XREFs of NtUserSystemParametersInfoForDpi @ 0x140079C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _SystemParametersInfoForDpi @ 0x140079DCC (_SystemParametersInfoForDpi.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, int a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  size_t v12; // rdi
  __int64 CurrentProcessWow64Process; // rax
  int v14; // edx
  int v15; // r9d
  int v16; // ebx
  _DWORD *Address; // [rsp+50h] [rbp-28h]
  _DWORD *Src; // [rsp+90h] [rbp+18h]

  EnterCrit(0LL, 0LL);
  if ( !a5 || !a3 )
    goto LABEL_12;
  switch ( a1 )
  {
    case 41:
      v11 = 504;
      break;
    case 31:
      v11 = 92;
      break;
    case 45:
      v11 = 108;
      break;
    default:
      goto LABEL_12;
  }
  if ( a2 != v11 )
  {
LABEL_12:
    v16 = 0;
    UserSetLastError(87);
    goto LABEL_9;
  }
  Address = a3;
  v12 = v11;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8, v10);
  ProbeForWrite(Address, (unsigned int)v12, CurrentProcessWow64Process != 0 ? 1 : 4);
  Src = (_DWORD *)Win32AllocPoolWithQuotaZInit((unsigned int)v12, 2037674837LL);
  if ( !Src )
    ExRaiseStatus(-1073741801);
  *Src = *Address;
  v16 = SystemParametersInfoForDpi(a1, v14, (_DWORD)Src, v15, a5);
  memmove(Address, Src, v12);
  Win32FreePool(Src);
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v16;
}
