/*
 * XREFs of sub_180012140 @ 0x180012140
 * Callers:
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_180013040 @ 0x180013040 (sub_180013040.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180016AB8 @ 0x180016AB8 (sub_180016AB8.c)
 *     sub_180023AA8 @ 0x180023AA8 (sub_180023AA8.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 *     sub_180025980 @ 0x180025980 (sub_180025980.c)
 *     sub_18002C4D8 @ 0x18002C4D8 (sub_18002C4D8.c)
 *     sub_18002C884 @ 0x18002C884 (sub_18002C884.c)
 *     sub_18002C9AC @ 0x18002C9AC (sub_18002C9AC.c)
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_18003053C @ 0x18003053C (sub_18003053C.c)
 *     sub_180033660 @ 0x180033660 (sub_180033660.c)
 *     sub_18003905C @ 0x18003905C (sub_18003905C.c)
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 *     sub_18005D92C @ 0x18005D92C (sub_18005D92C.c)
 *     sub_18005DA40 @ 0x18005DA40 (sub_18005DA40.c)
 *     sub_18006B2F0 @ 0x18006B2F0 (sub_18006B2F0.c)
 *     sub_18006B830 @ 0x18006B830 (sub_18006B830.c)
 *     sub_18008C54C @ 0x18008C54C (sub_18008C54C.c)
 *     sub_18008C5FC @ 0x18008C5FC (sub_18008C5FC.c)
 *     sub_18008C82C @ 0x18008C82C (sub_18008C82C.c)
 *     sub_18008C888 @ 0x18008C888 (sub_18008C888.c)
 *     sub_18008CD18 @ 0x18008CD18 (sub_18008CD18.c)
 *     sub_18008D1B4 @ 0x18008D1B4 (sub_18008D1B4.c)
 *     sub_180091188 @ 0x180091188 (sub_180091188.c)
 *     sub_180098C10 @ 0x180098C10 (sub_180098C10.c)
 *     sub_1800D2008 @ 0x1800D2008 (sub_1800D2008.c)
 *     sub_1800D22B0 @ 0x1800D22B0 (sub_1800D22B0.c)
 *     sub_1800D25A4 @ 0x1800D25A4 (sub_1800D25A4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180012140(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        result = sub_18001060C(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
