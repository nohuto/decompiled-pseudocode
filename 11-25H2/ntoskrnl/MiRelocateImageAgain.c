/*
 * XREFs of MiRelocateImageAgain @ 0x14093FE24
 * Callers:
 *     MiValidateExistingImage @ 0x14093F22C (MiValidateExistingImage.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1403D7814 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14045BEC8 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiGetControlAreaLoadConfig @ 0x140465A8C (MiGetControlAreaLoadConfig.c)
 *     MiImageUnused @ 0x1404709DC (MiImageUnused.c)
 *     MiReturnImageBase @ 0x140940000 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x1409401DC (MiSelectImageBase.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x140940578 (MiUpdateImageSystemWideBitmaps.c)
 *     MiSwitchBaseAddress @ 0x140941584 (MiSwitchBaseAddress.c)
 *     SeSetImageBaseAddress @ 0x140941BC0 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rsi
  __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int64 *v8; // r14
  int updated; // edi
  __int64 v10; // rdx
  __int64 v12; // r13
  __int64 ControlAreaLoadConfig; // rax
  __int64 v14; // rbp
  unsigned int SessionId; // eax
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 96);
  v18 = 0LL;
  v4 = v2 & 0xFFFFFFFFFFFFFFF8uLL;
  v6 = *(_QWORD *)(v4 + 32);
  if ( !v6 )
    return 0LL;
  v16 = -1LL;
  v7 = *(_QWORD *)a1;
  v17 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  updated = 0;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v6);
  if ( (*(_DWORD *)(a1 + 92) & 0x400000) == 0 )
  {
    v12 = *(_QWORD *)(v7 + 32);
    v8 = (unsigned __int64 *)MiReservePtes((__int64)&qword_140E37328, 1u);
    if ( !v8 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      goto LABEL_3;
    }
    updated = MiSelectImageBase(v7, v6, a2, 0, (__int64)&v18);
    if ( updated >= 0 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      ControlAreaLoadConfig = MiGetControlAreaLoadConfig(a1);
      v14 = v18;
      updated = MiUpdateImageSystemWideBitmaps(a1, v18, ControlAreaLoadConfig);
      if ( updated >= 0 )
      {
        if ( v14 == v12 )
        {
LABEL_11:
          updated = 0;
          goto LABEL_3;
        }
        if ( (MiFlags & 0x2000) == 0
          || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0
          || (v14 = v18, updated = SeSetImageBaseAddress(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v18),
                         updated >= 0) )
        {
          if ( a2 )
          {
            SessionId = -1;
          }
          else
          {
            SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            v14 = v18;
          }
          MiSwitchBaseAddress(a1, v14, v8, SessionId);
          goto LABEL_11;
        }
      }
      MiImageUnused(a1, 0, (__int64)&v16);
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v6);
  if ( v8 )
    MiReleasePtes((__int64)&qword_140E37328, v8, 1u);
  MiReturnImageBase(&v16, v10);
  return (unsigned int)updated;
}
