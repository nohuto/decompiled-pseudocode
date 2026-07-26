/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x14009130C
 * Callers:
 *     ndisRegisterMiniportTriageData @ 0x140092A7C (ndisRegisterMiniportTriageData.c)
 *     ndisRegisterFilterTriageData @ 0x140098178 (ndisRegisterFilterTriageData.c)
 *     ndisRegisterFilterDriverTriageData @ 0x14009A1DC (ndisRegisterFilterDriverTriageData.c)
 *     ndisRegisterProtocolTriageData @ 0x1400B8354 (ndisRegisterProtocolTriageData.c)
 * Callees:
 *     ?reset@?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@QEAAXPEAVTriageData@@@Z @ 0x140092E1C (-reset@-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@QEAAXPEAVTriageData@@@Z.c)
 */

__int64 __fastcall wil::details::out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>::~out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>::reset(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  return result;
}
