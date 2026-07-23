/*
 * XREFs of MiDeleteSubsectionLargePages @ 0x1404C3EC4
 * Callers:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14034F90C (MiConvertSmallPageRangeToLarge.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiGetLeafPfnBuddy @ 0x14042D1D0 (MiGetLeafPfnBuddy.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MmUnlockPreChargedPagedPool @ 0x140AA8970 (MmUnlockPreChargedPagedPool.c)
 *     MmReturnChargesToLockPagedPool @ 0x140AB5BF0 (MmReturnChargesToLockPagedPool.c)
 */

__int64 __fastcall MiDeleteSubsectionLargePages(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 *v7; // r15
  __int64 v8; // r15
  ULONG_PTR v9; // rdi
  char v10; // r8
  _QWORD *v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rbx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int16 v21; // dx
  signed __int32 v23[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  unsigned __int64 LeafPfnBuddy; // [rsp+40h] [rbp-58h]
  int v28; // [rsp+A8h] [rbp+10h]
  int v29; // [rsp+A8h] [rbp+10h]
  unsigned int v31; // [rsp+B8h] [rbp+20h] BYREF

  v24 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( a2 )
  {
    v8 = a3;
    do
    {
      v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x44000000000LL) >> 4);
      LeafPfnBuddy = MiGetLeafPfnBuddy(v6);
      v11 = (_QWORD *)LeafPfnBuddy;
      if ( v8 )
      {
        MiUpdateLargePageBitMap(
          *((_QWORD *)qword_140E300C8 + ((v6[5] >> 43) & 0x3FFLL)),
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x44000000000LL) >> 4),
          0x200uLL,
          v10);
        v13 = (unsigned __int64)(v6 + 3072);
        CurrentIrql = KeGetCurrentIrql();
        v15 = 2LL;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v12) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v12, 2LL);
        }
        if ( (unsigned __int64)v6 < v13 )
        {
          v16 = (volatile signed __int32 *)(v6 + 3);
          v4 += 512LL;
          do
          {
            v31 = 0;
            while ( _interlockedbittestandset64(v16, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v31);
              while ( *(__int64 *)v16 < 0 );
            }
            *(_QWORD *)v16 &= 0xC000000000000000uLL;
            v28 = *((_DWORD *)v16 + 2);
            v17 = (_WORD)v28 == 2;
            LOWORD(v28) = v28 - 2;
            *((_DWORD *)v16 + 2) = v28;
            if ( v17 )
            {
              _InterlockedOr(v23, 0);
              MiSetPfnTbFlushStamp((__int64)(v16 - 6), (unsigned int)KiTbFlushTimeStamp, 1);
              MiInsertPageInFreeOrZeroedList(v9, 2LL);
              ++v5;
            }
            else
            {
              if ( (*(_QWORD *)v16 & 0x4000000000000000LL) == 0 )
                *(_QWORD *)v16 |= 0x4000000000000000uLL;
              v29 = *((_DWORD *)v16 + 2);
              BYTE2(v29) |= 7u;
              *((_DWORD *)v16 + 2) = v29;
            }
            _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
            if ( (++v9 & 0x3F) == 0 )
            {
              if ( KiIrqlFlags )
              {
                LOBYTE(v15) = CurrentIrql;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
              }
              __writecr8(CurrentIrql);
              v18 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v15) = 2;
                KiRaiseIrqlProcessIrqlFlags(v18, v15);
              }
            }
            v16 += 12;
          }
          while ( (unsigned __int64)(v16 - 6) < v13 );
          v11 = (_QWORD *)LeafPfnBuddy;
          v8 = a3;
        }
        if ( KiIrqlFlags )
        {
          LOBYTE(v15) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
        }
        __writecr8(CurrentIrql);
        v3 = v25;
      }
      else
      {
        MiConvertSmallPageRangeToLarge(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x44000000000LL) >> 4), 1LL);
        v3 += MiFreeLargePages(
                *((_QWORD *)qword_140E300C8 + ((v6[5] >> 43) & 0x3FFLL)),
                (unsigned __int64)v6,
                &v24,
                &v24,
                3);
        v25 = v3;
        v4 += 512LL;
      }
      v6 = v11;
    }
    while ( v11 );
    v7 = a1;
  }
  v19 = 8LL * *((unsigned int *)v7 + 11);
  MmUnlockPreChargedPagedPool(v7[1], v19);
  MmReturnChargesToLockPagedPool(v7[1], v19);
  v20 = *v7;
  if ( v5 )
    MiReleaseNonPagedResources(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(*v7 + 60) & 0x3FF)), v5);
  v21 = *(_WORD *)(v20 + 60);
  *(_QWORD *)(v20 + 120) = (*(_QWORD *)(v20 + 120) - v4) ^ (*(_QWORD *)(v20 + 120) ^ (*(_QWORD *)(v20 + 120) - v4)) & 0xFFFFFFF000000000uLL;
  _InterlockedAdd64((volatile signed __int64 *)(*((_QWORD *)qword_140E300C8 + (v21 & 0x3FF)) + 19640LL), -v4);
  return v3;
}
