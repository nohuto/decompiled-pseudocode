/*
 * XREFs of sub_18003BE3C @ 0x18003BE3C
 * Callers:
 *     sub_180011F00 @ 0x180011F00 (sub_180011F00.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_180013E0C @ 0x180013E0C (sub_180013E0C.c)
 *     sub_180013ED4 @ 0x180013ED4 (sub_180013ED4.c)
 *     sub_180016050 @ 0x180016050 (sub_180016050.c)
 *     sub_180023824 @ 0x180023824 (sub_180023824.c)
 *     sub_18002BE78 @ 0x18002BE78 (sub_18002BE78.c)
 *     sub_180039440 @ 0x180039440 (sub_180039440.c)
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_180039CC8 @ 0x180039CC8 (sub_180039CC8.c)
 *     sub_180039CF0 @ 0x180039CF0 (sub_180039CF0.c)
 *     sub_180039D60 @ 0x180039D60 (sub_180039D60.c)
 *     sub_180039EB0 @ 0x180039EB0 (sub_180039EB0.c)
 *     sub_180039F68 @ 0x180039F68 (sub_180039F68.c)
 *     sub_180039FF4 @ 0x180039FF4 (sub_180039FF4.c)
 *     sub_18003A064 @ 0x18003A064 (sub_18003A064.c)
 *     sub_18003A170 @ 0x18003A170 (sub_18003A170.c)
 *     sub_18003A238 @ 0x18003A238 (sub_18003A238.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003A508 @ 0x18003A508 (sub_18003A508.c)
 *     sub_18003A578 @ 0x18003A578 (sub_18003A578.c)
 *     sub_18003ACB4 @ 0x18003ACB4 (sub_18003ACB4.c)
 *     sub_18003AEFC @ 0x18003AEFC (sub_18003AEFC.c)
 *     sub_18003AF9C @ 0x18003AF9C (sub_18003AF9C.c)
 *     sub_18003BAF0 @ 0x18003BAF0 (sub_18003BAF0.c)
 *     sub_18003BBA4 @ 0x18003BBA4 (sub_18003BBA4.c)
 *     sub_18003BC50 @ 0x18003BC50 (sub_18003BC50.c)
 *     sub_18003CB1C @ 0x18003CB1C (sub_18003CB1C.c)
 *     sub_18003CBBC @ 0x18003CBBC (sub_18003CBBC.c)
 *     sub_18003F198 @ 0x18003F198 (sub_18003F198.c)
 *     sub_18003F5AC @ 0x18003F5AC (sub_18003F5AC.c)
 *     sub_18003FA84 @ 0x18003FA84 (sub_18003FA84.c)
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 *     sub_18005D49C @ 0x18005D49C (sub_18005D49C.c)
 *     sub_18005D564 @ 0x18005D564 (sub_18005D564.c)
 *     sub_18005D62C @ 0x18005D62C (sub_18005D62C.c)
 *     sub_18005D6F4 @ 0x18005D6F4 (sub_18005D6F4.c)
 *     sub_180063434 @ 0x180063434 (sub_180063434.c)
 *     sub_180065B14 @ 0x180065B14 (sub_180065B14.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_18006A2DC @ 0x18006A2DC (sub_18006A2DC.c)
 *     sub_18006A48C @ 0x18006A48C (sub_18006A48C.c)
 *     sub_18007864C @ 0x18007864C (sub_18007864C.c)
 *     sub_18008B0AC @ 0x18008B0AC (sub_18008B0AC.c)
 *     sub_18008C130 @ 0x18008C130 (sub_18008C130.c)
 *     sub_180099B7C @ 0x180099B7C (sub_180099B7C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18003BE3C(__int64 a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+28h] [rbp-10h]

  sub_18001268C(a1, &v1);
  if ( v1 )
    sub_180028890(v1 + 16);
  if ( v2 )
    sub_18001060C(v2);
}
