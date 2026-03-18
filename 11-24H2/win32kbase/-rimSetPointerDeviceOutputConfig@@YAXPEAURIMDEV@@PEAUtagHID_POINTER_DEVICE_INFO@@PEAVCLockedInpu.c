/*
 * XREFs of ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1400C7774
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1400C7244 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x140046F28 (HMValidateSharedHandleNoRip.c)
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140053BB0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMGetMonitorPhysicalSize @ 0x1401E1980 (RIMGetMonitorPhysicalSize.c)
 *     rimUpdatePointerDeviceOrientation @ 0x1401E2F84 (rimUpdatePointerDeviceOrientation.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1401F3D58 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

void __fastcall rimSetPointerDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  __int64 v4; // r14
  _QWORD *v5; // rax
  __int128 v6; // xmm0
  __int128 v8; // xmm1
  __int64 UserSessionState; // rax
  struct _LUID *v11; // rbx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  _OWORD *v16; // rax
  char *v17; // r8
  __int64 v18; // r10
  __int64 v19; // r9
  INT v20; // esi
  INT v21; // r12d
  INT v22; // edi
  INT v23; // ebp
  INT v24; // r15d
  INT v25; // ebx
  INT v26; // r14d
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  tagDomLock *v28; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v29[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h]

  v4 = *(_QWORD *)a4;
  v5 = *(_QWORD **)a3;
  v6 = *(_OWORD *)((char *)a2 + 124);
  *((_DWORD *)a2 + 56) = 1;
  v8 = *(_OWORD *)((char *)a2 + 140);
  v30 = v4;
  *((_OWORD *)a2 + 12) = v6;
  v27 = 0LL;
  *((_OWORD *)a2 + 13) = v8;
  *((_OWORD *)a2 + 11) = v8;
  *((_OWORD *)a2 + 10) = *(_OWORD *)v4;
  *(_QWORD *)((char *)a2 + 228) = *v5;
  UserSessionState = W32GetUserSessionState(a1);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v28,
    (struct CEResourceLock *)(UserSessionState + 18696));
  v11 = (struct _LUID *)((char *)a2 + 240);
  if ( *((_DWORD *)a2 + 59) && InputConfig::GetInputSpace(*v11, (struct CLockedInputSpace *)&v27) )
  {
    *(struct _LUID *)((char *)a2 + 228) = *v11;
    if ( *((_DWORD *)a2 + 62) )
      v12 = (_OWORD *)((char *)a2 + 252);
    else
      v12 = (_OWORD *)(v27 + 24);
    *((_OWORD *)a2 + 10) = *v12;
  }
  else
  {
    *((_DWORD *)a2 + 59) = 0;
    *(_OWORD *)((char *)a2 + 252) = 0LL;
    *v11 = 0LL;
    *((_DWORD *)a2 + 62) = 0;
  }
  if ( (*((_DWORD *)a2 + 92) & 8) != 0 && *((_DWORD *)a2 + 91) == 1 )
  {
    v13 = *((_QWORD *)a2 + 20);
    v14 = HIDWORD(*((_QWORD *)a2 + 21)) - HIDWORD(v13);
    *((_DWORD *)a2 + 50) = *((_QWORD *)a2 + 21) - v13;
    *((_DWORD *)a2 + 51) = v14;
    if ( *((_DWORD *)a1 + 334) )
    {
      v15 = HMValidateSharedHandleNoRip(*((_QWORD *)a1 + 168));
      v16 = (_OWORD *)RIMGetMonitorPhysicalSize(v29, v15);
    }
    else
    {
      v16 = (_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v29);
    }
    v17 = (char *)a2 + 30;
    v18 = 6LL;
    *((_OWORD *)a2 + 11) = *v16;
    do
    {
      v19 = *(unsigned int *)(v17 + 2);
      if ( (_DWORD)v19 != -1 && *((_WORD *)v17 - 1) == 1 )
      {
        if ( *(_WORD *)v17 == 48 )
          *((_DWORD *)a2 + 15 * v19 + 111) = *((_DWORD *)a2 + 50) - 1;
        if ( *(_WORD *)v17 == 49 )
          *((_DWORD *)a2 + 15 * v19 + 111) = *((_DWORD *)a2 + 51) - 1;
      }
      v17 += 16;
      --v18;
    }
    while ( v18 );
  }
  else if ( *((_DWORD *)a1 + 334) && (*(_DWORD *)(v4 + 16) & 2) != 0 )
  {
    v20 = *((_DWORD *)a2 + 37);
    v21 = *((_DWORD *)a2 + 38);
    *((_DWORD *)a2 + 56) = *(_DWORD *)(v4 + 164);
    v22 = *(_DWORD *)(v4 + 176);
    v23 = *(_DWORD *)(v4 + 192);
    v24 = *(_DWORD *)(v4 + 180);
    v25 = *(_DWORD *)(v4 + 188);
    v26 = *(_DWORD *)(v4 + 196);
    *((_DWORD *)a2 + 52) = EngMulDiv(*(_DWORD *)(v30 + 184), v20, v22);
    *((_DWORD *)a2 + 53) = EngMulDiv(v25, v21, v24);
    *((_DWORD *)a2 + 54) = EngMulDiv(v23, v20, v22);
    *((_DWORD *)a2 + 55) = EngMulDiv(v26, v21, v24);
    *((_DWORD *)a2 + 46) = *((_DWORD *)a2 + 54) - *((_DWORD *)a2 + 52);
    *((_DWORD *)a2 + 47) = *((_DWORD *)a2 + 55) - *((_DWORD *)a2 + 53);
    rimUpdatePointerDeviceOrientation(a2);
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v28);
}
