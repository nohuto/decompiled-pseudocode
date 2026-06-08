/*
 * XREFs of sub_140040340 @ 0x140040340
 * Callers:
 *     sub_140039440 @ 0x140039440 (sub_140039440.c)
 *     sub_14003EAA0 @ 0x14003EAA0 (sub_14003EAA0.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_1400404C0 @ 0x1400404C0 (sub_1400404C0.c)
 */

__int64 __fastcall sub_140040340(__int64 a1)
{
  unsigned int *v2; // rax
  unsigned int v3; // edx
  char v4; // di
  __int64 v5; // rax
  void *Pool2; // rax
  void *v7; // rdx
  unsigned int *v8; // r8
  unsigned int i; // r10d
  __int64 v10; // rdx
  int v11; // r10d
  PVOID v12; // rdi
  int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+50h] [rbp-10h]

  HIDWORD(v16) = 0;
  v2 = *(unsigned int **)(a1 + 528);
  v3 = *v2;
  v4 = *((_BYTE *)v2 + 16);
  v5 = *v2 + 1;
  if ( v4 == 1 )
    v5 = v3;
  v16 = (unsigned int)v5;
  Pool2 = (void *)ExAllocatePool2(64LL, 24 * v5, 1919119952LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    P = Pool2;
    if ( v4 != 1 )
    {
      v19 = 0;
      v18 = 0LL;
      LOBYTE(v18) = 127;
      BYTE12(v18) = 1;
      HIWORD(v18) = 0;
      sub_1400404C0(&v18, Pool2);
      v7 = (void *)(v15 + 24);
    }
    v8 = *(unsigned int **)(a1 + 528);
    for ( i = 0; i < *v8; i = v11 + 1 )
    {
      sub_1400404C0(&v8[4 * i + 1 + i], v7);
      v8 = *(unsigned int **)(a1 + 528);
      v7 = (void *)(v10 + 24);
    }
    v12 = P;
    v13 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 15LL, &v16);
    if ( v13 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 4u, 2u, 0x1Au, (__int64)&unk_140014AE0, v13, v16);
      v13 = 0;
    }
    ExFreePoolWithTag(v12, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
