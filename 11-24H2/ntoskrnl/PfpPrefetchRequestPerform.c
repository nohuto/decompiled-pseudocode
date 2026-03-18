/*
 * XREFs of PfpPrefetchRequestPerform @ 0x140951A08
 * Callers:
 *     PfpPrefetchRequest @ 0x140951060 (PfpPrefetchRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PfpCheckPrefetchAbort @ 0x1404864EC (PfpCheckPrefetchAbort.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PfpVolumeOpenAndVerify @ 0x140950C88 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchVolumesCleanup @ 0x140951E90 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1409527B4 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x1409528C0 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedDeref @ 0x140952908 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x140952940 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchRequestPatchOffsets @ 0x140952B1C (PfpPrefetchRequestPatchOffsets.c)
 *     PfpVolumePrefetchMetadata @ 0x140952BE8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchPrivatePages @ 0x14095328C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1409537E8 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140954F78 (PfpPrefetchFilesTrickle.c)
 *     PfpOpenHandleClose @ 0x14096B934 (PfpOpenHandleClose.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x140B5AF70 (PfpScenCtxPrefetchAbortSet.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchRequestPerform(__int64 a1)
{
  char PreviousMode; // r12
  __int64 Pool2; // rax
  int v4; // ebx
  int v5; // r15d
  unsigned int v6; // ebx
  _OWORD *v7; // rax
  unsigned int i; // edx
  _OWORD *v10; // rax
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  unsigned int m; // edi
  const signed __int64 *v15; // rcx
  unsigned int j; // ecx
  __int64 v17; // rax
  char *v18; // rax
  int v19; // eax
  unsigned int k; // r14d
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h]
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD *v28; // [rsp+68h] [rbp-A0h]
  PVOID v29; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]

  v25 = 0LL;
  Event.Header.WaitListHead = 0LL;
  memset_0(&P, 0, 0xD8uLL);
  v26 = a1;
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  v31 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    goto LABEL_12;
  }
  PfpPrefetchSharedInitialize(Pool2);
  *(_QWORD *)(v31 + 24) = &v26;
  if ( (*(_DWORD *)(v26 + 80) & 4) != 0 )
  {
    *(_DWORD *)(v31 + 60) = 60000;
    *(_DWORD *)(v31 + 56) = 150;
  }
  else
  {
    *(_DWORD *)(v31 + 60) = 250;
    *(_DWORD *)(v31 + 56) = 15;
  }
  v4 = PfpPrefetchSharedStart(v31);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v26 + 81);
    if ( *(_BYTE *)(v26 + 81) )
    {
      _InterlockedAdd((_DWORD *)&xmmword_140F0E408 + 2, 1u);
      v4 = PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_140E66E80, 0);
      if ( v4 < 0 )
      {
LABEL_50:
        _InterlockedDecrement((_DWORD *)&xmmword_140F0E408 + 2);
        PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_140E66E80, 0);
        goto LABEL_12;
      }
      if ( !*(_QWORD *)(v26 + 72) )
        *(_QWORD *)(v26 + 72) = &Event.Header.WaitListHead;
    }
    if ( *(_DWORD *)(a1 + 8) << 6 )
    {
      v6 = *(_DWORD *)(a1 + 8) << 6;
      v7 = (_OWORD *)ExAllocatePool2(0x100uLL);
      v28 = v7;
      if ( !v7 )
      {
LABEL_10:
        v4 = -1073741670;
        goto LABEL_11;
      }
      memset_0(v7, 0, v6);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); *(_QWORD *)((char *)v12 + v11 + 56) |= 0x200000000uLL )
      {
        v10 = v28;
        v11 = i++;
        v11 <<= 6;
        *(_OWORD *)((char *)v28 + v11) = 0LL;
        *(_OWORD *)((char *)v10 + v11 + 16) = 0LL;
        *(_QWORD *)((char *)v10 + v11 + 24) |= 0x200000000uLL;
        v12 = v28;
        *(_OWORD *)((char *)v28 + v11 + 32) = 0LL;
        *(_OWORD *)((char *)v12 + v11 + 48) = 0LL;
      }
    }
    LODWORD(v30) = (*(_DWORD *)(v26 + 80) & 4) != 0 ? 16 : 768;
    v29 = (PVOID)ExAllocatePool2(0x100uLL);
    if ( !v29 )
      goto LABEL_10;
    if ( (*(_DWORD *)(v26 + 80) & 4) == 0 && *(_DWORD *)(v26 + 12) )
    {
      P = (PVOID)ExAllocatePool2(0x100uLL);
      if ( !P )
        goto LABEL_10;
      for ( j = 0; j < *(_DWORD *)(v26 + 12); *((_QWORD *)v18 + 3) |= 0x200000000uLL )
      {
        v17 = 32LL * j++;
        v18 = (char *)P + v17;
        *(_OWORD *)v18 = 0LL;
        *((_OWORD *)v18 + 1) = 0LL;
      }
    }
    PfpPrefetchRequestPatchOffsets(a1);
    if ( !*(_WORD *)(a1 + 30) && *(_WORD *)(a1 + 28) )
      *(_WORD *)(a1 + 30) = *(_WORD *)(a1 + 28) - 1;
    if ( !*(_DWORD *)(a1 + 20)
      || (v19 = PfpPrefetchPrivatePages(&v26), v4 = v19, v19 != -1073741248) && v19 != -1073741670 && v19 != -1073741801 )
    {
      for ( k = 0; k < *(_DWORD *)(a1 + 8); ++k )
      {
        if ( (int)PfpVolumeOpenAndVerify(v31, &v28[4 * (unsigned __int64)k], *(_QWORD *)(a1 + 32) + 40LL * k) >= 0 )
        {
          v4 = PfpVolumePrefetchMetadata(&v26, k);
          if ( v4 == -1073741248 )
            goto LABEL_11;
        }
      }
      if ( (*(_DWORD *)(v26 + 80) & 4) != 0 )
      {
        v21 = PfpPrefetchFilesTrickle(&v26);
        v4 = v21;
        if ( v21 == -1073741248 || v21 == -1073741670 )
          goto LABEL_11;
        goto LABEL_54;
      }
      v22 = PfpPrefetchFiles(&v26, 0LL);
      v4 = v22;
      if ( v22 != -1073741248 && v22 != -1073741670 && v22 != -1073741801 )
      {
        if ( (unsigned int)PfpCheckPrefetchAbort(&v26) )
        {
          v4 = -1073741248;
          goto LABEL_11;
        }
        LOBYTE(v23) = 1;
        v21 = PfpPrefetchFiles(&v26, v23);
        v4 = v21;
        if ( v21 != -1073741248 && v21 != -1073741670 )
        {
LABEL_54:
          if ( v21 != -1073741801 )
            v4 = 0;
        }
      }
    }
LABEL_11:
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_50;
  }
LABEL_12:
  if ( P )
  {
    v13 = v26;
    for ( m = 0; m < *(_DWORD *)(v13 + 12); ++m )
    {
      v15 = (const signed __int64 *)((char *)P + 32 * m);
      if ( _bittest64(v15 + 3, 0x22u) )
      {
        PfpOpenHandleClose(v15, v31);
        v13 = v26;
      }
    }
    ExFreePoolWithTag(P, 0);
  }
  PfpPrefetchVolumesCleanup(&v26);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( v31 )
  {
    PfpPrefetchSharedCleanup(v31);
    PfpPrefetchSharedDeref(v31);
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v4;
}
