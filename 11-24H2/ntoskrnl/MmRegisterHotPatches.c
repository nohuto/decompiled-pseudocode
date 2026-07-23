/*
 * XREFs of MmRegisterHotPatches @ 0x140C58E0C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VslDetermineHotPatchType @ 0x14070D29C (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x1407F1130 (MiAllocateHotPatchRecord.c)
 *     MiAllocateSecureImageActivePatch @ 0x1407F11D0 (MiAllocateSecureImageActivePatch.c)
 *     MiCompareHotPatchNodes @ 0x1407F2A54 (MiCompareHotPatchNodes.c)
 *     MiInsertHotPatchRecord @ 0x1407F3934 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1407F3BEC (MiInsertSecureImageActivePatch.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F4298 (MiLogHotPatchOperationStatus.c)
 *     MiHandleDriverNonPagedSections @ 0x140A33318 (MiHandleDriverNonPagedSections.c)
 *     MiFindHotPatchRecord @ 0x140A4EF38 (MiFindHotPatchRecord.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmRegisterHotPatches(__int64 a1)
{
  ULONG_PTR BugCheckParameter4; // rbx
  int v3; // r13d
  ULONG_PTR v4; // r12
  __int64 *i; // rdi
  int v6; // edx
  int v7; // ecx
  __int64 HotPatchRecord; // rax
  void *v9; // r14
  UNICODE_STRING *SecureImageActivePatch; // rax
  signed int v11; // ecx
  _QWORD *j; // rax
  _QWORD *v13; // rdi
  unsigned int v14; // esi
  unsigned int v15; // r14d
  int v16; // eax
  _QWORD **v17; // rax
  ULONG_PTR v18; // rcx
  _QWORD *v19; // rcx
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // edi
  PVOID *v23; // rbx
  ULONG_PTR v24; // rcx
  const signed __int16 *k; // rbx
  __int64 result; // rax
  _BYTE v27[24]; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-11h]
  unsigned int v29; // [rsp+5Ch] [rbp-Dh]
  unsigned int v30; // [rsp+D0h] [rbp+67h] BYREF
  int v31; // [rsp+D8h] [rbp+6Fh] BYREF
  int v32; // [rsp+E0h] [rbp+77h] BYREF
  struct _KTHREAD *Lock; // [rsp+E8h] [rbp+7Fh]

  v31 = 0;
  BugCheckParameter4 = 0LL;
  v30 = 0;
  v3 = 0;
  v32 = 0;
  Lock = MiAcquireLoadLock(1);
  v4 = 1LL;
  for ( i = *(__int64 **)(*(_QWORD *)(a1 + 240) + 3784LL);
        i != (__int64 *)(*(_QWORD *)(a1 + 240) + 3784LL);
        i = (__int64 *)*i )
  {
    v6 = *((_DWORD *)i + 10);
    v7 = v3 + 1;
    if ( (v6 & 6) != 4 )
      v7 = v3;
    v3 = v7;
    if ( (v6 & 1) != 0 )
    {
      HotPatchRecord = MiAllocateHotPatchRecord(
                         *((_DWORD *)i + 8),
                         *((_DWORD *)i + 9),
                         *((_DWORD *)i + 17),
                         (const void **)i + 2,
                         *((_DWORD *)i + 11));
      v9 = (void *)HotPatchRecord;
      if ( !HotPatchRecord )
        goto LABEL_14;
      if ( (unsigned int)MiInsertHotPatchRecord((unsigned __int64 *)&qword_140E375B8, HotPatchRecord, 0) == 255 )
        ExFreePoolWithTag(v9, 0);
      MiLogHotPatchOperationStatus(*((_DWORD *)i + 8), *((_DWORD *)i + 9), (UNICODE_STRING *)i + 1, 0, 4);
      if ( (i[5] & 2) != 0 )
      {
        SecureImageActivePatch = MiAllocateSecureImageActivePatch((PCUNICODE_STRING)i + 1);
        if ( !SecureImageActivePatch )
        {
LABEL_14:
          v11 = -1073741670;
LABEL_15:
          KeBugCheckEx(0x1Au, 0x515C5uLL, v11, v4, BugCheckParameter4);
        }
        LODWORD(SecureImageActivePatch[1].Buffer) = *((_DWORD *)i + 8);
        HIDWORD(SecureImageActivePatch[1].Buffer) = *((_DWORD *)i + 9);
        *(_DWORD *)&SecureImageActivePatch[2].Length = *((_DWORD *)i + 18);
        *(_DWORD *)(&SecureImageActivePatch[2].MaximumLength + 1) = *((_DWORD *)i + 19);
        LODWORD(SecureImageActivePatch[2].Buffer) = *((_DWORD *)i + 17);
        MiInsertSecureImageActivePatch(SecureImageActivePatch);
        MiLogHotPatchOperationStatus(*((_DWORD *)i + 8), *((_DWORD *)i + 9), (UNICODE_STRING *)i + 1, 0, 5);
      }
      else
      {
        MiLogHotPatchOperationStatus(*((_DWORD *)i + 8), *((_DWORD *)i + 9), (UNICODE_STRING *)i + 1, 0, 6);
      }
    }
  }
  v4 = 2LL;
  memset_0(v27, 0, 0x40uLL);
  for ( j = *(_QWORD **)&qword_140E375B8; j; j = (_QWORD *)*j )
    BugCheckParameter4 = (ULONG_PTR)j;
  while ( BugCheckParameter4 )
  {
    v13 = (_QWORD *)qword_140E375C8;
    v14 = *(_DWORD *)(BugCheckParameter4 + 24);
    v15 = *(_DWORD *)(BugCheckParameter4 + 28);
    v28 = v14;
    v29 = v15;
    if ( !qword_140E375C8 )
      goto LABEL_60;
    do
    {
      v16 = MiCompareHotPatchNodes((__int64)v27, (__int64)v13);
      if ( v16 >= 0 )
      {
        if ( v16 <= 0 )
          break;
        v13 = (_QWORD *)v13[1];
      }
      else
      {
        v13 = (_QWORD *)*v13;
      }
    }
    while ( v13 );
    if ( !v13 )
    {
LABEL_60:
      v11 = VslDetermineHotPatchType(v14, v15, &v32);
      if ( v11 < 0 )
        goto LABEL_15;
      if ( (v32 & 3) != 0 )
      {
        v31 = 0;
        v30 = 0;
        v11 = MiLoadHotPatch((const UNICODE_STRING *)(BugCheckParameter4 + 40), 2, &v31, &v30);
        if ( v11 < 0 )
          goto LABEL_15;
      }
    }
    v17 = *(_QWORD ***)(BugCheckParameter4 + 8);
    v18 = BugCheckParameter4;
    if ( v17 )
    {
      v19 = *v17;
      for ( BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 8); v19; v19 = (_QWORD *)*v19 )
        BugCheckParameter4 = (ULONG_PTR)v19;
    }
    else
    {
      while ( 1 )
      {
        BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !BugCheckParameter4 || *(_QWORD *)BugCheckParameter4 == v18 )
          break;
        v18 = BugCheckParameter4;
      }
    }
  }
  v4 = 3LL;
  BugCheckParameter4 = *(_QWORD *)(a1 + 240) + 3784LL;
  if ( (dword_140E375F4 & 1) != 0 )
    BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
  while ( BugCheckParameter4 != *(_QWORD *)(a1 + 240) + 3784LL )
  {
    if ( (*(_DWORD *)(BugCheckParameter4 + 40) & 3) == 0 )
    {
      v20 = *(_DWORD *)(BugCheckParameter4 + 36);
      v28 = *(_DWORD *)(BugCheckParameter4 + 32);
      v29 = v20;
      v21 = MiFindHotPatchRecord((__int64 *)&qword_140E375B8, 0, v28, v20, 0, 0LL, 0LL);
      v31 = *(_DWORD *)(BugCheckParameter4 + 32);
      v22 = (((v21 >> 31) & 0xFFFFFFFD) + 4) | 8;
      v30 = *(_DWORD *)(BugCheckParameter4 + 36);
      v11 = MiLoadHotPatch(
              (const UNICODE_STRING *)(BugCheckParameter4 + 16),
              (((v21 >> 31) & 0xFD) + 4) | 8u,
              &v31,
              &v30);
      if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -1073740748 )
        goto LABEL_15;
      if ( (v22 & 1) != 0 )
        MiLogHotPatchOperationStatus(
          *(_DWORD *)(BugCheckParameter4 + 32),
          *(_DWORD *)(BugCheckParameter4 + 36),
          (UNICODE_STRING *)(BugCheckParameter4 + 16),
          v11,
          4);
    }
    BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
  }
  if ( v3 )
  {
    v23 = (PVOID *)PsLoadedModuleList;
    while ( v23 != &PsLoadedModuleList )
    {
      v24 = (ULONG_PTR)v23;
      v23 = (PVOID *)*v23;
      if ( _bittest16((const signed __int16 *)(v24 + 110), 9u) )
        MiUnloadSystemImage(v24);
    }
  }
  for ( k = (const signed __int16 *)PsLoadedModuleList;
        k != (const signed __int16 *)&PsLoadedModuleList;
        k = *(const signed __int16 **)k )
  {
    if ( _bittest16(k + 55, 9u) )
      MiHandleDriverNonPagedSections((__int64)k, 2);
  }
  MmReleaseLoadLock(Lock);
  result = 0LL;
  byte_140E375E8 = 1;
  return result;
}
