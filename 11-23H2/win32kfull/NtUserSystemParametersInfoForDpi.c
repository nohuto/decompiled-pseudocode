/*
 * XREFs of NtUserSystemParametersInfoForDpi @ 0x1C007BBC0
 * Callers:
 *     <none>
 * Callees:
 *     _SystemParametersInfoForDpi @ 0x1C007BD3C (_SystemParametersInfoForDpi.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, int a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 CurrentProcessWow64Process; // rax
  size_t v13; // r15
  _DWORD *v14; // rax
  int v15; // edx
  int v16; // r9d
  void *v17; // rdi
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9

  EnterCrit(0LL, 0LL);
  if ( !a5 || !a3 )
    goto LABEL_14;
  switch ( a1 )
  {
    case 31:
      v11 = 92;
      break;
    case 41:
      v11 = 504;
      break;
    case 45:
      v11 = 108;
      break;
    default:
      goto LABEL_14;
  }
  if ( a2 != v11 )
  {
LABEL_14:
    v18 = 0;
    UserSetLastError(87LL);
    goto LABEL_9;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8, v10);
  v13 = v11;
  ProbeForWrite(a3, v11, CurrentProcessWow64Process != 0 ? 1 : 4);
  v14 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v11, 2037674837LL);
  v17 = v14;
  if ( !v14 )
    ExRaiseStatus(-1073741801);
  *v14 = *a3;
  v18 = SystemParametersInfoForDpi(a1, v15, (_DWORD)v14, v16, a5);
  memmove(a3, v17, v13);
  Win32FreePool(v17);
LABEL_9:
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v18;
}
