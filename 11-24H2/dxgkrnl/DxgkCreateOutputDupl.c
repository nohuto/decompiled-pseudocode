/*
 * XREFs of DxgkCreateOutputDupl @ 0x1403D1220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkDestroyOutputDuplInternal @ 0x140184944 (DxgkDestroyOutputDuplInternal.c)
 *     ?DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ @ 0x1401E4EC8 (-DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1403D14C4 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1403D21A8 (-IsInLowBox@@YAHXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(ULONG64 a1)
{
  struct DXGPROCESS *Current; // rax
  char *v4; // rdi
  int v5; // eax
  int v6; // ebx
  int v7; // ebx
  const void *v8; // rdx
  struct DXGGLOBAL *Global; // rax
  int v10; // ebx
  __int64 v11; // r8
  void *v12; // rcx
  int v13; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v14[16]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v15; // [rsp+68h] [rbp-50h] BYREF
  int v16; // [rsp+70h] [rbp-48h]
  struct _D3DKMT_CREATE_OUTPUTDUPL Src; // [rsp+78h] [rbp-40h] BYREF

  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3534;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid process context.", 3534LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v4 = (char *)Current + 88;
  if ( (g_OutputDuplicationTestControl & 2) != 0 )
    v5 = 1;
  else
    v5 = (*(__int64 (**)(void))(*(_QWORD *)v4 + 232LL))();
  v6 = (v5 != 0 ? 4 : 0) | (8 * (g_OutputDuplicationTestControl & 1));
  v13 = v6;
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)v4 + 232LL))() )
  {
    if ( (unsigned int)IsInLowBox() )
    {
      v7 = v6 | 2;
      v13 = v7;
      if ( !DoesLowBoxAppHaveOutputDuplCapability() )
      {
        if ( !g_OSTestSigningEnabled || (g_OutputDuplicationTestControl & 1) == 0 )
          return 3221225506LL;
        v13 = v7 | 8;
      }
    }
  }
  memset(&Src, 0, sizeof(Src));
  v8 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v8, 0x30uLL);
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGGLOBAL *)((char *)Global + 305728), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v10 = DxgkCreateOutputDuplInternal(&Src, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v13);
  if ( v10 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*(_QWORD *)v4 + 224LL))() )
    {
      v10 = -1073741790;
LABEL_19:
      v15 = *(_QWORD *)&Src.hAdapter;
      v16 = 0;
      DxgkDestroyOutputDuplInternal((__int64)&v15, 1, v11);
      goto LABEL_20;
    }
    v13 |= 1u;
    v10 = DxgkCreateOutputDuplInternal(&Src, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v13);
    if ( v10 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  if ( v10 >= 0 )
  {
    v12 = (void *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v12 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v12, &Src.RequiredKeyedMutexCount, 4uLL);
  }
  return (unsigned int)v10;
}
