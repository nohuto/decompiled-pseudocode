/*
 * XREFs of ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14003645C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1403886A4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPRESENTMUTEX::Release(DXGPRESENTMUTEX *this)
{
  __int64 v1; // rbx
  int v3; // edx
  __int64 v4; // r8

  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1) + 776LL;
    *((_BYTE *)this + 16) = 0;
    if ( *(struct _KTHREAD **)(v1 + 24) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v1, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( *(int *)(v1 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            573,
            v3,
            v4,
            0LL,
            2,
            -1,
            L"m_OwnerAcquireCount > 0",
            573LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( (*(_DWORD *)(v1 + 32))-- == 1 )
    {
      *(_QWORD *)(v1 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
