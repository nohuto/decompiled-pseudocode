/*
 * XREFs of sub_180027D18 @ 0x180027D18
 * Callers:
 *     sub_18007F934 @ 0x18007F934 (sub_18007F934.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C0BD4 @ 0x1800C0BD4 (sub_1800C0BD4.c)
 *     sub_1800C6220 @ 0x1800C6220 (sub_1800C6220.c)
 *     sub_1800C6FD0 @ 0x1800C6FD0 (sub_1800C6FD0.c)
 *     sub_1800C7DC0 @ 0x1800C7DC0 (sub_1800C7DC0.c)
 *     sub_1800C9860 @ 0x1800C9860 (sub_1800C9860.c)
 *     sub_1800C9AB0 @ 0x1800C9AB0 (sub_1800C9AB0.c)
 *     sub_1800C9D10 @ 0x1800C9D10 (sub_1800C9D10.c)
 *     sub_1800C9F70 @ 0x1800C9F70 (sub_1800C9F70.c)
 *     sub_1800CA960 @ 0x1800CA960 (sub_1800CA960.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027D18(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r9d
  __int64 v4; // r8
  __int64 result; // rax

  v3 = a3;
  if ( a3 == 15 )
    v3 = *(_DWORD *)(a1 + 48);
  v4 = 160LL * v3;
  _InterlockedAdd64((volatile signed __int64 *)((char *)&unk_1801C4520 + v4), a2);
  result = *(int *)(a1 + 56);
  _InterlockedAdd64((volatile signed __int64 *)&unk_1801C4520 + 20 * result, -*(_QWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 56) = v3;
  *(_QWORD *)(a1 + 64) = a2;
  _InterlockedAdd64((volatile signed __int64 *)((char *)&unk_1801C4520 + v4), a2);
  _InterlockedAdd64((volatile signed __int64 *)((char *)&unk_1801C4520 + v4), -(__int64)a2);
  return result;
}
