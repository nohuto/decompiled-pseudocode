/*
 * XREFs of ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x1800C81F8
 * Callers:
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x1800C14D0 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VMPCButtonHoldHelper@@AEAM@std@@YA?AV?$shared_ptr@VMPCButtonHoldHelper@@@0@AEAM@Z @ 0x1800C8178 (--$make_shared@VMPCButtonHoldHelper@@AEAM@std@@YA-AV-$shared_ptr@VMPCButtonHoldHelper@@@0@AEAM@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCSlateDeadzoneHelper *__fastcall MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper(
        MPCSlateDeadzoneHelper *this,
        float a2,
        float a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]
  float v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  *(float *)this = a2;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_BYTE *)this + 14) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v4 = std::make_shared<MPCButtonHoldHelper,float &>(&v9, &v11);
  v5 = *v4;
  v6 = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  *((_QWORD *)this + 2) = v5;
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v6;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return this;
}
