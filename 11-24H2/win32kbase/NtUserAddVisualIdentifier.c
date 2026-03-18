/*
 * XREFs of NtUserAddVisualIdentifier @ 0x1401B9580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14004A450 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x14020FF28 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x14023A124 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 */

__int64 __fastcall NtUserAddVisualIdentifier(void *a1, void *a2)
{
  int v3; // ebx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG v9; // ecx
  __int64 CurrentProcess; // rax
  struct _LUID v12; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  struct _LUID v14; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v14 = 0LL;
  RtlCopyFromUser(&v14, a2, 8uLL);
  v12 = v14;
  v3 = 1;
  v4 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v4 < 0 )
    goto LABEL_7;
  v14 = (struct _LUID)*((_QWORD *)Object + 2);
  if ( CDesktopInputSink::IsEqualByLuid(&v14)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8), *((_QWORD *)Object + 7) != CurrentProcess) )
  {
    v3 = 0;
    v9 = 5;
LABEL_4:
    UserSetLastError(v9);
    goto LABEL_8;
  }
  v4 = InputObjectMap::AddMapping(&v12, (const struct CompositionInputObject *)Object);
  if ( v4 < 0 )
  {
LABEL_7:
    v3 = 0;
    v9 = RtlNtStatusToDosError(v4);
    goto LABEL_4;
  }
LABEL_8:
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
