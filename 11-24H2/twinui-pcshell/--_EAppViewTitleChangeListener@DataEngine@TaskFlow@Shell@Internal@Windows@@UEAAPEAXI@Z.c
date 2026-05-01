/*
 * XREFs of ??_EAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x180404300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ @ 0x180404288 (--1AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::`vector deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        char a2)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::~AppViewTitleChangeListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
