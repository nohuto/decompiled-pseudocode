/*
 * XREFs of ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1400C80E0
 * Callers:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1400C7E40 (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1400C7EA0 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x1400C8194 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1400C8270 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     DrvQueryDisplayConfigInternal @ 0x1400C82C8 (DrvQueryDisplayConfigInternal.c)
 */

__int64 __fastcall QDC_AUTO_BUFFERS::TryFillOnce(
        QDC_AUTO_BUFFERS *this,
        unsigned int a2,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a3)
{
  int *v3; // rdi
  int v5; // ebp
  __int64 result; // rax
  int v9; // ecx
  QDC_AUTO_BUFFERS *v10; // rax

  v3 = (int *)((char *)this + 432);
  v5 = *((_DWORD *)this + 108);
  result = DrvGetDisplayConfigBufferSizesInternal(a2, (char *)this + 432);
  if ( (int)result >= 0 )
  {
    v9 = v5 + 1;
    if ( v5 + 1 <= (unsigned int)*v3 )
      v9 = *v3;
    *v3 = v9;
    QDC_AUTO_BUFFERS::Free(this);
    if ( (unsigned int)*v3 > 2 )
      v10 = (QDC_AUTO_BUFFERS *)PALLOCMEM((unsigned int)(216 * *v3), 0x73726447u);
    else
      v10 = this;
    *((_QWORD *)this + 55) = v10;
    if ( v10 )
      return DrvQueryDisplayConfigInternal(a2, (char *)this + 432, v10, a3);
    else
      return 3221225495LL;
  }
  return result;
}
