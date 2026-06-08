/*
 * XREFs of sub_140027424 @ 0x140027424
 * Callers:
 *     sub_140027008 @ 0x140027008 (sub_140027008.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 *     sub_140040DB8 @ 0x140040DB8 (sub_140040DB8.c)
 */

__int64 __fastcall sub_140027424(__int64 a1, _QWORD *a2)
{
  void *Pool2; // rsi
  int v5; // edx
  int v6; // ebx
  PVOID v7; // rdi
  int v9; // edx
  char v10; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+42h] [rbp-2Eh]
  const char *v12; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v13)(); // [rsp+50h] [rbp-20h]
  char v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ah] [rbp-16h]
  const char *v16; // [rsp+60h] [rbp-10h]
  __int64 (__fastcall *v17)(); // [rsp+68h] [rbp-8h]
  int v18; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h] BYREF

  v14 = 1;
  v18 = 0;
  v12 = "InputBufferOffset";
  v10 = 0;
  v11 = 0;
  v16 = "OutputBufferOffset";
  v13 = sub_140045530;
  Pool2 = 0LL;
  v15 = 0x40000;
  v17 = sub_140045530;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x8000u);
  v6 = sub_140040DB8(a1, 1346585424, 0, (unsigned int)&P, (__int64)&v18);
  if ( v6 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x80000000;
    if ( v18 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, 8LL, 1919119952LL);
      if ( Pool2 )
      {
        v7 = P;
        v6 = sub_14003F9A0(
               (unsigned int)&v10,
               2,
               (int)P + 12,
               *((_DWORD *)P + 1) - 12,
               (__int64)Pool2,
               8,
               (__int64)"PCCP",
               0);
        if ( v6 >= 0 )
        {
          *a2 = Pool2;
          goto LABEL_9;
        }
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v9) = 2;
          sub_140003D28(off_140018050->DeviceExtension, v9, 1, 46, (__int64)&unk_140012FE8);
        }
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v5) = 2;
        sub_140003D28(off_140018050->DeviceExtension, v5, 1, 45, (__int64)&unk_140012FE8);
      }
      v6 = -1073741275;
    }
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x8000u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v7 = P;
LABEL_9:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v6;
}
