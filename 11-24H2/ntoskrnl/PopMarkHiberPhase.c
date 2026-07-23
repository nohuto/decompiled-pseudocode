/*
 * XREFs of PopMarkHiberPhase @ 0x140B5FA58
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 */

void __fastcall PopMarkHiberPhase(unsigned int *Address)
{
  void *v2; // r8
  char *v3; // rdi
  char *v4; // rbx
  char *v5; // r8

  PoSetHiberRange(0LL, 0x10000u, Address, 0x1F0uLL, 0);
  PoSetHiberRange(0LL, 0x10000u, qword_140F0BBD0, Length, 0);
  v2 = (void *)*((_QWORD *)Address + 40);
  if ( v2 )
    PoSetHiberRange(0LL, 0x10000u, v2, *((_QWORD *)Address + 41), 0);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 20), (unsigned __int64)Address[42] << 12, 0);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 34), (unsigned __int64)Address[70] << 12, 0);
  PoSetHiberRange(0LL, 0x10000u, qword_140F0BB98, (unsigned int)dword_140F0BBA0, 0);
  v3 = (char *)(Address + 20);
  v4 = (char *)*((_QWORD *)Address + 10);
  while ( v4 != v3 )
  {
    v5 = v4;
    v4 = *(char **)v4;
    PoSetHiberRange(0LL, 0x10000u, v5, 0x30uLL, 0);
  }
}
