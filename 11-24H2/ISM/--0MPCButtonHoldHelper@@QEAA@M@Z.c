/*
 * XREFs of ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x1800C64B8
 * Callers:
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x1800BF2AC (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_shared@VMPCButtonHoldHelper@@AEAM@std@@YA?AV?$shared_ptr@VMPCButtonHoldHelper@@@0@AEAM@Z @ 0x1800C6338 (--$make_shared@VMPCButtonHoldHelper@@AEAM@std@@YA-AV-$shared_ptr@VMPCButtonHoldHelper@@@0@AEAM@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

MPCButtonHoldHelper *__fastcall MPCButtonHoldHelper::MPCButtonHoldHelper(
        MPCButtonHoldHelper *this,
        float a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &MPCButtonHoldHelper::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( a2 < 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcbuttonholdhelper.cpp",
      a4);
  *((_QWORD *)this + 3) = (unsigned int)(int)((double)(int)qword_180250DB8 * a2);
  return this;
}
