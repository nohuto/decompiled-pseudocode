/*
 * XREFs of MiUnlinkHugeRange @ 0x1404F0F98
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404F0BF0 (MiHugeRangeFreeToZero.c)
 *     MiGetHugeBadRangeFromNode @ 0x14066FF88 (MiGetHugeBadRangeFromNode.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x140670378 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140670894 (MiHugePurgeZeroList.c)
 *     MiMakeEntireHugePfnGood @ 0x140670DEC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140671374 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140671594 (MiMoveBadHugeRangeCrossPartition.c)
 * Callees:
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1402F3214 (MiPageToChannel.c)
 *     MiPageListCollision @ 0x14042FDFC (MiPageListCollision.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404B219C (MiGetColorHeadHugeRangeBase.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x140671D60 (MiUpdateHugeRangeZeroFreeBitmap.c)
 */

unsigned __int64 __fastcall MiUnlinkHugeRange(__int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 *v7; // r15
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // r13
  unsigned __int64 v12; // r11
  _QWORD *ColorHeadHugeRangeBase; // r14
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r8d
  unsigned __int8 v18; // di
  __int64 v19; // r11
  unsigned __int64 result; // rax
  char v21; // [rsp+70h] [rbp+8h]
  char v22; // [rsp+78h] [rbp+10h]
  unsigned int v23; // [rsp+80h] [rbp+18h]
  __int64 v24; // [rsp+88h] [rbp+20h]

  v23 = dword_140E2DBC0[0];
  v3 = a2 & 0x3FFFFF;
  v4 = v3 << 18;
  v21 = MiPageToChannel(v3 << 18);
  v6 = (unsigned int)MiPageToNode(v3 << 18);
  v22 = 0;
  v7 = (unsigned __int64 *)(qword_140E2FFC0 + 8 * v3);
  v8 = *v7;
  v9 = *v7 & 7;
  if ( v9 == 2 )
  {
    if ( (v8 & 0x800000000000000LL) != 0 )
      MiPageListCollision((__int64 *)(qword_140E2FFC0 + 8 * v3));
    v10 = 1;
  }
  else if ( v9 == 1 )
  {
    if ( (v8 & 0x800000000000000LL) != 0 )
    {
      MiPageListCollision((__int64 *)(qword_140E2FFC0 + 8 * v3));
      v22 = 1;
    }
    v10 = 0;
  }
  else
  {
    v10 = 5;
  }
  v24 = v6;
  v11 = *(_QWORD *)(a1 + 16) + 57216 * v6;
  ColorHeadHugeRangeBase = (_QWORD *)MiGetColorHeadHugeRangeBase(v11, v5, v10);
  if ( v10 != 5 )
    ColorHeadHugeRangeBase += v3 % v23;
  v14 = v12 >> 37;
  v15 = v12 >> 15 << 15;
  v16 = (v12 >> 15) & 0x3FFFFF;
  if ( ((v12 >> 37) & 0x3FFFFF) != 0 )
    *(_QWORD *)(qword_140E2FFC0 + 8 * ((v12 >> 37) & 0x3FFFFF)) = v15 ^ (*(_QWORD *)(qword_140E2FFC0
                                                                                   + 8 * ((v12 >> 37) & 0x3FFFFF)) ^ v15) & 0xFFFFFFE000007FFFuLL;
  else
    *ColorHeadHugeRangeBase = v15 ^ (*ColorHeadHugeRangeBase ^ v15) & 0xFFFFFFE000007FFFuLL;
  if ( v16 )
  {
    v18 = v21;
    *(_QWORD *)(qword_140E2FFC0 + 8 * v16) = (v14 << 37) ^ (*(_QWORD *)(qword_140E2FFC0 + 8 * v16) ^ (v14 << 37)) & 0xF800001FFFFFFFFFuLL;
  }
  else
  {
    if ( v10 == 5 )
    {
      v18 = v21;
    }
    else
    {
      v17 = v6 & 0x3F | ((v10 & 1) << 11);
      v18 = v21;
      MiUpdateHugeRangeZeroFreeBitmap(
        v11,
        (unsigned int)(v4 >> 18) % dword_140E2DBC0[0],
        (unsigned __int8)((unsigned int)(v4 >> 18) % dword_140E2DBC0[0]) | ((v21 & 1 | (2 * (v17 | 0x200u))) << 8),
        0LL);
    }
    *ColorHeadHugeRangeBase = (v14 << 37) ^ (*ColorHeadHugeRangeBase ^ (v14 << 37)) & 0xF800001FFFFFFFFFuLL;
  }
  v19 = v12 & 0x7FFF;
  if ( *(_BYTE *)(a1 + 16101) || v22 || v10 )
    v19 |= 0x10000uLL;
  result = 0xFFFFFF800003FFFBuLL;
  *v7 = v19 & 0xFFFFFF800001FFF8uLL | 0x20003;
  if ( v10 != 5 )
  {
    result = *(_QWORD *)(a1 + 16);
    _InterlockedDecrement64((volatile signed __int64 *)(result + 8 * (v18 + 2 * (v10 + 3576 * v24)) + 15000));
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 16664));
  }
  return result;
}
