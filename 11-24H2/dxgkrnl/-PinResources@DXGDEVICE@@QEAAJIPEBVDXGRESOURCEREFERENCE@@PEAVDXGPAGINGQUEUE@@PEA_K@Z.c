/*
 * XREFs of ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1401BB450
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x14032BC18 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F4FC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400560B8 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DxgkpValidateResourcesForPinOperation@@YA_NIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401BA9B8 (-DxgkpValidateResourcesForPinOperation@@YA_NIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int64 *a5)
{
  struct DXGPAGINGQUEUE *v6; // r13
  const struct DXGRESOURCEREFERENCE *v7; // r12
  unsigned int v8; // esi
  __int64 v10; // rbx
  int v11; // edi
  const struct DXGRESOURCEREFERENCE *v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rdi
  struct VIDMM_PAGING_QUEUE *v15; // r9
  int v16; // r13d
  bool v17; // zf
  __int64 v18; // rsi
  char *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rbx
  int IsEnabledDeviceUsageNoInline; // [rsp+40h] [rbp-68h]
  _QWORD v24[2]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v25[80]; // [rsp+58h] [rbp-50h] BYREF

  v6 = a4;
  v7 = a3;
  v8 = 0;
  if ( !DxgkpValidateResourcesForPinOperation(a2, a3) )
    return 3221225485LL;
  v10 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_4078915896__private_IsEnabledDeviceUsageNoInline();
  v11 = IsEnabledDeviceUsageNoInline;
  if ( a2 )
  {
    v12 = v7;
LABEL_5:
    v13 = *(_QWORD *)v12;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(*(_QWORD *)v12 + 80LL), 0);
    if ( v11 )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    v14 = *(_QWORD *)(v13 + 24);
    while ( 1 )
    {
      if ( !v14 )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
        v10 = (unsigned int)(v10 + 1);
        v12 = (const struct DXGRESOURCEREFERENCE *)((char *)v12 + 8);
        if ( (unsigned int)v10 >= a2 )
          return v8;
        v11 = IsEnabledDeviceUsageNoInline;
        goto LABEL_5;
      }
      v15 = v6 ? (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)v6 + 4) : 0LL;
      v16 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
              *(struct VIDMM_MULTI_ALLOC **)(v14 + 24),
              v15,
              0LL,
              0LL,
              a5);
      if ( v16 < 0 )
        break;
      *(_DWORD *)(v14 + 72) |= 0x800u;
      v14 = *(_QWORD *)(v14 + 64);
      v17 = v16 == 259;
      v6 = a4;
      if ( v17 )
        v8 = 259;
    }
    v18 = *(_QWORD *)(v13 + 24);
    if ( v18 != v14 )
    {
      do
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
          *(struct VIDMM_MULTI_ALLOC **)(v18 + 24));
        v18 = *(_QWORD *)(v18 + 64);
      }
      while ( v18 != v14 );
      v7 = a3;
    }
    v8 = v16;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
    if ( (_DWORD)v10 )
    {
      v19 = (char *)v7 + 8 * v10;
      v24[0] = v19;
      v20 = (unsigned int)v10;
      do
      {
        v21 = *(_QWORD *)v19;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(*(_QWORD *)v19 + 80LL), 0);
        if ( IsEnabledDeviceUsageNoInline )
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
        v22 = *(_QWORD *)(v21 + 24);
        if ( v22 )
        {
          do
          {
            VIDMM_EXPORT::VidMmUnpinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
              *(struct VIDMM_MULTI_ALLOC **)(v22 + 24));
            v22 = *(_QWORD *)(v22 + 64);
          }
          while ( v22 );
          v19 = (char *)v24[0];
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
        --v20;
      }
      while ( v20 );
    }
  }
  return v8;
}
