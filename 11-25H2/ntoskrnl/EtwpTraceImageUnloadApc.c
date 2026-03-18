/*
 * XREFs of EtwpTraceImageUnloadApc @ 0x140447E00
 * Callers:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140256FE0 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     EtwpTraceImageUnload @ 0x140447EF8 (EtwpTraceImageUnload.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlReleaseFileNameInformation @ 0x1409F5600 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceImageUnloadApc(PVOID P)
{
  int v2; // eax
  __int128 *v3; // rcx
  __int128 v4; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( KeAreAllApcsDisabled() )
    NT_ASSERT("KeAreAllApcsDisabled() == 0");
  if ( FltMgrCallbacks )
    v2 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 11), 1024LL);
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
  ObfDereferenceObjectWithTag(*((PVOID *)P + 11), 0x746C6644u);
  ObfDereferenceObjectWithTag(*((PVOID *)P + 12), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
