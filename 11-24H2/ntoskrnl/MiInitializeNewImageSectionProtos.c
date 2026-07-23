/*
 * XREFs of MiInitializeNewImageSectionProtos @ 0x1403F0B48
 * Callers:
 *     MiSectionCreated @ 0x1403F09E0 (MiSectionCreated.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140347E90 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiReferenceControlAreaPfn @ 0x140347F04 (MiReferenceControlAreaPfn.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiReturnPfnReferenceCount @ 0x1403F02E4 (MiReturnPfnReferenceCount.c)
 *     MiInitializeTransitionPfn @ 0x1403F2C1C (MiInitializeTransitionPfn.c)
 */

void __fastcall MiInitializeNewImageSectionProtos(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  unsigned int v4; // esi
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 *v10; // r15
  int v11; // ebp
  unsigned __int64 v12; // r12
  ULONG_PTR v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // esi
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  unsigned __int8 v24; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v25; // [rsp+88h] [rbp+10h]
  unsigned int v26; // [rsp+90h] [rbp+18h]
  unsigned int v27; // [rsp+98h] [rbp+20h]

  if ( !a2 )
    return;
  v25 = a2;
  v2 = *(_QWORD *)(a1 + 136);
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 172);
  v23 = v2;
  v26 = v4;
  do
  {
    if ( (*((_BYTE *)v3 + 10) & 4) != 0 )
      goto LABEL_5;
    MmUnmapLockedPages((PVOID)v3[3], (PMDL)v3);
    v10 = v3 + 6;
    v11 = *((_DWORD *)v3 + 10) >> 12;
    v12 = 0LL;
    v27 = *((_DWORD *)v3 + 4);
    v9 = v27;
    v24 = 17;
    v13 = v2 + 8LL * v27;
    if ( !v11 )
      goto LABEL_5;
    v14 = 0LL;
    do
    {
      v21 = *v10;
      v15 = 48 * *v10 - 0x220000000000LL;
      if ( v9 < v4 )
      {
        if ( (v13 & 0xFFFFFFFFFFFFF000uLL) != v12 )
        {
          if ( v12 )
          {
            LOBYTE(v6) = v24;
            MiUnlockProtoPoolPage(v14, v6, v7, v8);
          }
          v14 = MiLockProtoPoolPageForce(v13, &v24);
          v12 = v13 & 0xFFFFFFFFFFFFF000uLL;
        }
        v16 = MiLockLeafPage((unsigned __int64 *)v13, 0);
        if ( v16 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (*(_QWORD *)v13 & 0x400LL) != 0 )
        {
          v20 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v20 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v20);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v15 + 24) < 0 );
          }
          MiInitializeTransitionPfn(v21, v13, -1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (*(_DWORD *)(v15 + 16) & 0x400LL) != 0 )
            MiReferenceControlAreaPfn(a1, 0LL, 1u);
          goto LABEL_16;
        }
        MiReturnPfnReferenceCountAtDpc(v15, v17, v18, v19);
        *v10 = -1LL;
LABEL_16:
        v4 = v26;
        goto LABEL_17;
      }
      MiReturnPfnReferenceCount(48 * v21 - 0x220000000000LL, v6, v7, v8);
      *v10 = -1LL;
LABEL_17:
      v13 += 8LL;
      v9 = v27 + 1;
      ++v10;
      ++v27;
      --v11;
    }
    while ( v11 );
    v22 = v14;
    v3 = v25;
    if ( v12 )
    {
      LOBYTE(v6) = v24;
      MiUnlockProtoPoolPage(v22, v6, v7, v8);
    }
    v2 = v23;
LABEL_5:
    v3 = (__int64 *)*v3;
    v25 = v3;
  }
  while ( v3 );
}
