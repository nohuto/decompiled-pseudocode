/*
 * XREFs of sub_180012210 @ 0x180012210
 * Callers:
 *     sub_180011CE0 @ 0x180011CE0 (sub_180011CE0.c)
 *     sub_180013ACC @ 0x180013ACC (sub_180013ACC.c)
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 *     sub_18002B9F4 @ 0x18002B9F4 (sub_18002B9F4.c)
 *     sub_1800404C0 @ 0x1800404C0 (sub_1800404C0.c)
 *     sub_180046FE0 @ 0x180046FE0 (sub_180046FE0.c)
 *     sub_1800482A0 @ 0x1800482A0 (sub_1800482A0.c)
 *     sub_18004DF20 @ 0x18004DF20 (sub_18004DF20.c)
 *     sub_180056690 @ 0x180056690 (sub_180056690.c)
 *     sub_18005C584 @ 0x18005C584 (sub_18005C584.c)
 *     sub_18005C6A4 @ 0x18005C6A4 (sub_18005C6A4.c)
 *     sub_18005C7C4 @ 0x18005C7C4 (sub_18005C7C4.c)
 *     sub_18005C8E4 @ 0x18005C8E4 (sub_18005C8E4.c)
 *     sub_18005CA04 @ 0x18005CA04 (sub_18005CA04.c)
 *     sub_180083BA0 @ 0x180083BA0 (sub_180083BA0.c)
 *     sub_180085310 @ 0x180085310 (sub_180085310.c)
 *     sub_180087AE0 @ 0x180087AE0 (sub_180087AE0.c)
 *     sub_18008BAF0 @ 0x18008BAF0 (sub_18008BAF0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

void __fastcall sub_180012210(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rcx

  *a1 = a2;
  a1[1] = a3;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
      v4 = a1[1];
      v5 = 0LL;
      v6 = 0LL;
      if ( v4 )
      {
        v5 = a2;
        v6 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
      }
      *(_QWORD *)(a2 + 8) = v5;
      v7 = *(volatile signed __int32 **)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v6;
      if ( v7 )
        sub_180010544(v7);
      if ( v4 )
        sub_18001050C(v4);
    }
  }
}
