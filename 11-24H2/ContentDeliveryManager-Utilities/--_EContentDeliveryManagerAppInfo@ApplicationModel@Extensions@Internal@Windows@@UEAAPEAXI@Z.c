/*
 * XREFs of ??_EContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800A8A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA@XZ @ 0x1800A89E8 (--1ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *__fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::`vector deleting destructor'(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *this,
        char a2)
{
  Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::~ContentDeliveryManagerAppInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
