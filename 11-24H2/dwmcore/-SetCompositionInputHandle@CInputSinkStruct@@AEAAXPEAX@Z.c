/*
 * XREFs of ?SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z @ 0x180095DD8
 * Callers:
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x180095764 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x180095CC4 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputSinkStruct::SetCompositionInputHandle(CInputSinkStruct *this, void *a2)
{
  CInputSinkStruct *v2; // rdi
  CInputSinkStruct *v3; // rbx

  v2 = (CInputSinkStruct *)((char *)this + 64);
  v3 = this;
  if ( *((_QWORD *)this + 8) )
  {
    NotifyInputSinkRemoved();
    while ( v3 != v2 )
    {
      *((_QWORD *)v3 + 1) = 0LL;
      v3 = (CInputSinkStruct *)((char *)v3 + 16);
    }
    NtCloseCompositionInputSink(*(_QWORD *)v2);
  }
  *(_QWORD *)v2 = a2;
}
