/*
 * XREFs of MiLockPatchIatForDV @ 0x14067D0E0
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x14067DB08 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareDriverPatchState @ 0x1407E83FC (MiPrepareDriverPatchState.c)
 *     MiInitializeDriverPatchState @ 0x140A958C8 (MiInitializeDriverPatchState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_BOOL8 __fastcall MiLockPatchIatForDV(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char *v5; // rbp
  __int64 v6; // r15
  __int64 Pool2; // rax
  int v8; // ebx
  __int64 v9; // r12
  char *AnyMultiplexedVm; // rax
  __int64 *v11; // rsi
  PMDL Mdl; // rax
  unsigned int v13; // r9d
  __int64 v14; // r8
  char *v15; // rax
  _QWORD *v16; // rcx
  ULONG Size; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h]

  Size = 0;
  v19 = 0;
  v2 = 0LL;
  v5 = (char *)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &Size);
  if ( v5 && (v6 = Size, Size >= 8) )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x90uLL, 0x50746F48u);
    v2 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
LABEL_4:
      v8 = -1073741670;
      goto LABEL_20;
    }
    v9 = Pool2 + 16;
    MiInitializeDriverPatchState(a1, Pool2 + 16);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v8 = MiPrepareDriverPatchState(v9, AnyMultiplexedVm);
    if ( v8 >= 0 )
    {
      if ( (MiFlags & 0x8000) != 0 )
      {
        v19 = 1;
        v11 = v2 + 15;
      }
      else
      {
        Mdl = IoAllocateMdl(*(PVOID *)(a1 + 48), *(_DWORD *)(a1 + 64), 0, 0, 0LL);
        v11 = v2 + 15;
        v2[15] = Mdl;
        if ( !Mdl )
          goto LABEL_4;
        v13 = 0;
        if ( ((Mdl->ByteCount + ((__int64)Mdl->StartVa & 0xFFFLL) + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          v14 = 0LL;
          do
          {
            ++v13;
            *((_QWORD *)&Mdl[1].Next + v14) = qword_140E37478;
            v14 = v13;
          }
          while ( v13 < (*(unsigned int *)(*v11 + 40) + (*(_DWORD *)(*v11 + 32) & 0xFFFuLL) + 4095) >> 12 );
        }
      }
      v8 = MiLockDriverPageRange(
             v9,
             (unsigned int)((_DWORD)v5 - *(_DWORD *)(a1 + 48)) >> 12,
             ((unsigned int)((_DWORD)v5 - *(_DWORD *)(a1 + 48)) >> 12)
           + ((v6 + 4095 + (unsigned __int64)((unsigned __int16)v5 & 0xFFF)) >> 12)
           - 1,
             v19,
             *v11);
      if ( v8 >= 0 )
      {
        if ( *v11 )
        {
          v15 = (char *)MmMapLockedPagesSpecifyCache((PMDL)*v11, 0, MmCached, 0LL, 0, 0x40000010u);
          if ( !v15 )
            goto LABEL_4;
          v5 = &v15[(_QWORD)v5 - *(_QWORD *)(a1 + 48)];
        }
        v2[16] = v5;
        *((_DWORD *)v2 + 34) = v6;
        v16 = *(_QWORD **)(a2 + 64);
        if ( *v16 != a2 + 56 )
          __fastfail(3u);
        *v2 = a2 + 56;
        v2[1] = v16;
        *v16 = v2;
        *(_QWORD *)(a2 + 64) = v2;
        v2 = 0LL;
      }
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_20:
  *(_DWORD *)(a2 + 72) = v8;
  if ( v2 )
    MiUnlockAndFreeDvPatchImage(v2);
  return v8 >= 0;
}
