/*
 * XREFs of sub_1800C2658 @ 0x1800C2658
 * Callers:
 *     ??_G__ExceptionPtr@@QEAAPEAXI@Z_1 @ 0x1800C2720 (--_G__ExceptionPtr@@QEAAPEAXI@Z_1.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_1800C2CA0 @ 0x1800C2CA0 (sub_1800C2CA0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C2658(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  sub_180011B04((__int64)(a1 + 9), &v5);
  if ( v5 && *(_BYTE *)(v5 + 3640) )
  {
    v2 = a1 + 18;
    v3 = a1[18];
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
      sub_1800C2CA0(a1, 0LL);
    }
  }
  else
  {
    sub_18001C99C(&stru_1801B8548, 3);
    v2 = a1 + 18;
  }
  if ( v6 )
    sub_18001050C(v6);
  sub_18000E854(a1 + 19);
  sub_18000E854(v2);
  return sub_1800370B0(a1);
}
