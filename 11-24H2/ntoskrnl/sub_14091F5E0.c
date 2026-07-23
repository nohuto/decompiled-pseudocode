/*
 * XREFs of sub_14091F5E0 @ 0x14091F5E0
 * Callers:
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 *     sub_14091E9C0 @ 0x14091E9C0 (sub_14091E9C0.c)
 *     sub_14091ED6C @ 0x14091ED6C (sub_14091ED6C.c)
 *     sub_14091EE7C @ 0x14091EE7C (sub_14091EE7C.c)
 *     sub_14091F17C @ 0x14091F17C (sub_14091F17C.c)
 *     sub_14091F4A0 @ 0x14091F4A0 (sub_14091F4A0.c)
 *     sub_1409D9820 @ 0x1409D9820 (sub_1409D9820.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14091F5E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    if ( a2 )
      return a2 - *(_QWORD *)(a1 + 48);
    else
      LOBYTE(v2) = -1;
  }
  else
  {
    LOBYTE(v2) = a2 != 0;
  }
  return v2;
}
