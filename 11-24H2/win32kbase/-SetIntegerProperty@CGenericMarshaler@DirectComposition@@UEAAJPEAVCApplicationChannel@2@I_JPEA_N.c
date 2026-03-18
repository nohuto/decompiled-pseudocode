/*
 * XREFs of ?SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140225100
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1402248C0 (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetIntegerProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CIntegerProperty>(
           (__int64)this,
           a3,
           a4,
           a5);
}
