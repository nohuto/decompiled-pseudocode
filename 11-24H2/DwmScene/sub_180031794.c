/*
 * XREFs of sub_180031794 @ 0x180031794
 * Callers:
 *     sub_1800108FC @ 0x1800108FC (sub_1800108FC.c)
 *     sub_180015CC8 @ 0x180015CC8 (sub_180015CC8.c)
 *     sub_180015DB8 @ 0x180015DB8 (sub_180015DB8.c)
 *     sub_180015EA8 @ 0x180015EA8 (sub_180015EA8.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_180040998 @ 0x180040998 (sub_180040998.c)
 *     sub_180044560 @ 0x180044560 (sub_180044560.c)
 *     sub_180044674 @ 0x180044674 (sub_180044674.c)
 *     sub_180049D9C @ 0x180049D9C (sub_180049D9C.c)
 *     sub_180049E6C @ 0x180049E6C (sub_180049E6C.c)
 *     sub_180049F3C @ 0x180049F3C (sub_180049F3C.c)
 *     sub_18004A00C @ 0x18004A00C (sub_18004A00C.c)
 *     sub_18004A0DC @ 0x18004A0DC (sub_18004A0DC.c)
 *     sub_180059EB0 @ 0x180059EB0 (sub_180059EB0.c)
 *     sub_18007AAD0 @ 0x18007AAD0 (sub_18007AAD0.c)
 *     sub_18007CF48 @ 0x18007CF48 (sub_18007CF48.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180032718 @ 0x180032718 (sub_180032718.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_180031794(__int64 a1, __int64 a2, int a3)
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
      v6 = sub_180032718(a1, v7, 0LL);
      v5(a2, v6);
      if ( v8 )
        sub_18001060C(v8);
    }
    if ( !*(_DWORD *)(a1 + 552) )
      sub_180027DD0(a2, 8, 1);
  }
}
