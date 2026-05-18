/*
 * XREFs of sub_1800C27B8 @ 0x1800C27B8
 * Callers:
 *     ??_G__ExceptionPtr@@QEAAPEAXI@Z_1 @ 0x1800C2880 (--_G__ExceptionPtr@@QEAAPEAXI@Z_1.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800C2E00 @ 0x1800C2E00 (sub_1800C2E00.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C27B8(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  sub_180011C04((__int64)(a1 + 9), &v5);
  if ( v5 && *(_BYTE *)(v5 + 3640) )
  {
    v2 = a1 + 18;
    v3 = a1[18];
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
      sub_1800C2E00(a1, 0LL);
    }
  }
  else
  {
    sub_18001CAFC(&stru_1801B9548, 3);
    v2 = a1 + 18;
  }
  if ( v6 )
    sub_18001060C(v6);
  sub_18000E954(a1 + 19);
  sub_18000E954(v2);
  return sub_180037210(a1);
}
