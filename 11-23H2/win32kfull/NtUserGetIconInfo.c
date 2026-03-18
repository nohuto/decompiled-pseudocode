/*
 * XREFs of NtUserGetIconInfo @ 0x1C0048BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0048630 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0048B68 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0088DB4 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C00DEF48 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 */

__int64 __fastcall NtUserGetIconInfo(
        __int64 a1,
        ULONG64 a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        int a6)
{
  AtomicExecutionCheck *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  struct tagCURSOR *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct tagCURSOR *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  ULONG64 v24; // rdx
  _DWORD *v25; // rdx
  ULONG64 v26; // rdx
  _BYTE *v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int DpiForSystem; // eax
  CCursorSizes *v36; // rcx
  unsigned int SizeForDpi; // eax
  struct tagCURSOR *DPICursor; // rax
  struct _UNICODE_STRING *v39; // [rsp+48h] [rbp-70h]
  struct _UNICODE_STRING *v40; // [rsp+50h] [rbp-68h]
  __int128 v41; // [rsp+68h] [rbp-50h] BYREF
  __int128 v42; // [rsp+78h] [rbp-40h] BYREF

  v41 = 0LL;
  v42 = 0LL;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::EnforceConsistency(v10);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v12, v11, v13);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v15 = 3LL;
  LOBYTE(v16) = 3;
  v17 = (struct tagCURSOR *)HMValidateHandle(a1, v16);
  v21 = v17;
  if ( v17 )
  {
    if ( ShouldVirtualizeIconCursorSize(v17) )
    {
      DpiForSystem = GetDpiForSystem(v23, v22);
      SizeForDpi = CCursorSizes::GetSizeForDpi(v36, DpiForSystem);
      DPICursor = FindDPICursor(v21, SizeForDpi);
      if ( DPICursor )
        v21 = DPICursor;
    }
    if ( a3 )
    {
      v26 = (ULONG64)a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v26 = MmUserProbeAddress;
      LODWORD(v41) = *(_DWORD *)v26;
      *((_QWORD *)&v41 + 1) = *(_QWORD *)(v26 + 8);
      ProbeForWrite(*((volatile void **)&v41 + 1), WORD1(v41), 2u);
      v40 = (struct _UNICODE_STRING *)&v41;
    }
    else
    {
      v40 = 0LL;
    }
    if ( a4 )
    {
      v24 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v24 = MmUserProbeAddress;
      LODWORD(v42) = *(_DWORD *)v24;
      *((_QWORD *)&v42 + 1) = *(_QWORD *)(v24 + 8);
      ProbeForWrite(*((volatile void **)&v42 + 1), WORD1(v42), 2u);
      v39 = (struct _UNICODE_STRING *)&v42;
    }
    else
    {
      v39 = 0LL;
    }
    if ( a5 )
    {
      v25 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v25 = (_DWORD *)MmUserProbeAddress;
      *v25 = *v25;
    }
    if ( PsGetCurrentProcessWow64Process() )
      v15 = 0LL;
    if ( (v15 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v27 = (_BYTE *)MmUserProbeAddress;
    *v27 = *v27;
    v27[31] = v27[31];
    LODWORD(v17) = (unsigned __int8)_InternalGetIconInfo(v21, (struct _ICONINFO *)a2, v40, v39, a5, a6 != 0);
    if ( a3 )
    {
      v19 = 0LL;
      *(_DWORD *)(&v40->MaximumLength + 1) = 0;
      *a3 = *v40;
    }
    if ( a4 )
    {
      v19 = 0LL;
      *(_DWORD *)(&v39->MaximumLength + 1) = 0;
      *a4 = *v39;
    }
  }
  v28 = (int)v17;
  v29 = PsGetCurrentThreadWin32Thread(v19, v18, v20);
  --*(_DWORD *)(v29 + 48);
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  return v28;
}
