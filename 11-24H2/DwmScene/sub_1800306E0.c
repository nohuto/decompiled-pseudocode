/*
 * XREFs of sub_1800306E0 @ 0x1800306E0
 * Callers:
 *     sub_1800354B8 @ 0x1800354B8 (sub_1800354B8.c)
 *     sub_18003573C @ 0x18003573C (sub_18003573C.c)
 *     sub_1800542C0 @ 0x1800542C0 (sub_1800542C0.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 *     sub_1800CE48C @ 0x1800CE48C (sub_1800CE48C.c)
 *     sub_1800CF224 @ 0x1800CF224 (sub_1800CF224.c)
 *     sub_1800D006C @ 0x1800D006C (sub_1800D006C.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001E6D4 @ 0x18001E6D4 (sub_18001E6D4.c)
 */

__int64 __fastcall sub_1800306E0(__int64 a1, __int64 a2)
{
  const void *v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = (const void *)sub_1800131AC(a2);
    sub_18001E6D4(a1, v3, *(_QWORD *)(v4 + 16));
  }
  return a1;
}
