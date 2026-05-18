/*
 * XREFs of sub_18005F7E0 @ 0x18005F7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180032310 @ 0x180032310 (sub_180032310.c)
 *     sub_18005E130 @ 0x18005E130 (sub_18005E130.c)
 *     sub_180065940 @ 0x180065940 (sub_180065940.c)
 *     sub_180065B14 @ 0x180065B14 (sub_180065B14.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005F7E0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

  v4 = unknown_libname_81(&v12, a2);
  sub_180032310(a1, &v10, v5, v4);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 440) & 0x2000000) != 0 )
    {
      v7 = sub_18005E130(&v13, &v10);
      LOBYTE(v8) = 1;
      sub_180065940(a1, v7, v8);
      if ( v14 )
        sub_18001060C(v14);
    }
  }
  LOBYTE(v6) = 1;
  result = sub_180065B14(a1, a2, v6);
  if ( v11 )
    return sub_18001060C(v11);
  return result;
}
