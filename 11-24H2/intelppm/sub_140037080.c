/*
 * XREFs of sub_140037080 @ 0x140037080
 * Callers:
 *     sub_140030F30 @ 0x140030F30 (sub_140030F30.c)
 *     sub_140038B30 @ 0x140038B30 (sub_140038B30.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140004B88 @ 0x140004B88 (sub_140004B88.c)
 *     sub_1400053CC @ 0x1400053CC (sub_1400053CC.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140028658 @ 0x140028658 (sub_140028658.c)
 *     sub_1400299E0 @ 0x1400299E0 (sub_1400299E0.c)
 *     sub_1400356E0 @ 0x1400356E0 (sub_1400356E0.c)
 *     sub_140045D48 @ 0x140045D48 (sub_140045D48.c)
 *     sub_140046FD0 @ 0x140046FD0 (sub_140046FD0.c)
 */

__int64 __fastcall sub_140037080(_QWORD *a1, __int64 (__fastcall *a2)(_QWORD *))
{
  void (__fastcall *v3)(__int64, __int64, _QWORD); // rax
  _QWORD *v4; // rsi
  int v5; // ebx
  char *v6; // r14
  int v7; // ebx
  __int64 v8; // rax
  _DWORD *v9; // r13
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rsi
  _DWORD *v14; // r12
  int v15; // r14d
  __int64 v16; // rdi
  _QWORD *v18; // [rsp+30h] [rbp-40h]
  _QWORD *v19; // [rsp+38h] [rbp-38h]
  __int64 Pool2; // [rsp+40h] [rbp-30h]
  _OWORD v21[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+58h] BYREF

  v24 = 0LL;
  v3 = *(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504);
  v4 = 0LL;
  memset(v21, 0, sizeof(v21));
  LODWORD(v23) = 0;
  v3(qword_140019128, qword_140019158, 0LL);
  v5 = sub_140045D48(a1, v21, &v23);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(576 * v5), 1919119952LL);
  v6 = (char *)Pool2;
  if ( Pool2 && (v8 = sub_1400299E0((__int64)a1, v5, 1), v19 = (_QWORD *)v8, (v4 = (_QWORD *)v8) != 0LL) )
  {
    *(_WORD *)(v8 + 4) = v23;
    *(_DWORD *)(v8 + 24) = 100;
    v9 = (_DWORD *)(v8 + 20);
    *(_DWORD *)(v8 + 28) = 100;
    *(_DWORD *)(v8 + 32) = 100;
    *(_QWORD *)(v8 + 464) = guard_check_icall_nop;
    *(_WORD *)(v8 + 6) = 1;
    *(_BYTE *)(v8 + 52) = 2;
    *(_BYTE *)(v8 + 14) = byte_1400196E0;
    *(_QWORD *)(v8 + 472) = guard_check_icall_nop;
    *(_QWORD *)(v8 + 56) = 100LL;
    *(_QWORD *)(v8 + 64) = 100LL;
    *(_QWORD *)(v8 + 448) = sub_140004680;
    *(_DWORD *)(v8 + 20) = 0;
    sub_140028658(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)(v8 + 20));
    if ( *v9 )
    {
      v11 = a1[43];
      if ( v11 )
        v4[47] = v11;
      v12 = v4[70];
      *(_QWORD *)v12 = sub_140002410;
      *(_QWORD *)(v12 + 8) = 0x10000LL;
      *(_WORD *)(v12 + 16) = 257;
      v18 = (_QWORD *)v4[72];
      v23 = v4[71];
      sub_1400053CC((__int64 *)v21);
      if ( !(unsigned int)sub_140004B88((__int64 *)v21, &v24) )
      {
        v13 = v18;
        v14 = (_DWORD *)(Pool2 + 104);
        v15 = v23;
        do
        {
          v16 = v24;
          sub_140046FD0(v24, (_DWORD)v14 - 104, v15, 100, 0);
          a1[27] = v14 - 26;
          v14[116] = *v9;
          *v14 = sub_1400356E0(v16);
          *((_QWORD *)v14 - 2) = *(_QWORD *)(v16 + 336);
          v15 += 32;
          *v13 = v14 - 16;
          v14 += 144;
          ++v13;
        }
        while ( !(unsigned int)sub_140004B88((__int64 *)v21, &v24) );
        v4 = v19;
        v6 = (char *)Pool2;
      }
      v7 = a2(v4);
      if ( v7 >= 0 )
      {
        sub_1400053CC((__int64 *)v21);
        while ( !(unsigned int)sub_140004B88((__int64 *)v21, &v24) )
        {
          *(_QWORD *)(v24 + 232) = v6;
          v6 += 576;
        }
        v6 = 0LL;
        v7 = 0;
      }
    }
    else
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v10) = 2;
        sub_140003D28(off_140018050->DeviceExtension, v10, 3, 30, (__int64)&unk_140014AD0);
      }
      a1[35] &= ~0x4000000uLL;
      v7 = -1073741823;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return (unsigned int)v7;
}
