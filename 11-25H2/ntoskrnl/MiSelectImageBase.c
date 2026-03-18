/*
 * XREFs of MiSelectImageBase @ 0x1409401DC
 * Callers:
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsEx @ 0x1403F1DD0 (RtlFindClearBitsEx.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     RtlCopyBitMapEx @ 0x140420710 (RtlCopyBitMapEx.c)
 *     MiSetControlAreaSystemVa @ 0x1404ABEF0 (MiSetControlAreaSystemVa.c)
 *     RtlMergeBitMapsEx @ 0x1405DC030 (RtlMergeBitMapsEx.c)
 *     MiObtainRelocationBits @ 0x1409405A0 (MiObtainRelocationBits.c)
 *     MiGetImageWowSubsystemIndex @ 0x140941B90 (MiGetImageWowSubsystemIndex.c)
 *     MiBytesToMapSystemImage @ 0x140A5B4A4 (MiBytesToMapSystemImage.c)
 *     MiSelectSystemImageAddress @ 0x140A5B4F0 (MiSelectSystemImageAddress.c)
 *     MiSelectOverflowDllBase @ 0x140A82678 (MiSelectOverflowDllBase.c)
 *     MiImageCanUseHighOverflowArea @ 0x140A8282C (MiImageCanUseHighOverflowArea.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int64 *a5)
{
  __int64 v5; // r13
  int v6; // ebx
  int v7; // r10d
  int v8; // ebp
  __int64 v9; // r11
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 ClearBits; // r14
  unsigned __int64 v17; // rdx
  unsigned int v18; // r12d
  __int16 v19; // r10
  unsigned __int64 v20; // r8
  __int64 *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v25; // rax
  int ImageWowSubsystemIndex; // esi
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rax
  bool v31; // zf
  __int64 v32; // [rsp+20h] [rbp-78h]
  __int64 *v33; // [rsp+20h] [rbp-78h]
  __int64 v34; // [rsp+28h] [rbp-70h]
  unsigned __int64 v35; // [rsp+30h] [rbp-68h]
  unsigned __int64 v36; // [rsp+38h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-58h]
  __int64 *v38; // [rsp+50h] [rbp-48h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-40h]
  __int64 v40; // [rsp+A0h] [rbp+8h]

  v5 = *(_QWORD *)a1;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v11 = 0LL;
  if ( !_bittest16((const signed __int16 *)(a1 + 12), 0xFu) )
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( (*(_BYTE *)(v12 + 51) & 0x10) != 0 && _bittest16((const signed __int16 *)(v12 + 44), 0xDu) )
      v13 = 2;
    else
      v13 = *(_QWORD *)(a1 + 32) <= 0xFFFFFFFFuLL;
    goto LABEL_4;
  }
  ImageWowSubsystemIndex = MiGetImageWowSubsystemIndex();
  if ( ImageWowSubsystemIndex == -1 )
  {
    v13 = 4;
  }
  else
  {
    v13 = ImageWowSubsystemIndex + 3;
    if ( v13 != 4 )
LABEL_4:
      *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v13 << 20)) & 0x300000;
  }
  v14 = *(_QWORD *)(a1 + 56);
  LODWORD(v15) = *(_DWORD *)(a1 + 8);
  v34 = v14;
  if ( v8 )
  {
    v25 = MiBytesToMapSystemImage((unsigned int)((_DWORD)v15 << 12));
    if ( v25 )
    {
      v14 = v34;
      v15 = v25 >> 12;
      goto LABEL_10;
    }
    return 3221225503LL;
  }
  if ( !dword_140E2D570 || (*(_DWORD *)(v14 + 76) & 0x40) == 0 )
    goto LABEL_10;
  if ( ((unsigned int)dword_140E2D570 >> 12) + (unsigned int)v15 < (unsigned int)v15 )
    return 3221225503LL;
  LODWORD(v15) = ((unsigned int)dword_140E2D570 >> 12) + v15;
LABEL_10:
  ClearBits = -1LL;
  if ( v7 )
  {
    LOWORD(v18) = 0;
    v11 = *(_QWORD *)(a1 + 32);
    v6 = 1;
    goto LABEL_24;
  }
  v17 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(v9 + 40);
  v18 = (unsigned int)(v15 + 15) >> 4;
  v35 = v17;
  if ( !v8 )
  {
    v19 = 0x2000;
    if ( (*(_WORD *)(v14 + 44) & 0x2000) == 0 )
      goto LABEL_34;
    v38 = 0LL;
    LOBYTE(a3) = v13 != 4;
    if ( dword_140FC4200 && (unsigned int)MiImageCanUseHighOverflowArea(a1, v17, a3) )
    {
LABEL_35:
      if ( (*(_DWORD *)(v5 + 92) & 0x800000) != 0 )
      {
        v11 = *(_QWORD *)(a1 + 32);
        v6 = 1;
        goto LABEL_25;
      }
      if ( v13 )
      {
        if ( ((unsigned __int16)v19 & *(_WORD *)(v14 + 44)) != 0 )
        {
          v11 = MiSelectOverflowDllBase(a1, v17, v13);
        }
        else
        {
          v28 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
          if ( v35 < 0x1000000 )
            v11 = v28 + 0x10000;
          else
            v11 = v35 - v28;
        }
      }
      else
      {
        v11 = ((unsigned int)ExGenRandom(1) % (131073 - (unsigned __int64)(unsigned __int16)v18) + 2146828288) << 16;
      }
      v6 = 1;
LABEL_24:
      *(_DWORD *)(v5 + 88) = ClearBits;
      *(_WORD *)(v5 + 92) = v18;
LABEL_25:
      *(_DWORD *)(v5 + 92) = *(_DWORD *)(v5 + 92) & 0xFF7FFFFF | (v6 << 23);
      *a5 = v11;
      return 0LL;
    }
    if ( !(_BYTE)a3 )
    {
LABEL_34:
      if ( ClearBits != -1LL )
        goto LABEL_24;
      goto LABEL_35;
    }
    v39 = 0LL;
    if ( v13 == 1 )
    {
      v20 = qword_140E2D490;
      v21 = &qword_140E2D480;
      v40 = 2013265920LL;
    }
    else
    {
      if ( v13 == 2 )
      {
        v38 = (__int64 *)&unk_140E2D428;
        CurrentThread = KeGetCurrentThread();
        v40 = 2013265920LL;
        v29 = qword_140E2D468;
        --CurrentThread->SpecialApcDisable;
        v39 = &qword_140E2D480;
        v36 = v29;
        v30 = KeAbPreAcquire((__int64)&qword_140E2D3E8, 0LL);
        v33 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D3E8, 0LL) )
        {
          ExfAcquirePushLockExclusiveEx(&qword_140E2D3E8, v30, (__int64)&qword_140E2D3E8);
          v30 = v33;
        }
        if ( v30 )
          *((_BYTE *)v30 + 10) = 1;
        RtlCopyBitMapEx((unsigned __int64 *)&unk_140E2D428, &qword_140E2D470, 0LL);
        RtlMergeBitMapsEx((unsigned __int64 *)&qword_140E2D470, &qword_140E2D480);
        v32 = (unsigned __int16)v18;
        ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140E2D470, (unsigned __int16)v18, v36);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D3E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D3E8);
        KeAbPostRelease((ULONG_PTR)&qword_140E2D3E8);
        v31 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v31
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        goto LABEL_21;
      }
      if ( v13 == 3 )
      {
        v20 = qword_140E2D468;
        v21 = (__int64 *)&unk_140E2D428;
        v22 = 2013265920LL;
      }
      else
      {
        v20 = qword_140E2D400;
        v21 = &qword_140E2D3F0;
        v22 = 0x7FFFFFFF0000LL;
      }
      v40 = v22;
    }
    v38 = v21;
    v32 = (unsigned __int16)v18;
    ClearBits = RtlFindClearBitsEx((unsigned __int64 *)v21, (unsigned __int16)v18, v20);
LABEL_21:
    if ( ClearBits != -1LL )
    {
      v23 = MiObtainRelocationBits(&v38, (unsigned __int16)v18, ClearBits);
      ClearBits = v23;
      if ( v23 != -1 )
      {
        v11 = v40 - ((v23 + v32) << 16);
        goto LABEL_24;
      }
    }
    v17 = v35;
    v19 = 0x2000;
    v14 = v34;
    goto LABEL_34;
  }
  v27 = MiSelectSystemImageAddress();
  v11 = v27;
  if ( v27 )
  {
    *(_WORD *)(v5 + 92) = v18;
    *(_DWORD *)(v5 + 88) = (unsigned __int64)(v27 + 0x800000000000LL) >> 16;
    MiSetControlAreaSystemVa(v5, v8);
    goto LABEL_25;
  }
  return 3221225626LL;
}
