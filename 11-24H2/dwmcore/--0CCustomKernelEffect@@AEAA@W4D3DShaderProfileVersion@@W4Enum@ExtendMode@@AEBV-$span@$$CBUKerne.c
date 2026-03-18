/*
 * XREFs of ??0CCustomKernelEffect@@AEAA@W4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@@Z @ 0x180045B24
 * Callers:
 *     ?Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@PEAPEAV1@@Z @ 0x180045A78 (-Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKe.c)
 * Callees:
 *     ??$insert@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@X@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@1@V?$basic_iterator@$$CBUConstantBufferRow@CCustomKernelEffect@@@1@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@1@Z @ 0x180045D28 (--$insert@V-$span_iterator@$$CBUKernelTap@@@details@gsl@@X@-$vector_facade@UConstantBufferRow@CC.c)
 */

__int64 __fastcall CCustomKernelEffect::CCustomKernelEffect(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int8 v12; // cl
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h]
  __int64 v18; // [rsp+50h] [rbp-38h]
  _QWORD v19[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v20; // [rsp+90h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 8) = 0;
  v4 = (__int64 *)(a1 + 24);
  *(_QWORD *)a1 = &CCustomKernelEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 16) = &CCustomKernelEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  *(_QWORD *)(a1 + 24) = a1 + 48;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 40) = a1 + 176;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 243) = a2;
  *(_BYTE *)(a1 + 244) = a3;
  v7 = *a4;
  v16 = a4[1];
  v19[0] = v16;
  v19[2] = v16;
  v20 = *(_QWORD *)(a1 + 32);
  v17 = v16 + 12 * v7;
  v18 = v17;
  v19[1] = v17;
  detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<KernelTap const>,void>(
    a1 + 24,
    (unsigned int)&v15,
    (unsigned int)&v20,
    (unsigned int)v19,
    (__int64)&v16);
  v8 = *v4;
  if ( (unsigned __int64)((v4[1] - *v4) >> 4) <= 8 )
  {
    v12 = *(_BYTE *)(a1 + 243);
    *(_QWORD *)(a1 + 192) = (-(__int64)(v12 < 2u) & 0xFFFFFFFFFFFF922FuLL) + 60969;
    v13 = &unk_180314000;
    if ( v12 < 2u )
      v13 = &unk_180322E50;
    v9 = a1 + 224;
    *(_QWORD *)(a1 + 200) = v13;
    *(_OWORD *)(a1 + 224) = xmmword_180322E30;
    v14 = *(_QWORD *)(a1 + 32) - v8;
    *(_BYTE *)(a1 + 241) = 0;
    *(_BYTE *)(a1 + 240) = (v14 >> 4) + 48;
  }
  else
  {
    *(_QWORD *)(a1 + 192) = 60969LL;
    v9 = a1 + 224;
    *(_QWORD *)(a1 + 200) = &unk_180314000;
    strcpy((char *)(a1 + 224), "SymmetricKernelMax");
  }
  *(_QWORD *)(a1 + 176) = (a3 != 0) + 2LL;
  *(_QWORD *)(a1 + 184) = &CCustomKernelEffect::k_shaderLinkingArguments;
  *(_BYTE *)(a1 + 222) = *(_BYTE *)(a1 + 243);
  *(_QWORD *)(a1 + 208) = v9;
  v10 = (v4[1] - *v4) >> 4;
  *(_WORD *)(a1 + 220) = 512;
  if ( v10 > 8 )
    LODWORD(v10) = 128;
  *(_DWORD *)(a1 + 216) = 16 * v10;
  return a1;
}
