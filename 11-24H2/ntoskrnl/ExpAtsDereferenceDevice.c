/*
 * XREFs of ExpAtsDereferenceDevice @ 0x14065669C
 * Callers:
 *     ExUninitializeDeviceAts @ 0x14065652C (ExUninitializeDeviceAts.c)
 * Callees:
 *     ExpAtsConfigureSecureDevice @ 0x1406565FC (ExpAtsConfigureSecureDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAtsDereferenceDevice(_BYTE *P)
{
  unsigned int v1; // edi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  PVOID *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*((_DWORD *)P + 8))-- == 1 )
  {
    v10 = 1;
    if ( P[18] )
      v10 = 7;
    v1 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), &v10);
    v5 = *(_QWORD **)P;
    if ( *(_BYTE **)(*(_QWORD *)P + 8LL) != P || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    if ( P[188] )
      v1 = ExpAtsConfigureSecureDevice((__int64)P, 0);
    else
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 22), v4);
    guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), v7);
    guard_dispatch_icall_no_overrides(*((_QWORD *)P + 16), v8);
    ExFreePoolWithTag(P, 0);
  }
  return v1;
}
