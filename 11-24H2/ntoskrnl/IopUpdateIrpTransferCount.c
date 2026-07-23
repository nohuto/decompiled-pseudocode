/*
 * XREFs of IopUpdateIrpTransferCount @ 0x1403B3140
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x14025FD20 (IopCopyCompleteReadRequest.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1403B4960 (IopIoRingCompleteIrp.c)
 * Callees:
 *     IopProcessUpdateTransferCount @ 0x1403B31E0 (IopProcessUpdateTransferCount.c)
 */

__int64 __fastcall IopUpdateIrpTransferCount(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 0x100) != 0 )
  {
    result = IopProcessUpdateTransferCount(a2, *(unsigned int *)(a1 + 56), 920LL);
    __addgsqword(0x2EE8u, v4);
  }
  else if ( (result & 0x200) != 0 )
  {
    result = IopProcessUpdateTransferCount(a2, *(unsigned int *)(a1 + 56), 928LL);
    __addgsqword(0x2EF0u, v5);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( v3 >= 0 )
    {
      result = IopProcessUpdateTransferCount(a2, (unsigned int)v3, 936LL);
      __addgsqword(0x2EF8u, (unsigned int)v3);
    }
  }
  return result;
}
