/*
 * XREFs of sub_180013690 @ 0x180013690
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_18007C298 @ 0x18007C298 (sub_18007C298.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180013690(__int64 a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  void *v8; // rdx
  __int64 result; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v3 = a3;
    v10[0] = 0LL;
    v10[1] = _mm_load_si128((const __m128i *)&xmmword_18018D3A0);
    LOBYTE(v10[0]) = 0;
    if ( !a2 )
    {
      sub_1800133F4((__int64)v10, (__int64)&unk_1801C7FB8);
      goto LABEL_13;
    }
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
          {
LABEL_13:
            LOBYTE(a3) = v3 == 1;
            sub_18007C298(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL), v10, a3);
            sub_180011B5C((__int64)v10);
            return 0LL;
          }
          v8 = &unk_1801C7F98;
        }
        else
        {
          v8 = &unk_1801C7F78;
        }
      }
      else
      {
        v8 = &unk_1801C7FD8;
      }
    }
    else
    {
      v8 = &unk_1801C7F58;
    }
    sub_1800133F4((__int64)v10, (__int64)v8);
    goto LABEL_13;
  }
  catch ( ... )
  {
    sub_18000F1E4(
      retaddr,
      222LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
