/*
 * XREFs of NtUserGetProp2 @ 0x140242C80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z @ 0x140290A38 (-CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402BF08C (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetProp2(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentThreadWin32Thread; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // r8
  struct _RTL_ATOM_TABLE *v16; // rax
  __int64 Prop; // rbx
  int v18; // eax
  ULONG v19; // eax
  USHORT Atom[8]; // [rsp+30h] [rbp-228h] BYREF
  WCHAR AtomName[256]; // [rsp+40h] [rbp-218h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( !*(_QWORD *)W32GetUserSessionState(v5, v4)
    || (v9 = *(unsigned int *)(PsGetCurrentThreadWin32Thread(v7, v6, v8) + 24), (v9 & 0xC) == 0) )
  {
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
  v14 = ValidatePropWindow(a1, 0LL);
  if ( !v14 || !CaptureAtomName(a2, AtomName, v15) )
    goto LABEL_10;
  v16 = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
  if ( !v16 )
  {
    UserSetLastError(5);
LABEL_10:
    Prop = 0LL;
    goto LABEL_11;
  }
  Prop = 0LL;
  Atom[0] = 0;
  v18 = RtlLookupAtomInAtomTable(v16, AtomName, Atom);
  if ( v18 < 0 )
  {
    v19 = RtlNtStatusToDosError(v18);
    UserSetLastError(v19);
  }
  else
  {
    Prop = GetProp(v14, Atom[0], 0);
  }
LABEL_11:
  --*(_DWORD *)(CurrentThreadWin32Thread + 28);
  UserSessionSwitchLeaveCrit(v13);
  return Prop;
}
