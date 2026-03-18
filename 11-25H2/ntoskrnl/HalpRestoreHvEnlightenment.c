/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x140549110
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x14055EDF8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpEnlightenmentHbSaved;
  *(&HalpEnlightenment + 1) = dword_140FC0984;
  *(&HalpEnlightenment + 7) = dword_140FC099C;
  *((_QWORD *)&HalpEnlightenment + 4) = qword_140FC09A0;
  *((_QWORD *)&HalpEnlightenment + 6) = qword_140FC09B0;
  *((_QWORD *)&HalpEnlightenment + 7) = qword_140FC09B8;
  *((_QWORD *)&HalpEnlightenment + 8) = qword_140FC09C0;
  *((_QWORD *)&HalpEnlightenment + 9) = qword_140FC09C8;
  *((_QWORD *)&HalpEnlightenment + 10) = qword_140FC09D0;
  *((_QWORD *)&HalpEnlightenment + 11) = qword_140FC09D8;
  *((_QWORD *)&HalpEnlightenment + 14) = qword_140FC09F0;
  *((_QWORD *)&HalpEnlightenment + 19) = qword_140FC0A18;
  *((_QWORD *)&HalpEnlightenment + 20) = qword_140FC0A20;
  *((_QWORD *)&HalpEnlightenment + 21) = qword_140FC0A28;
  *((_QWORD *)&HalpEnlightenment + 22) = qword_140FC0A30;
  *((_QWORD *)&HalpEnlightenment + 23) = qword_140FC0A38;
  *((_QWORD *)&HalpEnlightenment + 24) = qword_140FC0A40;
  *((_QWORD *)&HalpEnlightenment + 49) = qword_140FC0B08;
  *((_QWORD *)&HalpEnlightenment + 50) = qword_140FC0B10;
  *((_QWORD *)&HalpEnlightenment + 32) = qword_140FC0A80;
  *((_QWORD *)&HalpEnlightenment + 29) = qword_140FC0A68;
  *((_QWORD *)&HalpEnlightenment + 30) = qword_140FC0A70;
  *((_QWORD *)&HalpEnlightenment + 1) = qword_140FC0988;
  *((_QWORD *)&HalpEnlightenment + 2) = qword_140FC0990;
  *((_QWORD *)&HalpEnlightenment + 12) = qword_140FC09E0;
  *((_QWORD *)&HalpEnlightenment + 13) = qword_140FC09E8;
  *((_QWORD *)&HalpEnlightenment + 15) = qword_140FC09F8;
  *((_QWORD *)&HalpEnlightenment + 16) = qword_140FC0A00;
  *((_QWORD *)&HalpEnlightenment + 17) = qword_140FC0A08;
  *((_QWORD *)&HalpEnlightenment + 18) = qword_140FC0A10;
  *((_QWORD *)&HalpEnlightenment + 26) = qword_140FC0A50;
  *((_QWORD *)&HalpEnlightenment + 27) = qword_140FC0A58;
  *((_QWORD *)&HalpEnlightenment + 28) = qword_140FC0A60;
  *((_QWORD *)&HalpEnlightenment + 31) = qword_140FC0A78;
  *((_QWORD *)&HalpEnlightenment + 33) = qword_140FC0A88;
  *((_QWORD *)&HalpEnlightenment + 34) = qword_140FC0A90;
  *((_QWORD *)&HalpEnlightenment + 35) = qword_140FC0A98;
  *((_QWORD *)&HalpEnlightenment + 36) = qword_140FC0AA0;
  *((_QWORD *)&HalpEnlightenment + 37) = qword_140FC0AA8;
  *((_QWORD *)&HalpEnlightenment + 38) = qword_140FC0AB0;
  *((_QWORD *)&HalpEnlightenment + 39) = qword_140FC0AB8;
  *((_QWORD *)&HalpEnlightenment + 40) = qword_140FC0AC0;
  *((_QWORD *)&HalpEnlightenment + 41) = qword_140FC0AC8;
  *((_QWORD *)&HalpEnlightenment + 42) = qword_140FC0AD0;
  *((_QWORD *)&HalpEnlightenment + 43) = qword_140FC0AD8;
  *((_QWORD *)&HalpEnlightenment + 44) = qword_140FC0AE0;
  *((_QWORD *)&HalpEnlightenment + 45) = qword_140FC0AE8;
  *((_QWORD *)&HalpEnlightenment + 46) = qword_140FC0AF0;
  *((_QWORD *)&HalpEnlightenment + 47) = qword_140FC0AF8;
  *((_QWORD *)&HalpEnlightenment + 48) = qword_140FC0B00;
  return HalpTimerUpdateApiConsumers();
}
