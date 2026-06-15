/*
 * XREFs of wcscmp_0 @ 0x180167F24
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x18008F6A4 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180152550 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x180163ADC (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180165178 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *String1, const wchar_t *String2)
{
  return wcscmp(String1, String2);
}
