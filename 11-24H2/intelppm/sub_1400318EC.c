/*
 * XREFs of sub_1400318EC @ 0x1400318EC
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_1400068C8 @ 0x1400068C8 (sub_1400068C8.c)
 *     sub_140040DB8 @ 0x140040DB8 (sub_140040DB8.c)
 */

__int64 __fastcall sub_1400318EC(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 Pool2; // rax
  void *v8; // rsi
  int v9; // ebx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  P = 0LL;
  v5 = a3;
  v6 = a3 + 24;
  Pool2 = ExAllocatePool2(256LL, v6, 1919119952LL);
  v8 = (void *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
LABEL_6:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x20000u);
    return (unsigned int)v9;
  }
  *(_DWORD *)Pool2 = 1130980673;
  *(_DWORD *)(Pool2 + 4) = 1128550495;
  *(_DWORD *)(Pool2 + 8) = v6;
  *(_DWORD *)(Pool2 + 12) = 1;
  *(_WORD *)(Pool2 + 16) = 2;
  *(_WORD *)(Pool2 + 18) = v5;
  sub_1400068C8(Pool2 + 20, v5, a2, v5);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x20000u);
  v9 = sub_140040DB8(a1, 0, (_DWORD)v8, (unsigned int)&P, (__int64)&v11);
  ExFreePoolWithTag(v8, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 < 0 )
    goto LABEL_6;
  return (unsigned int)v9;
}
