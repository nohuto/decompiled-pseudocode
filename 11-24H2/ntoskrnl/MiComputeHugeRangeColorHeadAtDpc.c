/*
 * XREFs of MiComputeHugeRangeColorHeadAtDpc @ 0x140670C48
 * Callers:
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140671F94 (MiLockHugeRangeColorHeadAtDpc.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404ACA2C (MiGetColorHeadHugeRangeBase.c)
 *     MiHugePfnPartition @ 0x1404D2634 (MiHugePfnPartition.c)
 */

__int64 __fastcall MiComputeHugeRangeColorHeadAtDpc(__int64 *a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int8 v8; // bl
  int v9; // r8d
  __int64 result; // rax
  int v11; // r8d

  v1 = *a1;
  v3 = ((((__int64)a1 - qword_140E30100) >> 3) & 0x3FFFFF) << 18;
  v4 = (unsigned int)MiPageToNode(v3);
  v5 = *(_QWORD *)(MiHugePfnPartition(a1) + 16) + 57216 * v4;
  MiPageToChannel(v3);
  HIDWORD(v6) = 0;
  v7 = v1 & 7;
  v8 = (unsigned int)(v3 >> 18) % dword_140E2DD00[0];
  if ( v7 == 1 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 5;
    if ( v7 == 2 )
      v9 = 1;
  }
  LODWORD(v6) = (unsigned int)(v3 >> 18) % dword_140E2DD00[0];
  result = MiGetColorHeadHugeRangeBase(v5, v6, v9);
  if ( v11 != 5 )
    result += 8LL * v8;
  return result;
}
