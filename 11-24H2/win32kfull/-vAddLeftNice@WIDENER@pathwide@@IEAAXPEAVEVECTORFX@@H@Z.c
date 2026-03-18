/*
 * XREFs of ?vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1400E6274
 * Callers:
 *     ?cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z @ 0x1400E7D50 (-cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z.c)
 * Callees:
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1400E7C88 (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddLeftNice(pathwide::WIDENER *this, struct _POINTFIX *a2, int a3)
{
  int v3; // [rsp+20h] [rbp-8h]

  pathwide::vAddNice(
    (pathwide::WIDENER *)((char *)this + 976),
    (pathwide::WIDENER *)((char *)this + 692),
    a2,
    (struct EVECTORFX *)(a3 == 0),
    v3);
}
