/*
 * XREFs of MiInitializeEnclavePfn @ 0x1403FD254
 * Callers:
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1407E730C (MiCreateHardwareEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, char a3, int a4)
{
  _KPROCESS *Process; // r14
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rdi
  unsigned __int8 v9; // bp
  int v10; // esi
  int v12; // [rsp+68h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 48 * a1 - 0x220000000000LL;
  v8 = (volatile signed __int32 *)(v7 + 24);
  if ( a4 )
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
          HvlNotifyLongSpinWait();
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
    v9 = MiLockPageInline(48 * a1 - 0x220000000000LL);
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
  *(_QWORD *)(v7 + 16) = MiMakeDemandZeroPte(a3);
  return MiUnlockPage(v7, v9);
}
