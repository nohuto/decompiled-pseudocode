/*
 * XREFs of BgpFwLibraryInitialize @ 0x140BA5400
 * Callers:
 *     BgLibraryInitialize @ 0x140BA0760 (BgLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140468D2C (BgpFwAllocateMemory.c)
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     wcscpy_s @ 0x140502060 (wcscpy_s.c)
 *     BgpFwLibraryEnable @ 0x14068CDB4 (BgpFwLibraryEnable.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14068D26C (BgpGxProcessQrCodeBitmap.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AnFwProgressIndicatorTransition @ 0x140BA0008 (AnFwProgressIndicatorTransition.c)
 *     BgpFwInitializeReservePool @ 0x140BA1634 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDestroy @ 0x140BA1678 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140BA1828 (BgpFwReservePoolSwap.c)
 *     ResFwConfigureDisplayStringResources @ 0x140BA18C4 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140BA1CFC (AnFwConfigureProgressResources.c)
 *     LogFwInitialize @ 0x140BA2E70 (LogFwInitialize.c)
 *     BgpFwInitializeLock @ 0x140C5EADC (BgpFwInitializeLock.c)
 *     BgpFoInitialize @ 0x140C5EBC0 (BgpFoInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x140C5F964 (BgpBcInitializeCriticalMode.c)
 */

__int64 __fastcall BgpFwLibraryInitialize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // ebp
  unsigned int *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 Memory; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const void **v15; // r12
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // r8d
  int v19; // r9d
  int v20; // edx
  unsigned int v21; // edi
  int v22; // eax
  unsigned int v23; // r14d
  unsigned int v24; // r13d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rdx
  _OWORD *v30; // rcx
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  unsigned int *v33; // r8
  void *v34; // rbx
  int v35; // eax
  __int64 v36; // rdi
  void *v37; // rbx
  void *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  const wchar_t *v43; // r8
  void *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // [rsp+70h] [rbp+8h]
  unsigned int v58; // [rsp+80h] [rbp+18h]
  unsigned int v59; // [rsp+88h] [rbp+20h]
  unsigned int v60; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 116) < 5u )
      return 3221225561LL;
    v5 = *(_DWORD *)(a1 + 120) & 0x16FF0000;
    if ( (dword_140EEFD90 & 1) == 0 || (dword_140EEFD90 & 4) != 0 || (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
      {
        BgpFwAcquireLock();
        if ( a2 == -1 )
        {
          qword_140EEFD40 = 0LL;
          dword_140EEFD90 = dword_140EEFD90 & 0xFFEFE7FD | 0x101800;
          BgInternal = 0LL;
          xmmword_140EEFD30 = 0LL;
          result = BgpFwLibraryEnable(a1 + 32);
          if ( (int)result < 0 )
            return result;
          dword_140EEFD90 &= ~0x2000u;
          v6 = *(unsigned int **)(a1 + 16);
          if ( v6 )
          {
            BgpFwReservePoolSwap(0, *(_QWORD *)(a1 + 240), *(_DWORD *)(a1 + 248), v6);
            qword_140EEFE58 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
            qword_140EEFE50 = AnFwConfigureProgressResources(*(int **)(a1 + 264));
          }
          else
          {
            qword_140EEFE58 = 0LL;
            qword_140EEFE50 = 0LL;
          }
          LogFwInitialize();
        }
        else
        {
          dword_140EEFD90 &= ~0x1000u;
          AnFwProgressIndicatorTransition();
        }
        BgpFwReleaseLock(v8, v7);
        goto LABEL_83;
      }
      if ( a2 == -1 )
      {
        dword_140EEFD90 = BgpFwInitializeLock() | 0xC04;
        qword_140EEFE68 = (__int64)&qword_140EEFE60;
        qword_140EEFE60 = (__int64)&qword_140EEFE60;
        v10 = *(_QWORD *)(v9 + 240);
        if ( !v10 || !*(_DWORD *)(a1 + 248) )
          return 3221225626LL;
        BgpFwInitializeReservePool(v10, 0x4000u, dword_140E643C0);
        v11 = BgpFwLibraryEnable(a1 + 32);
        if ( v11 < 0 )
          goto LABEL_42;
        xmmword_140EEFDC8 = *(_OWORD *)(a1 + 100);
        if ( !*(_QWORD *)(a1 + 88) )
        {
LABEL_23:
          if ( *(_DWORD *)(a1 + 116) >= 3u )
          {
            qword_140EEFF10 = *(_QWORD *)(a1 + 404);
            dword_140EEFF18 = *(_DWORD *)(a1 + 412);
          }
          dword_140EEFEF8 = *(_DWORD *)(a1 + 400);
          v11 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
          if ( v11 < 0 )
            goto LABEL_42;
LABEL_83:
          dword_140EEFD90 |= 1u;
          return 0;
        }
        Memory = BgpFwAllocateMemory(0x18uLL);
        if ( Memory )
        {
          *(_QWORD *)Memory = *(_QWORD *)(a1 + 88);
          *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 96);
          *(_QWORD *)(Memory + 16) = *(_QWORD *)(a1 + 88);
          *(_DWORD *)(Memory + 12) = 1;
          qword_140EEFE38 = Memory;
          v11 = BgpFoInitialize(Memory, 0LL);
          if ( v11 >= 0 )
            goto LABEL_23;
LABEL_42:
          BgpFwLibraryDestroy();
          return (unsigned int)v11;
        }
LABEL_41:
        v11 = -1073741801;
        goto LABEL_42;
      }
      BgpFwAcquireLock();
      v11 = BgpFwLibraryEnable(a1 + 32);
      if ( v11 < 0 )
      {
        BgpFwReleaseLock(v14, v13);
        goto LABEL_42;
      }
      *(PHYSICAL_ADDRESS *)&xmmword_140EEFD70 = MmGetPhysicalAddress(qword_140EEFD40);
      DWORD2(xmmword_140EEFD70) = DWORD2(BgInternal);
      HIDWORD(xmmword_140EEFD70) = DWORD1(BgInternal);
      LODWORD(xmmword_140EEFD80) = HIDWORD(BgInternal);
      if ( (_DWORD)xmmword_140EEFD30 == 4 )
      {
        DWORD2(xmmword_140EEFD80) = 3;
      }
      else if ( (_DWORD)xmmword_140EEFD30 == 5 )
      {
        DWORD2(xmmword_140EEFD80) = 4;
      }
      else
      {
        DWORD2(xmmword_140EEFD80) = 0;
      }
      v15 = (const void **)(a1 + 72);
      v56 = 0;
      v16 = 0;
      xmmword_140EEFE70 = *(_OWORD *)(a1 + 272);
      v17 = 432;
      v18 = 0;
      v19 = 0;
      xmmword_140EEFE80 = *(_OWORD *)(a1 + 288);
      xmmword_140EEFE90 = *(_OWORD *)(a1 + 304);
      xmmword_140EEFEA0 = *(_OWORD *)(a1 + 320);
      xmmword_140EEFEB0 = *(_OWORD *)(a1 + 336);
      xmmword_140EEFEC0 = *(_OWORD *)(a1 + 352);
      xmmword_140EEFED0 = *(_OWORD *)(a1 + 368);
      xmmword_140EEFEE0 = *(_OWORD *)(a1 + 384);
      if ( *(_QWORD *)(a1 + 72) )
      {
        v19 = *(_DWORD *)(a1 + 84);
        v16 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
        v56 = 32;
        v18 = 32;
        v17 = v16 + 464;
      }
      v20 = 0;
      v21 = 0;
      v58 = 0;
      if ( *(_QWORD *)(a1 + 128) )
      {
        v20 = 32;
        v58 = 32;
        v21 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
        v17 += v21 + 32;
        v15 = (const void **)(a1 + 72);
      }
      v22 = v19 + 16496 + v17;
      v23 = v22 - v16 - v20 - v21 - v18 - 432;
      v24 = ((v23 >> 3) + 15) & 0xFFFFFFF0;
      v59 = v24 + v22;
      v25 = BgpFwAllocateMemory(v24 + v22);
      qword_140EEFDC0 = v25;
      v28 = v25;
      if ( !v25 )
      {
        BgpFwReleaseLock(v27, v26);
        goto LABEL_41;
      }
      v29 = 3LL;
      v30 = (_OWORD *)v25;
      v31 = (_OWORD *)a1;
      do
      {
        *v30 = *v31;
        v30[1] = v31[1];
        v30[2] = v31[2];
        v30[3] = v31[3];
        v30[4] = v31[4];
        v30[5] = v31[5];
        v30[6] = v31[6];
        v30 += 8;
        v32 = v31[7];
        v31 += 8;
        *(v30 - 1) = v32;
        --v29;
      }
      while ( v29 );
      *v30 = *v31;
      v30[1] = v31[1];
      *((_QWORD *)v30 + 4) = *((_QWORD *)v31 + 4);
      *(_DWORD *)v28 = v59;
      *(_DWORD *)(v28 + 120) |= 0x100000u;
      *(_QWORD *)(v28 + 240) = 0LL;
      *(_DWORD *)(v28 + 248) = 0;
      *(_QWORD *)(v28 + 264) = 0LL;
      *(_QWORD *)(v28 + 256) = 0LL;
      v60 = v16 + v56;
      v33 = (unsigned int *)(v28 + v21 + v16 + v56 + v58 + 432);
      BgpFwInitializeReservePool((__int64)v33 + v24, v23, v33);
      qword_140EEFE40 = 0LL;
      if ( !v16 )
        goto LABEL_49;
      v34 = (void *)(v28 + 432 + v56);
      memmove(v34, *v15, *(unsigned int *)(a1 + 80));
      *(_DWORD *)(v28 + 444) = 1;
      *(_QWORD *)(v28 + 432) = v34;
      *(_DWORD *)(v28 + 440) = *(_DWORD *)(a1 + 80);
      *(_QWORD *)(v28 + 448) = v34;
      dword_140EEFD90 |= 0x800u;
      v35 = BgpFoInitialize(v28 + 432, 1LL);
      dword_140EEFD90 &= ~0x800u;
      if ( v35 >= 0 )
        qword_140EEFE40 = v28 + 432;
      if ( !qword_140EEFE40 )
LABEL_49:
        DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
      qword_140EEFE48 = 0LL;
      if ( v21 )
      {
        v36 = v28 + v60 + 432;
        v37 = (void *)(v36 + v58);
        memmove(v37, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
        *(_DWORD *)(v36 + 12) = 1;
        *(_QWORD *)v36 = v37;
        *(_DWORD *)(v36 + 8) = *(_DWORD *)(a1 + 136);
        *(_QWORD *)(v36 + 16) = v37;
        qword_140EEFE48 = v36;
      }
      memset_0(&qword_140EEFDD8, 0, 0x58uLL);
      if ( *(_QWORD *)(a1 + 144) )
      {
        v38 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
        qword_140EEFDD8 = v38;
        if ( v38 )
        {
          memmove(v38, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
          LODWORD(Size) = *(_DWORD *)(a1 + 160);
          qword_140EEFDEC = *(_QWORD *)(a1 + 164);
        }
      }
      v39 = *(_QWORD *)(a1 + 184);
      if ( v39 && (int)BgpGxProcessQrCodeBitmap(v39, (int **)&qword_140EEFE18) < 0 )
        qword_140EEFE18 = 0LL;
      v40 = *(_QWORD *)(a1 + 216);
      if ( v40 )
      {
        v41 = -1LL;
        v42 = -1LL;
        do
          ++v42;
        while ( *(_WORD *)(v40 + 2 * v42) );
        Dst = (wchar_t *)BgpFwAllocateMemory(2 * v42 + 2);
        if ( Dst )
        {
          v43 = *(const wchar_t **)(a1 + 216);
          do
            ++v41;
          while ( v43[v41] );
          wcscpy_s(Dst, v41 + 1, v43);
        }
      }
      qword_140EEFE38 = 0LL;
      if ( *(_QWORD *)(a1 + 88) )
      {
        v44 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
        v45 = (__int64)v44;
        if ( v44 )
        {
          memmove(v44, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
          v46 = BgpFwAllocateMemory(0x18uLL);
          v47 = v46;
          if ( !v46 )
          {
            v48 = v45;
LABEL_72:
            BgpFwFreeMemory(v48);
            goto LABEL_73;
          }
          *(_DWORD *)(v46 + 12) = 0;
          *(_QWORD *)v46 = v45;
          *(_DWORD *)(v46 + 8) = *(_DWORD *)(a1 + 96);
          *(_QWORD *)(v46 + 16) = v45;
          if ( (int)BgpFoInitialize(v46, 0LL) < 0 )
          {
            BgpFwFreeMemory(v45);
            v48 = v47;
            goto LABEL_72;
          }
          qword_140EEFE38 = v47;
        }
      }
LABEL_73:
      if ( *(_DWORD *)(a1 + 116) >= 3u )
      {
        qword_140EEFF10 = *(_QWORD *)(a1 + 404);
        dword_140EEFF18 = *(_DWORD *)(a1 + 412);
      }
      dword_140EEFEF8 = *(_DWORD *)(a1 + 400);
      if ( *(_DWORD *)(a1 + 116) >= 5u )
        dword_140EEFF1C = *(_DWORD *)(a1 + 416);
      dword_140EEFD90 |= 0x8000u;
      BgpBcInitializeCriticalMode(a1, a2);
      dword_140EEFD90 = dword_140EEFD90 & 0xFFFF77FF | 0x800;
      v49 = BgpFwAllocateMemory(0x48uLL);
      dword_140EEFD90 &= ~0x800u;
      v50 = v49;
      if ( v49 )
      {
        v51 = *(_QWORD *)(a1 + 256);
        if ( v51 )
        {
          *(_OWORD *)v50 = *(_OWORD *)v51;
          *(_OWORD *)(v50 + 16) = *(_OWORD *)(v51 + 16);
          *(_DWORD *)(v50 + 32) = *(_DWORD *)(v51 + 32);
          *(_QWORD *)(v28 + 256) = v50;
          v50 += 36LL;
        }
        v52 = *(_QWORD *)(a1 + 264);
        if ( v52 )
        {
          *(_OWORD *)v50 = *(_OWORD *)v52;
          *(_OWORD *)(v50 + 16) = *(_OWORD *)(v52 + 16);
          *(_DWORD *)(v50 + 32) = *(_DWORD *)(v52 + 32);
          *(_QWORD *)(v28 + 264) = v50;
        }
      }
      qword_140EEFE58 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
      qword_140EEFE50 = AnFwConfigureProgressResources(*(int **)(a1 + 264));
      v53 = *(_DWORD *)(a1 + 124);
      dword_140EEFD90 |= v5 | 0x80;
      dword_140EEFD94 = v53;
      BgpFwReleaseLock(v55, v54);
      qword_140EEFE30 = *(_QWORD *)(a1 + 232);
      goto LABEL_83;
    }
  }
  return 3221225485LL;
}
