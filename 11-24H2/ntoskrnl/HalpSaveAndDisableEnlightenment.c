/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x14054BDA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403BAB3C (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1405616F8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax
  char v1; // dl

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140FC113C = dword_140FC0EBC;
    qword_140FC1140 = qword_140FC0EC0;
    dword_140FC1124 = dword_140FC0EA4;
    qword_140FC1150 = qword_140FC0ED0;
    qword_140FC1158 = qword_140FC0ED8;
    qword_140FC1160 = qword_140FC0EE0;
    qword_140FC1168 = qword_140FC0EE8;
    qword_140FC1170 = qword_140FC0EF0;
    qword_140FC1178 = qword_140FC0EF8;
    qword_140FC1190 = qword_140FC0F10;
    qword_140FC11B8 = qword_140FC0F38;
    qword_140FC11C0 = qword_140FC0F40;
    qword_140FC11C8 = qword_140FC0F48;
    qword_140FC11D0 = qword_140FC0F50;
    qword_140FC11D8 = qword_140FC0F58;
    qword_140FC11E0 = qword_140FC0F60;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140FC12A8 = qword_140FC1028;
    qword_140FC12B0 = qword_140FC1030;
    qword_140FC1220 = qword_140FC0FA0;
    qword_140FC1208 = qword_140FC0F88;
    qword_140FC1210 = qword_140FC0F90;
    xmmword_140FC1128 = xmmword_140FC0EA8;
    qword_140FC1180 = qword_140FC0F00;
    qword_140FC1188 = qword_140FC0F08;
    qword_140FC1198 = qword_140FC0F18;
    qword_140FC11A0 = qword_140FC0F20;
    qword_140FC11A8 = qword_140FC0F28;
    qword_140FC11B0 = qword_140FC0F30;
    qword_140FC11F0 = qword_140FC0F70;
    qword_140FC11F8 = qword_140FC0F78;
    qword_140FC1200 = qword_140FC0F80;
    qword_140FC1218 = qword_140FC0F98;
    qword_140FC1228 = qword_140FC0FA8;
    qword_140FC1230 = qword_140FC0FB0;
    qword_140FC1238 = qword_140FC0FB8;
    qword_140FC1240 = qword_140FC0FC0;
    qword_140FC1248 = qword_140FC0FC8;
    qword_140FC1250 = qword_140FC0FD0;
    qword_140FC1258 = qword_140FC0FD8;
    qword_140FC1260 = qword_140FC0FE0;
    qword_140FC1268 = qword_140FC0FE8;
    qword_140FC1270 = qword_140FC0FF0;
    qword_140FC1278 = qword_140FC0FF8;
    qword_140FC1280 = qword_140FC1000;
    qword_140FC1288 = qword_140FC1008;
    qword_140FC1290 = qword_140FC1010;
    qword_140FC1298 = qword_140FC1018;
    qword_140FC12A0 = qword_140FC1020;
    HalpEnlightenment = 0;
    dword_140FC0EBC = -1;
    qword_140FC0EC0 = 0LL;
    dword_140FC0EA4 = 0;
    qword_140FC0ED0 = 0LL;
    qword_140FC0ED8 = 0LL;
    qword_140FC0EE0 = 0LL;
    qword_140FC0EE8 = 0LL;
    qword_140FC0EF0 = 0LL;
    qword_140FC0EF8 = 0LL;
    qword_140FC0F10 = 0LL;
    qword_140FC0F38 = 0LL;
    qword_140FC0F40 = 0LL;
    qword_140FC0F48 = 0LL;
    qword_140FC0F50 = 0LL;
    qword_140FC0F58 = 0LL;
    qword_140FC0F60 = 0LL;
    qword_140FC1028 = 0LL;
    qword_140FC0FA0 = 0LL;
    if ( !v1 )
      qword_140FC0F88 = 0LL;
    qword_140FC0F90 = 0LL;
    xmmword_140FC0EA8 = 0uLL;
    qword_140FC0F00 = 0LL;
    qword_140FC0F08 = 0LL;
    qword_140FC0F18 = 0LL;
    qword_140FC0F20 = 0LL;
    qword_140FC0F28 = 0LL;
    qword_140FC0F30 = 0LL;
    qword_140FC0F70 = 0LL;
    qword_140FC0F78 = 0LL;
    qword_140FC0F80 = 0LL;
    qword_140FC0F98 = 0LL;
    qword_140FC0FA8 = 0LL;
    qword_140FC0FB0 = 0LL;
    qword_140FC0FB8 = 0LL;
    qword_140FC0FC0 = 0LL;
    qword_140FC0FC8 = 0LL;
    qword_140FC0FD0 = 0LL;
    qword_140FC0FD8 = 0LL;
    qword_140FC0FE0 = 0LL;
    qword_140FC0FE8 = 0LL;
    qword_140FC0FF0 = 0LL;
    qword_140FC0FF8 = 0LL;
    qword_140FC1000 = 0LL;
    qword_140FC1008 = 0LL;
    qword_140FC1010 = 0LL;
    qword_140FC1018 = 0LL;
    qword_140FC1020 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
