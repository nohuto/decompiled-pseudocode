/*
 * XREFs of PopEtEnergyTrackerQueryProcessEnergyValues @ 0x140ACA438
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

void __fastcall PopEtEnergyTrackerQueryProcessEnergyValues(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // r13
  int v5; // eax
  HANDLE v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r12d
  unsigned int v21; // r14d
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+A4h] [rbp-5Ch]
  HANDLE v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int16 v42; // [rsp+3C0h] [rbp+2C0h]
  __int16 v43; // [rsp+3C2h] [rbp+2C2h]
  int v44; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v45; // [rsp+3D4h] [rbp+2D4h]
  HANDLE v46; // [rsp+3E0h] [rbp+2E0h]
  unsigned int v47; // [rsp+3ECh] [rbp+2ECh]
  __int16 v48; // [rsp+6F0h] [rbp+5F0h]
  _BYTE v49[4]; // [rsp+700h] [rbp+600h] BYREF
  __int64 v50; // [rsp+704h] [rbp+604h]
  HANDLE v51; // [rsp+710h] [rbp+610h]

  v2 = *(_QWORD *)(a2 + 1640);
  v3 = (struct _EX_RUNDOWN_REF *)a2;
  v36 = (struct _EX_RUNDOWN_REF *)a2;
  v4 = a1;
  v35 = a1;
  v37 = v2;
  if ( v2 )
  {
    if ( *(int *)(PopEtGlobals + 1096) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 648) )
      {
        v5 = *(_DWORD *)(a2 + 500);
        Handle = 0LL;
        if ( (v5 & 0x4000008) == 0x4000000
          && (int)PsAcquireProcessExitSynchronization((struct _EX_RUNDOWN_REF *)a2) >= 0 )
        {
          if ( ObOpenObjectByPointer(v3, 0, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
          {
            v6 = Handle;
            if ( Handle )
            {
              v7 = 0LL;
              v8 = 0LL;
              v29 = 0;
              if ( *(_DWORD *)(v4 + 648) )
              {
                do
                {
                  memset_0(v49, 0, 0x328uLL);
                  v9 = 5 * v7;
                  v10 = *(_QWORD *)(v4 + 656);
                  v32 = 5 * v7;
                  v31 = v10;
                  v11 = *(_QWORD *)(PopEtGlobals + 1088);
                  v27 = 0;
                  v34 = 0LL;
                  v33 = 0LL;
                  v50 = *(_QWORD *)(v10 + 20 * v7 + 4);
                  v51 = v6;
                  v30 = v11;
                  if ( (int)guard_dispatch_icall_no_overrides(v49, v12, v13, v14) >= 0 )
                  {
                    LODWORD(v33) = *(_DWORD *)(v10 + 20 * v7);
                    DWORD1(v33) = 30;
                    *((_QWORD *)&v33 + 1) = &v27;
                    LODWORD(v34) = 4;
                    if ( (int)guard_dispatch_icall_no_overrides(&v33, 0LL, 0LL, v15) >= 0 )
                    {
                      v16 = 0;
                      if ( v27 )
                      {
                        do
                        {
                          memset_0(&v44, 0, 0x328uLL);
                          v45 = *(_QWORD *)(v10 + 4 * v9 + 4);
                          v46 = Handle;
                          v44 = 11;
                          v48 = v16;
                          if ( (int)guard_dispatch_icall_no_overrides(&v44, v17, v18, v19) >= 0 )
                          {
                            v20 = v47;
                            v21 = 0;
                            if ( v47 )
                            {
                              v22 = v32;
                              v23 = v31;
                              do
                              {
                                memset_0(&v38, 0, 0x328uLL);
                                v39 = *(_QWORD *)(v23 + 4 * v22 + 4);
                                v40 = Handle;
                                v38 = 19;
                                v42 = v16;
                                v43 = v21;
                                if ( (int)guard_dispatch_icall_no_overrides(&v38, v24, v25, v26) >= 0 )
                                  v8 += v41;
                                ++v21;
                              }
                              while ( v21 < v20 );
                              v10 = v23;
                              v9 = v22;
                            }
                            else
                            {
                              v10 = v31;
                            }
                          }
                          ++v16;
                        }
                        while ( v16 < v27 );
                        LODWORD(v7) = v29;
                        v4 = v35;
                      }
                    }
                  }
                  v6 = Handle;
                  v7 = (unsigned int)(v7 + 1);
                  v29 = v7;
                }
                while ( (unsigned int)v7 < *(_DWORD *)(v4 + 648) );
                v3 = v36;
                v2 = v37;
              }
              ObCloseHandle(v6, 1);
              if ( v8 )
                *(_QWORD *)(v2 + 432) = v8;
            }
          }
          ExReleaseRundownProtection_0(v3 + 61);
        }
      }
    }
  }
}
