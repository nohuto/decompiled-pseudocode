/*
 * XREFs of MiFindPlaceholderVadToReplace @ 0x1403C6CE0
 * Callers:
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 */

struct _LIST_ENTRY *__fastcall MiFindPlaceholderVadToReplace(unsigned __int64 a1, __int64 a2, char a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _LIST_ENTRY *Address; // rax
  struct _LIST_ENTRY *v10; // rbx
  __int64 Blink_low; // rcx
  __int64 Blink_high; // r9
  int v14; // eax

  CurrentThread = KeGetCurrentThread();
  Address = MiLocateAddress(a1);
  v10 = Address;
  if ( !Address )
    goto LABEL_5;
  MiLockVad((__int64)CurrentThread, (__int64)Address);
  if ( ((__int64)v10[3].Flink & 4) != 0
    || (HIDWORD(v10[3].Flink) | ((unsigned __int64)BYTE2(v10[2].Flink) << 32)) != 0x7FFFFFFFDLL
    || (Blink_low = LODWORD(v10[1].Blink), (Blink_low | ((unsigned __int64)LOBYTE(v10[2].Flink) << 32)) << 12 != a1)
    || (Blink_high = HIDWORD(v10[1].Blink),
        (((Blink_high | ((unsigned __int64)BYTE1(v10[2].Flink) << 32)) << 12) | 0xFFF) != a2) )
  {
    MiUnlockVad(CurrentThread, v10);
LABEL_5:
    *a4 = -1073741800;
    return 0LL;
  }
  if ( ((__int64)v10[3].Flink & 8) != 0 )
  {
    v14 = MiCheckSecuredVad(
            (_DWORD)v10,
            (_DWORD)Blink_low << 12,
            ((int)Blink_high - (int)Blink_low + 1) << 12,
            85,
            a3,
            0LL);
    *a4 = v14;
    if ( v14 < 0 )
    {
      MiUnlockVad(CurrentThread, v10);
      return 0LL;
    }
  }
  *a4 = 0;
  return v10;
}
