/*
 * XREFs of ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x1800B0B00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@?$vector@USimpleHapticsControllerFeedback@@V?$allocator@USimpleHapticsControllerFeedback@@@std@@@std@@AEAAPEAUSimpleHapticsControllerFeedback@@QEAU2@AEBU2@@Z @ 0x1800AD724 (--$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@-$vector@USimpleHapticsControllerFe.c)
 *     ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x1800B0C6C (-TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23.c)
 *     ?_Tidy@?$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V?$allocator@UItemIdParameterIndex@BamoImpl@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800B0F30 (-_Tidy@-$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V-$allocator@UItemIdParameterIndex@Bam.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        __int64 a3,
        void *a4,
        unsigned int a5)
{
  unsigned __int64 v7; // r12
  const char *v8; // r9
  struct Microsoft::BamoImpl::BufferStream *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r15
  _QWORD *v13; // rsi
  _BYTE *v14; // rdx
  const char *v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::BamoImpl::BufferStream *v18; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2[1];
  v18 = 0LL;
  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    *a2,
    &v18);
  v9 = v18;
  if ( !v18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xEE,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      v8);
  v10 = operator new(0x38uLL);
  v11 = v10;
  v12 = v10 + 3;
  v10[3] = 0LL;
  v10[4] = 0LL;
  v10[5] = 0LL;
  *v10 = a4;
  *((_DWORD *)v10 + 2) = a5;
  v10[2] = v7;
  *((_BYTE *)v10 + 48) = 0;
  v18 = (struct Microsoft::BamoImpl::BufferStream *)v10;
  v13 = (_QWORD *)((char *)this + 32);
  if ( v10 + 3 != (_QWORD *)((char *)this + 32) )
  {
    std::vector<Microsoft::BamoImpl::ItemIdParameterIndex>::_Tidy(v10 + 3);
    *v12 = *v13;
    v12[1] = *((_QWORD *)this + 5);
    v12[2] = *((_QWORD *)this + 6);
    *v13 = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_BYTE *)v11 + 48) = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = 0;
  v14 = (_BYTE *)*((_QWORD *)v9 + 1);
  if ( v14 == *((_BYTE **)v9 + 2) )
  {
    try
    {
      std::vector<SimpleHapticsControllerFeedback>::_Emplace_reallocate<SimpleHapticsControllerFeedback const &>(
        (__int64)v9,
        v14,
        &v18);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x100,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
        v15);
    }
  }
  else
  {
    *(_QWORD *)v14 = v11;
    *((_QWORD *)v9 + 1) += 8LL;
  }
  return 0LL;
}
