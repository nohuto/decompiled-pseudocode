/*
 * XREFs of sub_180031634 @ 0x180031634
 * Callers:
 *     sub_1800107FC @ 0x1800107FC (sub_1800107FC.c)
 *     sub_180015BC8 @ 0x180015BC8 (sub_180015BC8.c)
 *     sub_180015CB8 @ 0x180015CB8 (sub_180015CB8.c)
 *     sub_180015DA8 @ 0x180015DA8 (sub_180015DA8.c)
 *     sub_180023340 @ 0x180023340 (sub_180023340.c)
 *     sub_180040838 @ 0x180040838 (sub_180040838.c)
 *     sub_180044400 @ 0x180044400 (sub_180044400.c)
 *     sub_180044514 @ 0x180044514 (sub_180044514.c)
 *     sub_180049C3C @ 0x180049C3C (sub_180049C3C.c)
 *     sub_180049D0C @ 0x180049D0C (sub_180049D0C.c)
 *     sub_180049DDC @ 0x180049DDC (sub_180049DDC.c)
 *     sub_180049EAC @ 0x180049EAC (sub_180049EAC.c)
 *     sub_180049F7C @ 0x180049F7C (sub_180049F7C.c)
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 *     sub_18007A970 @ 0x18007A970 (sub_18007A970.c)
 *     sub_18007CDE8 @ 0x18007CDE8 (sub_18007CDE8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800325B8 @ 0x1800325B8 (sub_1800325B8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_180031634(__int64 a1, __int64 a2, int a3)
{
  void (__fastcall *v5)(__int64, __int64); // rbx
  __int64 v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  *(_QWORD *)(a2 + 72) = a1;
  if ( (*(_BYTE *)(a2 + 40) & 1) != 0 )
  {
    if ( a3 == 1 )
    {
      v5 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
      v6 = sub_1800325B8(a1, v7, 0LL);
      v5(a2, v6);
      if ( v8 )
        sub_18001050C(v8);
    }
    if ( !*(_DWORD *)(a1 + 552) )
      sub_180027C70(a2, 8, 1);
  }
}
