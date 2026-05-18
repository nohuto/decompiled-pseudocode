/*
 * XREFs of _Init_thread_footer @ 0x18000C9D8
 * Callers:
 *     sub_18001C46C @ 0x18001C46C (sub_18001C46C.c)
 *     sub_18001C4F8 @ 0x18001C4F8 (sub_18001C4F8.c)
 *     sub_18001C56C @ 0x18001C56C (sub_18001C56C.c)
 *     sub_18001C5E0 @ 0x18001C5E0 (sub_18001C5E0.c)
 *     sub_18001C654 @ 0x18001C654 (sub_18001C654.c)
 *     sub_18007365C @ 0x18007365C (sub_18007365C.c)
 *     sub_18008FA60 @ 0x18008FA60 (sub_18008FA60.c)
 *     sub_18009A248 @ 0x18009A248 (sub_18009A248.c)
 *     sub_18009A330 @ 0x18009A330 (sub_18009A330.c)
 *     sub_18009BF00 @ 0x18009BF00 (sub_18009BF00.c)
 *     sub_18009BFA4 @ 0x18009BFA4 (sub_18009BFA4.c)
 *     sub_18009C08C @ 0x18009C08C (sub_18009C08C.c)
 *     sub_18009C108 @ 0x18009C108 (sub_18009C108.c)
 *     sub_18009C628 @ 0x18009C628 (sub_18009C628.c)
 *     sub_1800A3AF0 @ 0x1800A3AF0 (sub_1800A3AF0.c)
 *     sub_1800A3CF0 @ 0x1800A3CF0 (sub_1800A3CF0.c)
 *     sub_1800A3D6C @ 0x1800A3D6C (sub_1800A3D6C.c)
 *     sub_1800A3F6C @ 0x1800A3F6C (sub_1800A3F6C.c)
 *     sub_1800A403C @ 0x1800A403C (sub_1800A403C.c)
 *     sub_1800A5ED4 @ 0x1800A5ED4 (sub_1800A5ED4.c)
 *     sub_1800A5FF8 @ 0x1800A5FF8 (sub_1800A5FF8.c)
 *     sub_1800C753C @ 0x1800C753C (sub_1800C753C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)TlsIndex;
  *a1 = ++dword_1801C3BD0;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 16LL) = dword_1801C3BD0;
  LeaveCriticalSection(&CriticalSection);
  return sub_18000CAA8();
}
