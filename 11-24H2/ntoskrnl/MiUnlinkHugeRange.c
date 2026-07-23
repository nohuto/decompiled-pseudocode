/*
 * XREFs of MiUnlinkHugeRange @ 0x1404EEA38
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404EE690 (MiHugeRangeFreeToZero.c)
 *     MiGetHugeBadRangeFromNode @ 0x140671158 (MiGetHugeBadRangeFromNode.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x140671548 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140671A64 (MiHugePurgeZeroList.c)
 *     MiMakeEntireHugePfnGood @ 0x140671FBC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140672544 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140672764 (MiMoveBadHugeRangeCrossPartition.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     MiPageListCollision @ 0x1404218AC (MiPageListCollision.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404ACA2C (MiGetColorHeadHugeRangeBase.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x140672F30 (MiUpdateHugeRangeZeroFreeBitmap.c)
 */

unsigned __int64 __fastcall MiUnlinkHugeRange(__int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // r11
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // r13
  unsigned __int64 v14; // r11
  _QWORD *ColorHeadHugeRangeBase; // r14
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r8d
  unsigned __int8 v20; // di
  __int64 v21; // r11
  unsigned __int64 result; // rax
  char v23; // [rsp+70h] [rbp+8h]
  char v24; // [rsp+78h] [rbp+10h]
  unsigned int v25; // [rsp+80h] [rbp+18h]
  __int64 v26; // [rsp+88h] [rbp+20h]

  v25 = dword_140E2DD00[0];
  v3 = a2 & 0x3FFFFF;
  v4 = v3 << 18;
  v23 = MiPageToChannel(v3 << 18);
  v6 = (unsigned int)MiPageToNode(v3 << 18);
  v24 = 0;
  v9 = (unsigned __int64 *)(qword_140E30100 + 8 * v3);
  v10 = *v9;
  v11 = *v9 & 7;
  if ( v11 == 2 )
  {
    if ( (v10 & 0x800000000000000LL) != 0 )
      MiPageListCollision((__int64 *)(qword_140E30100 + 8 * v3), v5, v7, v8);
    v12 = 1;
  }
  else if ( v11 == 1 )
  {
    if ( (v10 & 0x800000000000000LL) != 0 )
    {
      MiPageListCollision((__int64 *)(qword_140E30100 + 8 * v3), v5, v7, v8);
      v24 = 1;
    }
    v12 = 0;
  }
  else
  {
    v12 = 5;
  }
  v26 = v6;
  v13 = *(_QWORD *)(a1 + 16) + 57216 * v6;
  ColorHeadHugeRangeBase = (_QWORD *)MiGetColorHeadHugeRangeBase(v13, v5, v12);
  if ( v12 != 5 )
    ColorHeadHugeRangeBase += v3 % v25;
  v16 = v14 >> 37;
  v17 = v14 >> 15 << 15;
  v18 = (v14 >> 15) & 0x3FFFFF;
  if ( ((v14 >> 37) & 0x3FFFFF) != 0 )
    *(_QWORD *)(qword_140E30100 + 8 * ((v14 >> 37) & 0x3FFFFF)) = v17 ^ (*(_QWORD *)(qword_140E30100
                                                                                   + 8 * ((v14 >> 37) & 0x3FFFFF)) ^ v17) & 0xFFFFFFE000007FFFuLL;
  else
    *ColorHeadHugeRangeBase = v17 ^ (*ColorHeadHugeRangeBase ^ v17) & 0xFFFFFFE000007FFFuLL;
  if ( v18 )
  {
    v20 = v23;
    *(_QWORD *)(qword_140E30100 + 8 * v18) = (v16 << 37) ^ (*(_QWORD *)(qword_140E30100 + 8 * v18) ^ (v16 << 37)) & 0xF800001FFFFFFFFFuLL;
  }
  else
  {
    if ( v12 == 5 )
    {
      v20 = v23;
    }
    else
    {
      v19 = v6 & 0x3F | ((v12 & 1) << 11);
      v20 = v23;
      MiUpdateHugeRangeZeroFreeBitmap(
        v13,
        (unsigned int)(v4 >> 18) % dword_140E2DD00[0],
        (unsigned __int8)((unsigned int)(v4 >> 18) % dword_140E2DD00[0]) | ((v23 & 1 | (2 * (v19 | 0x200u))) << 8),
        0LL);
    }
    *ColorHeadHugeRangeBase = (v16 << 37) ^ (*ColorHeadHugeRangeBase ^ (v16 << 37)) & 0xF800001FFFFFFFFFuLL;
  }
  v21 = v14 & 0x7FFF;
  if ( *(_BYTE *)(a1 + 16101) || v24 || v12 )
    v21 |= 0x10000uLL;
  result = 0xFFFFFF800003FFFBuLL;
  *v9 = v21 & 0xFFFFFF800001FFF8uLL | 0x20003;
  if ( v12 != 5 )
  {
    result = *(_QWORD *)(a1 + 16);
    _InterlockedDecrement64((volatile signed __int64 *)(result + 8 * (v20 + 2 * (v12 + 3576 * v26)) + 15000));
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 16664));
  }
  return result;
}
