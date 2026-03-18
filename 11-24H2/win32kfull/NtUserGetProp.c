/*
 * XREFs of NtUserGetProp @ 0x140242BA0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402BF08C (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 */

__int64 __fastcall NtUserGetProp(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // esi
  __int64 Prop; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  Prop = 0LL;
  if ( !*(_QWORD *)W32GetUserSessionState(v6, v5)
    || (v10 = *(unsigned int *)(PsGetCurrentThreadWin32Thread(v8, v7, v9) + 24), (v10 & 0xC) == 0) )
  {
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
  v14 = ValidatePropWindow(a1, 0LL);
  if ( v14 )
    Prop = GetProp(v14, v2, 0);
  --*(_DWORD *)(CurrentThreadWin32Thread + 28);
  UserSessionSwitchLeaveCrit(v15);
  return Prop;
}
