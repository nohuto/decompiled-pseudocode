/*
 * XREFs of MiExpandVadBitMapDown @ 0x140A78C90
 * Callers:
 *     MiExpandVadBitMap @ 0x140918A94 (MiExpandVadBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x140A705BC (MiUpdateVadBits.c)
 */

__int64 __fastcall MiExpandVadBitMapDown(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // rbp
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rsi
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  v5 = a1[1];
  if ( a3 > a1[7] && a2 > (((v5 - qword_140E2F3C8) << 19) - a3) >> 16 )
    return 0LL;
  if ( a2 > ((8 * (v5 - qword_140E2F3C8)) & 0xFFFFFFFFFFFFuLL) )
    return 0LL;
  v6 = (a2 >> 6) + ((a2 & 0x3F) != 0);
  v7 = ((8 * v6) >> 12) + (((8 * v6) & 0xFFF) != 0);
  v8 = (_QWORD *)(v5 - (v7 << 12));
  if ( (int)MiMakeHyperRangeAccessible((unsigned __int64)v8, v5 - 1, &v11) < 0 )
    return 0LL;
  ActiveProcessors[3].StaticBitmap[24] += v11;
  *a1 += v7 << 15;
  a1[1] = v8;
  if ( v8 == (_QWORD *)qword_140E2F3C8 )
  {
    *v8 |= 1uLL;
    v10 = 1LL;
  }
  else
  {
    v10 = 0LL;
  }
  a1[2] = v10;
  a1[4] = v10;
  a1[3] = 0LL;
  MiUpdateVadBits((a1[1] - qword_140E2F3C8) << 19, ((a1[1] - qword_140E2F3C8) << 19) + (v7 << 31));
  return 1LL;
}
