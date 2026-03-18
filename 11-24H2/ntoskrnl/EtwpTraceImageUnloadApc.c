/*
 * XREFs of EtwpTraceImageUnloadApc @ 0x1403C4A00
 * Callers:
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     EtwpTraceImageUnload @ 0x1403C4AF8 (EtwpTraceImageUnload.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlReleaseFileNameInformation @ 0x140A13E20 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceImageUnloadApc(PVOID P)
{
  int v2; // eax
  __int128 *v3; // rcx
  __int128 v4; // [rsp+50h] [rbp-18h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  if ( KeAreAllApcsDisabled() )
    NT_ASSERT("KeAreAllApcsDisabled() == 0");
  if ( FltMgrCallbacks )
    v2 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 11), 1024LL, &v4, &v5);
  else
    v2 = -1073741637;
  if ( v2 < 0 )
    LODWORD(v3) = *((_QWORD *)P + 11) + 88;
  else
    v3 = &v4;
  EtwpTraceImageUnload(
    (_DWORD)v3,
    *((_QWORD *)P + 12),
    *((_QWORD *)P + 13),
    *((_QWORD *)P + 14),
    *((_DWORD *)P + 30),
    *((_DWORD *)P + 31),
    *((_DWORD *)P + 32),
    *((_DWORD *)P + 33),
    *((_QWORD *)P + 17),
    0);
  if ( v5 )
    FsRtlReleaseFileNameInformation();
  ObfDereferenceObjectWithTag(*((PVOID *)P + 11), 0x746C6644u);
  ObfDereferenceObjectWithTag(*((PVOID *)P + 12), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
