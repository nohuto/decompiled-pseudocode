/*
 * XREFs of _anonymous_namespace_::GetRawMouseInputDestination @ 0x1400E38D8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E39B0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     HasHidTable @ 0x1400E3A64 (HasHidTable.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_OWORD *__fastcall anonymous_namespace_::GetRawMouseInputDestination(_OWORD *a1)
{
  __int64 PtiFromInputDest; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _OWORD v12[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
  v3 = PtiFromInputDest;
  if ( PtiFromInputDest && (unsigned int)HasHidTable(PtiFromInputDest) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 464) + 832LL) + 64LL);
    memset(v12, 0, sizeof(v12));
    if ( v4 )
    {
      LODWORD(v12[0]) = 4;
      *(_QWORD *)&v12[5] = v4;
      HIDWORD(v12[5]) = 2;
    }
    v5 = v12[1];
    *a1 = v12[0];
    v6 = v12[2];
    a1[1] = v5;
    v7 = v12[3];
    a1[2] = v6;
    v8 = v12[4];
    a1[3] = v7;
    v9 = v12[5];
    a1[4] = v8;
    v10 = v12[6];
    a1[5] = v9;
    a1[6] = v10;
  }
  return a1;
}
