/*
 * XREFs of MiFindPlaceholderVadToReplace @ 0x14049EEB8
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 * Callees:
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiCheckSecuredVad @ 0x1408F8A18 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiFindPlaceholderVadToReplace(unsigned __int64 a1, __int64 a2, char a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _LIST_ENTRY *Address; // rax
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // eax

  CurrentThread = KeGetCurrentThread();
  Address = MiLocateAddress(a1);
  v10 = (__int64)Address;
  if ( !Address )
    goto LABEL_5;
  MiLockVad((__int64)CurrentThread, (__int64)Address);
  if ( (*(_DWORD *)(v10 + 48) & 4) != 0
    || (*(unsigned int *)(v10 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 32)) != 0x7FFFFFFFDLL
    || (v12 = *(unsigned int *)(v10 + 24), (v12 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12 != a1)
    || (v13 = *(unsigned int *)(v10 + 28),
        (((v13 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) != a2) )
  {
    MiUnlockVad((__int64)CurrentThread, v10);
LABEL_5:
    *a4 = -1073741800;
    return 0LL;
  }
  if ( (*(_DWORD *)(v10 + 48) & 8) != 0 )
  {
    v14 = MiCheckSecuredVad(v10, (_DWORD)v12 << 12, ((int)v13 - (int)v12 + 1) << 12, 85, a3, 0LL);
    *a4 = v14;
    if ( v14 < 0 )
    {
      MiUnlockVad((__int64)CurrentThread, v10);
      return 0LL;
    }
  }
  *a4 = 0;
  return v10;
}
