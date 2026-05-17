/*
 * XREFs of isleadbyte @ 0x180124A28
 * Callers:
 *     ReadString @ 0x18012B678 (ReadString.c)
 *     _input_l @ 0x18012B9E0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
