/*
 * XREFs of sub_1800B9CD0 @ 0x1800B9CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180025470 @ 0x180025470 (sub_180025470.c)
 */

__int64 __fastcall sub_1800B9CD0(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r11
  __int64 result; // rax

  sub_180025470(a1, a2);
  *(_QWORD *)(a2 + 80) = sub_1800131AC(a1 + 4216);
  *(_QWORD *)(a2 + 88) = v4;
  *(_DWORD *)(a2 + 96) = v5;
  *(_DWORD *)(a2 + 100) = v6;
  *(_QWORD *)(a2 + 104) = v7;
  result = *(unsigned int *)(a1 + 4248);
  *(_DWORD *)(a2 + 112) = result;
  return result;
}
