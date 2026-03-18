/*
 * XREFs of MiInitializeNewImageSectionProtos @ 0x1404536FC
 * Callers:
 *     MiSectionCreated @ 0x140453594 (MiSectionCreated.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14033BC20 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiReferenceControlAreaPfn @ 0x14033BC94 (MiReferenceControlAreaPfn.c)
 *     MiInitializeTransitionPfn @ 0x140453E64 (MiInitializeTransitionPfn.c)
 *     MiReturnPfnReferenceCount @ 0x14045416C (MiReturnPfnReferenceCount.c)
 */

void __fastcall MiInitializeNewImageSectionProtos(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  unsigned int v4; // esi
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned int v8; // ecx
  __int64 *v9; // r15
  int v10; // ebp
  unsigned __int64 v11; // r12
  ULONG_PTR v12; // r14
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  int v19; // esi
  __int64 v20; // [rsp+20h] [rbp-58h]
  ULONG_PTR v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int8 v23; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v24; // [rsp+88h] [rbp+10h]
  unsigned int v25; // [rsp+90h] [rbp+18h]
  unsigned int v26; // [rsp+98h] [rbp+20h]

  if ( !a2 )
    return;
  v24 = a2;
  v2 = *(_QWORD *)(a1 + 136);
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 172);
  v22 = v2;
  v25 = v4;
  do
  {
    if ( (*((_BYTE *)v3 + 10) & 4) != 0 )
      goto LABEL_5;
    MmUnmapLockedPages((PVOID)v3[3], (PMDL)v3);
    v9 = v3 + 6;
    v10 = *((_DWORD *)v3 + 10) >> 12;
    v11 = 0LL;
    v26 = *((_DWORD *)v3 + 4);
    v8 = v26;
    v23 = 17;
    v12 = v2 + 8LL * v26;
    if ( !v10 )
      goto LABEL_5;
    v13 = 0LL;
    do
    {
      v20 = *v9;
      v14 = 48 * *v9 - 0x220000000000LL;
      if ( v8 < v4 )
      {
        if ( (v12 & 0xFFFFFFFFFFFFF000uLL) != v11 )
        {
          if ( v11 )
            MiUnlockProtoPoolPage(v13, v23, v6, v7);
          v13 = MiLockProtoPoolPageForce(v12, &v23);
          v11 = v12 & 0xFFFFFFFFFFFFF000uLL;
        }
        v15 = MiLockLeafPage((unsigned __int64 *)v12, 0);
        if ( v15 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (*(_QWORD *)v12 & 0x400LL) != 0 )
        {
          v19 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          MiInitializeTransitionPfn(v20, v12, -1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
            MiReferenceControlAreaPfn(a1, 0LL, 1u);
          goto LABEL_16;
        }
        MiReturnPfnReferenceCountAtDpc(v14, v16, v17, v18);
        *v9 = -1LL;
LABEL_16:
        v4 = v25;
        goto LABEL_17;
      }
      MiReturnPfnReferenceCount(48 * v20 - 0x220000000000LL);
      *v9 = -1LL;
LABEL_17:
      v12 += 8LL;
      v8 = v26 + 1;
      ++v9;
      ++v26;
      --v10;
    }
    while ( v10 );
    v21 = v13;
    v3 = v24;
    if ( v11 )
      MiUnlockProtoPoolPage(v21, v23, v6, v7);
    v2 = v22;
LABEL_5:
    v3 = (__int64 *)*v3;
    v24 = v3;
  }
  while ( v3 );
}
