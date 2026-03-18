/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x14016C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     DrvNeedDisplayStateCheck @ 0x14014B4B4 (DrvNeedDisplayStateCheck.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140153090 (DrvFunctionalizeDisplayConfig.c)
 *     DrvIsDisplayStateCurrent @ 0x140155A10 (DrvIsDisplayStateCurrent.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *Address)
{
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  _DWORD *v13; // rdx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // edx
  __int64 *i; // rcx
  __int64 *v19; // r15
  __int64 *v20; // r12
  unsigned int v21; // r14d
  unsigned int v22; // r13d
  unsigned __int64 v23; // rcx
  unsigned int v25; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-C4h]
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v27; // [rsp+38h] [rbp-C0h]
  _DWORD v28[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v29; // [rsp+48h] [rbp-B0h]
  int v30; // [rsp+50h] [rbp-A8h]
  int v31; // [rsp+54h] [rbp-A4h]
  void *v32; // [rsp+68h] [rbp-90h]
  __int128 v33; // [rsp+70h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-78h]
  int v35; // [rsp+88h] [rbp-70h]
  int v36; // [rsp+98h] [rbp-60h]
  int v37; // [rsp+9Ch] [rbp-5Ch]
  int v38; // [rsp+A0h] [rbp-58h]
  __int64 v39; // [rsp+A8h] [rbp-50h] BYREF

  v36 = 0x2000;
  v37 = -1;
  v38 = 0;
  v9 = 0LL;
  v27 = 0LL;
  v25 = 0;
  v28[0] = -1;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0;
  v28[1] = -1073741811;
  EnterLeaveCritShared::EnterLeaveCritShared(&v39, 1LL);
  PtiCurrent(v10);
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v11) + 32) )
  {
    v12 = -1073741823;
LABEL_46:
    if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v33) && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v33) )
      v12 = -1071774921;
    goto LABEL_50;
  }
  v13 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = *v13;
  v25 = *a2;
  if ( v25 - 1 > 0x3FF )
    ExRaiseStatus(-1073741811);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  ProbeForWrite(a3, 216LL * v25, CurrentProcessWow64Process != 0 ? 1 : 4);
  v9 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)Win32AllocPoolWithQuotaZInitImpl(v15, 216LL * v25, 0x63447355u);
  v27 = v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  v29 = 0LL;
  v32 = 0LL;
  v26 = 0;
  v16 = 0;
  v30 = 0;
  v17 = 0;
  for ( i = (__int64 *)a3; ; i += 27 )
  {
    v29 = i;
    v26 = v17;
    if ( v17 >= v25 )
      break;
    if ( *i < 0 )
      v30 = ++v16;
    ++v17;
    v9 = v27;
  }
  if ( v25 != v16 )
    ExRaiseStatus(-1073741811);
  v19 = (__int64 *)a3;
  v29 = (__int64 *)a3;
  v20 = (__int64 *)v9;
  v32 = v9;
  v21 = 0;
  v31 = 0;
  v22 = 0;
  while ( 1 )
  {
    v26 = v22;
    if ( v22 >= v16 )
      break;
    if ( *v19 < 0 )
    {
      if ( v21 >= v16 )
        ExRaiseStatus(-1073741811);
      RtlCopyVolatileMemory(v20, v19, 0xD8uLL);
      if ( *v20 >= 0 )
        ExRaiseStatus(-1073741790);
      v31 = ++v21;
      v20 += 27;
      v32 = v20;
    }
    ++v22;
    v19 += 27;
    v29 = v19;
    v9 = v27;
  }
  if ( v21 != v16 )
    ExRaiseStatus(-1073741811);
  if ( !Address )
    ExRaiseStatus(-1073741811);
  ProbeForWrite(Address, 4uLL, 4u);
  if ( a4 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = a4 + 28;
    if ( a4 + 28 > MmUserProbeAddress || v23 < a4 )
      v9 = v27;
    v33 = *(_OWORD *)a4;
    v34 = *(_QWORD *)(a4 + 16);
    v35 = *(_DWORD *)(a4 + 24);
  }
  if ( !(unsigned int)UserIsWddmConnectedSession(v23) )
  {
    v12 = -1073741790;
    goto LABEL_46;
  }
  if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v33) && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v33) )
  {
    v12 = -1071774921;
    goto LABEL_46;
  }
  v12 = DrvFunctionalizeDisplayConfig(&v25, v9, a1, a5, (__int64)v28);
  if ( v12 == -2147483643 )
    v12 = -1073741789;
  RtlCopyVolatileMemory((void *)a3, v9, 216LL * v25);
  *a2 = v25;
  *Address = v28[0];
  if ( v12 < 0 )
    goto LABEL_46;
LABEL_50:
  if ( v9 )
  {
    GreDeleteFastMutex((char *)v9);
    v27 = 0LL;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return (unsigned int)v12;
}
