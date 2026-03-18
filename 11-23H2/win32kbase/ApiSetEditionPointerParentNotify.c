/*
 * XREFs of ApiSetEditionPointerParentNotify @ 0x1C0207028
 * Callers:
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01CDD8C (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     EditionPointerParentNotify @ 0x1C0232CA0 (EditionPointerParentNotify.c)
 */

__int64 (*__fastcall ApiSetEditionPointerParentNotify(_OWORD *a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v12[7]; // [rsp+20h] [rbp-78h] BYREF

  result = qword_1C02968F0;
  if ( qword_1C02968F0 )
  {
    result = (__int64 (*)(void))qword_1C02968F0();
    if ( (int)result >= 0 )
    {
      v7 = a1[1];
      v12[0] = *a1;
      v12[2] = a1[2];
      v8 = a1[4];
      v12[1] = v7;
      v9 = a1[3];
      v12[4] = v8;
      v10 = a1[6];
      v12[3] = v9;
      v11 = a1[5];
      v12[6] = v10;
      v12[5] = v11;
      return (__int64 (*)(void))EditionPointerParentNotify(v12, a2, a3);
    }
  }
  return result;
}
