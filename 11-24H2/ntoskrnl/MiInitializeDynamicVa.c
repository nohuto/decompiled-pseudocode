/*
 * XREFs of MiInitializeDynamicVa @ 0x140C570AC
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiCountBootDriverRegions @ 0x140C56E14 (MiCountBootDriverRegions.c)
 */

struct _LIST_ENTRY **MiInitializeDynamicVa()
{
  struct _LIST_ENTRY **result; // rax
  int v1; // [rsp+30h] [rbp+8h]

  Event.Header.Size = 6;
  LOWORD(Event.Header.Lock) = 0;
  Event.Header.SignalState = 0;
  Event.Header.WaitListHead.Blink = &Event.Header.WaitListHead;
  Event.Header.WaitListHead.Flink = &Event.Header.WaitListHead;
  qword_140E38AA0 = MiCountBootDriverRegions();
  result = MiSystemVaTypeToVm(11);
  v1 = *((_DWORD *)result + 46);
  LOBYTE(v1) = v1 & 0xF0 | 3;
  *((_WORD *)result + 92) = v1;
  return result;
}
