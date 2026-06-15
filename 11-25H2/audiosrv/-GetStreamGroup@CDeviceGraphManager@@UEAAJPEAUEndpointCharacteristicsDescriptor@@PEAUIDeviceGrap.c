/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18004D720
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18004D800 (-CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceG.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct IDeviceGraphObjectsStore *a3,
        struct StreamGroupParams *a4,
        char a5,
        struct MODE_PARAMS *a6,
        struct IStreamGroupProxy **lpCriticalSection)
{
  struct IStreamGroupProxy **v7; // r14
  unsigned int StreamGroup; // edi

  v7 = lpCriticalSection;
  *lpCriticalSection = 0LL;
  (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, struct IStreamGroupProxy ***))(*(_QWORD *)a3 + 80LL))(
    a3,
    &lpCriticalSection);
  if ( *((_BYTE *)a4 + 48)
    || *((_BYTE *)a4 + 50)
    || (StreamGroup = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)a3 + 40LL))(
                        a3,
                        a4,
                        v7),
        StreamGroup == -2147023728) )
  {
    StreamGroup = CDeviceGraphManager::CreateStreamGroup(this, a2, a3, a4, a5, a6, v7);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return StreamGroup;
}
