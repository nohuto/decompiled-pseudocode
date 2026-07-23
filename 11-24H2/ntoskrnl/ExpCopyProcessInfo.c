/*
 * XREFs of ExpCopyProcessInfo @ 0x14085DF24
 * Callers:
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     PsQueryStatisticsProcess @ 0x14085E140 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x14085E360 (ObGetProcessHandleCount.c)
 */

__int64 __fastcall ExpCopyProcessInfo(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-28h]

  PsQueryStatisticsProcess(a2, a4);
  *(_DWORD *)(a1 + 96) = ObGetProcessHandleCount(a2, 0LL);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 504);
  *(_DWORD *)(a1 + 72) = *(char *)(a2 + 144);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 464);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 720);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 1496);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 544);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 552);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 1028);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 1192);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 1184) << 12;
  v8 = *(_QWORD *)(a2 + 1152) << 12;
  v9 = *(_QWORD *)(a2 + 1160) << 12;
  *(_QWORD *)(a1 + 144) = v8;
  if ( v9 >= v8 )
    v9 = v8;
  *(_QWORD *)(a1 + 8) = v9;
  v11 = *(_QWORD *)(a2 + 536);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 520);
  *(_QWORD *)(a1 + 152) = v11;
  v12 = *(_QWORD *)(a2 + 528);
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 512);
  *(_QWORD *)(a1 + 168) = v12;
  v13 = *(_QWORD *)(a2 + 984) << 12;
  *(_QWORD *)(a1 + 184) = v13;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a2 + 992) << 12;
  *(_QWORD *)(a1 + 200) = v13;
  *(_QWORD *)(a1 + 24) = a4[3];
  *(_QWORD *)(a1 + 40) = a4[1];
  *(_QWORD *)(a1 + 48) = *a4;
  *(_QWORD *)(a1 + 208) = a4[5];
  *(_QWORD *)(a1 + 216) = a4[6];
  *(_QWORD *)(a1 + 224) = a4[7];
  *(_QWORD *)(a1 + 232) = a4[8];
  *(_QWORD *)(a1 + 240) = a4[9];
  *(_QWORD *)(a1 + 248) = a4[10];
  if ( a3 )
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 464);
  return 0LL;
}
