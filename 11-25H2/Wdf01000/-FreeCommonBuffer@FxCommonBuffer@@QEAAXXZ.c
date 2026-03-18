/*
 * XREFs of ?FreeCommonBuffer@FxCommonBuffer@@QEAAXXZ @ 0x14006FD08
 * Callers:
 *     ?Dispose@FxCommonBuffer@@UEAAEXZ @ 0x14006FCF0 (-Dispose@FxCommonBuffer@@UEAAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxCommonBuffer::FreeCommonBuffer(FxCommonBuffer *this)
{
  if ( this->m_BufferRawVA )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))this->m_DmaEnabler->m_SimplexAdapterInfo.AdapterObject->DmaOperations->FreeCommonBuffer)(
      this->m_DmaEnabler->m_SimplexAdapterInfo.AdapterObject,
      LODWORD(this->m_RawLength),
      (_LARGE_INTEGER)this->m_BufferRawLA.QuadPart);
}
