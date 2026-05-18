/*
 * XREFs of sub_18007C3D4 @ 0x18007C3D4
 * Callers:
 *     sub_18004D2AC @ 0x18004D2AC (sub_18004D2AC.c)
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_1800906F0 @ 0x1800906F0 (sub_1800906F0.c)
 * Callees:
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18007C124 @ 0x18007C124 (sub_18007C124.c)
 */

int __fastcall sub_18007C3D4(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned __int16 v5; // ax
  _OWORD *v6; // rdi
  int result; // eax

  v5 = sub_18007A010(*(_QWORD *)(a1 + 16), a2);
  v6 = (_OWORD *)sub_18007C124(a1, v5, 7);
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
