/*
 * XREFs of isleadbyte @ 0x180122C58
 * Callers:
 *     ReadString @ 0x1801298A8 (ReadString.c)
 *     _input_l @ 0x180129C10 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
