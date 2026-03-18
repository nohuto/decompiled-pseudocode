/*
 * XREFs of PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x14075E150
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1408EEF10 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsAcquireProcessExitSynchronization @ 0x14094BC90 (PsAcquireProcessExitSynchronization.c)
 */

char __fastcall PopEtEnergyTrackerQueryDxgProcessEnergyValues(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl
  struct _EX_RUNDOWN_REF *v4; // rsi
  __int64 v5; // r13
  int v6; // eax
  HANDLE v7; // rdi
  __int64 v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r14d
  unsigned int v22; // esi
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v37; // [rsp+98h] [rbp-68h]
  _QWORD *v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v40; // [rsp+B4h] [rbp-4Ch]
  HANDLE v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int16 v43; // [rsp+3D0h] [rbp+2D0h]
  __int16 v44; // [rsp+3D2h] [rbp+2D2h]
  int v45; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v46; // [rsp+3E4h] [rbp+2E4h]
  HANDLE v47; // [rsp+3F0h] [rbp+2F0h]
  unsigned int v48; // [rsp+3FCh] [rbp+2FCh]
  __int16 v49; // [rsp+700h] [rbp+600h]
  _BYTE v50[4]; // [rsp+710h] [rbp+610h] BYREF
  __int64 v51; // [rsp+714h] [rbp+614h]
  HANDLE v52; // [rsp+720h] [rbp+620h]

  v3 = 0;
  v38 = a3;
  v4 = (struct _EX_RUNDOWN_REF *)a2;
  v37 = (struct _EX_RUNDOWN_REF *)a2;
  v5 = a1;
  v36 = a1;
  if ( *(int *)(PopEtGlobals + 1096) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 648) )
    {
      v6 = *(_DWORD *)(a2 + 500) & 0x4000008;
      Handle = 0LL;
      if ( v6 == 0x4000000 && (int)PsAcquireProcessExitSynchronization(a2) >= 0 )
      {
        if ( ObOpenObjectByPointer(v4, 0, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
        {
          v7 = Handle;
          if ( Handle )
          {
            v8 = 0LL;
            v9 = 0;
            v30 = 0;
            if ( *(_DWORD *)(v5 + 648) )
            {
              do
              {
                memset_0(v50, 0, 0x328uLL);
                v10 = *(_QWORD *)(PopEtGlobals + 1088);
                v35 = 0LL;
                v34 = 0LL;
                v28 = 0;
                v33 = v10;
                v11 = 5LL * v9;
                v31 = *(_QWORD *)(v5 + 656);
                v32 = v11;
                v51 = *(_QWORD *)(v31 + 20LL * v9 + 4);
                v52 = v7;
                if ( (int)guard_dispatch_icall_no_overrides(v50, v12, v13, v14) >= 0 )
                {
                  LODWORD(v34) = *(_DWORD *)(v31 + 20LL * v9);
                  *((_QWORD *)&v34 + 1) = &v28;
                  DWORD1(v34) = 30;
                  LODWORD(v35) = 4;
                  if ( (int)guard_dispatch_icall_no_overrides(&v34, 0LL, 0LL, v15) >= 0 )
                  {
                    v16 = 0;
                    if ( v28 )
                    {
                      v17 = v31;
                      do
                      {
                        memset_0(&v45, 0, 0x328uLL);
                        v46 = *(_QWORD *)(v17 + 4 * v11 + 4);
                        v47 = Handle;
                        v45 = 11;
                        v49 = v16;
                        if ( (int)guard_dispatch_icall_no_overrides(&v45, v18, v19, v20) >= 0 )
                        {
                          v21 = 0;
                          if ( v48 )
                          {
                            v22 = v48;
                            v23 = v32;
                            do
                            {
                              memset_0(&v39, 0, 0x328uLL);
                              v39 = 19;
                              v43 = v16;
                              v44 = v21;
                              v40 = *(_QWORD *)(v31 + 4 * v23 + 4);
                              v41 = Handle;
                              if ( (int)guard_dispatch_icall_no_overrides(&v39, v24, v25, v26) >= 0 )
                                v8 += v42;
                              ++v21;
                            }
                            while ( v21 < v22 );
                            v11 = v23;
                            v17 = v31;
                          }
                          else
                          {
                            v11 = v32;
                          }
                        }
                        ++v16;
                      }
                      while ( v16 < v28 );
                      v9 = v30;
                      v5 = v36;
                    }
                  }
                }
                v7 = Handle;
                v30 = ++v9;
              }
              while ( v9 < *(_DWORD *)(v5 + 648) );
              v4 = v37;
            }
            ObCloseHandle(v7, 1);
            v3 = 1;
            *v38 = v8;
          }
        }
        ExReleaseRundownProtection_0(v4 + 61);
      }
    }
  }
  return v3;
}
