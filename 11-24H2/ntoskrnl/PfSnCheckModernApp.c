/*
 * XREFs of PfSnCheckModernApp @ 0x1409497A8
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x1409494C8 (PfSnCalculateScenarioNameAndHash.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x140422B10 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PfSnCheckModernApp(int *a1, _DWORD *a2, WCHAR *a3, ULONG_PTR *a4)
{
  int v8; // ebp
  _KPROCESS *Process; // r14
  void *v10; // r15
  NTSTATUS PackageIdentity; // eax
  unsigned int v12; // esi
  int v13; // edi
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r10
  unsigned __int8 *v23; // r10
  ULONG_PTR v24; // r11
  ULONG_PTR v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  ULONG_PTR v28; // r11
  ULONG_PTR v29; // r11
  __int64 v30; // r10
  __int64 v31; // r10
  __int64 v32; // r10
  __int64 v33; // r10
  ULONG_PTR v34; // r11
  ULONG_PTR v35; // r11
  ULONG_PTR v36; // r11
  ULONG_PTR v37; // r11
  ULONG_PTR AppIdSize[2]; // [rsp+30h] [rbp-F8h] BYREF
  WCHAR AppId[72]; // [rsp+40h] [rbp-E8h] BYREF

  v8 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  AppIdSize[0] = 130LL;
  PackageIdentity = RtlQueryPackageIdentity(v10, a3, a4, AppId, AppIdSize, 0LL);
  v12 = PackageIdentity;
  if ( PackageIdentity >= 0 )
  {
    v15 = 314159LL;
    v16 = *a4 - 2;
    v17 = 314159LL;
    v13 = 1;
    if ( v16 >= 8 )
    {
      v18 = (unsigned __int64)v16 >> 3;
      v16 -= 8 * ((unsigned __int64)v16 >> 3);
      do
      {
        v19 = *((unsigned __int8 *)a3 + 6)
            + 37
            * (*((unsigned __int8 *)a3 + 5)
             + 37
             * (*((unsigned __int8 *)a3 + 4)
              + 37
              * (*((unsigned __int8 *)a3 + 3)
               + 37
               * (*((unsigned __int8 *)a3 + 2)
                + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v17))))));
        v20 = *((unsigned __int8 *)a3 + 7);
        a3 += 4;
        v17 = v20 + 37 * v19;
        --v18;
      }
      while ( v18 );
    }
    v21 = v16 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v30 = v22 - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                if ( v33 != 1 )
                {
LABEL_12:
                  v23 = (unsigned __int8 *)AppId;
                  v24 = AppIdSize[0] - 2;
                  if ( (signed __int64)(AppIdSize[0] - 2) >= 8 )
                  {
                    v25 = v24 >> 3;
                    v24 -= 8 * (v24 >> 3);
                    do
                    {
                      v26 = v23[6]
                          + 37
                          * (v23[5]
                           + 37 * (v23[4] + 37 * (v23[3] + 37 * (v23[2] + 37 * (v23[1] + 37 * (*v23 + 37 * v15))))));
                      v27 = v23[7];
                      v23 += 8;
                      v15 = v27 + 37 * v26;
                      --v25;
                    }
                    while ( v25 );
                  }
                  v28 = v24 - 1;
                  if ( v28 )
                  {
                    v29 = v28 - 1;
                    if ( v29 )
                    {
                      v34 = v29 - 1;
                      if ( v34 )
                      {
                        v35 = v34 - 1;
                        if ( v35 )
                        {
                          v36 = v35 - 1;
                          if ( v36 )
                          {
                            v37 = v36 - 1;
                            if ( v37 )
                            {
                              if ( v37 != 1 )
                                goto LABEL_19;
                              LODWORD(v15) = *v23++ + 37 * v15;
                            }
                            LODWORD(v15) = *v23++ + 37 * v15;
                          }
                          LODWORD(v15) = *v23++ + 37 * v15;
                        }
                        LODWORD(v15) = *v23++ + 37 * v15;
                      }
                      LODWORD(v15) = *v23++ + 37 * v15;
                    }
                    LODWORD(v15) = *v23++ + 37 * v15;
                  }
                  LODWORD(v15) = *v23 + 37 * v15;
LABEL_19:
                  v8 = v15 + v17;
                  goto LABEL_3;
                }
                LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
                a3 = (WCHAR *)((char *)a3 + 1);
              }
              LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
              a3 = (WCHAR *)((char *)a3 + 1);
            }
            LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
            a3 = (WCHAR *)((char *)a3 + 1);
          }
          LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
          a3 = (WCHAR *)((char *)a3 + 1);
        }
        LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
        a3 = (WCHAR *)((char *)a3 + 1);
      }
      LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
      a3 = (WCHAR *)((char *)a3 + 1);
    }
    LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
    goto LABEL_12;
  }
  v13 = 0;
  if ( PackageIdentity == -1073741275 )
  {
LABEL_3:
    *a2 = v8;
    v12 = 0;
    *a1 = v13;
  }
  ObFastDereferenceObject((__int64 *)&Process[1].ActiveProcessors, (ULONG_PTR)v10, 0x746C6644u);
  return v12;
}
