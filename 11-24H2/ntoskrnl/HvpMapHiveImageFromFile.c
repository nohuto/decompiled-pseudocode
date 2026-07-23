/*
 * XREFs of HvpMapHiveImageFromFile @ 0x14096BEA4
 * Callers:
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 * Callees:
 *     HvpMapHiveImage @ 0x1407E0050 (HvpMapHiveImage.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvpMapHiveImageFromFile(__int64 BugCheckParameter2, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+3Ch] [rbp-24h]
  PVOID P; // [rsp+40h] [rbp-20h]
  unsigned int v17; // [rsp+48h] [rbp-18h]
  int v18; // [rsp+4Ch] [rbp-14h]
  unsigned int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]

  v20 = 0;
  v4 = 0x200000;
  v14 = 0;
  v18 = 0;
  v13 = BugCheckParameter2;
  v15 = 4096;
  if ( a4 < 0x200000 )
    v4 = a4;
  v19 = a4;
  v17 = v4;
  while ( 1 )
  {
    P = (PVOID)ExAllocatePool2(0x100uLL, v4, 0x6F494D43u);
    v9 = P;
    if ( P )
      break;
    v4 = ((v17 >> 1) + 4095) & 0xFFFFF000;
    v17 = v4;
    if ( v4 < 0x10000 )
    {
      v10 = -1073741801;
      goto LABEL_8;
    }
  }
  v11 = HvpMapHiveImage(BugCheckParameter2, v6, v7, v8, (__int64)&v13);
  v9 = P;
  v10 = v11;
LABEL_8:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v10;
}
