/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x140549660
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14055F328 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax
  char v1; // dl

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140FC139C = dword_140FC111C;
    qword_140FC13A0 = qword_140FC1120;
    dword_140FC1384 = dword_140FC1104;
    qword_140FC13B0 = qword_140FC1130;
    qword_140FC13B8 = qword_140FC1138;
    qword_140FC13C0 = qword_140FC1140;
    qword_140FC13C8 = qword_140FC1148;
    qword_140FC13D0 = qword_140FC1150;
    qword_140FC13D8 = qword_140FC1158;
    qword_140FC13F0 = qword_140FC1170;
    qword_140FC1418 = qword_140FC1198;
    qword_140FC1420 = qword_140FC11A0;
    qword_140FC1428 = qword_140FC11A8;
    qword_140FC1430 = qword_140FC11B0;
    qword_140FC1438 = qword_140FC11B8;
    qword_140FC1440 = qword_140FC11C0;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140FC1508 = qword_140FC1288;
    qword_140FC1510 = qword_140FC1290;
    qword_140FC1480 = qword_140FC1200;
    qword_140FC1468 = qword_140FC11E8;
    qword_140FC1470 = qword_140FC11F0;
    xmmword_140FC1388 = xmmword_140FC1108;
    qword_140FC13E0 = qword_140FC1160;
    qword_140FC13E8 = qword_140FC1168;
    qword_140FC13F8 = qword_140FC1178;
    qword_140FC1400 = qword_140FC1180;
    qword_140FC1408 = qword_140FC1188;
    qword_140FC1410 = qword_140FC1190;
    qword_140FC1450 = qword_140FC11D0;
    qword_140FC1458 = qword_140FC11D8;
    qword_140FC1460 = qword_140FC11E0;
    qword_140FC1478 = qword_140FC11F8;
    qword_140FC1488 = qword_140FC1208;
    qword_140FC1490 = qword_140FC1210;
    qword_140FC1498 = qword_140FC1218;
    qword_140FC14A0 = qword_140FC1220;
    qword_140FC14A8 = qword_140FC1228;
    qword_140FC14B0 = qword_140FC1230;
    qword_140FC14B8 = qword_140FC1238;
    qword_140FC14C0 = qword_140FC1240;
    qword_140FC14C8 = qword_140FC1248;
    qword_140FC14D0 = qword_140FC1250;
    qword_140FC14D8 = qword_140FC1258;
    qword_140FC14E0 = qword_140FC1260;
    qword_140FC14E8 = qword_140FC1268;
    qword_140FC14F0 = qword_140FC1270;
    qword_140FC14F8 = qword_140FC1278;
    qword_140FC1500 = qword_140FC1280;
    HalpEnlightenment = 0;
    dword_140FC111C = -1;
    qword_140FC1120 = 0LL;
    dword_140FC1104 = 0;
    qword_140FC1130 = 0LL;
    qword_140FC1138 = 0LL;
    qword_140FC1140 = 0LL;
    qword_140FC1148 = 0LL;
    qword_140FC1150 = 0LL;
    qword_140FC1158 = 0LL;
    qword_140FC1170 = 0LL;
    qword_140FC1198 = 0LL;
    qword_140FC11A0 = 0LL;
    qword_140FC11A8 = 0LL;
    qword_140FC11B0 = 0LL;
    qword_140FC11B8 = 0LL;
    qword_140FC11C0 = 0LL;
    qword_140FC1288 = 0LL;
    qword_140FC1200 = 0LL;
    if ( !v1 )
      qword_140FC11E8 = 0LL;
    qword_140FC11F0 = 0LL;
    xmmword_140FC1108 = 0uLL;
    qword_140FC1160 = 0LL;
    qword_140FC1168 = 0LL;
    qword_140FC1178 = 0LL;
    qword_140FC1180 = 0LL;
    qword_140FC1188 = 0LL;
    qword_140FC1190 = 0LL;
    qword_140FC11D0 = 0LL;
    qword_140FC11D8 = 0LL;
    qword_140FC11E0 = 0LL;
    qword_140FC11F8 = 0LL;
    qword_140FC1208 = 0LL;
    qword_140FC1210 = 0LL;
    qword_140FC1218 = 0LL;
    qword_140FC1220 = 0LL;
    qword_140FC1228 = 0LL;
    qword_140FC1230 = 0LL;
    qword_140FC1238 = 0LL;
    qword_140FC1240 = 0LL;
    qword_140FC1248 = 0LL;
    qword_140FC1250 = 0LL;
    qword_140FC1258 = 0LL;
    qword_140FC1260 = 0LL;
    qword_140FC1268 = 0LL;
    qword_140FC1270 = 0LL;
    qword_140FC1278 = 0LL;
    qword_140FC1280 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
