/*
 * XREFs of ??4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z @ 0x18002CA90
 * Callers:
 *     _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x18002C358 (_lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_--operator().c)
 *     ??$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@PEAU12@00@Z @ 0x18002CBA0 (--$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@Keyboar.c)
 * Callees:
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022740 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardProcessor::TargetingInfo::operator=(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // r8
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = (_OWORD *)a1;
  v5 = (_OWORD *)a2;
  v6 = 2LL;
  do
  {
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4 += 8;
    *(v4 - 1) = v5[7];
    v5 += 8;
    --v6;
  }
  while ( v6 );
  *v4 = *v5;
  v4[1] = v5[1];
  v4[2] = v5[2];
  v4[3] = v5[3];
  v4[4] = v5[4];
  v4[5] = v5[5];
  v4[6] = v5[6];
  v7 = (__int64 *)(a2 + 368);
  v8 = 0LL;
  if ( &v11 != (char *)(a2 + 368) )
  {
    v8 = *v7;
    *v7 = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(a1 + 376), (char *)(a2 + 376));
  return a1;
}
