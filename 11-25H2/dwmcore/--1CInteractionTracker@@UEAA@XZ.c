/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x1800F6BAC
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x1800F6A00 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1800F6AD8 (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F6DD4 (--1-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1800F6E00 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800F757C (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1800F769C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::~CInteractionTracker(CInteractionTracker *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r9
  char *v6; // rsi
  __int64 v7; // rdi
  void **v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdi
  char *v12; // rsi

  *(_QWORD *)this = &CInteractionTracker::`vftable';
  CInteractionTracker::DestroyInteractionAnimations(this);
  CInteractionTracker::StopCustomAndDefaultAnimations(this, 0);
  CInteractionTracker::BoostCompositorClock(this, 0);
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 824LL);
  v4 = *(_DWORD *)(v3 + 280);
  v5 = *(_QWORD *)(v3 + 256);
  if ( v4 )
  {
    do
    {
      if ( this == *(CInteractionTracker **)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    while ( (unsigned int)v2 < v4 - 1 )
    {
      *(_QWORD *)(v5 + 8 * v2) = *(_QWORD *)(v5 + 8LL * (unsigned int)(v2 + 1));
      v2 = (unsigned int)(v2 + 1);
      v4 = *(_DWORD *)(v3 + 280);
    }
    *(_DWORD *)(v3 + 280) = v4 - 1;
  }
  v6 = (char *)this + 416;
  v7 = 4LL;
  v8 = (void **)((char *)this + 416);
  v9 = 4LL;
  do
  {
    operator delete(*v8, 4uLL);
    *v8++ = 0LL;
    --v9;
  }
  while ( v9 );
  v10 = *((_QWORD *)this + 80);
  if ( v10 )
  {
    *((_QWORD *)this + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 480);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 59);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 58);
  do
  {
    v6 -= 8;
    Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>(v6);
    --v7;
  }
  while ( v7 );
  v11 = 2LL;
  v12 = (char *)this + 384;
  do
  {
    v12 -= 8;
    Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>(v12);
    --v11;
  }
  while ( v11 );
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 41);
  InteractionSourceManager::~InteractionSourceManager((__int64 ****)this + 26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  CResource::~CResource(this);
}
