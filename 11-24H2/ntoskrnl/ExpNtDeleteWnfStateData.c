/*
 * XREFs of ExpNtDeleteWnfStateData @ 0x1407BFBF8
 * Callers:
 *     ExWnfCrossVmCallback @ 0x1407BFBA0 (ExWnfCrossVmCallback.c)
 *     NtDeleteWnfStateData @ 0x1407BFFD0 (NtDeleteWnfStateData.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExpWnfDeletePermanentStateData @ 0x1407C665C (ExpWnfDeletePermanentStateData.c)
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     ExpWnfLookupNameInstance @ 0x140900CF0 (ExpWnfLookupNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x1409013E0 (ExpCaptureWnfStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140904A84 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfCheckCallerAccess @ 0x1409E0090 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409E62A0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1409E8C7C (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfDeleteStateData @ 0x140A3307C (ExpWnfDeleteStateData.c)
 *     ExpCrossVmWnfPush @ 0x140A67A84 (ExpCrossVmWnfPush.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtDeleteWnfStateData(void *a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  __int64 v6; // r14
  int v7; // esi
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  PEPROCESS v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r8
  int v17; // [rsp+34h] [rbp-A4h]
  struct _EX_RUNDOWN_REF *v18; // [rsp+40h] [rbp-98h] BYREF
  int v19[2]; // [rsp+48h] [rbp-90h] BYREF
  int v20; // [rsp+50h] [rbp-88h]
  int v21; // [rsp+54h] [rbp-84h]
  unsigned __int64 v22; // [rsp+58h] [rbp-80h]
  int v23[2]; // [rsp+60h] [rbp-78h]
  PVOID P; // [rsp+68h] [rbp-70h] BYREF
  PSID Sid; // [rsp+70h] [rbp-68h] BYREF
  int v26[4]; // [rsp+78h] [rbp-60h]
  __int128 v27; // [rsp+88h] [rbp-50h] BYREF
  __int64 v28; // [rsp+98h] [rbp-40h] BYREF

  v21 = a3;
  v22 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v19 = 0LL;
  v18 = 0LL;
  LODWORD(v6) = 0;
  v27 = 0LL;
  v7 = ExpCaptureWnfStateName(a1);
  if ( v7 >= 0 )
  {
    v9 = v22;
    v10 = (v22 >> 4) & 3;
    v20 = (v22 >> 4) & 3;
    v6 = (v22 >> 6) & 0xF;
    LOBYTE(v8) = PreviousMode;
    v7 = ExpWnfCaptureScopeInstanceId(v6, a2, v8, &Sid, &v27);
    if ( v7 >= 0 )
    {
      if ( PreviousMode )
      {
        v17 = 0;
        if ( a2 )
        {
          v7 = ExpWnfCheckCrossScopeAccess(v22);
          if ( v7 < 0 )
            goto LABEL_36;
        }
      }
      else
      {
        v17 = 1;
      }
      if ( PreviousMode )
      {
        *(_QWORD *)v26 = KeGetCurrentThread();
        v11 = *(PEPROCESS *)(*(_QWORD *)v26 + 184LL);
        v9 = v22;
        LODWORD(v10) = v20;
        LODWORD(v6) = (v22 >> 6) & 0xF;
      }
      else
      {
        *(_QWORD *)v26 = 0LL;
        v11 = PsInitialSystemProcess;
      }
      *(_QWORD *)v23 = v11;
      if ( !v21
        || (_DWORD)v6 != 5
        || (v28 = v9 ^ 0x41C64E6DA3BC0074LL,
            v7 = ExpCrossVmWnfPush(-1547960204, 1, (unsigned int)&v28, 0, 0LL, 0),
            (int)(v7 + 0x80000000) < 0)
        || v7 == -1073741822 )
      {
        v7 = ExpWnfResolveScopeInstance((int)v19, v23[0], v26[0], v6, Sid);
        if ( v7 >= 0 )
        {
          v12 = ExpWnfLookupNameInstance(*(_QWORD *)v19, v9, &v18);
          v7 = v12;
          if ( v12 != -1073741772 || (_DWORD)v10 == 3 )
          {
            if ( v12 >= 0 )
            {
              if ( v17 || (v7 = ExpWnfCheckCallerAccess(v18[9].Ptr, 2u), v7 >= 0) )
              {
                if ( (_DWORD)v10 != 3 || v18[19].Count == *(_QWORD *)v23 )
                {
                  if ( (v9 & 0x400) == 0
                    || (v7 = ExpWnfDeletePermanentStateData(*(_QWORD *)v19, v9), ((v7 + 0x80000000) & 0x80000000) != 0)
                    || v7 == -1073741772 )
                  {
                    ExpWnfDeleteStateData(v18);
                    if ( (_DWORD)v6 == 5 )
                    {
                      v28 = v9 ^ 0x41C64E6DA3BC0074LL;
                      ExpCrossVmWnfPush(v14, 0, (unsigned int)&v28, 0, 0LL, 0);
                    }
                    goto LABEL_21;
                  }
                }
                else
                {
                  v7 = -1073741790;
                }
              }
            }
          }
          else
          {
            v7 = ExpWnfLookupPermanentName(v9, &P);
            if ( v7 >= 0 )
            {
              if ( v17 || (v7 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 2u), v7 >= 0) )
              {
                if ( (v9 & 0x400) == 0 )
                {
LABEL_21:
                  v7 = 0;
                  goto LABEL_36;
                }
                v13 = ExpWnfDeletePermanentStateData(*(_QWORD *)v19, v9);
                v7 = 0;
                if ( v13 != -1073741772 )
                  v7 = v13;
              }
            }
          }
        }
      }
    }
  }
LABEL_36:
  if ( v18 )
    ExReleaseRundownProtection_0(v18 + 1);
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  LOBYTE(v15) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v6, &v27, v15);
  return (unsigned int)v7;
}
