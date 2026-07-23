/*
 * XREFs of WbCreateHeapExecutedBlock @ 0x1409203B8
 * Callers:
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     sub_140400690 @ 0x140400690 (sub_140400690.c)
 *     MmProbeAndLockPagesPrivate @ 0x140415AEC (MmProbeAndLockPagesPrivate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwFlushInstructionCache @ 0x1406A91D0 (ZwFlushInstructionCache.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_14091D4BC @ 0x14091D4BC (sub_14091D4BC.c)
 *     sub_14091DB84 @ 0x14091DB84 (sub_14091DB84.c)
 *     sub_1409DA1F4 @ 0x1409DA1F4 (sub_1409DA1F4.c)
 *     sub_1409DABF4 @ 0x1409DABF4 (sub_1409DABF4.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WbCreateHeapExecutedBlock(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 Pool2; // rax
  void *v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  char v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  ULONG_PTR v12; // rdx
  void *v13; // rax
  int v14; // eax
  struct _MDL *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  char *v19; // rdx
  int v20; // eax
  struct _MDL *v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  char *v25; // rdx
  void *v26; // rbx
  _QWORD *v27; // rcx
  _QWORD *v28; // r10
  _QWORD *v29; // rdx
  PVOID *v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  _KPROCESS *Process; // rax
  __int16 v36; // ax
  _BYTE v37[4]; // [rsp+44h] [rbp-224h] BYREF
  void *Src; // [rsp+48h] [rbp-220h]
  __int64 v39; // [rsp+50h] [rbp-218h]
  int v40; // [rsp+58h] [rbp-210h]
  PMDL MemoryDescriptorList; // [rsp+60h] [rbp-208h]
  int v42; // [rsp+68h] [rbp-200h]
  int v43; // [rsp+6Ch] [rbp-1FCh]
  PMDL Mdl; // [rsp+70h] [rbp-1F8h]
  PMDL v45; // [rsp+78h] [rbp-1F0h]
  __int64 v46; // [rsp+80h] [rbp-1E8h] BYREF
  void *v47; // [rsp+88h] [rbp-1E0h] BYREF
  __int64 v48; // [rsp+90h] [rbp-1D8h]
  int v49; // [rsp+98h] [rbp-1D0h]
  int v50; // [rsp+9Ch] [rbp-1CCh]
  __int64 v51; // [rsp+A8h] [rbp-1C0h]
  _QWORD *v52; // [rsp+B0h] [rbp-1B8h]
  _UNKNOWN **v53; // [rsp+D0h] [rbp-198h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-190h]
  __int128 v55; // [rsp+E8h] [rbp-180h]
  __int128 v56; // [rsp+F8h] [rbp-170h]
  __int128 v57; // [rsp+108h] [rbp-160h]
  __int128 v58; // [rsp+118h] [rbp-150h]
  __int128 v59; // [rsp+128h] [rbp-140h]
  __int128 v60; // [rsp+138h] [rbp-130h]
  __int128 v61; // [rsp+148h] [rbp-120h]
  __int128 v62; // [rsp+158h] [rbp-110h]
  __int128 v63; // [rsp+168h] [rbp-100h]
  _UNKNOWN **v64; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v65; // [rsp+188h] [rbp-E0h]
  __int128 v66; // [rsp+198h] [rbp-D0h]
  __int128 v67; // [rsp+1A8h] [rbp-C0h]
  __int128 v68; // [rsp+1B8h] [rbp-B0h]
  __int128 v69; // [rsp+1C8h] [rbp-A0h]
  __int128 v70; // [rsp+1D8h] [rbp-90h]
  __int128 v71; // [rsp+1E8h] [rbp-80h]
  __int128 v72; // [rsp+1F8h] [rbp-70h]
  __int128 v73; // [rsp+208h] [rbp-60h]
  __int128 v74; // [rsp+218h] [rbp-50h]

  v52 = a3;
  v48 = a1;
  v39 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v37[0] = 0;
  Src = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v45 = 0LL;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v51 = (unsigned int)dword_140E3EAB0;
  v4 = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x58uLL, 0x42524157u);
  v6 = (void *)Pool2;
  if ( Pool2 )
  {
    v39 = Pool2;
    v7 = Pool2;
    v8 = Pool2;
  }
  else
  {
    v4 = -1073741801;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
  }
  SddlpFree(0LL);
  if ( v4 >= 0 )
  {
    memset_0(v6, 0, 0x58uLL);
    *(_DWORD *)(v7 + 16) &= ~1u;
    v9 = 1;
    *(_QWORD *)(v8 + 80) = 1LL;
    v10 = *(_DWORD *)(a2 + 8);
    if ( v10 == 1 )
    {
      v4 = sub_14091D4BC((UCHAR *)(a2 + 16), 0xF8u);
      if ( v4 < 0 )
        goto LABEL_45;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF8u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v4 = -1073741801;
        goto LABEL_45;
      }
    }
    else
    {
      if ( v10 )
      {
        v4 = -1073741811;
        goto LABEL_45;
      }
      v4 = sub_14091D4BC((UCHAR *)(a2 + 16), 0xF0u);
      if ( v4 < 0 )
        goto LABEL_45;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v4 = -1073741801;
        goto LABEL_45;
      }
    }
    MmProbeAndLockPagesPrivate((__int64)MemoryDescriptorList, v11);
    v40 = 1;
    v4 = sub_1409DABF4(*(PVOID *)(a2 + 328));
    if ( v4 >= 0 )
    {
      v4 = sub_1409DA1F4(v48, *(unsigned int *)(a2 + 320), &v47, &v46);
      if ( v4 >= 0 )
      {
        v12 = *(unsigned int *)(a2 + 320);
        v13 = 0LL;
        v4 = 0;
        if ( (_DWORD)v12 && (v13 = (void *)ExAllocatePool2(0x100uLL, v12, 0x42524157u)) == 0LL )
          v4 = -1073741801;
        else
          Src = v13;
        SddlpFree(0LL);
        if ( v4 >= 0 )
        {
          memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), *(unsigned int *)(a2 + 284));
          v14 = *(_DWORD *)(a2 + 8);
          if ( v14 == 1 )
          {
            if ( *(_DWORD *)(a2 + 284) < 4u )
            {
              v4 = -1073741811;
              goto LABEL_45;
            }
            *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
          }
          else if ( v14 )
          {
            v4 = -1073741811;
            goto LABEL_45;
          }
          v15 = IoAllocateMdl(*(PVOID *)(a2 + 272), *(_DWORD *)(a2 + 284), 0, 0, 0LL);
          Mdl = v15;
          if ( !v15 )
          {
            v4 = -1073741801;
            goto LABEL_45;
          }
          MmProbeAndLockPagesPrivate((__int64)v15, v16);
          v42 = 1;
          v17 = *(_DWORD *)(a2 + 280);
          v18 = *(_DWORD *)(a2 + 284);
          v19 = (char *)Src + *(unsigned int *)(a2 + 288);
          v53 = &off_140002D00;
          v49 = 0;
          v54 = *(_OWORD *)(a2 + 96);
          v55 = *(_OWORD *)(a2 + 112);
          v56 = *(_OWORD *)(a2 + 128);
          v57 = *(_OWORD *)(a2 + 144);
          v58 = *(_OWORD *)(a2 + 160);
          v59 = *(_OWORD *)(a2 + 176);
          v60 = *(_OWORD *)(a2 + 192);
          v61 = *(_OWORD *)(a2 + 208);
          v62 = *(_OWORD *)(a2 + 224);
          v63 = *(_OWORD *)(a2 + 240);
          sub_140400690((__int64)&v53, v19, v19, v18, *(_QWORD *)(a2 + 88), v17, v37);
          v4 = sub_1409DABF4(*(PVOID *)(a2 + 272));
          if ( v4 >= 0 )
          {
            if ( !*(_QWORD *)(a2 + 296) )
              goto LABEL_37;
            memmove((char *)Src + *(unsigned int *)(a2 + 312), *(const void **)(a2 + 296), *(unsigned int *)(a2 + 308));
            v20 = *(_DWORD *)(a2 + 8);
            if ( v20 == 1 )
            {
              if ( *(_DWORD *)(a2 + 308) < 4u )
              {
                v4 = -1073741811;
                goto LABEL_45;
              }
              *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
            }
            else if ( v20 )
            {
              v4 = -1073741811;
              goto LABEL_45;
            }
            v21 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
            v45 = v21;
            if ( !v21 )
            {
              v4 = -1073741801;
              goto LABEL_45;
            }
            MmProbeAndLockPagesPrivate((__int64)v21, v22);
            v43 = 1;
            v23 = *(_DWORD *)(a2 + 304);
            v24 = *(_DWORD *)(a2 + 308);
            v25 = (char *)Src + *(unsigned int *)(a2 + 312);
            v64 = &off_140002D00;
            v50 = 0;
            v65 = *(_OWORD *)(a2 + 96);
            v66 = *(_OWORD *)(a2 + 112);
            v67 = *(_OWORD *)(a2 + 128);
            v68 = *(_OWORD *)(a2 + 144);
            v69 = *(_OWORD *)(a2 + 160);
            v70 = *(_OWORD *)(a2 + 176);
            v71 = *(_OWORD *)(a2 + 192);
            v72 = *(_OWORD *)(a2 + 208);
            v73 = *(_OWORD *)(a2 + 224);
            v74 = *(_OWORD *)(a2 + 240);
            sub_140400690((__int64)&v64, v25, v25, v24, *(_QWORD *)(a2 + 88), v23, v37);
            v4 = sub_1409DABF4(*(PVOID *)(a2 + 296));
            if ( v4 >= 0 )
            {
LABEL_37:
              v26 = v47;
              memmove(v47, Src, *(unsigned int *)(a2 + 320));
              v27 = (_QWORD *)v39;
              v28 = (_QWORD *)(v39 + 64);
              *(_QWORD *)(v39 + 64) = *(_QWORD *)a2;
              v29 = v27 + 5;
              v27[5] = v26;
              v30 = (PVOID *)(v27 + 3);
              v27[3] = v46 + *(unsigned int *)(a2 + 288);
              v31 = *(unsigned int *)(a2 + 312);
              if ( (_DWORD)v31 )
                v27[4] = v46 + v31;
              else
                v27[4] = 0LL;
              v32 = v39;
              *(_DWORD *)(v39 + 72) = *(_DWORD *)(a2 + 320);
              *(_QWORD *)(v32 + 48) = *(_QWORD *)(a2 + 272);
              v33 = *(_QWORD *)(a2 + 272) - (_QWORD)*v30;
              *(_QWORD *)(v32 + 56) = v33;
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( !Process[1].ReadyTime )
                goto LABEL_40;
              v36 = WORD2(Process[3].PerProcessorCycleTimes);
              if ( v36 != 332 && v36 != 452 )
                v9 = 0;
              if ( v9 )
                *(_QWORD *)*v29 = *v28;
              else
LABEL_40:
                *(_QWORD *)*v29 = v33;
              *(_QWORD *)(*v29 + 8LL) = v51;
              v4 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v30, *(unsigned int *)(a2 + 284));
              if ( v4 >= 0 )
              {
                if ( !*(_QWORD *)(a2 + 296)
                  || (v4 = ZwFlushInstructionCache(
                             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                             *(PVOID *)(v39 + 32),
                             *(unsigned int *)(a2 + 308)),
                      v4 >= 0) )
                {
                  if ( v52 )
                  {
                    *v52 = v39;
                    v39 = 0LL;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_45:
  if ( MemoryDescriptorList )
  {
    if ( v40 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
  }
  if ( Mdl )
  {
    if ( v42 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  if ( v45 )
  {
    if ( v43 )
      MmUnlockPages(v45);
    IoFreeMdl(v45);
  }
  sub_14091DB84(v48, v39);
  SddlpFree(Src);
  return (unsigned int)v4;
}
