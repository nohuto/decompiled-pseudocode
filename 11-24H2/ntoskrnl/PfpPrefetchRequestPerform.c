/*
 * XREFs of PfpPrefetchRequestPerform @ 0x1409353B4
 * Callers:
 *     PfpPrefetchRequest @ 0x140934A0C (PfpPrefetchRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PfpCheckPrefetchAbort @ 0x140481ADC (PfpCheckPrefetchAbort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfpVolumeOpenAndVerify @ 0x140934634 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchVolumesCleanup @ 0x14093583C (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchSharedStart @ 0x140936164 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x140936270 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedDeref @ 0x1409362B8 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x1409362F0 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchRequestPatchOffsets @ 0x1409364CC (PfpPrefetchRequestPatchOffsets.c)
 *     PfpVolumePrefetchMetadata @ 0x140936598 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchPrivatePages @ 0x140936C3C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x140937198 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140938928 (PfpPrefetchFilesTrickle.c)
 *     PfpOpenHandleClose @ 0x140954390 (PfpOpenHandleClose.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x140B5CFE0 (PfpScenCtxPrefetchAbortSet.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchRequestPerform(__int64 a1)
{
  char PreviousMode; // r12
  __int64 Pool2; // rax
  int v4; // ebx
  int v5; // r15d
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _OWORD *v8; // rax
  unsigned int i; // edx
  bool v10; // cf
  _OWORD *v12; // rax
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  unsigned int m; // edi
  const signed __int64 *v17; // rcx
  int v18; // eax
  unsigned int j; // ecx
  __int64 v20; // rax
  char *v21; // rax
  int v22; // eax
  unsigned int k; // r14d
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD *v31; // [rsp+68h] [rbp-A0h]
  PVOID v32; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]

  v28 = 0LL;
  Event.Header.WaitListHead = 0LL;
  memset_0(&P, 0, 0xD8uLL);
  v29 = a1;
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  Pool2 = ExAllocatePool2(0x40uLL, 0x90uLL, 0x43536650u);
  v34 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    goto LABEL_12;
  }
  PfpPrefetchSharedInitialize(Pool2);
  *(_QWORD *)(v34 + 24) = &v29;
  if ( (*(_DWORD *)(v29 + 80) & 4) != 0 )
  {
    *(_DWORD *)(v34 + 60) = 60000;
    *(_DWORD *)(v34 + 56) = 150;
  }
  else
  {
    *(_DWORD *)(v34 + 60) = 250;
    *(_DWORD *)(v34 + 56) = 15;
  }
  v4 = PfpPrefetchSharedStart(v34);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v29 + 81);
    if ( *(_BYTE *)(v29 + 81) )
    {
      _InterlockedAdd((_DWORD *)&xmmword_140F0E6E8 + 2, 1u);
      v4 = PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_140E66FD0, 0);
      if ( v4 < 0 )
      {
LABEL_50:
        _InterlockedDecrement((_DWORD *)&xmmword_140F0E6E8 + 2);
        PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_140E66FD0, 0);
        goto LABEL_12;
      }
      if ( !*(_QWORD *)(v29 + 72) )
        *(_QWORD *)(v29 + 72) = &Event.Header.WaitListHead;
    }
    v6 = *(_DWORD *)(a1 + 8) << 6;
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 8) << 6;
      v8 = (_OWORD *)ExAllocatePool2(0x100uLL, v6, 0x48566650u);
      v31 = v8;
      if ( !v8 )
      {
LABEL_10:
        v4 = -1073741670;
        goto LABEL_11;
      }
      memset_0(v8, 0, v7);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); *(_QWORD *)((char *)v14 + v13 + 56) |= 0x200000000uLL )
      {
        v12 = v31;
        v13 = i++;
        v13 <<= 6;
        *(_OWORD *)((char *)v31 + v13) = 0LL;
        *(_OWORD *)((char *)v12 + v13 + 16) = 0LL;
        *(_QWORD *)((char *)v12 + v13 + 24) |= 0x200000000uLL;
        v14 = v31;
        *(_OWORD *)((char *)v31 + v13 + 32) = 0LL;
        *(_OWORD *)((char *)v14 + v13 + 48) = 0LL;
      }
    }
    v10 = (*(_DWORD *)(v29 + 80) & 4) != 0;
    LODWORD(v33) = v10 ? 16 : 768;
    v32 = (PVOID)ExAllocatePool2(0x100uLL, (-(__int64)v10 & 0xFFFFFFFFFFFFE880uLL) + 6160, 0x504D6650u);
    if ( !v32 )
      goto LABEL_10;
    if ( (*(_DWORD *)(v29 + 80) & 4) == 0 )
    {
      v18 = *(_DWORD *)(v29 + 12);
      if ( v18 )
      {
        P = (PVOID)ExAllocatePool2(0x100uLL, (unsigned int)(32 * v18), 0x68466650u);
        if ( !P )
          goto LABEL_10;
        for ( j = 0; j < *(_DWORD *)(v29 + 12); *((_QWORD *)v21 + 3) |= 0x200000000uLL )
        {
          v20 = 32LL * j++;
          v21 = (char *)P + v20;
          *(_OWORD *)v21 = 0LL;
          *((_OWORD *)v21 + 1) = 0LL;
        }
      }
    }
    PfpPrefetchRequestPatchOffsets(a1);
    if ( !*(_WORD *)(a1 + 30) && *(_WORD *)(a1 + 28) )
      *(_WORD *)(a1 + 30) = *(_WORD *)(a1 + 28) - 1;
    if ( !*(_DWORD *)(a1 + 20)
      || (v22 = PfpPrefetchPrivatePages(&v29), v4 = v22, v22 != -1073741248) && v22 != -1073741670 && v22 != -1073741801 )
    {
      for ( k = 0; k < *(_DWORD *)(a1 + 8); ++k )
      {
        if ( (int)PfpVolumeOpenAndVerify(v34, &v31[4 * (unsigned __int64)k], *(_QWORD *)(a1 + 32) + 40LL * k) >= 0 )
        {
          v4 = PfpVolumePrefetchMetadata(&v29, k);
          if ( v4 == -1073741248 )
            goto LABEL_11;
        }
      }
      if ( (*(_DWORD *)(v29 + 80) & 4) != 0 )
      {
        v24 = PfpPrefetchFilesTrickle(&v29);
        v4 = v24;
        if ( v24 == -1073741248 || v24 == -1073741670 )
          goto LABEL_11;
        goto LABEL_54;
      }
      v25 = PfpPrefetchFiles(&v29, 0LL);
      v4 = v25;
      if ( v25 != -1073741248 && v25 != -1073741670 && v25 != -1073741801 )
      {
        if ( (unsigned int)PfpCheckPrefetchAbort(&v29) )
        {
          v4 = -1073741248;
          goto LABEL_11;
        }
        LOBYTE(v26) = 1;
        v24 = PfpPrefetchFiles(&v29, v26);
        v4 = v24;
        if ( v24 != -1073741248 && v24 != -1073741670 )
        {
LABEL_54:
          if ( v24 != -1073741801 )
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
    v15 = v29;
    for ( m = 0; m < *(_DWORD *)(v15 + 12); ++m )
    {
      v17 = (const signed __int64 *)((char *)P + 32 * m);
      if ( _bittest64(v17 + 3, 0x22u) )
      {
        PfpOpenHandleClose(v17, v34);
        v15 = v29;
      }
    }
    ExFreePoolWithTag(P, 0);
  }
  PfpPrefetchVolumesCleanup(&v29);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  if ( v34 )
  {
    PfpPrefetchSharedCleanup(v34);
    PfpPrefetchSharedDeref(v34);
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v4;
}
