/*
 * XREFs of MiRelocateImageAgain @ 0x140AEAE48
 * Callers:
 *     MiValidateExistingImage @ 0x14098DCCC (MiValidateExistingImage.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404505E0 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140455510 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiGetControlAreaLoadConfig @ 0x14045AB84 (MiGetControlAreaLoadConfig.c)
 *     MiImageUnused @ 0x140469604 (MiImageUnused.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x140974650 (MiUpdateImageSystemWideBitmaps.c)
 *     MiReturnImageBase @ 0x1409D83E0 (MiReturnImageBase.c)
 *     MiSwitchBaseAddress @ 0x140A45C38 (MiSwitchBaseAddress.c)
 *     SeSetImageBaseAddress @ 0x140A8DA70 (SeSetImageBaseAddress.c)
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // rbp
  __int64 v8; // r15
  __int64 v10; // r13
  __int64 v11; // rdx
  _QWORD *v12; // r14
  int updated; // edi
  __int64 v14; // rsi
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 96);
  v18 = 0LL;
  v5 = v3 & 0xFFFFFFFFFFFFFFF8uLL;
  v8 = *(_QWORD *)(v5 + 32);
  if ( !v8 )
    return 0LL;
  v10 = *(_QWORD *)a1;
  v11 = *(_QWORD *)(v5 + 32);
  v16 = -1LL;
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  updated = 0;
  v17 = 0LL;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v11);
  if ( (*(_DWORD *)(a1 + 92) & 0x400000) == 0 )
  {
    v19 = *(_QWORD *)(v10 + 32);
    v12 = (_QWORD *)MiReservePtes((__int64)&qword_140E376A8, 1u);
    if ( !v12 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      goto LABEL_17;
    }
    updated = MiSelectImageBase(v10, v8, a2, a3 != 0 ? 2 : 0, (__int64)&v18);
    if ( updated < 0 )
      goto LABEL_17;
    *(_DWORD *)(a1 + 92) |= 0x400000u;
    MiGetControlAreaLoadConfig(a1);
    v14 = v18;
    updated = MiUpdateImageSystemWideBitmaps(a1);
    if ( updated < 0 )
    {
LABEL_8:
      MiImageUnused(a1, 0, (__int64)&v16);
      goto LABEL_17;
    }
    if ( v14 != v19 )
    {
      if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
      {
        v14 = v18;
        updated = SeSetImageBaseAddress(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v18);
        if ( updated < 0 )
          goto LABEL_8;
      }
      if ( !a2 )
      {
        PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v14 = v18;
      }
      MiSwitchBaseAddress((_QWORD *)a1, v14, (__int64)v12);
    }
    updated = 0;
  }
LABEL_17:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v8);
  if ( v12 )
    MiReleasePtes((__int64)&qword_140E376A8, v12, 1u);
  MiReturnImageBase((__int64)&v16);
  return (unsigned int)updated;
}
