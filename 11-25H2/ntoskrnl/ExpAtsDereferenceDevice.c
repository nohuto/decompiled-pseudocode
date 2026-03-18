/*
 * XREFs of ExpAtsDereferenceDevice @ 0x14064C03C
 * Callers:
 *     ExUninitializeDeviceAts @ 0x14064BECC (ExUninitializeDeviceAts.c)
 * Callees:
 *     ExpAtsConfigureSecureDevice @ 0x14064BF9C (ExpAtsConfigureSecureDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAtsDereferenceDevice(_QWORD *P)
{
  unsigned int v1; // edi
  _QWORD *v4; // rax
  PVOID *v5; // rcx

  v1 = 0;
  if ( (*((_DWORD *)P + 8))-- == 1 )
  {
    v1 = guard_dispatch_icall_no_overrides(P[6]);
    v4 = (_QWORD *)*P;
    if ( *(_QWORD **)(*P + 8LL) != P || (v5 = (PVOID *)P[1], *v5 != P) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    if ( *((_BYTE *)P + 188) )
      v1 = ExpAtsConfigureSecureDevice((__int64)P, 0);
    else
      guard_dispatch_icall_no_overrides(P[22]);
    guard_dispatch_icall_no_overrides(P[6]);
    guard_dispatch_icall_no_overrides(P[16]);
    ExFreePoolWithTag(P, 0);
  }
  return v1;
}
