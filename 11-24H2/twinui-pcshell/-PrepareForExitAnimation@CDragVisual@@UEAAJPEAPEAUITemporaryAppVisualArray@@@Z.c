/*
 * XREFs of ?PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180542CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805440B0 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::PrepareForExitAnimation(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  int v4; // esi
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  v4 = 0;
  if ( *((_BYTE *)this + 255)
    || !*((_QWORD *)this + 11)
    || (v7 = *((_QWORD *)this + 6),
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7),
        DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v6, &v7, (__int64)&GUID_NULL, 0LL),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7),
        v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
               *((_QWORD *)this + 11),
               (char *)this + 216,
               0LL,
               0LL),
        DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v6),
        v4 >= 0) )
  {
    if ( a2 )
      return (unsigned int)CDragVisual::_CreateTempAppVisuals((CDragVisual *)((char *)this - 24), a2);
  }
  return (unsigned int)v4;
}
