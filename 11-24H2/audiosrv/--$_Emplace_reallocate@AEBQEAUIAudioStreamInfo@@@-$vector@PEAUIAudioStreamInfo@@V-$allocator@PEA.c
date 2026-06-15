/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@AEAAPEAPEAUIAudioStreamInfo@@QEAPEAU2@AEBQEAU2@@Z @ 0x180054BD0
 * Callers:
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005497C (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180054A9C (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

char *__fastcall std::vector<IAudioStreamInfo *>::_Emplace_reallocate<IAudioStreamInfo * const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rsi
  char *v13; // r14
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *v19; // [rsp+58h] [rbp+10h] BYREF

  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  v19 = (char *)v8;
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                  v10,
                  &v19);
  v19 = v12;
  v13 = &v12[8 * v6];
  *(_QWORD *)v13 = *a3;
  v14 = *(_BYTE **)(a1 + 8);
  v15 = *(_BYTE **)a1;
  v16 = v12;
  if ( a2 == v14 )
  {
    v17 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, (size_t)&a2[-*(_QWORD *)a1]);
    v16 = v13 + 8;
    v17 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v15 = a2;
  }
  memmove_0(v16, v15, v17);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = &v12[8 * v9];
  *(_QWORD *)(a1 + 16) = &v12[8 * v8];
  return v13;
}
