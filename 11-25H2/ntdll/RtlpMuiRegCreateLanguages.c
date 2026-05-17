/*
 * XREFs of RtlpMuiRegCreateLanguages @ 0x18014A888
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180120B18 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _SafeAllocBlob @ 0x1800E8BB0 (_SafeAllocBlob.c)
 */

__int64 RtlpMuiRegCreateLanguages()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  result = SafeAllocBlob(0x18u, 4u, 0x1Cu, 0, 0, &v1);
  if ( result )
  {
    *(_DWORD *)result = v1;
    *(_QWORD *)(result + 16) = result + 24;
    *(_DWORD *)(result + 4) = 4;
  }
  return result;
}
