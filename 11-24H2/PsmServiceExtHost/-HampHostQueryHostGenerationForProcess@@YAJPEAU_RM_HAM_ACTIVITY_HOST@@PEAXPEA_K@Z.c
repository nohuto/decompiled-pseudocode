/*
 * XREFs of ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18003A258
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003854C (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180038718 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampHostQueryHostGenerationForProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // esi
  __int64 v5; // r14
  DWORD v8; // ebp
  _QWORD *Value; // rbx
  unsigned __int64 v10; // rax
  DWORD v11; // ecx
  __int64 *v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 (__fastcall *v17)(__int64, __int64, __int64, __int64, __int64, int, void *); // rbx
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx

  v3 = 0;
  v5 = 0LL;
  while ( 1 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockShared(a1);
    v10 = *((_QWORD *)a1 + 102);
    v11 = HampLockTrackerId;
    if ( v5 == v10 )
      break;
    v5 = *((_QWORD *)a1 + 102);
    if ( HampLockTrackerId != -1 )
    {
      v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v13 = *v12;
      if ( (*v12 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v14 = v12[2]-- == 1;
      if ( v14 )
        *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    RtlReleaseSRWLockShared(a1);
    v15 = 48LL;
    if ( a1 )
      v15 = (__int64)a1 - 16;
    v16 = 88LL;
    v17 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, int, void *))(*(_QWORD *)(*(_QWORD *)v15 + 40LL) + 80LL);
    v18 = 32LL;
    if ( a1 )
      v18 = (__int64)a1 - 32;
    v19 = *(_QWORD *)v18;
    v20 = 624LL;
    if ( a1 )
      v20 = (__int64)a1 + 560;
    v21 = *(unsigned int *)v20;
    v22 = 620LL;
    if ( a1 )
      v22 = (__int64)a1 + 556;
    v23 = *(unsigned int *)v22;
    v24 = 656LL;
    if ( a1 )
      v24 = (__int64)a1 + 592;
    v25 = *(_BYTE *)v24;
    v26 = 552LL;
    if ( a1 )
    {
      v16 = (__int64)a1 + 24;
      v26 = (__int64)a1 + 488;
    }
    if ( !v17(v26, v23, v16, v21, v19, v25 != 0 ? 4 : 0, a2) )
      return (unsigned int)-1073741394;
  }
  *a3 = v10;
  if ( v11 != -1 )
  {
    v27 = (__int64 *)TlsGetValue(v11);
    v28 = *v27;
    if ( (*v27 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v14 = v27[2]-- == 1;
    if ( v14 )
      *v27 = v28 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared(a1);
  return v3;
}
