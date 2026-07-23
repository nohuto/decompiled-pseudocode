/*
 * XREFs of ??0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ @ 0x1405EF818
 * Callers:
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1405EF848 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 * Callees:
 *     CmSiRWLockInitialize @ 0x140AB8200 (CmSiRWLockInitialize.c)
 */

RTLP_FLS_CALLBACK_ENTRY *__fastcall RTLP_FLS_CALLBACK_ENTRY::RTLP_FLS_CALLBACK_ENTRY(RTLP_FLS_CALLBACK_ENTRY *this)
{
  RTLP_FLS_CALLBACK_ENTRY *v1; // rcx

  CmSiRWLockInitialize((PRTL_RUN_ONCE)this);
  *((_QWORD *)v1 + 1) = 0LL;
  *((_QWORD *)v1 + 2) = 0LL;
  *((_QWORD *)v1 + 4) = (char *)v1 + 24;
  *((_QWORD *)v1 + 3) = (char *)v1 + 24;
  return v1;
}
