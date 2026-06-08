/*
 * XREFs of sub_14003DA60 @ 0x14003DA60
 * Callers:
 *     sub_14003D4B0 @ 0x14003D4B0 (sub_14003D4B0.c)
 * Callees:
 *     sub_140006700 @ 0x140006700 (sub_140006700.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_140028E2C @ 0x140028E2C (sub_140028E2C.c)
 *     sub_1400293E0 @ 0x1400293E0 (sub_1400293E0.c)
 */

__int64 __fastcall sub_14003DA60(__int64 a1)
{
  unsigned __int32 *v2; // rdx
  unsigned __int32 v3; // ecx
  unsigned __int32 v4; // eax
  unsigned __int32 *v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v11; // rax
  int v12; // eax
  __m256i v13; // [rsp+28h] [rbp-E0h] BYREF
  char v14[272]; // [rsp+48h] [rbp-C0h] BYREF
  char v15[272]; // [rsp+158h] [rbp+50h] BYREF

  sub_140010680(v15, 0, 0x108uLL);
  memset(&v13.m256i_u64[1], 0, 24);
  sub_140010680(v14, 0, 0x108uLL);
  KeInitializeAffinityEx2(v14, 32LL);
  v2 = *(unsigned __int32 **)(a1 + 728);
  if ( v2 )
  {
    v3 = 0;
    v13.m256i_i32[0] = 0;
    if ( *v2 )
    {
      v4 = 0;
      do
      {
        v5 = &v2[8 * v4];
        v6 = *((_QWORD *)v5 + 2);
        if ( v6 )
        {
          KeInitializeAffinityEx2(v15, 32LL);
          KeCopyAffinityEx2(v15, v6 + 48);
          if ( sub_1400293E0(a1, (_QWORD *)v5 + 1) )
            KeOrAffinityEx2(v15, v14, v14);
          v3 = v13.m256i_i32[0];
        }
        v2 = *(unsigned __int32 **)(a1 + 728);
        v13.m256i_i32[0] = ++v3;
        v4 = v3;
      }
      while ( v3 < *v2 );
    }
    v7 = 0;
    KeInitializeEnumerationContext(&v13.m256i_u64[1], v14);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v13.m256i_u64[1]) )
    {
      v11 = sub_140006700(v13.m256i_u32[0]);
      v12 = sub_140028E2C(v11);
      if ( v12 < 0 )
        v7 = v12;
    }
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 40LL);
    v13.m256i_i32[0] = 0;
    if ( v8 )
    {
      v9 = 0LL;
      do
      {
        *(_QWORD *)(88 * v9 + *(_QWORD *)(a1 + 712) + 120) = 0LL;
        v9 = (unsigned int)(v13.m256i_i32[0] + 1);
        v13.m256i_i32[0] = v9;
      }
      while ( (unsigned int)v9 < v8 );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 728), 0x72637250u);
    *(_QWORD *)(a1 + 728) = 0LL;
  }
  else
  {
    return 0;
  }
  return v7;
}
