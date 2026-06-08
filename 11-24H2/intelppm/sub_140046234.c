/*
 * XREFs of sub_140046234 @ 0x140046234
 * Callers:
 *     sub_14003A5F4 @ 0x14003A5F4 (sub_14003A5F4.c)
 * Callees:
 *     sub_1400013D0 @ 0x1400013D0 (sub_1400013D0.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140003EE0 @ 0x140003EE0 (sub_140003EE0.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_140035800 @ 0x140035800 (sub_140035800.c)
 *     sub_140046F44 @ 0x140046F44 (sub_140046F44.c)
 */

__int64 __fastcall sub_140046234(__int64 a1, int a2, __int64 a3, unsigned __int8 *a4, _QWORD *a5, int a6)
{
  int v9; // edi
  unsigned __int8 *v10; // r8
  __int64 v11; // r14
  __int64 v12; // r10
  __int64 v13; // r9
  _DWORD *v14; // rdx
  bool v15; // zf
  int v16; // ecx
  int v17; // ebx
  _QWORD **v18; // rsi
  _QWORD *i; // rbx
  __int64 Pool2; // rax
  int v21; // edx
  _BYTE *v22; // rdi
  __int64 v23; // rsi
  __int64 j; // rbx
  __int64 v25; // r12
  __int64 *v26; // rcx
  _QWORD **v27; // rsi
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h]
  _QWORD **v33; // [rsp+40h] [rbp-C0h]
  _QWORD *v34; // [rsp+48h] [rbp-B8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-B0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-A0h] BYREF
  char v37[272]; // [rsp+70h] [rbp-90h] BYREF

  v34 = a5;
  sub_140010680(v37, 0, 0x108uLL);
  v31 = 0LL;
  *a5 = 0LL;
  v9 = 0;
  v10 = a4;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v11 = 2LL;
  v12 = 2LL;
  do
  {
    if ( *v10 )
    {
      v13 = *v10;
      v14 = (_DWORD *)(*((_QWORD *)v10 + 1) + 12LL);
      do
      {
        v15 = *v14 == a2;
        v16 = v9 + 1;
        v14 += 10;
        if ( !v15 )
          v16 = v9;
        v9 = v16;
        --v13;
      }
      while ( v13 );
    }
    v10 += 16;
    --v12;
  }
  while ( v12 );
  if ( !v9 )
    return 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (unsigned int)-1073741823;
    KeInitializeAffinityEx2(v37, 32LL);
    KeAddProcessorAffinityEx(v37, *(unsigned int *)(a1 + 56));
  }
  else
  {
    KeInitializeAffinityEx2(v37, 32LL);
    v17 = sub_140035800(a1, (__int64)v37);
    if ( v17 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x22u, (__int64)&unk_140014B60, v17, v31);
      return (unsigned int)v17;
    }
  }
  v18 = (_QWORD **)((char *)&unk_140019178 + 16 * a6);
  v33 = v18;
  for ( i = *v18; i != v18; i = (_QWORD *)*i )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(v37, i + 2) )
    {
      *a5 = i;
      return 0;
    }
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(24 * (v9 + 13)), 1919119952LL);
  v22 = (_BYTE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 304) = a2;
    KeInitializeAffinityEx2(Pool2 + 16, 32LL);
    KeCopyAffinityEx2(v22 + 16, v37);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(qword_140019120 + 2520))(
            qword_140019128,
            0LL,
            v22 + 280);
    if ( v17 >= 0 )
    {
      v32 = KeQueryInterruptTimePrecise(&v31);
      KeFirstGroupAffinityEx(&Affinity, v37);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v23 = v32;
      do
      {
        for ( j = 0LL; (unsigned int)j < *a4; j = (unsigned int)(j + 1) )
        {
          v25 = *((_QWORD *)a4 + 1) + 40 * j;
          if ( *(_DWORD *)(v25 + 12) == a2 && (int)sub_140046F44(v25, &v22[24 * (unsigned __int8)v22[308] + 312]) >= 0 )
          {
            v26 = (__int64 *)&v22[24 * (unsigned __int8)v22[308] + 312];
            *v26 = v25;
            sub_1400013D0(v26, v23);
            ++v22[308];
          }
        }
        a4 += 16;
        --v11;
      }
      while ( v11 );
      v27 = v33;
      v28 = v33[1];
      if ( (_QWORD **)*v28 != v33 )
        __fastfail(3u);
      *((_QWORD *)v22 + 1) = v28;
      *(_QWORD *)v22 = v27;
      *v28 = v22;
      v29 = v34;
      v27[1] = v22;
      *v29 = v22;
      sub_140003EE0((__int64)v22, 0);
      v17 = 0;
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    else
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, 0x24u, (__int64)&unk_140014B60, v17, v31);
      ExFreePoolWithTag(v22, 0x72637250u);
    }
  }
  else
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v21) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v21, 4, 35, (__int64)&unk_140014B60);
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v17;
}
