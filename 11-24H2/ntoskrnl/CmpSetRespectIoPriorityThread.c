/*
 * XREFs of CmpSetRespectIoPriorityThread @ 0x140487D14
 * Callers:
 *     CmpDoFileWrite @ 0x140A4F8F0 (CmpDoFileWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpSetRespectIoPriorityThread(__int64 a1, char a2)
{
  bool result; // al

  result = (*(_DWORD *)(a1 + 1444) & 0x80) != 0;
  *(_DWORD *)(a1 + 1444) ^= ((unsigned __int8)*(_DWORD *)(a1 + 1444) ^ (unsigned __int8)(a2 << 7)) & 0x80;
  return result;
}
