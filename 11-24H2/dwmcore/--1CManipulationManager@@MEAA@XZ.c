/*
 * XREFs of ??1CManipulationManager@@MEAA@XZ @ 0x1802B6A70
 * Callers:
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802B6A38 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??_ECManipulationManager@@MEAAPEAXI@Z @ 0x1802B6C60 (--_ECManipulationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InteractionUpdate@CManipulationManager@@QEAA@XZ @ 0x180090780 (--1InteractionUpdate@CManipulationManager@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1?$CQueue@PEAVCResource@@@@QEAA@XZ @ 0x180200DD4 (--1-$CQueue@PEAVCResource@@@@QEAA@XZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x1802B6B2C (--1MCCollections@@QEAA@XZ.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  _DWORD *v2; // rdi
  int i; // esi

  *(_QWORD *)this = &CManipulationManager::`vftable';
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 30);
  v2 = (_DWORD *)((char *)this + 232);
  if ( *((_QWORD *)this + 28) )
  {
    for ( i = 0; i < *v2; ++i )
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(*((_QWORD *)this + 28) + 8LL * i));
    operator delete(*((void **)this + 28));
    *((_QWORD *)this + 28) = 0LL;
  }
  *v2 = 0;
  *((_DWORD *)this + 59) = 0;
  MCCollections::~MCCollections((CManipulationManager *)((char *)this + 160));
  CQueue<CResource *>::~CQueue<CResource *>((_DWORD *)this + 20);
  CManipulationManager::InteractionUpdate::~InteractionUpdate((CManipulationManager *)((char *)this + 56));
  CManipulationManager::InteractionUpdate::~InteractionUpdate((CManipulationManager *)((char *)this + 32));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
