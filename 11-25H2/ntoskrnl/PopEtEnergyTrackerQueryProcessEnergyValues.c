/*
 * XREFs of PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1406E9008
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1408DFB00 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     PsAcquireProcessExitSynchronization @ 0x1408BEB30 (PsAcquireProcessExitSynchronization.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
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
  unsigned int v12; // ebx
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  __int64 v15; // r13
  __int64 v16; // r15
  unsigned int v17; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+A4h] [rbp-5Ch]
  HANDLE v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int16 v32; // [rsp+3C0h] [rbp+2C0h]
  __int16 v33; // [rsp+3C2h] [rbp+2C2h]
  int v34; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v35; // [rsp+3D4h] [rbp+2D4h]
  HANDLE v36; // [rsp+3E0h] [rbp+2E0h]
  unsigned int v37; // [rsp+3ECh] [rbp+2ECh]
  __int16 v38; // [rsp+6F0h] [rbp+5F0h]
  _BYTE v39[4]; // [rsp+700h] [rbp+600h] BYREF
  __int64 v40; // [rsp+704h] [rbp+604h]
  HANDLE v41; // [rsp+710h] [rbp+610h]

  v2 = *(_QWORD *)(a2 + 1640);
  v3 = (struct _EX_RUNDOWN_REF *)a2;
  v26 = (struct _EX_RUNDOWN_REF *)a2;
  v4 = a1;
  v25 = a1;
  v27 = v2;
  if ( v2 )
  {
    if ( *(int *)(PopEtGlobals + 1096) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 648) )
      {
        v5 = *(_DWORD *)(a2 + 500);
        Handle = 0LL;
        if ( (v5 & 0x4000008) == 0x4000000 && (int)PsAcquireProcessExitSynchronization(a2) >= 0 )
        {
          if ( ObOpenObjectByPointer(v3, 0, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
          {
            v6 = Handle;
            if ( Handle )
            {
              v7 = 0LL;
              v8 = 0LL;
              v19 = 0;
              if ( *(_DWORD *)(v4 + 648) )
              {
                do
                {
                  memset_0(v39, 0, 0x328uLL);
                  v9 = 5 * v7;
                  v10 = *(_QWORD *)(v4 + 656);
                  v22 = 5 * v7;
                  v21 = v10;
                  v11 = *(_QWORD *)(PopEtGlobals + 1088);
                  v17 = 0;
                  v24 = 0LL;
                  v23 = 0LL;
                  v40 = *(_QWORD *)(v10 + 20 * v7 + 4);
                  v41 = v6;
                  v20 = v11;
                  if ( (int)guard_dispatch_icall_no_overrides(v39) >= 0 )
                  {
                    LODWORD(v23) = *(_DWORD *)(v10 + 20 * v7);
                    DWORD1(v23) = 30;
                    *((_QWORD *)&v23 + 1) = &v17;
                    LODWORD(v24) = 4;
                    if ( (int)guard_dispatch_icall_no_overrides(&v23) >= 0 )
                    {
                      v12 = 0;
                      if ( v17 )
                      {
                        do
                        {
                          memset_0(&v34, 0, 0x328uLL);
                          v35 = *(_QWORD *)(v10 + 4 * v9 + 4);
                          v36 = Handle;
                          v34 = 11;
                          v38 = v12;
                          if ( (int)guard_dispatch_icall_no_overrides(&v34) >= 0 )
                          {
                            v13 = v37;
                            v14 = 0;
                            if ( v37 )
                            {
                              v15 = v22;
                              v16 = v21;
                              do
                              {
                                memset_0(&v28, 0, 0x328uLL);
                                v29 = *(_QWORD *)(v16 + 4 * v15 + 4);
                                v30 = Handle;
                                v28 = 19;
                                v32 = v12;
                                v33 = v14;
                                if ( (int)guard_dispatch_icall_no_overrides(&v28) >= 0 )
                                  v8 += v31;
                                ++v14;
                              }
                              while ( v14 < v13 );
                              v10 = v16;
                              v9 = v15;
                            }
                            else
                            {
                              v10 = v21;
                            }
                          }
                          ++v12;
                        }
                        while ( v12 < v17 );
                        LODWORD(v7) = v19;
                        v4 = v25;
                      }
                    }
                  }
                  v6 = Handle;
                  v7 = (unsigned int)(v7 + 1);
                  v19 = v7;
                }
                while ( (unsigned int)v7 < *(_DWORD *)(v4 + 648) );
                v3 = v26;
                v2 = v27;
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
