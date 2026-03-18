/*
 * XREFs of PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140751758
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
  unsigned int v12; // edi
  __int64 v13; // r15
  unsigned int v14; // r14d
  unsigned int v15; // esi
  __int64 v16; // r15
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v27; // [rsp+98h] [rbp-68h]
  _QWORD *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+B4h] [rbp-4Ch]
  HANDLE v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int16 v33; // [rsp+3D0h] [rbp+2D0h]
  __int16 v34; // [rsp+3D2h] [rbp+2D2h]
  int v35; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v36; // [rsp+3E4h] [rbp+2E4h]
  HANDLE v37; // [rsp+3F0h] [rbp+2F0h]
  unsigned int v38; // [rsp+3FCh] [rbp+2FCh]
  __int16 v39; // [rsp+700h] [rbp+600h]
  _BYTE v40[4]; // [rsp+710h] [rbp+610h] BYREF
  __int64 v41; // [rsp+714h] [rbp+614h]
  HANDLE v42; // [rsp+720h] [rbp+620h]

  v3 = 0;
  v28 = a3;
  v4 = (struct _EX_RUNDOWN_REF *)a2;
  v27 = (struct _EX_RUNDOWN_REF *)a2;
  v5 = a1;
  v26 = a1;
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
            v20 = 0;
            if ( *(_DWORD *)(v5 + 648) )
            {
              do
              {
                memset_0(v40, 0, 0x328uLL);
                v10 = *(_QWORD *)(PopEtGlobals + 1088);
                v25 = 0LL;
                v24 = 0LL;
                v18 = 0;
                v23 = v10;
                v11 = 5LL * v9;
                v21 = *(_QWORD *)(v5 + 656);
                v22 = v11;
                v41 = *(_QWORD *)(v21 + 20LL * v9 + 4);
                v42 = v7;
                if ( (int)guard_dispatch_icall_no_overrides(v40) >= 0 )
                {
                  LODWORD(v24) = *(_DWORD *)(v21 + 20LL * v9);
                  *((_QWORD *)&v24 + 1) = &v18;
                  DWORD1(v24) = 30;
                  LODWORD(v25) = 4;
                  if ( (int)guard_dispatch_icall_no_overrides(&v24) >= 0 )
                  {
                    v12 = 0;
                    if ( v18 )
                    {
                      v13 = v21;
                      do
                      {
                        memset_0(&v35, 0, 0x328uLL);
                        v36 = *(_QWORD *)(v13 + 4 * v11 + 4);
                        v37 = Handle;
                        v35 = 11;
                        v39 = v12;
                        if ( (int)guard_dispatch_icall_no_overrides(&v35) >= 0 )
                        {
                          v14 = 0;
                          if ( v38 )
                          {
                            v15 = v38;
                            v16 = v22;
                            do
                            {
                              memset_0(&v29, 0, 0x328uLL);
                              v29 = 19;
                              v33 = v12;
                              v34 = v14;
                              v30 = *(_QWORD *)(v21 + 4 * v16 + 4);
                              v31 = Handle;
                              if ( (int)guard_dispatch_icall_no_overrides(&v29) >= 0 )
                                v8 += v32;
                              ++v14;
                            }
                            while ( v14 < v15 );
                            v11 = v16;
                            v13 = v21;
                          }
                          else
                          {
                            v11 = v22;
                          }
                        }
                        ++v12;
                      }
                      while ( v12 < v18 );
                      v9 = v20;
                      v5 = v26;
                    }
                  }
                }
                v7 = Handle;
                v20 = ++v9;
              }
              while ( v9 < *(_DWORD *)(v5 + 648) );
              v4 = v27;
            }
            ObCloseHandle(v7, 1);
            v3 = 1;
            *v28 = v8;
          }
        }
        ExReleaseRundownProtection_0(v4 + 61);
      }
    }
  }
  return v3;
}
