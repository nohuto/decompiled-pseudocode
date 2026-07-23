/*
 * XREFs of ViGetMapRegisterFile @ 0x140B8AFB0
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140B88230 (VfFlushAdapterBuffers.c)
 *     VfMapTransfer @ 0x140B89310 (VfMapTransfer.c)
 *     ViSwap @ 0x140B8BE64 (ViSwap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetMapRegisterFile(__int64 a1)
{
  BOOL v1; // eax
  unsigned __int64 v2; // rcx

  v1 = 0;
  v2 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 )
    v1 = *(_DWORD *)v2 == -1393569779;
  return v2 & -(__int64)v1;
}
