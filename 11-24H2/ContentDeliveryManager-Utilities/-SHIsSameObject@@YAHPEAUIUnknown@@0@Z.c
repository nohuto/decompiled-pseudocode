/*
 * XREFs of ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18008F26C
 * Callers:
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18008D5E0 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SHIsSameObject(struct IUnknown *a1, struct IUnknown *a2)
{
  unsigned int v2; // ebx
  struct IUnknownVtbl *lpVtbl; // rax
  int v6; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a1 || !a2 )
    return 0LL;
  if ( a1 == a2 )
    return 1LL;
  lpVtbl = a1->lpVtbl;
  v8 = 0LL;
  v7 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a1,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v8) >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v7);
    if ( v6 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v6 >= 0 && v8 == v7 )
      return 1;
  }
  return v2;
}
