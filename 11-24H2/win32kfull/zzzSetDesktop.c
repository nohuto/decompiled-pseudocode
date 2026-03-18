/*
 * XREFs of zzzSetDesktop @ 0x14023D170
 * Callers:
 *     xxxSetThreadDesktop @ 0x1401071FC (xxxSetThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DesktopAllocInternal @ 0x1400B6320 (DesktopAllocInternal.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     CheckHandleFlag @ 0x1401826E8 (CheckHandleFlag.c)
 *     GetDesktopView @ 0x140194220 (GetDesktopView.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall zzzSetDesktop(__int64 a1, unsigned int *a2, void *a3)
{
  __int64 v7; // rcx
  void **v8; // r15
  PVOID *v9; // r13
  _QWORD *v10; // r12
  _OWORD *v11; // r14
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  _OWORD *v22; // rcx
  _QWORD *DesktopView; // rax
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD v29[4]; // [rsp+70h] [rbp-48h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+D8h] [rbp+20h] BYREF

  if ( a2
    && (a2[12] & 6) != 0
    && a2 != *(unsigned int **)(a1 + 496)
    && a1 != *(_QWORD *)(W32GetUserSessionState(a1, a2) + 68736) )
  {
    return 3221225506LL;
  }
  if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(a1) )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 528), 0xFFBFFFFF);
  *(_QWORD *)(a1 + 632) = a3;
  if ( a3
    && (HandleInformation = 0LL,
        Object = 0LL,
        ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation) >= 0) )
  {
    ObfDereferenceObject(Object);
    *(_DWORD *)(a1 + 936) = HandleInformation.GrantedAccess;
    if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v7)
      && (unsigned int)CheckHandleFlag(0LL, *a2, (__int64)a3, 0LL) )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 528), 0x400000u);
    }
    if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
      return 3221225495LL;
  }
  else
  {
    *(_DWORD *)(a1 + 936) = 0;
  }
  v8 = (void **)(a1 + 496);
  if ( a2 && a2 == *v8 )
    return 0LL;
  v9 = (PVOID *)*v8;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v29, *v8);
  v10 = (_QWORD *)(a1 + 488);
  v11 = *(_OWORD **)(a1 + 488);
  if ( *v8 )
  {
    v12 = *(_QWORD **)(a1 + 776);
    v13 = *(_QWORD **)(a1 + 784);
    if ( v12[1] != a1 + 776 || *v13 != a1 + 776 )
LABEL_26:
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    if ( v13 != v12 )
      v10 = (_QWORD *)(a1 + 488);
  }
  LockObjectAssignment(a1 + 496, a2);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 504) = *((_QWORD *)a2 + 1);
    v17 = (_QWORD *)(a1 + 776);
    v18 = a2 + 44;
    v19 = *((_QWORD *)a2 + 22);
    if ( *(unsigned int **)(v19 + 8) != a2 + 44 )
      goto LABEL_26;
    *v17 = v19;
    *(_QWORD *)(a1 + 784) = v18;
    *(_QWORD *)(v19 + 8) = v17;
    *v18 = v17;
    v20 = DesktopAllocInternal((__int64)a2, 0x30u, v16, 0);
    *v10 = v20;
    v22 = (_OWORD *)(a1 + 1096);
    if ( !v20 )
    {
      *v10 = v22;
      v20 = (_OWORD *)(a1 + 1096);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 504) = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 62960);
    v20 = (_OWORD *)(a1 + 1096);
    *v10 = a1 + 1096;
    v22 = (_OWORD *)(a1 + 1096);
  }
  if ( v11 )
  {
    if ( v11 != v20 )
    {
      *v20 = *v11;
      v20[1] = v11[1];
      v20[2] = v11[2];
    }
    if ( v11 != v22 )
      RtlFreeHeap(v9[17], 0, v11);
  }
  else
  {
    *v20 = 0LL;
    v20[1] = 0LL;
    v20[2] = 0LL;
  }
  if ( a2 && (DesktopView = GetDesktopView(*(_QWORD *)(a1 + 464), (__int64)a2)) != 0LL )
  {
    v24 = *((_QWORD *)a2 + 2) - DesktopView[2];
    *(_QWORD *)(a1 + 512) = v24;
    *(_QWORD *)(*(_QWORD *)(a1 + 520) + 32LL) = **(_QWORD **)(a1 + 504) - v24;
    *(_QWORD *)(*(_QWORD *)(a1 + 520) + 40LL) = DesktopView[2];
  }
  else
  {
    *(_QWORD *)(a1 + 512) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 520) + 32LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 520) + 40LL) = 0LL;
    v25 = (*(_DWORD *)(W32GetUserSessionState(v22, v21) + 68704) & 1) - 1;
    *(_DWORD *)(a1 + 792) = v25;
    v26 = *(_QWORD *)(a1 + 472);
    if ( v26 )
      *(_DWORD *)(v26 + 432) = v25;
  }
  v27 = *(_QWORD *)(a1 + 488);
  v28 = *(_QWORD *)(a1 + 520);
  if ( v27 == a1 + 1096 )
    *(_QWORD *)(v28 + 96) = 0LL;
  else
    *(_QWORD *)(v28 + 96) = v27 - *(_QWORD *)(a1 + 512);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v29);
  return 0LL;
}
