/*
 * XREFs of sub_14002F738 @ 0x14002F738
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140004B88 @ 0x140004B88 (sub_140004B88.c)
 *     sub_1400053CC @ 0x1400053CC (sub_1400053CC.c)
 *     sub_14000B3D8 @ 0x14000B3D8 (sub_14000B3D8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14002EF8C @ 0x14002EF8C (sub_14002EF8C.c)
 *     sub_14002F480 @ 0x14002F480 (sub_14002F480.c)
 *     sub_14002F544 @ 0x14002F544 (sub_14002F544.c)
 *     sub_14002FC44 @ 0x14002FC44 (sub_14002FC44.c)
 *     sub_14002FD80 @ 0x14002FD80 (sub_14002FD80.c)
 *     sub_140045D48 @ 0x140045D48 (sub_140045D48.c)
 */

__int64 __fastcall sub_14002F738(__int64 a1)
{
  unsigned int v2; // esi
  void (__fastcall *v3)(__int64, __int64, _QWORD); // rax
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r14
  __int64 *v10; // r12
  __int64 v11; // rcx
  _DWORD *v12; // r13
  const wchar_t **v13; // r15
  _DWORD *v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  bool v17; // sf
  int v18; // eax
  const wchar_t **v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r11
  __int64 v27; // rbx
  int v29; // [rsp+20h] [rbp-60h]
  _OWORD v30[2]; // [rsp+58h] [rbp-28h] BYREF
  const wchar_t **v31; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v32; // [rsp+D0h] [rbp+50h] BYREF
  _DWORD *v33; // [rsp+D8h] [rbp+58h]

  v2 = 0;
  v32 = 0LL;
  v3 = *(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504);
  memset(v30, 0, sizeof(v30));
  v3(qword_140019128, qword_140019158, 0LL);
  if ( (unsigned int)sub_140045D48(a1, v30, &v31) != 1 )
  {
    v4 = 0LL;
    sub_1400053CC((__int64 *)v30);
    v5 = sub_140004B88((__int64 *)v30, &v32);
    v8 = 0x10FF300000LL;
    while ( !v5 )
    {
      v9 = v32;
      if ( v32 != a1 )
      {
        v10 = (__int64 *)(a1 + 280);
        v11 = *(_QWORD *)(a1 + 280);
        v12 = (_DWORD *)(a1 + 280);
        if ( (v8 & v11) == (v8 & *(_QWORD *)(v32 + 280)) )
        {
          v13 = (const wchar_t **)(a1 + 64);
        }
        else
        {
          v13 = (const wchar_t **)(a1 + 64);
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            sub_14000B3D8(
              (__int64)off_140018050->DeviceExtension,
              v8 & v11,
              v6,
              v7,
              v29,
              *v13,
              *(const wchar_t **)(v32 + 64));
            v8 = 0x10FF300000LL;
          }
          v11 = *v10;
          v12 = (_DWORD *)(a1 + 280);
          v4 |= v8 & (*(_QWORD *)(v9 + 280) ^ *v10);
        }
        v14 = v12;
        if ( (v11 & 0x70000000) != 0 )
        {
          v15 = sub_14002F480(*(const wchar_t **)(a1 + 64), a1 + 424, *(const wchar_t **)(v9 + 64), a1 + 424, "_PCT");
          v33 = v12;
          v16 = v4 | 0x70000000;
          v17 = v15 < 0;
          v18 = *(_DWORD *)(a1 + 280);
          if ( !v17 )
            v16 = v4;
          v4 = v16;
          v19 = (const wchar_t **)(a1 + 64);
          v31 = (const wchar_t **)(a1 + 64);
          if ( (v18 & 0x40000000) != 0 )
          {
            v20 = *(_QWORD *)(v9 + 456);
            v21 = *(_QWORD *)(v9 + 64);
            v22 = *(_QWORD *)(a1 + 456);
            v23 = *(_QWORD *)(a1 + 64);
            v33 = v12;
            v31 = (const wchar_t **)(a1 + 64);
            if ( (int)sub_14002FC44(v23, v22, v21, v20, (__int64)"XPSS") >= 0 )
            {
              v19 = (const wchar_t **)(a1 + 64);
            }
            else
            {
              v4 |= 0x40000000uLL;
              v19 = (const wchar_t **)(a1 + 64);
              v33 = (_DWORD *)(a1 + 280);
              v31 = (const wchar_t **)(a1 + 64);
            }
          }
          v14 = v12;
          v13 = v19;
          if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0
            && (int)sub_14002FC44(
                      *(_QWORD *)(a1 + 64),
                      *(_QWORD *)(a1 + 448),
                      *(_QWORD *)(v9 + 64),
                      *(_QWORD *)(v9 + 448),
                      (__int64)"_PSS") < 0 )
          {
            v14 = v33;
            v4 |= 0x30000000uLL;
            v13 = v31;
          }
        }
        if ( (*v14 & 0x3300000) != 0 )
        {
          v13 = (const wchar_t **)(a1 + 64);
          v24 = sub_14002F480(*(const wchar_t **)(a1 + 64), a1 + 480, *(const wchar_t **)(v9 + 64), a1 + 480, "_PTC");
          v25 = v4 | 0x3300000;
          if ( v24 >= 0 )
            v25 = v4;
          v4 = v25;
          if ( (int)sub_14002FD80(*v13, *(_QWORD *)(a1 + 504), *(_QWORD *)(v9 + 64), *(_QWORD *)(v9 + 504)) < 0 )
            v4 |= 0x3300000uLL;
        }
        if ( (*v14 & 0x8000000) != 0
          && (int)sub_14002EF8C(*v13, *(_QWORD *)(a1 + 592), *(const wchar_t **)(v9 + 64), *(_QWORD *)(v9 + 592)) < 0 )
        {
          v4 |= 0x8000000uLL;
        }
        if ( (*(_QWORD *)v14 & 0x1000000000LL) != 0
          && (int)sub_14002F544(*v13, *(_QWORD *)(a1 + 1184), *(const wchar_t **)(v9 + 64), *(_QWORD *)(v9 + 1184)) < 0 )
        {
          v4 |= 0x1000000000uLL;
        }
      }
      v5 = sub_140004B88((__int64 *)v30, &v32);
    }
    sub_1400053CC((__int64 *)v30);
    if ( !(unsigned int)sub_140004B88((__int64 *)v30, &v32) )
    {
      v27 = ~v4;
      do
        *(_QWORD *)(v32 + 280) &= v27;
      while ( !(unsigned int)sub_140004B88((__int64 *)v30, &v32) );
    }
    v2 = (v26 & *(_QWORD *)(a1 + 280)) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  return v2;
}
