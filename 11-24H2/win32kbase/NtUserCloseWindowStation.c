/*
 * XREFs of NtUserCloseWindowStation @ 0x1400BBCC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ValidateHwinsta @ 0x1400BBE20 (ValidateHwinsta.c)
 *     ApiSetEditionCloseWindowStationEntryPoint @ 0x1400BBED8 (ApiSetEditionCloseWindowStationEntryPoint.c)
 */

__int64 __fastcall NtUserCloseWindowStation(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v5; // edi
  ULONG v6; // eax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  Object = 0LL;
  LOBYTE(a2) = 1;
  if ( (int)ValidateHwinsta(a1, a2, 0LL, &Object) >= 0 )
  {
    v5 = ApiSetEditionCloseWindowStationEntryPoint(a1);
    ObfDereferenceObject(Object);
    if ( v5 < 0 )
    {
      v6 = RtlNtStatusToDosError(v5);
      UserSetLastError(v6);
    }
    else
    {
      return 1LL;
    }
  }
  return v2;
}
