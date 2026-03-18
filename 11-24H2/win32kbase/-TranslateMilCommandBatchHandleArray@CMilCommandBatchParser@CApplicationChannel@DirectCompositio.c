/*
 * XREFs of ?TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14010BF60
 * Callers:
 *     ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x140081EA0 (-ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectCompositi.c)
 * Callees:
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14007FB30 (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        DirectComposition::CApplicationChannel **a1,
        unsigned int *a2,
        int a3,
        int a4,
        char a5,
        _DWORD *a6)
{
  unsigned int *v7; // rbx
  unsigned __int64 v9; // rdi
  unsigned int *v10; // rdx

  v7 = a2;
  v9 = (unsigned __int64)&a2[a3];
  if ( (unsigned __int64)a2 < v9 )
  {
    do
    {
      v10 = v7++;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        a1,
        v10,
        a4,
        a5,
        a6);
    }
    while ( (unsigned __int64)v7 < v9 );
  }
}
