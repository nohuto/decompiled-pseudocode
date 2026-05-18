/*
 * XREFs of sub_180012310 @ 0x180012310
 * Callers:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180013BCC @ 0x180013BCC (sub_180013BCC.c)
 *     sub_180013CEC @ 0x180013CEC (sub_180013CEC.c)
 *     sub_18002BB54 @ 0x18002BB54 (sub_18002BB54.c)
 *     sub_180040620 @ 0x180040620 (sub_180040620.c)
 *     sub_180047140 @ 0x180047140 (sub_180047140.c)
 *     sub_180048400 @ 0x180048400 (sub_180048400.c)
 *     sub_18004E080 @ 0x18004E080 (sub_18004E080.c)
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 *     sub_18005C6E4 @ 0x18005C6E4 (sub_18005C6E4.c)
 *     sub_18005C804 @ 0x18005C804 (sub_18005C804.c)
 *     sub_18005C924 @ 0x18005C924 (sub_18005C924.c)
 *     sub_18005CA44 @ 0x18005CA44 (sub_18005CA44.c)
 *     sub_18005CB64 @ 0x18005CB64 (sub_18005CB64.c)
 *     sub_180083D00 @ 0x180083D00 (sub_180083D00.c)
 *     sub_180085470 @ 0x180085470 (sub_180085470.c)
 *     sub_180087C40 @ 0x180087C40 (sub_180087C40.c)
 *     sub_18008BC50 @ 0x18008BC50 (sub_18008BC50.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

void __fastcall sub_180012310(_QWORD *a1, __int64 a2, __int64 a3)
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
        sub_180010644(v7);
      if ( v4 )
        sub_18001060C(v4);
    }
  }
}
