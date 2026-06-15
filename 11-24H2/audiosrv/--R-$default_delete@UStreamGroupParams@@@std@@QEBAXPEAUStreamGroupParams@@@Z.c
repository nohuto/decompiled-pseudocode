/*
 * XREFs of ??R?$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z @ 0x180019F78
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x180019640 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 *     ??$?4U?$default_delete@UStreamGroupParams@@@std@@$0A@@?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180076364 (--$-4U-$default_delete@UStreamGroupParams@@@std@@$0A@@-$unique_ptr@UStreamGroupParams@@U-$defaul.c)
 * Callees:
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x180019FD8 (--1StreamGroupParams@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<StreamGroupParams>::operator()(__int64 a1, StreamGroupParams *a2)
{
  if ( a2 )
  {
    StreamGroupParams::~StreamGroupParams(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x60);
  }
}
