/*
 * XREFs of ??_EAppInstallInfoRecordImpl@ContentManagement@@UEAAPEAXI@Z @ 0x180042A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppInstallInfoRecordImpl@ContentManagement@@UEAA@XZ @ 0x180042650 (--1AppInstallInfoRecordImpl@ContentManagement@@UEAA@XZ.c)
 */

HSTRING *__fastcall ContentManagement::AppInstallInfoRecordImpl::`vector deleting destructor'(HSTRING *this, char a2)
{
  ContentManagement::AppInstallInfoRecordImpl::~AppInstallInfoRecordImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
