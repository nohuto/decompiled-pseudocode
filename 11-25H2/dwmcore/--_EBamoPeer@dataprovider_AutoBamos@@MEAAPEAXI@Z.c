/*
 * XREFs of ??_EBamoPeer@dataprovider_AutoBamos@@MEAAPEAXI@Z @ 0x180278420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180278280 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

dataprovider_AutoBamos::BamoPeer *__fastcall dataprovider_AutoBamos::BamoPeer::`vector deleting destructor'(
        dataprovider_AutoBamos::BamoPeer *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl((dataprovider_AutoBamos::BamoPeer *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
