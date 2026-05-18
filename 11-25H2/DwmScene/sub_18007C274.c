/*
 * XREFs of sub_18007C274 @ 0x18007C274
 * Callers:
 *     sub_18004D14C @ 0x18004D14C (sub_18004D14C.c)
 *     sub_180077FC0 @ 0x180077FC0 (sub_180077FC0.c)
 *     sub_180090590 @ 0x180090590 (sub_180090590.c)
 * Callees:
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_180079EB0 @ 0x180079EB0 (sub_180079EB0.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

int __fastcall sub_18007C274(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned __int16 v5; // ax
  _OWORD *v6; // rdi
  int result; // eax

  v5 = sub_180079EB0(*(_QWORD *)(a1 + 16), a2);
  v6 = (_OWORD *)sub_18007BFC4(a1, v5, 7);
  result = memcmp(v6, a3, 0x40uLL);
  if ( result )
  {
    *v6 = *a3;
    v6[1] = a3[1];
    v6[2] = a3[2];
    v6[3] = a3[3];
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
