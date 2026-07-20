/*
 * XREFs of SmpLoadDeferredSubsystem @ 0x140016C40
 * Callers:
 *     <none>
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpExecuteCommand @ 0x140003F30 (SmpExecuteCommand.c)
 *     SmpGetMuSessionIdFromClientContext @ 0x140009A30 (SmpGetMuSessionIdFromClientContext.c)
 */

__int64 __fastcall SmpLoadDeferredSubsystem(__int64 a1, int *a2)
{
  USHORT v2; // ax
  int MuSessionIdFromClientContext; // esi
  int v6; // eax
  __int64 v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // r8
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 48);
  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  v11 = 0LL;
  String1.Length = v2;
  String1.MaximumLength = v2;
  String1.Buffer = (PWSTR)(a1 + 52);
  MuSessionIdFromClientContext = SmpGetMuSessionIdFromClientContext((__int64)a2, &v11);
  if ( v11 )
  {
    v6 = *a2;
    v7 = SmpSubSystemsToDefer;
    v8 = &SmpSubSystemsRequired;
    if ( (v6 & 8) != 0 )
      v7 = SmpSubSystemsRequired;
    else
      v8 = &SmpSubSystemsToDefer;
    while ( (__int64 *)v7 != v8 )
    {
      if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v7 + 16), 1u) )
        return SmpExecuteCommand(v7 + 32, MuSessionIdFromClientContext, v9, 72, 0LL);
      v7 = *(_QWORD *)v7;
    }
    return 3221225524LL;
  }
  else
  {
    SmpLogFailureString((__int64)"SmpLoadDeferredSubsystem", 0x286Bu, (__int64)String1.Buffer, 0xC0000001);
    return 3221225473LL;
  }
}
