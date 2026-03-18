/*
 * XREFs of ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x1802E57C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x1802E5710 (--1CScanPipeline@@UEAA@XZ.c)
 */

void **__fastcall CScanPipeline::`scalar deleting destructor'(void **this, char a2)
{
  CScanPipeline::~CScanPipeline(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
