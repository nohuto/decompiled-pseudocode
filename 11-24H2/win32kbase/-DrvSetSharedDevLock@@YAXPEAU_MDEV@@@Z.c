/*
 * XREFs of ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x140198F20
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x14003E0B0 (GreDeleteSemaphore.c)
 */

void __fastcall DrvSetSharedDevLock(struct _MDEV *a1, __int64 a2)
{
  unsigned int i; // esi
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  struct _ERESOURCE *v6; // rcx
  signed __int32 v7; // ett

  for ( i = 0; i < *((_DWORD *)a1 + 5); ++i )
  {
    v4 = *(_QWORD *)a1;
    v5 = (_QWORD *)*((_QWORD *)a1 + 7 * i + 5);
    v6 = (struct _ERESOURCE *)v5[6];
    v5[3] = *(_QWORD *)a1;
    if ( v6 != *(struct _ERESOURCE **)(v4 + 48) )
    {
      if ( (v5[5] & 0x10000) == 0 )
      {
        GreDeleteSemaphore(v6, a2);
        _m_prefetchw(v5 + 5);
        do
          v7 = *((_DWORD *)v5 + 10);
        while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)v5 + 10, v7 | 0x10000, v7) );
      }
      v5[6] = *(_QWORD *)(v4 + 48);
    }
  }
}
