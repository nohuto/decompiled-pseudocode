/*
 * XREFs of VidMmBeginDmaBufferCPUAccess @ 0x1400F12D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmBeginDmaBufferCPUAccess(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = a1[16];
  if ( *(_DWORD *)(result + 32) )
  {
    result = a1[6];
    v3 = *(_QWORD *)(result + 232);
  }
  else
  {
    v3 = a1[8];
  }
  *a2 = v3;
  return result;
}
