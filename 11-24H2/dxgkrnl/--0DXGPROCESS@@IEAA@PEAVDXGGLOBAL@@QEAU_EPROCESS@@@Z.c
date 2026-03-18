/*
 * XREFs of ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x14039B41C
 * Callers:
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1400779AC (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x14034CE14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESS *__fastcall DXGPROCESS::DXGPROCESS(DXGPROCESS *this, struct DXGGLOBAL *a2, struct _EPROCESS *const a3)
{
  DXGPROCESS *result; // rax

  *((_QWORD *)this + 3) = a2;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_QWORD *)this = &DXGPROCESS::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = a3;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 4;
  *((_DWORD *)this + 36) = 70;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 22;
  *((_DWORD *)this + 44) = 39;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 75;
  *((_DWORD *)this + 52) = 85;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 65;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 14;
  *((_DWORD *)this + 68) = 37;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 41) = (char *)this + 320;
  *((_QWORD *)this + 40) = (char *)this + 320;
  *((_WORD *)this + 168) = 0;
  *((_QWORD *)this + 44) = (char *)this + 344;
  *((_QWORD *)this + 43) = (char *)this + 344;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 6;
  *((_DWORD *)this + 100) = 55;
  *((_DWORD *)this + 102) = 0;
  *((_WORD *)this + 206) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 117) = 1;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *(_QWORD *)((char *)this + 516) = 1LL;
  *((_DWORD *)this + 131) = 0;
  *((_WORD *)this + 280) = 0;
  *(_QWORD *)((char *)this + 564) = 0LL;
  *((_WORD *)this + 286) = 0;
  *((_BYTE *)this + 574) = 0;
  *((_QWORD *)this + 72) = 0LL;
  *((_WORD *)this + 292) = 0;
  *((_DWORD *)this + 147) = 0;
  *((_DWORD *)this + 78) = 2;
  *((_QWORD *)this + 60) = (char *)this + 472;
  *((_QWORD *)this + 59) = (char *)this + 472;
  *((_DWORD *)this + 122) = 0;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 30);
  result = this;
  *((_BYTE *)this + 540) = 0;
  *((_BYTE *)this + 556) = 0;
  return result;
}
