/*
 * XREFs of ?IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D979C
 * Callers:
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400DA884 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::IncrementCurrentUsage(VIDMM_DEVICE *this, __int64 ***a2)
{
  __int64 *v2; // r9
  __int64 v3; // r11
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // rcx

  v2 = **a2;
  v3 = *v2;
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 304 * (v2[3] & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (v2[3] & 0x1E0000) == 0x40000 )
    v5 = 0;
  else
    v5 = (*((_DWORD *)v2 + 6) >> 17) & 0xF;
  *(_QWORD *)(v4 + 8LL * v5 + 80) += *(_QWORD *)(v3 + 16);
  v6 = (*((_DWORD *)v2 + 6) >> 13) & 0xF;
  *(_QWORD *)(v4 + 8 * v6 + 144) += *(_QWORD *)(v3 + 16);
}
