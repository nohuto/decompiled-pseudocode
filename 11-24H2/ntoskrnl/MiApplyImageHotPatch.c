/*
 * XREFs of MiApplyImageHotPatch @ 0x1407F1C70
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     KeGenericCallDpc @ 0x14048F660 (KeGenericCallDpc.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     RtlApplyHotPatch @ 0x140B65BA0 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _MDL *v6; // rdi
  PVOID MappedSystemVa; // rsi
  int v8; // r15d
  int v9; // r14d
  void *v10; // r10
  struct _MDL *Mdl; // rax
  char Priority; // [rsp+28h] [rbp-120h]
  int v14; // [rsp+48h] [rbp-100h]
  int v15; // [rsp+78h] [rbp-D0h]
  int v16; // [rsp+C8h] [rbp-80h]
  __int64 v17; // [rsp+D0h] [rbp-78h]
  __int64 v18; // [rsp+D8h] [rbp-70h]
  int v19; // [rsp+E0h] [rbp-68h]
  _QWORD v20[4]; // [rsp+F0h] [rbp-58h] BYREF
  PVOID v21; // [rsp+110h] [rbp-38h]
  __int64 v22; // [rsp+118h] [rbp-30h] BYREF

  v6 = 0LL;
  MappedSystemVa = 0LL;
  v8 = 0;
  v9 = 0;
  v20[0] = a1;
  v20[1] = a2;
  v20[2] = a4;
  v20[3] = a5;
  v22 = *(unsigned int *)(a3 + 16);
  v10 = *(void **)(a3 + 24);
  v21 = v10;
  if ( (*(_DWORD *)(a1 + 156) & 1) != 0 )
  {
    if ( v10 )
    {
      Mdl = IoAllocateMdl(v10, 8 * **(_DWORD **)(a1 + 40), 0, 0, 0LL);
      v6 = Mdl;
      if ( !Mdl
        || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v9 = 1, (v6->MdlFlags & 5) == 0)
          ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(v6, 0, MmCached, 0LL, 0, 0x40000020u))
          : (MappedSystemVa = v6->MappedSystemVa),
            !MappedSystemVa) )
      {
        HIDWORD(v22) = -1073741670;
        goto LABEL_15;
      }
      v21 = MappedSystemVa;
    }
    v8 = 1;
    if ( (MiFlags & 4) == 0 )
      MmLockPagableSectionByHandle(ExPageLockHandle);
    KeGenericCallDpc((__int64)MiApplyImageHotPatchDpc, (__int64)v20);
  }
  else
  {
    HIDWORD(v22) = RtlApplyHotPatch(
                     *(_QWORD *)(a1 + 72),
                     *(_QWORD *)(a1 + 8),
                     *(_QWORD *)(a1 + 80),
                     *(_DWORD *)(a1 + 36),
                     (__int64)&v22,
                     Priority,
                     *(_QWORD *)(a1 + 144),
                     *(_DWORD *)(a1 + 152),
                     0LL,
                     v14,
                     *(_QWORD *)(a2 + 72),
                     *(_QWORD *)(a2 + 8),
                     0LL,
                     0,
                     0LL,
                     v15,
                     0LL,
                     0,
                     a4,
                     a5,
                     1,
                     *(_WORD *)(a1 + 136),
                     *(PRTL_BITMAP *)(a1 + 40),
                     (__int64)v10,
                     0LL,
                     v16,
                     v17,
                     v18,
                     v19);
  }
  *(_DWORD *)(a3 + 16) = v22;
LABEL_15:
  if ( MappedSystemVa )
    MmUnmapLockedPages(MappedSystemVa, v6);
  if ( v6 )
  {
    if ( v9 )
      MmUnlockPages(v6);
    IoFreeMdl(v6);
  }
  if ( v8 && (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  return HIDWORD(v22);
}
