/*
 * XREFs of ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1401F48AC
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F4428 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401433C0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1401F4000 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 */

char __fastcall CInputConfig::_FindRegionForDisplay(
        CInputConfig *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        const struct CInputSpace *a3,
        const struct tagQDC_DATA *a4,
        struct CInputSpaceRegion **a5)
{
  __int64 v8; // rcx
  struct CInputSpaceRegion *v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // eax
  __int64 v15; // rdx
  _QWORD **v16; // r12
  PERESOURCE *v17; // r14
  struct _ERESOURCE *v18; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  struct CInputSpaceRegion *v21; // rax
  int v22; // edx
  struct _ERESOURCE *v23; // rcx
  _QWORD v25[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+70h] [rbp+8h]
  unsigned int v27; // [rsp+94h] [rbp+2Ch]

  if ( !CInputConfig::LockExclusivelyHeld((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 623);
  v10 = 0LL;
  v11 = *((_QWORD *)a2 + 2);
  v12 = 0;
  v13 = *(_DWORD *)a4;
  v14 = *((_DWORD *)a2 + 6);
  *a5 = 0LL;
  v27 = HIDWORD(v11);
  v26 = v14;
  if ( v13 )
  {
    v15 = *((_QWORD *)a4 + 1);
    while ( 1 )
    {
      v8 = 216LL * v12;
      if ( *(_DWORD *)(v8 + v15 + 116) == *((_DWORD *)a2 + 29) && *(_DWORD *)(v8 + v15 + 120) == *((_DWORD *)a2 + 30) )
        break;
      if ( ++v12 >= v13 )
        goto LABEL_10;
    }
    v11 = *(_QWORD *)(v8 + v15 + 16);
    v27 = HIDWORD(v11);
    v26 = *(_DWORD *)(v8 + v15 + 24);
  }
LABEL_10:
  v16 = (_QWORD **)((char *)a3 + 1456);
  v17 = (PERESOURCE *)(W32GetUserSessionState(v8) + 18696);
  v18 = *v17;
  v25[0] = v17;
  ExEnterCriticalRegionAndAcquireResourceShared(v18);
  v19 = *v16;
  v25[1] = v16;
  while ( 1 )
  {
    v20 = 0LL;
    v25[2] = v19;
    if ( v19 != v16 )
      v20 = v19 + 2;
    if ( !v20 )
      break;
    v21 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v25);
    v22 = *((_DWORD *)v21 + 6);
    if ( *((_DWORD *)a2 + 4) == v22
      && *((_DWORD *)a2 + 5) == *((_DWORD *)v21 + 7)
      && *((_DWORD *)a2 + 6) == *((_DWORD *)v21 + 8) )
    {
      v23 = *v17;
      *a5 = v21;
      ExReleaseResourceAndLeaveCriticalRegion(v23);
      return 1;
    }
    if ( (_DWORD)v11 == v22 && __PAIR64__(v26, v27) == *(_QWORD *)((char *)v21 + 28) )
      v10 = v21;
    v19 = (_QWORD *)*v19;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*v17);
  if ( v10 )
  {
    *a5 = v10;
    return 1;
  }
  return 0;
}
