/*
 * XREFs of ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BAA98
 * Callers:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x14018CBCC (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x14021E2F0 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1400BAD28 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1400BB04C (GetNormalizedMouseSensitivityFactor.c)
 *     rand @ 0x1401A09E4 (rand.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

void __fastcall CMouseProcessor::ApplyAccelerationToDelta(
        CMouseProcessor *this,
        int a2,
        int a3,
        struct tagPOINT a4,
        bool a5,
        struct _SUBPIXELS *a6,
        int *a7,
        int *a8)
{
  LONG x; // ebx
  int v9; // edi
  int v10; // esi
  CMouseProcessor *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _SUBPIXELS *v14; // r9
  CDeviceAcceleration *v15; // rcx
  __int64 UserSessionState; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  LONG *v23; // r12
  _QWORD **v24; // r15
  __int64 v25; // rax
  _QWORD *i; // rcx
  _QWORD *v27; // rax
  LONG *v28; // rax
  int NormalizedMouseSensitivityFactor; // eax
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  struct _SUBPIXELS *v34; // rbx
  int v35; // edx
  int v36; // eax
  __int64 v37; // [rsp+20h] [rbp-40h] BYREF
  tagDomLock *v38[2]; // [rsp+28h] [rbp-38h] BYREF
  tagDomLock *v39; // [rsp+38h] [rbp-28h] BYREF
  tagDomLock *v40; // [rsp+40h] [rbp-20h] BYREF
  int v41; // [rsp+A8h] [rbp+48h] BYREF
  int v42; // [rsp+B0h] [rbp+50h] BYREF
  struct tagPOINT v43; // [rsp+B8h] [rbp+58h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  x = a4.x;
  v9 = a3;
  v10 = a2;
  v11 = this;
  if ( a5 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(this) + 16368) + 112LL)
      || (this = (CMouseProcessor *)*(unsigned int *)(W32GetUserSessionState(this) + 16784),
          ((unsigned __int8)this & 0x40) == 0) )
    {
      UserSessionState = W32GetUserSessionState(this);
      v14 = (struct _SUBPIXELS *)&v37;
      v15 = *(CDeviceAcceleration **)(UserSessionState + 16392);
      goto LABEL_4;
    }
  }
  v12 = *(_QWORD *)(W32GetUserSessionState(this) + 16368);
  if ( *(_BYTE *)(v12 + 112) )
  {
    v13 = W32GetUserSessionState(v12);
    v14 = a6;
    v15 = *(CDeviceAcceleration **)(v13 + 16368);
LABEL_4:
    CDeviceAcceleration::Accelerate(v15, &v41, &v42, v14);
    v9 = v42;
    v10 = v41;
    goto LABEL_5;
  }
  v38[1] = 0LL;
  v17 = W32GetUserSessionState(v12);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v39, (struct CEResourceLock *)(v17 + 18696));
  v37 = 0LL;
  v19 = W32GetUserSessionState(v18);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v38, (struct CEResourceLock *)(v19 + 18696));
  v21 = *(_QWORD *)(W32GetUserSessionState(v20) + 18688);
  v22 = *(_QWORD *)(v21 + 24);
  if ( !v22 )
    v22 = v21 + 32;
  v23 = 0LL;
  v24 = (_QWORD **)(v22 + 1456);
  v25 = W32GetUserSessionState(v21);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v40, (struct CEResourceLock *)(v25 + 18696));
  for ( i = *v24; ; i = (_QWORD *)*i )
  {
    v27 = 0LL;
    if ( i != v24 )
      v27 = i + 2;
    if ( !v27 )
      break;
    v28 = 0LL;
    if ( i != v24 )
      v28 = (LONG *)(i + 2);
    if ( x >= *v28 && x < v28[2] && v43.y >= v28[1] && v43.y < v28[3] )
    {
      v23 = v28;
      break;
    }
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v40);
  tagDomLock::UnLockExclusive((PERESOURCE *)v38[0]);
  NormalizedMouseSensitivityFactor = GetNormalizedMouseSensitivityFactor(v23);
  if ( NormalizedMouseSensitivityFactor == 256 )
  {
    v36 = rand();
    v34 = a6;
    *(_DWORD *)a6 = v36 % 0x10000;
    v35 = rand() % 0x10000;
  }
  else
  {
    if ( v10 )
    {
      v30 = *((_DWORD *)v11 + 9) + v10 * NormalizedMouseSensitivityFactor;
      v31 = v30 % 256;
      *((_DWORD *)v11 + 9) = v30 % 256;
      v10 = v30 / 256;
      if ( v30 < 0 && v31 > 0 )
      {
        v10 = v30 / 256 + 1;
        *((_DWORD *)v11 + 9) = v31 - 256;
      }
    }
    if ( v9 )
    {
      v32 = v9 * NormalizedMouseSensitivityFactor + *((_DWORD *)v11 + 10);
      v33 = v32 % 256;
      *((_DWORD *)v11 + 10) = v32 % 256;
      v9 = v32 / 256;
      if ( v32 < 0 && v33 > 0 )
      {
        ++v9;
        *((_DWORD *)v11 + 10) = v33 - 256;
      }
    }
    v34 = a6;
    *(_DWORD *)a6 = *((_DWORD *)v11 + 9) << 8;
    v35 = *((_DWORD *)v11 + 10) << 8;
  }
  *((_DWORD *)v34 + 1) = v35;
  tagDomLock::UnLockExclusive((PERESOURCE *)v39);
LABEL_5:
  *a7 = v10;
  *a8 = v9;
}
