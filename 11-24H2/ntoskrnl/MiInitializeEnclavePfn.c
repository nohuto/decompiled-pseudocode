/*
 * XREFs of MiInitializeEnclavePfn @ 0x14046DD14
 * Callers:
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  _KPROCESS *Process; // r14
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rdi
  unsigned __int8 v9; // bp
  unsigned int v10; // esi
  int v12; // [rsp+68h] [rbp+20h]

  v4 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 48 * a1 - 0x220000000000LL;
  v8 = (volatile signed __int32 *)(v7 + 24);
  if ( (_DWORD)a4 )
  {
    v9 = 17;
    v10 = 0;
    while ( _interlockedbittestandset64(v8, 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v8 < 0 );
    }
  }
  else
  {
    v9 = MiLockPageInline(48 * a1 - 0x220000000000LL, a2, a3, a4);
  }
  *(_QWORD *)v7 = ((unsigned __int64)Process >> 3) ^ (*(_QWORD *)v7 ^ ((unsigned __int64)Process >> 3)) & 0xFFFFF00000000001uLL;
  v12 = *(_DWORD *)(v7 + 32);
  BYTE2(v12) = BYTE2(v12) & 0xF8 | 6;
  *(_DWORD *)(v7 + 32) = v12;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)v8 & 0xC000000000000000uLL | 1;
  HIWORD(v12) = HIWORD(*(_DWORD *)(v7 + 32));
  LOWORD(v12) = 1;
  *(_DWORD *)(v7 + 32) = v12;
  MiSetPfnModified(v7, 1);
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)(v7 + 16) = MiMakeDemandZeroPte(v4);
  return MiUnlockPage(v7, v9);
}
