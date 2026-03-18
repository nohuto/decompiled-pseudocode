/*
 * XREFs of MiFillLogProcessInfo @ 0x140446A08
 * Callers:
 *     MiLogHotPatchOperation @ 0x1407F3824 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F3CA4 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFillLogProcessInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // ecx

  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    result = 0LL;
    v4 = 0;
  }
  else
  {
    result = a1 - 200;
    v4 = *(_DWORD *)(a1 - 560);
  }
  *a2 = v4;
  *a3 = result;
  return result;
}
