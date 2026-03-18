/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x14054BA00
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x1405616F8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpEnlightenmentHbSaved;
  *(&HalpEnlightenment + 1) = dword_140FC1124;
  *(&HalpEnlightenment + 7) = dword_140FC113C;
  *((_QWORD *)&HalpEnlightenment + 4) = qword_140FC1140;
  *((_QWORD *)&HalpEnlightenment + 6) = qword_140FC1150;
  *((_QWORD *)&HalpEnlightenment + 7) = qword_140FC1158;
  *((_QWORD *)&HalpEnlightenment + 8) = qword_140FC1160;
  *((_QWORD *)&HalpEnlightenment + 9) = qword_140FC1168;
  *((_QWORD *)&HalpEnlightenment + 10) = qword_140FC1170;
  *((_QWORD *)&HalpEnlightenment + 11) = qword_140FC1178;
  *((_QWORD *)&HalpEnlightenment + 14) = qword_140FC1190;
  *((_QWORD *)&HalpEnlightenment + 19) = qword_140FC11B8;
  *((_QWORD *)&HalpEnlightenment + 20) = qword_140FC11C0;
  *((_QWORD *)&HalpEnlightenment + 21) = qword_140FC11C8;
  *((_QWORD *)&HalpEnlightenment + 22) = qword_140FC11D0;
  *((_QWORD *)&HalpEnlightenment + 23) = qword_140FC11D8;
  *((_QWORD *)&HalpEnlightenment + 24) = qword_140FC11E0;
  *((_QWORD *)&HalpEnlightenment + 49) = qword_140FC12A8;
  *((_QWORD *)&HalpEnlightenment + 50) = qword_140FC12B0;
  *((_QWORD *)&HalpEnlightenment + 32) = qword_140FC1220;
  *((_QWORD *)&HalpEnlightenment + 29) = qword_140FC1208;
  *((_QWORD *)&HalpEnlightenment + 30) = qword_140FC1210;
  *((_QWORD *)&HalpEnlightenment + 1) = qword_140FC1128;
  *((_QWORD *)&HalpEnlightenment + 2) = qword_140FC1130;
  *((_QWORD *)&HalpEnlightenment + 12) = qword_140FC1180;
  *((_QWORD *)&HalpEnlightenment + 13) = qword_140FC1188;
  *((_QWORD *)&HalpEnlightenment + 15) = qword_140FC1198;
  *((_QWORD *)&HalpEnlightenment + 16) = qword_140FC11A0;
  *((_QWORD *)&HalpEnlightenment + 17) = qword_140FC11A8;
  *((_QWORD *)&HalpEnlightenment + 18) = qword_140FC11B0;
  *((_QWORD *)&HalpEnlightenment + 26) = qword_140FC11F0;
  *((_QWORD *)&HalpEnlightenment + 27) = qword_140FC11F8;
  *((_QWORD *)&HalpEnlightenment + 28) = qword_140FC1200;
  *((_QWORD *)&HalpEnlightenment + 31) = qword_140FC1218;
  *((_QWORD *)&HalpEnlightenment + 33) = qword_140FC1228;
  *((_QWORD *)&HalpEnlightenment + 34) = qword_140FC1230;
  *((_QWORD *)&HalpEnlightenment + 35) = qword_140FC1238;
  *((_QWORD *)&HalpEnlightenment + 36) = qword_140FC1240;
  *((_QWORD *)&HalpEnlightenment + 37) = qword_140FC1248;
  *((_QWORD *)&HalpEnlightenment + 38) = qword_140FC1250;
  *((_QWORD *)&HalpEnlightenment + 39) = qword_140FC1258;
  *((_QWORD *)&HalpEnlightenment + 40) = qword_140FC1260;
  *((_QWORD *)&HalpEnlightenment + 41) = qword_140FC1268;
  *((_QWORD *)&HalpEnlightenment + 42) = qword_140FC1270;
  *((_QWORD *)&HalpEnlightenment + 43) = qword_140FC1278;
  *((_QWORD *)&HalpEnlightenment + 44) = qword_140FC1280;
  *((_QWORD *)&HalpEnlightenment + 45) = qword_140FC1288;
  *((_QWORD *)&HalpEnlightenment + 46) = qword_140FC1290;
  *((_QWORD *)&HalpEnlightenment + 47) = qword_140FC1298;
  *((_QWORD *)&HalpEnlightenment + 48) = qword_140FC12A0;
  return HalpTimerUpdateApiConsumers();
}
