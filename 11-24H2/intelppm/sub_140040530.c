/*
 * XREFs of sub_140040530 @ 0x140040530
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_1400068C8 @ 0x1400068C8 (sub_1400068C8.c)
 *     sub_140040DB8 @ 0x140040DB8 (sub_140040DB8.c)
 */

__int64 __fastcall sub_140040530(__int64 a1, __int64 a2, __int16 a3, _QWORD *a4)
{
  int v5; // ecx
  unsigned __int16 v8; // r15
  unsigned int v9; // ebp
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+90h] [rbp+18h] BYREF

  LOWORD(v16) = a3;
  v5 = *(_DWORD *)(a2 + 20);
  v16 = 0;
  if ( (unsigned int)(v5 - 1) > 4 )
  {
    v12 = -1073741823;
    goto LABEL_13;
  }
  v8 = 4 * v5;
  v9 = 4 * v5 + 64;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v9, 1919119952LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
LABEL_13:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10000u);
    return (unsigned int)v12;
  }
  *((_DWORD *)Pool2 + 2) = v9;
  *(_DWORD *)Pool2 = 1130980673;
  *((_DWORD *)Pool2 + 1) = 1129533279;
  *((_DWORD *)Pool2 + 3) = 4;
  *((_DWORD *)Pool2 + 4) = 1048578;
  sub_1400068C8((__int64)(Pool2 + 10), 0x10uLL, a2, 0x10uLL);
  v13 = 4LL;
  if ( v11[9] >= 4u )
    v13 = v11[9];
  *(_DWORD *)((char *)v11 + v13 + 20) = 0x40000;
  *(_DWORD *)((char *)v11 + v13 + 24) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)((char *)v11 + v13 + 28) = 0x40000;
  *(_DWORD *)((char *)v11 + v13 + 32) = *(_DWORD *)(a2 + 20);
  *(unsigned __int16 *)((char *)v11 + v13 + 36) = 2;
  *(unsigned __int16 *)((char *)v11 + v13 + 38) = v8;
  sub_1400068C8((__int64)v11 + v13 + 40, v8, a2 + 24, v8);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x10000u);
  v15 = 0LL;
  v12 = sub_140040DB8(a1, 0, (_DWORD)v11, (unsigned int)&v15, (__int64)&v16);
  if ( v12 >= 0 && v15 && a4 )
    *a4 = v15 + 16;
  ExFreePoolWithTag(v11, 0);
  if ( v12 < 0 )
    goto LABEL_13;
  return (unsigned int)v12;
}
