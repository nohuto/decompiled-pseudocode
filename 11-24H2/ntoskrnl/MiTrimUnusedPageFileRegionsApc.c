/*
 * XREFs of MiTrimUnusedPageFileRegionsApc @ 0x1403C3E30
 * Callers:
 *     <none>
 * Callees:
 *     MiMakePageFilePte @ 0x140215C78 (MiMakePageFilePte.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 */

LONG __fastcall MiTrimUnusedPageFileRegionsApc(PRKEVENT Event)
{
  __int64 v1; // rbp
  unsigned int *v3; // rdi
  __int64 PageFilePte; // rax
  __int64 Flink_high; // r8
  __int64 v6; // rdx
  unsigned int FreePageFileSpace; // eax
  unsigned int v8; // esi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)&Event[1].Header.Lock;
  v3 = *(unsigned int **)(v1 + 8LL * LODWORD(Event[1].Header.WaitListHead.Flink) + 18528);
  PageFilePte = MiMakePageFilePte(LODWORD(Event[1].Header.WaitListHead.Blink));
  Flink_high = HIDWORD(Event[1].Header.WaitListHead.Flink);
  v15 = v6 ^ (v6 ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v1, &v15, Flink_high, 171LL);
  v8 = FreePageFileSpace;
  if ( FreePageFileSpace >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
  {
    v9 = v15;
    if ( qword_140E2DCC0 && (v15 & 0x10) == 0 )
      v9 = v15 & ~qword_140E2DCC0;
    v10 = HIDWORD(v9);
    LODWORD(Event[1].Header.WaitListHead.Blink) = v10;
    v11 = MiMakePageFilePte(FreePageFileSpace + (unsigned int)v10);
    v12 = *v3;
    v15 = v13 ^ (v13 ^ v11) & 0xFFFFFFFFFFFF0FFFuLL;
    HIDWORD(Event[1].Header.WaitListHead.Blink) = v8 + MiFindFreePageFileSpace(v1, &v15, v12, 107LL);
  }
  return KeSetEvent(Event, 0, 0);
}
