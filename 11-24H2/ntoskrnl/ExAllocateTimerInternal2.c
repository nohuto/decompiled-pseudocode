/*
 * XREFs of ExAllocateTimerInternal2 @ 0x1403ADEE0
 * Callers:
 *     ExAllocateTimer @ 0x1403ADEA0 (ExAllocateTimer.c)
 *     ExAllocateTimerInternal @ 0x140655920 (ExAllocateTimerInternal.c)
 * Callees:
 *     ExpExTimerAttributesAreValid @ 0x1403AE01C (ExpExTimerAttributesAreValid.c)
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x1404BD12C (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExAllocateTimerInternal2(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4)
{
  ULONG_PTR v5; // rdi
  __int64 Pool2; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  _WORD v12[20]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  if ( !(unsigned __int8)ExpExTimerAttributesAreValid(a4) || ((v5 & 2) != 0) != (a3 != 0LL) )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, v5, 0LL);
  Pool2 = ExAllocatePool2(0x40uLL, 0xA0uLL, 0x6D547845u);
  v9 = Pool2;
  if ( Pool2 )
  {
    if ( (v5 & 2) != 0 )
    {
      v12[0] = *a3;
      v12[1] = a3[1];
      KeInitializeIRTimer(Pool2, a1, a2, (unsigned int)v12, v5);
    }
    else
    {
      *(_WORD *)(Pool2 + 2) = 0;
      KiInitializeTimer2(Pool2, a1, a2, (unsigned int)v5);
    }
    *(_QWORD *)(v9 + 136) = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    v10 = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    *(_BYTE *)(v9 + 152) = ExpTimerFreedCookie;
    *(_QWORD *)(v9 + 144) = v10;
  }
  return v9;
}
