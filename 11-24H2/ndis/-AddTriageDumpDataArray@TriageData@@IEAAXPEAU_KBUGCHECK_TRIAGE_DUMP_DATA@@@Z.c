/*
 * XREFs of ?AddTriageDumpDataArray@TriageData@@IEAAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@@Z @ 0x1400E4AA8
 * Callers:
 *     ?BugcheckReasonCallbackRoutine@TriageData@@KAXW4_KBUGCHECK_CALLBACK_REASON@@PEAU_KBUGCHECK_REASON_CALLBACK_RECORD@@PEAXK@Z @ 0x1400E4B50 (-BugcheckReasonCallbackRoutine@TriageData@@KAXW4_KBUGCHECK_CALLBACK_REASON@@PEAU_KBUGCHECK_REASO.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall TriageData::AddTriageDumpDataArray(TriageData *this, struct _KBUGCHECK_TRIAGE_DUMP_DATA *a2)
{
  void (__fastcall *m_callback)(const BugcheckParameters *, TriageDataArray *, void *); // r9
  wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY> > *p_m_triageDumpDataArray; // rbx
  unsigned __int64 BugCheckParameter1; // rcx
  void *m_callbackContext; // r8
  _KTRIAGE_DUMP_DATA_ARRAY *value; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v9[2]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-38h]
  unsigned __int64 BugCheckParameter2; // [rsp+38h] [rbp-30h]
  unsigned __int64 BugCheckParameter3; // [rsp+40h] [rbp-28h]
  unsigned __int64 BugCheckParameter4; // [rsp+48h] [rbp-20h]

  m_callback = this->m_callback;
  p_m_triageDumpDataArray = &this->m_triageDumpDataArray;
  if ( m_callback )
  {
    BugCheckParameter1 = a2->BugCheckParameter1;
    m_callbackContext = this->m_callbackContext;
    v9[0] = a2->BugCheckCode;
    v9[1] = 0;
    v10 = BugCheckParameter1;
    BugCheckParameter2 = a2->BugCheckParameter2;
    BugCheckParameter3 = a2->BugCheckParameter3;
    BugCheckParameter4 = a2->BugCheckParameter4;
    value = p_m_triageDumpDataArray->__ptr_.__value_;
    m_callback((const BugcheckParameters *)v9, (TriageDataArray *)&value, m_callbackContext);
  }
  a2->DataArray = p_m_triageDumpDataArray->__ptr_.__value_;
}
