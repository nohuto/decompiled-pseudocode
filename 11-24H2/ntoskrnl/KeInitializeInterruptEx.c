/*
 * XREFs of KeInitializeInterruptEx @ 0x140479468
 * Callers:
 *     HalpCreateInterrupt @ 0x140557FB0 (HalpCreateInterrupt.c)
 *     KeInitializeInterrupt @ 0x1405BA7A0 (KeInitializeInterrupt.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 * Callees:
 *     KiInitializeInterrupt @ 0x14047959C (KiInitializeInterrupt.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeInitializeInterruptEx(
        _DWORD *a1,
        __int64 (__fastcall *a2)(struct _KINTERRUPT *a1, void *a2),
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9,
        char a10,
        int a11,
        char a12,
        int a13,
        int a14,
        char a15,
        __int64 a16)
{
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 result; // rax
  char v23; // r9

  memset_0(a1, 0, 0x120uLL);
  *a1 = 18874390;
  *((_QWORD *)a1 + 6) = a4;
  if ( !a2 )
  {
    a2 = KiInterruptMessageDispatch;
    a1[10] = a5;
    *((_QWORD *)a1 + 4) = a3;
  }
  *((_QWORD *)a1 + 3) = a2;
  if ( a6 )
  {
    v21 = a6;
  }
  else
  {
    v21 = (__int64)(a1 + 14);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  *((_QWORD *)a1 + 9) = v21;
  a1[22] = a8;
  a1[27] = a11;
  *((_BYTE *)a1 + 100) = a12;
  *((_BYTE *)a1 + 92) = a9;
  *((_BYTE *)a1 + 93) = a10;
  if ( !a10 )
  {
    *(_WORD *)a7 = 1;
    *(_BYTE *)(a7 + 2) = 6;
    *(_DWORD *)(a7 + 4) = 1;
    *(_QWORD *)(a7 + 16) = a7 + 8;
    *(_QWORD *)(a7 + 8) = a7 + 8;
    *((_QWORD *)a1 + 16) = a7;
  }
  a1[24] = a13;
  *((_BYTE *)a1 + 101) = a15;
  *((_QWORD *)a1 + 20) = a16;
  a1[26] = 0;
  result = KiInitializeInterrupt(a1, a6, v20, 0LL);
  *((_BYTE *)a1 + 95) = v23;
  return result;
}
