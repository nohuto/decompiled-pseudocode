/*
 * XREFs of ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800751D4
 * Callers:
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800750A0 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCCaptureReference@@@std@@EEAAXXZ @ 0x1801042B0 (-_Destroy@-$_Ref_count_obj2@VCCaptureReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800752A4 (--$_Try_emplace@AEBK$$V@-$map@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x1800753A4 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 */

void __fastcall CCaptureNotifier::UpdateAudioCaptureStatus(CCaptureNotifier *a1, int a2, __int64 a3, char a4, char a5)
{
  bool v8; // di
  bool v9; // si
  _DWORD *v10; // rcx
  const char *v11; // r9
  bool v12; // al
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0;
  v9 = 0;
  try
  {
    v10 = *(_DWORD **)std::map<unsigned long,APPLICATION_REF_DATA>::_Try_emplace<unsigned long const &,>();
    if ( a2 )
    {
      if ( a2 != 1 )
        return;
      v14 = v10[8];
      if ( !v14 )
        return;
      v15 = v14 - 1;
      v10[8] = v15;
      v12 = v15 == 0;
      if ( a4 )
      {
        v13 = v10[9]-- == 1;
        v8 = v13;
      }
      if ( !a5 )
        goto LABEL_14;
      v13 = v10[10]-- == 1;
    }
    else
    {
      v12 = ++v10[8] == 1;
      if ( a4 )
        v8 = ++v10[9] == 1;
      if ( !a5 )
        goto LABEL_14;
      v13 = ++v10[10] == 1;
    }
    v9 = v13;
LABEL_14:
    if ( v12 || v8 || v9 )
      CCaptureNotifier::PublishCaptureAudioStatus(a1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x38D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v11);
  }
}
