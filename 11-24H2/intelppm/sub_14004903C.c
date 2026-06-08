/*
 * XREFs of sub_14004903C @ 0x14004903C
 * Callers:
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_140004BDC @ 0x140004BDC (sub_140004BDC.c)
 *     sub_140005938 @ 0x140005938 (sub_140005938.c)
 *     sub_1400064C4 @ 0x1400064C4 (sub_1400064C4.c)
 *     sub_140006530 @ 0x140006530 (sub_140006530.c)
 *     sub_1400065A4 @ 0x1400065A4 (sub_1400065A4.c)
 *     sub_14000664C @ 0x14000664C (sub_14000664C.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140028658 @ 0x140028658 (sub_140028658.c)
 *     sub_1400292EC @ 0x1400292EC (sub_1400292EC.c)
 *     sub_140029368 @ 0x140029368 (sub_140029368.c)
 *     sub_14002A254 @ 0x14002A254 (sub_14002A254.c)
 *     sub_14002B14C @ 0x14002B14C (sub_14002B14C.c)
 *     sub_14002B198 @ 0x14002B198 (sub_14002B198.c)
 *     sub_1400301C4 @ 0x1400301C4 (sub_1400301C4.c)
 *     sub_140047594 @ 0x140047594 (sub_140047594.c)
 */

__int64 __fastcall sub_14004903C(__int64 a1, _QWORD *a2)
{
  ULONG v4; // edi
  char v5; // si
  __int64 v6; // rdi
  __int64 v7; // rdi
  bool v9; // [rsp+20h] [rbp-30h] BYREF
  bool v10; // [rsp+21h] [rbp-2Fh] BYREF
  int v11; // [rsp+24h] [rbp-2Ch] BYREF
  int v12; // [rsp+28h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF

  v11 = 0;
  v10 = 0;
  v4 = 12223;
  if ( sub_1400292EC() || sub_140029368() )
    v4 = 32703;
  sub_140004BDC();
  LODWORD(DeviceObject.Queue.Wcb.CurrentIrp) = v4;
  DeviceObject.Queue.Wcb.DeviceObject = (PVOID)0x100000001LL;
  v5 = 0;
  *(_QWORD *)(a1 + 16) = &DeviceObject.Queue.Wcb.DeviceObject;
  *(_WORD *)(a1 + 32) = 12;
  *(&DeviceObject.Queue.Wcb.NumberOfMapRegisters + 1) = v4;
  v6 = 572522496LL;
  *(_OWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels = xmmword_140013EF0;
  LODWORD(DeviceObject.Queue.Wcb.DeviceContext) = 1;
  *(PVOID *)((char *)&DeviceObject.Queue.Wcb.DeviceContext + 4) = (PVOID)2;
  *(_QWORD *)(a1 + 24) = &DeviceObject.Queue.Wcb.NumberOfChannels;
  *(_QWORD *)(a1 + 64) = sub_14002B250;
  *(_QWORD *)(a1 + 72) = sub_140003370;
  *(_QWORD *)(a1 + 80) = qword_140006430;
  *(_QWORD *)(a1 + 88) = sub_140007930;
  *(_QWORD *)(a1 + 96) = sub_140007850;
  *(_WORD *)(a1 + 34) = 32;
  if ( sub_14000664C() )
  {
    v6 = 639631360LL;
    *(_QWORD *)(a1 + 120) = qword_140003100;
    if ( sub_14002B14C() )
    {
      v5 = 1;
      v6 = 0x8026200000LL;
    }
  }
  *(_QWORD *)(a1 + 160) = sub_14002ABC0;
  v13 = 0LL;
  sub_140010270(1u, &v13);
  if ( (HIDWORD(v13) & 0x400000) != 0 )
    *(_QWORD *)(a1 + 128) = qword_140002700;
  if ( sub_140006530() )
    *(_QWORD *)(a1 + 136) = sub_1400045E0;
  if ( sub_1400064C4() )
  {
    if ( !sub_140006530() )
    {
      *(_QWORD *)(a1 + 144) = sub_1400053F0;
      goto LABEL_16;
    }
    *(_QWORD *)(a1 + 72) = sub_140003010;
    *(_QWORD *)(a1 + 112) = sub_1400034C0;
    *(_QWORD *)(a1 + 88) = sub_140007880;
  }
  if ( v5 )
    v6 |= 0x400000uLL;
LABEL_16:
  v9 = sub_14002A254();
  if ( v9 || (sub_1400301C4(0LL, &v9, 0LL), v9) )
  {
    *(_QWORD *)(a1 + 48) = sub_140028FB0;
    *(_QWORD *)(a1 + 56) = sub_140045200;
    v6 |= 0x12000007F000uLL;
  }
  if ( sub_1400065A4() )
  {
    *(_QWORD *)(a1 + 176) = sub_14002AF90;
    *(_QWORD *)(a1 + 200) = sub_14002AC30;
    sub_140028658(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowVmPerfControl",
      &v11);
    if ( v11 )
    {
      if ( qword_140019550 && (unsigned __int8)qword_140019550() )
        v6 |= 0x400000000000uLL;
    }
  }
  if ( sub_1400292EC() || sub_140029368() )
  {
    v6 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 184) = sub_14002A970;
    *(_QWORD *)(a1 + 192) = sub_1400077E0;
    *(_QWORD *)(a1 + 208) = qword_140005540;
  }
  if ( sub_14002B198(&v10) )
  {
    v6 |= 0x4000000000000uLL;
    *(_QWORD *)(a1 + 168) = sub_140007430;
    if ( v10 )
      *(_QWORD *)(a1 + 216) = qword_140007320;
  }
  *(_DWORD *)(a1 + 312) = 409;
  *(_QWORD *)(a1 + 320) = -65536LL;
  *(_DWORD *)(a1 + 328) = 410;
  *(_QWORD *)(a1 + 336) = 0LL;
  if ( qword_140019520 && qword_140019528 && qword_140019530 && qword_140019538 )
    v6 |= 0x200000000000uLL;
  if ( dword_140019A60 == 2 )
  {
    v12 = 0;
    if ( (int)sub_140047594(
                (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\IntelHswPcc\\Enum",
                (__int64)L"Count",
                (__int64)&v12) >= 0 )
    {
      if ( v12 )
        *(_QWORD *)(a1 + 104) = sub_140007780;
    }
  }
  *(_BYTE *)(a1 + 232) = 1;
  *(_QWORD *)(a1 + 240) = sub_14002A400;
  *(_QWORD *)(a1 + 248) = sub_14002A950;
  *(_QWORD *)(a1 + 344) = sub_14002B380;
  *(_QWORD *)(a1 + 352) = sub_14002B750;
  *(_QWORD *)(a1 + 360) = sub_1400044B0;
  v7 = v6 | 0x1000000000000LL;
  if ( (unsigned int)sub_140005938() != 2 )
  {
    v7 |= 0x800000000000uLL;
    *(_QWORD *)(a1 + 272) = sub_14002B890;
    *(_QWORD *)(a1 + 280) = sub_140045920;
    *(_QWORD *)(a1 + 288) = sub_1400453C0;
    *(_QWORD *)(a1 + 296) = sub_140045430;
    *(_QWORD *)(a1 + 304) = sub_140046DC0;
    *(_QWORD *)(a1 + 368) = sub_140002140;
  }
  *a2 |= v7;
  if ( qword_140019518 )
    qword_140019518(&dword_140019AB0, 0LL);
  return 0LL;
}
