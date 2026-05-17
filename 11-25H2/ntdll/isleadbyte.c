/*
 * XREFs of isleadbyte @ 0x180126508
 * Callers:
 *     ReadString @ 0x18012D158 (ReadString.c)
 *     _input_l @ 0x18012D4C0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
