/*
 * XREFs of sub_14000DAA4 @ 0x14000DAA4
 * Callers:
 *     sub_14000DF50 @ 0x14000DF50 (sub_14000DF50.c)
 *     sub_140030C70 @ 0x140030C70 (sub_140030C70.c)
 * Callees:
 *     sub_140004B88 @ 0x140004B88 (sub_140004B88.c)
 *     sub_1400053CC @ 0x1400053CC (sub_1400053CC.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_1400299E0 @ 0x1400299E0 (sub_1400299E0.c)
 *     sub_140029E40 @ 0x140029E40 (sub_140029E40.c)
 *     sub_140045D48 @ 0x140045D48 (sub_140045D48.c)
 *     sub_140046FD0 @ 0x140046FD0 (sub_140046FD0.c)
 */

__int64 __fastcall sub_14000DAA4(_QWORD *a1, __int64 (__fastcall *a2)(__int64))
{
  _DWORD *v2; // r13
  __int64 v4; // rdi
  int v5; // ebx
  unsigned int v6; // ebx
  _QWORD *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 *v17; // r14
  __int64 v18; // rbx
  unsigned int *v19; // rcx
  _QWORD *v20; // r11
  _QWORD *v21; // rax
  __int64 Pool2; // [rsp+30h] [rbp-30h]
  _OWORD v24[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  v2 = (_DWORD *)qword_140019740;
  v27 = 0LL;
  memset(v24, 0, sizeof(v24));
  v4 = 0LL;
  if ( qword_1400197C0 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    v6 = sub_140045D48(a1, v24, &v26);
    Pool2 = ExAllocatePool2(64LL, 88 * v6, 1919119952LL);
    v7 = (_QWORD *)Pool2;
    if ( Pool2 && (v8 = sub_1400299E0(a1, v6, 1LL), (v4 = v8) != 0) )
    {
      *(_DWORD *)(v8 + 4) = 65537;
      *(_BYTE *)(v8 + 52) = 0;
      *(_QWORD *)(v8 + 464) = sub_14000FE40;
      *(_QWORD *)(v8 + 472) = sub_14000FE40;
      *(_QWORD *)(v8 + 448) = sub_14000FEB0;
      *(_QWORD *)(v8 + 488) = sub_14000FE60;
      *(_QWORD *)(v8 + 504) = sub_14000FDF0;
      v9 = v2[7];
      *(_DWORD *)(v8 + 20) = v9;
      *(_DWORD *)(v8 + 24) = 100;
      HIDWORD(v12) = 0;
      v10 = 100 * v2[9] / v9;
      *(_DWORD *)(v8 + 28) = v10;
      LODWORD(v12) = 100 * v2[8] % v9;
      v11 = 100 * v2[8] / v9;
      *(_DWORD *)(v4 + 32) = v11;
      if ( !v10 )
        *(_DWORD *)(v4 + 28) = 1;
      if ( !v11 )
        *(_DWORD *)(v4 + 32) = 1;
      *(_QWORD *)(v4 + 56) = (unsigned int)v2[9];
      *(_QWORD *)(v4 + 64) = (unsigned int)v2[7];
      v13 = a1[43];
      if ( v13 )
        *(_QWORD *)(v4 + 376) = v13;
      *(_QWORD *)(v4 + 392) = a1[44];
      *(_QWORD *)(v4 + 400) = a1[45];
      if ( dword_14001973C )
      {
        v12 = 0x989680 % ((unsigned int)dword_14001973C >> 1);
        *(_DWORD *)(v4 + 40) = 0x989680 / ((unsigned int)dword_14001973C >> 1);
      }
      v14 = *(_QWORD *)(v4 + 560);
      *(_QWORD *)v14 = sub_14000F950;
      *(_QWORD *)(v14 + 8) = 100LL;
      *(_WORD *)(v14 + 16) = 0;
      *(_DWORD *)(v4 + 36) = 1;
      sub_140029E40(v4, v12);
      v15 = *(_QWORD *)(v4 + 568);
      v16 = Pool2;
      v26 = *(__int64 **)(v4 + 576);
      sub_1400053CC((__int64 *)v24);
      if ( !(unsigned int)sub_140004B88((__int64 *)v24, &v27) )
      {
        v17 = v26;
        do
        {
          v18 = v27;
          sub_140046FD0(v27, v16, v15, 100, 0);
          a1[27] = v16;
          v19 = *(unsigned int **)(v18 + 584);
          v15 += 32LL;
          *(_QWORD *)v16 = v18;
          *(_DWORD *)(v16 + 80) = 100;
          *(_QWORD *)(v16 + 64) = (char *)v2 + *v19;
          *(_QWORD *)(v16 + 72) = (char *)v2 + v19[1];
          *v17++ = v16;
          v16 += 88LL;
        }
        while ( !(unsigned int)sub_140004B88((__int64 *)v24, &v27) );
        v7 = (_QWORD *)Pool2;
      }
      v5 = a2(v4);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2528))(qword_140019128, qword_1400197B8);
        sub_1400053CC((__int64 *)v24);
        if ( !(unsigned int)sub_140004B88((__int64 *)v24, &v27) )
        {
          v20 = v7 + 5;
          do
          {
            *(_QWORD *)(v27 + 240) = v20 - 5;
            v21 = (_QWORD *)qword_1400191E0;
            if ( *(__int64 **)qword_1400191E0 != &qword_1400191D8 )
              __fastfail(3u);
            *v20 = &qword_1400191D8;
            v20[1] = v21;
            *v21 = v20;
            qword_1400191E0 = (__int64)v20;
          }
          while ( !(unsigned int)sub_140004B88((__int64 *)v24, &v27) );
        }
        (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_1400197B8);
        v7 = 0LL;
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, 0x72637250u);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
