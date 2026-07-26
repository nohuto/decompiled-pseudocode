/*
 * XREFs of KLoaderDereferenceModule @ 0x1400E3950
 * Callers:
 *     ?ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z @ 0x140028B30 (-ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z.c)
 *     ??1ExecutionContextLibrary@@QEAA@XZ @ 0x1401551A8 (--1ExecutionContextLibrary@@QEAA@XZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140155A6C (-DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z.c)
 */

void __fastcall KLoaderDereferenceModule(struct KLOADER_MODULE_REFERENCE__ *a1)
{
  int v2; // edx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      18,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      (char)a1);
  KLoader::DereferenceModule(a1, a1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      1,
      19,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids);
  }
}
