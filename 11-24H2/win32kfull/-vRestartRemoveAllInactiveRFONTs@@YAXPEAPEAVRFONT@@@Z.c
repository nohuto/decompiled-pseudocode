/*
 * XREFs of ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x14030E710
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140200EE0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vRestartRemoveAllInactiveRFONTs(struct RFONT **a1)
{
  struct RFONT *v1; // rax
  struct RFONT **v2; // rbx
  struct RFONT *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1;
  while ( v1 )
  {
    v3 = v1;
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v3, 0LL, 0LL, 0);
    v3 = 0LL;
    ++v2;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
    v1 = *v2;
  }
}
