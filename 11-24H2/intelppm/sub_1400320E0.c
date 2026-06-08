/*
 * XREFs of sub_1400320E0 @ 0x1400320E0
 * Callers:
 *     sub_14003919C @ 0x14003919C (sub_14003919C.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 *     sub_140040DB8 @ 0x140040DB8 (sub_140040DB8.c)
 */

__int64 __fastcall sub_1400320E0(__int64 a1, _QWORD *a2)
{
  int v2; // r12d
  _DWORD *Pool2; // rsi
  int v6; // edx
  int v7; // ebx
  int v8; // r9d
  unsigned int *v9; // rdi
  int v11; // eax
  _WORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // [rsp+28h] [rbp-91h]
  int v15; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  char v17; // [rsp+50h] [rbp-69h] BYREF
  int v18; // [rsp+52h] [rbp-67h]
  const char *v19; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v20)(); // [rsp+60h] [rbp-59h]
  char v21; // [rsp+68h] [rbp-51h]
  int v22; // [rsp+6Ah] [rbp-4Fh]
  const char *v23; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v24)(); // [rsp+78h] [rbp-41h]
  char v25; // [rsp+80h] [rbp-39h]
  int v26; // [rsp+82h] [rbp-37h]
  const char *v27; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v28)(); // [rsp+90h] [rbp-29h]
  char v29; // [rsp+98h] [rbp-21h]
  int v30; // [rsp+9Ah] [rbp-1Fh]
  const char *v31; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v32)(); // [rsp+A8h] [rbp-11h]
  char v33; // [rsp+B0h] [rbp-9h]
  int v34; // [rsp+B2h] [rbp-7h]
  const char *v35; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v36)(); // [rsp+C0h] [rbp+7h]

  v2 = 0;
  v22 = 0x40000;
  v15 = 0;
  v19 = "Percentage";
  v17 = 0;
  v23 = "Power";
  v18 = 0;
  v27 = "Latency";
  v21 = 1;
  v31 = "Control";
  v25 = 2;
  v20 = sub_140045530;
  v35 = "Status";
  Pool2 = 0LL;
  v24 = sub_140045530;
  v26 = 0x80000;
  v28 = sub_140045530;
  v29 = 3;
  v30 = 786432;
  v32 = sub_140045530;
  v33 = 4;
  v34 = 0x100000;
  v36 = sub_140045530;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x800u);
  v7 = sub_140040DB8(a1, 1397970015, 0, (unsigned int)&P, (__int64)&v15);
  if ( v7 < 0 )
    goto LABEL_7;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x3000000;
  if ( !v15 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
    {
LABEL_6:
      v7 = -1073741275;
      goto LABEL_7;
    }
    v8 = 36;
LABEL_5:
    LOBYTE(v6) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v6, 1, v8, (__int64)&unk_140012FE8);
    goto LABEL_6;
  }
  v9 = (unsigned int *)P;
  v11 = *((_DWORD *)P + 2);
  if ( !v11 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_6;
    v8 = 37;
    goto LABEL_5;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v11 + 4), 1919119952LL);
  if ( Pool2 )
  {
    v12 = v9 + 3;
    *Pool2 = v9[2];
    while ( 1 )
    {
      if ( v12 >= (_WORD *)((char *)v9 + v9[1]) )
      {
        *a2 = Pool2;
        Pool2 = 0LL;
        goto LABEL_8;
      }
      if ( *v12 != 3 )
      {
        v7 = -1072431096;
        goto LABEL_7;
      }
      v7 = sub_14003F9A0(
             (unsigned int)&v17,
             5,
             (int)v12 + 4,
             (unsigned __int16)v12[1],
             (__int64)&Pool2[4 * v2 + 1 + v2],
             20,
             (__int64)"_TSS",
             0);
      if ( v7 < 0 )
        break;
      v13 = (unsigned __int16)v12[1];
      if ( (unsigned __int16)v13 < 4u )
        v13 = 4LL;
      v12 = (_WORD *)((char *)v12 + v13 + 4);
      ++v2;
    }
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LODWORD(v14) = v2;
      sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x26u, (__int64)&unk_140012FE8, v14);
    }
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_7:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x800u);
  v9 = (unsigned int *)P;
LABEL_8:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v7;
}
