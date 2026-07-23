/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x1405492C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x14055F328 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpEnlightenmentHbSaved;
  *(&HalpEnlightenment + 1) = dword_140FC1384;
  *(&HalpEnlightenment + 7) = dword_140FC139C;
  *((_QWORD *)&HalpEnlightenment + 4) = qword_140FC13A0;
  *((_QWORD *)&HalpEnlightenment + 6) = qword_140FC13B0;
  *((_QWORD *)&HalpEnlightenment + 7) = qword_140FC13B8;
  *((_QWORD *)&HalpEnlightenment + 8) = qword_140FC13C0;
  *((_QWORD *)&HalpEnlightenment + 9) = qword_140FC13C8;
  *((_QWORD *)&HalpEnlightenment + 10) = qword_140FC13D0;
  *((_QWORD *)&HalpEnlightenment + 11) = qword_140FC13D8;
  *((_QWORD *)&HalpEnlightenment + 14) = qword_140FC13F0;
  *((_QWORD *)&HalpEnlightenment + 19) = qword_140FC1418;
  *((_QWORD *)&HalpEnlightenment + 20) = qword_140FC1420;
  *((_QWORD *)&HalpEnlightenment + 21) = qword_140FC1428;
  *((_QWORD *)&HalpEnlightenment + 22) = qword_140FC1430;
  *((_QWORD *)&HalpEnlightenment + 23) = qword_140FC1438;
  *((_QWORD *)&HalpEnlightenment + 24) = qword_140FC1440;
  *((_QWORD *)&HalpEnlightenment + 49) = qword_140FC1508;
  *((_QWORD *)&HalpEnlightenment + 50) = qword_140FC1510;
  *((_QWORD *)&HalpEnlightenment + 32) = qword_140FC1480;
  *((_QWORD *)&HalpEnlightenment + 29) = qword_140FC1468;
  *((_QWORD *)&HalpEnlightenment + 30) = qword_140FC1470;
  *((_QWORD *)&HalpEnlightenment + 1) = qword_140FC1388;
  *((_QWORD *)&HalpEnlightenment + 2) = qword_140FC1390;
  *((_QWORD *)&HalpEnlightenment + 12) = qword_140FC13E0;
  *((_QWORD *)&HalpEnlightenment + 13) = qword_140FC13E8;
  *((_QWORD *)&HalpEnlightenment + 15) = qword_140FC13F8;
  *((_QWORD *)&HalpEnlightenment + 16) = qword_140FC1400;
  *((_QWORD *)&HalpEnlightenment + 17) = qword_140FC1408;
  *((_QWORD *)&HalpEnlightenment + 18) = qword_140FC1410;
  *((_QWORD *)&HalpEnlightenment + 26) = qword_140FC1450;
  *((_QWORD *)&HalpEnlightenment + 27) = qword_140FC1458;
  *((_QWORD *)&HalpEnlightenment + 28) = qword_140FC1460;
  *((_QWORD *)&HalpEnlightenment + 31) = qword_140FC1478;
  *((_QWORD *)&HalpEnlightenment + 33) = qword_140FC1488;
  *((_QWORD *)&HalpEnlightenment + 34) = qword_140FC1490;
  *((_QWORD *)&HalpEnlightenment + 35) = qword_140FC1498;
  *((_QWORD *)&HalpEnlightenment + 36) = qword_140FC14A0;
  *((_QWORD *)&HalpEnlightenment + 37) = qword_140FC14A8;
  *((_QWORD *)&HalpEnlightenment + 38) = qword_140FC14B0;
  *((_QWORD *)&HalpEnlightenment + 39) = qword_140FC14B8;
  *((_QWORD *)&HalpEnlightenment + 40) = qword_140FC14C0;
  *((_QWORD *)&HalpEnlightenment + 41) = qword_140FC14C8;
  *((_QWORD *)&HalpEnlightenment + 42) = qword_140FC14D0;
  *((_QWORD *)&HalpEnlightenment + 43) = qword_140FC14D8;
  *((_QWORD *)&HalpEnlightenment + 44) = qword_140FC14E0;
  *((_QWORD *)&HalpEnlightenment + 45) = qword_140FC14E8;
  *((_QWORD *)&HalpEnlightenment + 46) = qword_140FC14F0;
  *((_QWORD *)&HalpEnlightenment + 47) = qword_140FC14F8;
  *((_QWORD *)&HalpEnlightenment + 48) = qword_140FC1500;
  return HalpTimerUpdateApiConsumers();
}
