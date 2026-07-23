/*
 * XREFs of PfSnBeginAppLaunch @ 0x1409483F4
 * Callers:
 *     PfSnAppLaunchScenarioControl @ 0x1407458E4 (PfSnAppLaunchScenarioControl.c)
 *     PfProcessCreateNotification @ 0x140948348 (PfProcessCreateNotification.c)
 * Callees:
 *     PfSnGetAppVersion @ 0x14047A764 (PfSnGetAppVersion.c)
 *     PfLockSharedAcquire @ 0x14047A884 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x14047DE88 (PfLockSharedRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfSnCheckScenario @ 0x14094870C (PfSnCheckScenario.c)
 *     PfSnBeginScenario @ 0x140948770 (PfSnBeginScenario.c)
 *     PfSnLogScenarioDecision @ 0x140948A6C (PfSnLogScenarioDecision.c)
 *     PfSnAltProfileFindByScenarioId @ 0x1409493EC (PfSnAltProfileFindByScenarioId.c)
 *     PfSnScanCommandLine @ 0x140949628 (PfSnScanCommandLine.c)
 *     PfSnIsHostingApplication @ 0x1409496E4 (PfSnIsHostingApplication.c)
 *     PfSnCheckModernApp @ 0x1409497A8 (PfSnCheckModernApp.c)
 *     PfCalculateProcessHash @ 0x140949AC0 (PfCalculateProcessHash.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginAppLaunch(ULONG_PTR BugCheckParameter1, unsigned __int16 *a2, int a3)
{
  void *v6; // rdi
  int v7; // r14d
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // r8d
  _WORD *v13; // rax
  const void *v14; // rdx
  __int64 v15; // rbx
  int v16; // r12d
  unsigned __int8 IsHostingApplication; // al
  unsigned int v18; // ebx
  __int64 v19; // rax
  unsigned __int16 *v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-98h] BYREF
  wchar_t SubStr[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+90h] [rbp-70h]
  __int128 v31; // [rsp+A0h] [rbp-60h]
  __int128 v32; // [rsp+B0h] [rbp-50h]
  wchar_t Str2[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-30h]
  __int128 v35; // [rsp+E0h] [rbp-20h]
  __int128 v36; // [rsp+F0h] [rbp-10h]
  unsigned int v37; // [rsp+100h] [rbp+0h]
  _BYTE v38[256]; // [rsp+110h] [rbp+10h] BYREF

  v25 = 0;
  v24 = 0;
  v22 = 0;
  v23 = 0;
  v28 = 0LL;
  memset_0(Str2, 0, 0x44uLL);
  v21 = 0LL;
  v6 = 0LL;
  memset_0(SubStr, 0, 0x40uLL);
  v7 = 0;
  v8 = PfSnCheckScenario(0LL, &v25);
  if ( v8 < 0 )
    goto LABEL_26;
  if ( !a2 )
  {
    v9 = PfCalculateProcessHash(BugCheckParameter1, &v21);
    v6 = v21;
    v8 = v9;
    if ( v9 < 0 )
    {
LABEL_26:
      PfSnLogScenarioDecision(BugCheckParameter1, 15, 15, v8, -1LL);
      goto LABEL_22;
    }
    a2 = v21;
  }
  v10 = 0LL;
  v11 = *((_QWORD *)a2 + 1);
  v12 = *a2 >> 1;
  v26 = 256LL;
  LODWORD(v21) = 0;
  v13 = (_WORD *)(v11 + 2 * (v12 - 1LL));
  if ( (unsigned __int64)v13 < v11 )
    goto LABEL_25;
  do
  {
    if ( *v13 == 92 )
      break;
    v10 = (unsigned int)(v10 + 1);
    --v13;
  }
  while ( (unsigned __int64)v13 >= v11 );
  if ( !(_DWORD)v10 || (v14 = (const void *)(v11 + 2LL * (v12 - (unsigned int)v10))) == 0LL )
  {
LABEL_25:
    v8 = -1073741811;
    goto LABEL_26;
  }
  if ( (unsigned int)v10 >= 0x1D )
    v10 = 29LL;
  v15 = v10;
  memmove(SubStr, v14, 2 * v10);
  SubStr[v15] = 0;
  v16 = *(_DWORD *)(BugCheckParameter1 + 900);
  IsHostingApplication = PfSnIsHostingApplication(SubStr);
  v8 = PfSnScanCommandLine(&v22, &v24, IsHostingApplication);
  if ( v8 < 0 )
    goto LABEL_26;
  v8 = PfSnCheckModernApp(&v21, &v23, v38, &v26);
  if ( v8 < 0 )
    goto LABEL_26;
  if ( (_DWORD)v21 )
  {
    v7 = 8;
    *((_QWORD *)&v28 + 1) = v38;
    LOWORD(v28) = v26;
    WORD1(v28) = v26;
  }
  else
  {
    v28 = *(_OWORD *)a2;
  }
  v18 = v24;
  HIDWORD(v32) = v16 + v22 + v23;
  v27 = 0LL;
  v26 = v24;
  PfSnGetAppVersion(BugCheckParameter1, (__int64)&v27);
  *(_OWORD *)Str2 = *(_OWORD *)SubStr;
  v34 = v30;
  v35 = v31;
  v36 = v32;
  v37 = v18;
  PfLockSharedAcquire((volatile signed __int64 *)&qword_140E67288);
  v19 = PfSnAltProfileFindByScenarioId(Str2);
  if ( v19 )
  {
    HIDWORD(v32) += *(_DWORD *)(v19 + 124);
    HIDWORD(v26) = *(_DWORD *)(v19 + 124);
  }
  else
  {
    HIDWORD(v32) += v18;
  }
  PfLockSharedRelease((signed __int64 *)&qword_140E67288);
  HIDWORD(v32) += a3;
  if ( (dword_140E67260 & 0x20) != 0 || v25 == 2 )
    v7 |= 2u;
  v8 = PfSnBeginScenario(BugCheckParameter1, (unsigned int)SubStr, 0, v7, (__int64)&v28, (__int64)&v26);
  if ( v8 >= 0 )
    v8 = 0;
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
