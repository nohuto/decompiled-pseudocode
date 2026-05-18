/*
 * XREFs of sub_180027BB8 @ 0x180027BB8
 * Callers:
 *     sub_18007F7D4 @ 0x18007F7D4 (sub_18007F7D4.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C0A74 @ 0x1800C0A74 (sub_1800C0A74.c)
 *     sub_1800C60C0 @ 0x1800C60C0 (sub_1800C60C0.c)
 *     sub_1800C6E70 @ 0x1800C6E70 (sub_1800C6E70.c)
 *     sub_1800C7C60 @ 0x1800C7C60 (sub_1800C7C60.c)
 *     sub_1800C9700 @ 0x1800C9700 (sub_1800C9700.c)
 *     sub_1800C9950 @ 0x1800C9950 (sub_1800C9950.c)
 *     sub_1800C9BB0 @ 0x1800C9BB0 (sub_1800C9BB0.c)
 *     sub_1800C9E10 @ 0x1800C9E10 (sub_1800C9E10.c)
 *     sub_1800CA800 @ 0x1800CA800 (sub_1800CA800.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027BB8(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r9d
  __int64 v4; // r8
  __int64 result; // rax

  v3 = a3;
  if ( a3 == 15 )
    v3 = *(_DWORD *)(a1 + 48);
  v4 = 160LL * v3;
  _InterlockedAdd64((volatile signed __int64 *)((char *)&unk_1801C3510 + v4), a2);
  result = *(int *)(a1 + 56);
  _InterlockedAdd64((volatile signed __int64 *)&unk_1801C3510 + 20 * result, -*(_QWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 56) = v3;
  *(_QWORD *)(a1 + 64) = a2;
  _InterlockedAdd64((volatile signed __int64 *)((char *)&unk_1801C3510 + v4), a2);
  _InterlockedAdd64((volatile signed __int64 *)((char *)&unk_1801C3510 + v4), -(__int64)a2);
  return result;
}
