/*
 * XREFs of ValidateHwinsta @ 0x1400BBE20
 * Callers:
 *     NtUserCloseWindowStation @ 0x1400BBCC0 (NtUserCloseWindowStation.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 */

__int64 __fastcall ValidateHwinsta(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  PVOID v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a3, ExWindowStationObjectType, a2, &v8, 0LL);
  v6 = v5;
  *a4 = v8;
  if ( v5 < 0 )
  {
    SetLastNtError((unsigned int)v5);
  }
  else if ( *(_DWORD *)*a4 != (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    v6 = -1073741816;
    SetLastNtError(3221225480LL);
    ObfDereferenceObject(*a4);
  }
  return v6;
}
