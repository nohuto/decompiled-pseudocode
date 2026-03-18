/*
 * XREFs of ??1?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@QEAA@XZ @ 0x1801B7F90
 * Callers:
 *     ??1?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@QEAA@XZ @ 0x1801B7F04 (--1-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$unique_ptr@VCCha.c)
 * Callees:
 *     ??R?$default_delete@VCChainingHelper@@@std@@QEBAXPEAVCChainingHelper@@@Z @ 0x1801B8408 (--R-$default_delete@VCChainingHelper@@@std@@QEBAXPEAVCChainingHelper@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CChainingHelper>::~unique_ptr<CChainingHelper>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CChainingHelper>::operator()();
  return result;
}
