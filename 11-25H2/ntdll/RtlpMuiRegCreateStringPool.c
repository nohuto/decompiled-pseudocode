/*
 * XREFs of RtlpMuiRegCreateStringPool @ 0x18014A8E8
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180120B18 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpMuiRegResizeStringPool @ 0x18014B09C (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     _SafeAllocBlob @ 0x1800E8BB0 (_SafeAllocBlob.c)
 */

_QWORD *__fastcall RtlpMuiRegCreateStringPool(int a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  _QWORD *result; // rax
  _WORD *v5; // rcx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v2 = 4;
  if ( a1 >= 1 )
    v2 = a1;
  v3 = 40;
  if ( a2 >= 1 )
    v3 = a2;
  result = SafeAllocBlob(0x20u, v2, 2u, v3, 2u, &v6);
  if ( result )
  {
    *(_DWORD *)result = v6;
    result[2] = result + 4;
    *((_WORD *)result + 4) = v3;
    *((_WORD *)result + 2) = v2;
    v5 = (_WORD *)result + (unsigned __int16)v2 + 16;
    result[3] = v5;
    *v5 = 0;
    *((_WORD *)result + 5) = 1;
    *(_WORD *)result[2] = 0;
    *((_WORD *)result + 3) = 1;
  }
  return result;
}
