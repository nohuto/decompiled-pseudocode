/*
 * XREFs of NtUserCloseWindowStation @ 0x1C00B7C10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ApiSetEditionCloseWindowStationEntryPoint @ 0x1C00B7C74 (ApiSetEditionCloseWindowStationEntryPoint.c)
 *     ValidateHwinsta @ 0x1C00B7CD0 (ValidateHwinsta.c)
 */

__int64 __fastcall NtUserCloseWindowStation(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v4; // edi
  ULONG v6; // eax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  Object = 0LL;
  LOBYTE(a2) = 1;
  if ( (int)ValidateHwinsta(a1, a2, 0LL, &Object) >= 0 )
  {
    v4 = ApiSetEditionCloseWindowStationEntryPoint(a1);
    ObfDereferenceObject(Object);
    if ( v4 < 0 )
    {
      v6 = RtlNtStatusToDosError(v4);
      UserSetLastError(v6);
    }
    else
    {
      return 1LL;
    }
  }
  return v2;
}
