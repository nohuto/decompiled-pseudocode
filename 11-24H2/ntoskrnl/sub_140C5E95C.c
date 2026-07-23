/*
 * XREFs of sub_140C5E95C @ 0x140C5E95C
 * Callers:
 *     sub_14095B190 @ 0x14095B190 (sub_14095B190.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x14043CEE0 (KeQueryTimeIncrement.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x140445120 (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 */

unsigned __int64 sub_140C5E95C()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant(&Mutex, 0LL, 0, 0);
  stru_140EF0C00.Header.Size = 6;
  LOWORD(stru_140EF0C00.Header.Lock) = 0;
  stru_140EF0C00.Header.SignalState = 0;
  stru_140EF0C00.Header.WaitListHead.Blink = &stru_140EF0C00.Header.WaitListHead;
  stru_140EF0C00.Header.WaitListHead.Flink = &stru_140EF0C00.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_140FD8118 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
