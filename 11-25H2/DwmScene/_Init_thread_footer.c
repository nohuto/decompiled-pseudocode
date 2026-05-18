/*
 * XREFs of _Init_thread_footer @ 0x18000C868
 * Callers:
 *     sub_18001C30C @ 0x18001C30C (sub_18001C30C.c)
 *     sub_18001C398 @ 0x18001C398 (sub_18001C398.c)
 *     sub_18001C40C @ 0x18001C40C (sub_18001C40C.c)
 *     sub_18001C480 @ 0x18001C480 (sub_18001C480.c)
 *     sub_18001C4F4 @ 0x18001C4F4 (sub_18001C4F4.c)
 *     sub_1800734FC @ 0x1800734FC (sub_1800734FC.c)
 *     sub_18008F900 @ 0x18008F900 (sub_18008F900.c)
 *     sub_18009A0E8 @ 0x18009A0E8 (sub_18009A0E8.c)
 *     sub_18009A1D0 @ 0x18009A1D0 (sub_18009A1D0.c)
 *     sub_18009BDA0 @ 0x18009BDA0 (sub_18009BDA0.c)
 *     sub_18009BE44 @ 0x18009BE44 (sub_18009BE44.c)
 *     sub_18009BF2C @ 0x18009BF2C (sub_18009BF2C.c)
 *     sub_18009BFA8 @ 0x18009BFA8 (sub_18009BFA8.c)
 *     sub_18009C4C8 @ 0x18009C4C8 (sub_18009C4C8.c)
 *     sub_1800A3990 @ 0x1800A3990 (sub_1800A3990.c)
 *     sub_1800A3B90 @ 0x1800A3B90 (sub_1800A3B90.c)
 *     sub_1800A3C0C @ 0x1800A3C0C (sub_1800A3C0C.c)
 *     sub_1800A3E0C @ 0x1800A3E0C (sub_1800A3E0C.c)
 *     sub_1800A3EDC @ 0x1800A3EDC (sub_1800A3EDC.c)
 *     sub_1800A5D74 @ 0x1800A5D74 (sub_1800A5D74.c)
 *     sub_1800A5E98 @ 0x1800A5E98 (sub_1800A5E98.c)
 *     sub_1800C73DC @ 0x1800C73DC (sub_1800C73DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)TlsIndex;
  *a1 = ++dword_1801C2BA0;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 16LL) = dword_1801C2BA0;
  LeaveCriticalSection(&CriticalSection);
  return sub_18000C938();
}
