/*
 * XREFs of sub_1800E2C60 @ 0x1800E2C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800E2C60()
{
  __int64 v0; // rcx
  void (__fastcall ***v1)(_QWORD, __int64); // rax
  void *v2; // rbx

  while ( 1 )
  {
    v2 = lpMem;
    if ( !lpMem )
      break;
    v0 = *((_QWORD *)lpMem + 1);
    lpMem = *(LPVOID *)lpMem;
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
    if ( v1 )
      (**v1)(v1, 1LL);
    sub_18000BB4C(v2);
  }
}
