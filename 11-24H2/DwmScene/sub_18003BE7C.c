/*
 * XREFs of sub_18003BE7C @ 0x18003BE7C
 * Callers:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180012E60 @ 0x180012E60 (sub_180012E60.c)
 *     sub_180013BCC @ 0x180013BCC (sub_180013BCC.c)
 *     sub_180013CEC @ 0x180013CEC (sub_180013CEC.c)
 *     sub_18002BB54 @ 0x18002BB54 (sub_18002BB54.c)
 *     sub_18003947C @ 0x18003947C (sub_18003947C.c)
 *     sub_180039518 @ 0x180039518 (sub_180039518.c)
 *     sub_180039D9C @ 0x180039D9C (sub_180039D9C.c)
 *     sub_18003A648 @ 0x18003A648 (sub_18003A648.c)
 *     sub_18003ACB4 @ 0x18003ACB4 (sub_18003ACB4.c)
 *     sub_18003ADD0 @ 0x18003ADD0 (sub_18003ADD0.c)
 *     sub_18003AFD4 @ 0x18003AFD4 (sub_18003AFD4.c)
 *     GsDriverEntry @ 0x18003B030 (GsDriverEntry.c)
 *     sub_18003B060 @ 0x18003B060 (sub_18003B060.c)
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 *     sub_18003B3FC @ 0x18003B3FC (sub_18003B3FC.c)
 *     sub_18003B430 @ 0x18003B430 (sub_18003B430.c)
 *     sub_18003B4A8 @ 0x18003B4A8 (sub_18003B4A8.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B5AC @ 0x18003B5AC (sub_18003B5AC.c)
 *     sub_18003B7CC @ 0x18003B7CC (sub_18003B7CC.c)
 *     sub_18003B8EC @ 0x18003B8EC (sub_18003B8EC.c)
 *     sub_18003BBA4 @ 0x18003BBA4 (sub_18003BBA4.c)
 *     sub_18003BC50 @ 0x18003BC50 (sub_18003BC50.c)
 *     sub_18003E2AC @ 0x18003E2AC (sub_18003E2AC.c)
 *     sub_18003F198 @ 0x18003F198 (sub_18003F198.c)
 *     sub_18003FA84 @ 0x18003FA84 (sub_18003FA84.c)
 *     sub_18005C6E4 @ 0x18005C6E4 (sub_18005C6E4.c)
 *     sub_18005C804 @ 0x18005C804 (sub_18005C804.c)
 *     sub_18005C924 @ 0x18005C924 (sub_18005C924.c)
 *     sub_18005CA44 @ 0x18005CA44 (sub_18005CA44.c)
 *     sub_18005CB64 @ 0x18005CB64 (sub_18005CB64.c)
 *     sub_18006A3AC @ 0x18006A3AC (sub_18006A3AC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 */

void __fastcall sub_18003BE7C(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  sub_18001268C(a1, &v2);
  if ( v2 )
    sub_18002894C(v2 + 16, v1);
  if ( v3 )
    sub_18001060C(v3);
}
