/*
 * XREFs of MiInitializeDynamicVa @ 0x140C54F1C
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MiCountBootDriverRegions @ 0x140C54C84 (MiCountBootDriverRegions.c)
 */

struct _LIST_ENTRY **MiInitializeDynamicVa()
{
  struct _LIST_ENTRY **result; // rax
  int v1; // [rsp+30h] [rbp+8h]

  stru_140E39570.Header.Size = 6;
  LOWORD(stru_140E39570.Header.Lock) = 0;
  stru_140E39570.Header.SignalState = 0;
  stru_140E39570.Header.WaitListHead.Blink = &stru_140E39570.Header.WaitListHead;
  stru_140E39570.Header.WaitListHead.Flink = &stru_140E39570.Header.WaitListHead;
  qword_140E38960 = MiCountBootDriverRegions();
  result = MiSystemVaTypeToVm(11);
  v1 = *((_DWORD *)result + 46);
  LOBYTE(v1) = v1 & 0xF0 | 3;
  *((_WORD *)result + 92) = v1;
  return result;
}
