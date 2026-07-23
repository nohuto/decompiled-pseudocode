/*
 * XREFs of BgpFwLibraryInitialize @ 0x140BB7400
 * Callers:
 *     BgLibraryInitialize @ 0x140BB2760 (BgLibraryInitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     BgpFwLibraryEnable @ 0x140699184 (BgpFwLibraryEnable.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14069963C (BgpGxProcessQrCodeBitmap.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AnFwProgressIndicatorTransition @ 0x140BB2008 (AnFwProgressIndicatorTransition.c)
 *     BgpFwInitializeReservePool @ 0x140BB3634 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDestroy @ 0x140BB3678 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140BB3828 (BgpFwReservePoolSwap.c)
 *     ResFwConfigureDisplayStringResources @ 0x140BB38C4 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140BB3CFC (AnFwConfigureProgressResources.c)
 *     LogFwInitialize @ 0x140BB4E70 (LogFwInitialize.c)
 *     BgpFwInitializeLock @ 0x140C7201C (BgpFwInitializeLock.c)
 *     BgpFoInitialize @ 0x140C72100 (BgpFoInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x140C72EA4 (BgpBcInitializeCriticalMode.c)
 */

__int64 __fastcall BgpFwLibraryInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 result; // rax
  int v7; // ebp
  unsigned int *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 Memory; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  const void **v17; // r12
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  int v22; // edx
  unsigned int v23; // edi
  int v24; // eax
  unsigned int v25; // r14d
  unsigned int v26; // r13d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rdx
  _OWORD *v32; // rcx
  _OWORD *v33; // rax
  __int128 v34; // xmm1
  unsigned int *v35; // r8
  void *v36; // rbx
  int v37; // eax
  __int64 v38; // rdi
  void *v39; // rbx
  void *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  const wchar_t *v45; // r8
  void *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // [rsp+70h] [rbp+8h]
  unsigned int v59; // [rsp+78h] [rbp+10h]
  unsigned int v60; // [rsp+80h] [rbp+18h]
  unsigned int v61; // [rsp+88h] [rbp+20h]
  unsigned int v62; // [rsp+88h] [rbp+20h]

  v59 = a2;
  v4 = a2;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 116) < 5u )
      return 3221225561LL;
    v7 = *(_DWORD *)(a1 + 120) & 0x16FF0000;
    if ( (dword_140EF0270 & 1) == 0 || (dword_140EF0270 & 4) != 0 || (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
      {
        BgpFwAcquireLock(a1, a2, a3, a4);
        if ( v4 == -1 )
        {
          qword_140EF0220 = 0LL;
          dword_140EF0270 = dword_140EF0270 & 0xFFEFE7FD | 0x101800;
          BgInternal = 0LL;
          xmmword_140EF0210 = 0LL;
          result = BgpFwLibraryEnable(a1 + 32);
          if ( (int)result < 0 )
            return result;
          dword_140EF0270 &= ~0x2000u;
          v8 = *(unsigned int **)(a1 + 16);
          if ( v8 )
          {
            BgpFwReservePoolSwap(0, *(_QWORD *)(a1 + 240), *(_DWORD *)(a1 + 248), v8);
            qword_140EF0338 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
            qword_140EF0330 = AnFwConfigureProgressResources(*(int **)(a1 + 264));
          }
          else
          {
            qword_140EF0338 = 0LL;
            qword_140EF0330 = 0LL;
          }
          LogFwInitialize();
        }
        else
        {
          dword_140EF0270 &= ~0x1000u;
          AnFwProgressIndicatorTransition();
        }
        BgpFwReleaseLock(v10, v9);
        goto LABEL_83;
      }
      if ( (_DWORD)a2 == -1 )
      {
        dword_140EF0270 = BgpFwInitializeLock() | 0xC04;
        qword_140EF0348 = (__int64)&qword_140EF0340;
        qword_140EF0340 = (__int64)&qword_140EF0340;
        v12 = *(_QWORD *)(v11 + 240);
        if ( !v12 || !*(_DWORD *)(a1 + 248) )
          return 3221225626LL;
        BgpFwInitializeReservePool(v12, 0x4000u, dword_140E64790);
        v13 = BgpFwLibraryEnable(a1 + 32);
        if ( v13 < 0 )
          goto LABEL_42;
        xmmword_140EF02A8 = *(_OWORD *)(a1 + 100);
        if ( !*(_QWORD *)(a1 + 88) )
        {
LABEL_23:
          if ( *(_DWORD *)(a1 + 116) >= 3u )
          {
            qword_140EF03F0 = *(_QWORD *)(a1 + 404);
            dword_140EF03F8 = *(_DWORD *)(a1 + 412);
          }
          dword_140EF03D8 = *(_DWORD *)(a1 + 400);
          v13 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
          if ( v13 < 0 )
            goto LABEL_42;
LABEL_83:
          dword_140EF0270 |= 1u;
          return 0;
        }
        Memory = BgpFwAllocateMemory(0x18uLL);
        if ( Memory )
        {
          *(_QWORD *)Memory = *(_QWORD *)(a1 + 88);
          *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 96);
          *(_QWORD *)(Memory + 16) = *(_QWORD *)(a1 + 88);
          *(_DWORD *)(Memory + 12) = 1;
          qword_140EF0318 = Memory;
          v13 = BgpFoInitialize(Memory, 0LL);
          if ( v13 >= 0 )
            goto LABEL_23;
LABEL_42:
          BgpFwLibraryDestroy();
          return (unsigned int)v13;
        }
LABEL_41:
        v13 = -1073741801;
        goto LABEL_42;
      }
      BgpFwAcquireLock(a1, a2, a3, a4);
      v13 = BgpFwLibraryEnable(a1 + 32);
      if ( v13 < 0 )
      {
        BgpFwReleaseLock(v16, v15);
        goto LABEL_42;
      }
      *(PHYSICAL_ADDRESS *)&xmmword_140EF0250 = MmGetPhysicalAddress(qword_140EF0220);
      DWORD2(xmmword_140EF0250) = DWORD2(BgInternal);
      HIDWORD(xmmword_140EF0250) = DWORD1(BgInternal);
      LODWORD(xmmword_140EF0260) = HIDWORD(BgInternal);
      if ( (_DWORD)xmmword_140EF0210 == 4 )
      {
        DWORD2(xmmword_140EF0260) = 3;
      }
      else if ( (_DWORD)xmmword_140EF0210 == 5 )
      {
        DWORD2(xmmword_140EF0260) = 4;
      }
      else
      {
        DWORD2(xmmword_140EF0260) = 0;
      }
      v17 = (const void **)(a1 + 72);
      v58 = 0;
      v18 = 0;
      xmmword_140EF0350 = *(_OWORD *)(a1 + 272);
      v19 = 432;
      v20 = 0;
      v21 = 0;
      xmmword_140EF0360 = *(_OWORD *)(a1 + 288);
      xmmword_140EF0370 = *(_OWORD *)(a1 + 304);
      xmmword_140EF0380 = *(_OWORD *)(a1 + 320);
      xmmword_140EF0390 = *(_OWORD *)(a1 + 336);
      xmmword_140EF03A0 = *(_OWORD *)(a1 + 352);
      xmmword_140EF03B0 = *(_OWORD *)(a1 + 368);
      xmmword_140EF03C0 = *(_OWORD *)(a1 + 384);
      if ( *(_QWORD *)(a1 + 72) )
      {
        v21 = *(_DWORD *)(a1 + 84);
        v18 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
        v58 = 32;
        v20 = 32;
        v19 = v18 + 464;
      }
      v22 = 0;
      v23 = 0;
      v60 = 0;
      if ( *(_QWORD *)(a1 + 128) )
      {
        v22 = 32;
        v60 = 32;
        v23 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
        v19 += v23 + 32;
        v17 = (const void **)(a1 + 72);
      }
      v24 = v21 + 16496 + v19;
      v25 = v24 - v18 - v22 - v23 - v20 - 432;
      v26 = ((v25 >> 3) + 15) & 0xFFFFFFF0;
      v61 = v26 + v24;
      v27 = BgpFwAllocateMemory(v26 + v24);
      qword_140EF02A0 = v27;
      v30 = v27;
      if ( !v27 )
      {
        BgpFwReleaseLock(v29, v28);
        goto LABEL_41;
      }
      v31 = 3LL;
      v32 = (_OWORD *)v27;
      v33 = (_OWORD *)a1;
      do
      {
        *v32 = *v33;
        v32[1] = v33[1];
        v32[2] = v33[2];
        v32[3] = v33[3];
        v32[4] = v33[4];
        v32[5] = v33[5];
        v32[6] = v33[6];
        v32 += 8;
        v34 = v33[7];
        v33 += 8;
        *(v32 - 1) = v34;
        --v31;
      }
      while ( v31 );
      *v32 = *v33;
      v32[1] = v33[1];
      *((_QWORD *)v32 + 4) = *((_QWORD *)v33 + 4);
      *(_DWORD *)v30 = v61;
      *(_DWORD *)(v30 + 120) |= 0x100000u;
      *(_QWORD *)(v30 + 240) = 0LL;
      *(_DWORD *)(v30 + 248) = 0;
      *(_QWORD *)(v30 + 264) = 0LL;
      *(_QWORD *)(v30 + 256) = 0LL;
      v62 = v18 + v58;
      v35 = (unsigned int *)(v30 + v23 + v18 + v58 + v60 + 432);
      BgpFwInitializeReservePool((__int64)v35 + v26, v25, v35);
      qword_140EF0320 = 0LL;
      if ( !v18 )
        goto LABEL_49;
      v36 = (void *)(v30 + 432 + v58);
      memmove(v36, *v17, *(unsigned int *)(a1 + 80));
      *(_DWORD *)(v30 + 444) = 1;
      *(_QWORD *)(v30 + 432) = v36;
      *(_DWORD *)(v30 + 440) = *(_DWORD *)(a1 + 80);
      *(_QWORD *)(v30 + 448) = v36;
      dword_140EF0270 |= 0x800u;
      v37 = BgpFoInitialize(v30 + 432, 1LL);
      dword_140EF0270 &= ~0x800u;
      if ( v37 >= 0 )
        qword_140EF0320 = v30 + 432;
      if ( !qword_140EF0320 )
LABEL_49:
        DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
      qword_140EF0328 = 0LL;
      if ( v23 )
      {
        v38 = v30 + v62 + 432;
        v39 = (void *)(v38 + v60);
        memmove(v39, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
        *(_DWORD *)(v38 + 12) = 1;
        *(_QWORD *)v38 = v39;
        *(_DWORD *)(v38 + 8) = *(_DWORD *)(a1 + 136);
        *(_QWORD *)(v38 + 16) = v39;
        qword_140EF0328 = v38;
      }
      memset_0(&qword_140EF02B8, 0, 0x58uLL);
      if ( *(_QWORD *)(a1 + 144) )
      {
        v40 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
        qword_140EF02B8 = v40;
        if ( v40 )
        {
          memmove(v40, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
          LODWORD(Size) = *(_DWORD *)(a1 + 160);
          qword_140EF02CC = *(_QWORD *)(a1 + 164);
        }
      }
      v41 = *(_QWORD *)(a1 + 184);
      if ( v41 && (int)BgpGxProcessQrCodeBitmap(v41, (int **)&qword_140EF02F8) < 0 )
        qword_140EF02F8 = 0LL;
      v42 = *(_QWORD *)(a1 + 216);
      if ( v42 )
      {
        v43 = -1LL;
        v44 = -1LL;
        do
          ++v44;
        while ( *(_WORD *)(v42 + 2 * v44) );
        Dst = (wchar_t *)BgpFwAllocateMemory(2 * v44 + 2);
        if ( Dst )
        {
          v45 = *(const wchar_t **)(a1 + 216);
          do
            ++v43;
          while ( v45[v43] );
          wcscpy_s(Dst, v43 + 1, v45);
        }
      }
      qword_140EF0318 = 0LL;
      if ( *(_QWORD *)(a1 + 88) )
      {
        v46 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
        v47 = (__int64)v46;
        if ( v46 )
        {
          memmove(v46, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
          v48 = BgpFwAllocateMemory(0x18uLL);
          v49 = v48;
          if ( !v48 )
          {
            v50 = v47;
LABEL_72:
            BgpFwFreeMemory(v50);
            goto LABEL_73;
          }
          *(_DWORD *)(v48 + 12) = 0;
          *(_QWORD *)v48 = v47;
          *(_DWORD *)(v48 + 8) = *(_DWORD *)(a1 + 96);
          *(_QWORD *)(v48 + 16) = v47;
          if ( (int)BgpFoInitialize(v48, 0LL) < 0 )
          {
            BgpFwFreeMemory(v47);
            v50 = v49;
            goto LABEL_72;
          }
          qword_140EF0318 = v49;
        }
      }
LABEL_73:
      if ( *(_DWORD *)(a1 + 116) >= 3u )
      {
        qword_140EF03F0 = *(_QWORD *)(a1 + 404);
        dword_140EF03F8 = *(_DWORD *)(a1 + 412);
      }
      dword_140EF03D8 = *(_DWORD *)(a1 + 400);
      if ( *(_DWORD *)(a1 + 116) >= 5u )
        dword_140EF03FC = *(_DWORD *)(a1 + 416);
      dword_140EF0270 |= 0x8000u;
      BgpBcInitializeCriticalMode(a1, v59);
      dword_140EF0270 = dword_140EF0270 & 0xFFFF77FF | 0x800;
      v51 = BgpFwAllocateMemory(0x48uLL);
      dword_140EF0270 &= ~0x800u;
      v52 = v51;
      if ( v51 )
      {
        v53 = *(_QWORD *)(a1 + 256);
        if ( v53 )
        {
          *(_OWORD *)v52 = *(_OWORD *)v53;
          *(_OWORD *)(v52 + 16) = *(_OWORD *)(v53 + 16);
          *(_DWORD *)(v52 + 32) = *(_DWORD *)(v53 + 32);
          *(_QWORD *)(v30 + 256) = v52;
          v52 += 36LL;
        }
        v54 = *(_QWORD *)(a1 + 264);
        if ( v54 )
        {
          *(_OWORD *)v52 = *(_OWORD *)v54;
          *(_OWORD *)(v52 + 16) = *(_OWORD *)(v54 + 16);
          *(_DWORD *)(v52 + 32) = *(_DWORD *)(v54 + 32);
          *(_QWORD *)(v30 + 264) = v52;
        }
      }
      qword_140EF0338 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
      qword_140EF0330 = AnFwConfigureProgressResources(*(int **)(a1 + 264));
      v55 = *(_DWORD *)(a1 + 124);
      dword_140EF0270 |= v7 | 0x80;
      dword_140EF0274 = v55;
      BgpFwReleaseLock(v57, v56);
      qword_140EF0310 = *(_QWORD *)(a1 + 232);
      goto LABEL_83;
    }
  }
  return 3221225485LL;
}
