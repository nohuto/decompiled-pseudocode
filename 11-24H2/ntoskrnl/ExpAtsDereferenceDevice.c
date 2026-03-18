/*
 * XREFs of ExpAtsDereferenceDevice @ 0x140657F9C
 * Callers:
 *     ExUninitializeDeviceAts @ 0x140657E2C (ExUninitializeDeviceAts.c)
 * Callees:
 *     ExpAtsConfigureSecureDevice @ 0x140657EFC (ExpAtsConfigureSecureDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAtsDereferenceDevice(_BYTE *P, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  PVOID *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (*((_DWORD *)P + 8))-- == 1 )
  {
    v19 = 1;
    if ( P[18] )
      v19 = 7;
    v4 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), &v19, a3, a4);
    v10 = *(_QWORD **)P;
    if ( *(_BYTE **)(*(_QWORD *)P + 8LL) != P || (v11 = (PVOID *)*((_QWORD *)P + 1), *v11 != P) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    if ( P[188] )
      v4 = ExpAtsConfigureSecureDevice((__int64)P, 0);
    else
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 22), v7, v8, v9);
    guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), v12, v13, v14);
    guard_dispatch_icall_no_overrides(*((_QWORD *)P + 16), v15, v16, v17);
    ExFreePoolWithTag(P, 0);
  }
  return v4;
}
