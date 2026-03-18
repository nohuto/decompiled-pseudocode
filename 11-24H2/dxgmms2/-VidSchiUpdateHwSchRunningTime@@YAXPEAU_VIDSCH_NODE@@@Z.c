/*
 * XREFs of ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14000D5E0
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008B04 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x14001DD28 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140044BE0 (VidSchiProcessNativeFenceSignaledDpc.c)
 * Callees:
 *     ?DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x14000D928 (-DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x14000D944 (-KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14000E788 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiUpdateHwSchRunningTime(struct _VIDSCH_NODE *a1)
{
  unsigned int v2; // r13d
  unsigned int v3; // eax
  unsigned int v4; // r15d
  void *v5; // rsi
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v6; // rbp
  __int64 v7; // r14
  void *v8; // r12
  int v9; // esi
  ULONG_PTR v10; // r12
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  ULONG_PTR ParentValue; // rax
  __int64 v23; // r10
  __int64 v24; // r9
  _QWORD **v25; // rcx
  struct _RTL_BALANCED_NODE *v26; // rsi
  int v27; // eax
  struct _RTL_BALANCED_NODE *v28; // rsi
  int v29; // eax
  __int64 v30; // [rsp+70h] [rbp+8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+10h] BYREF
  void *v32; // [rsp+80h] [rbp+18h]
  __int64 v33; // [rsp+88h] [rbp+20h]

  if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
  {
    if ( *((_QWORD *)a1 + 2052) )
    {
      VidSchiCalibrateHwClock(a1);
      if ( *((_QWORD *)a1 + 2058) )
      {
        v2 = *((_DWORD *)a1 + 4106);
        HIDWORD(v30) = HIDWORD(**((_QWORD **)a1 + 2054));
        LODWORD(v30) = (unsigned int)**((_QWORD **)a1 + 2054) % v2;
        if ( *((_QWORD *)a1 + 2056) != v30 )
        {
          v3 = *((_DWORD *)a1 + 4113);
          if ( v3 <= HIDWORD(v30) )
          {
            v4 = *((_DWORD *)a1 + 4112);
            if ( v3 != HIDWORD(v30) )
            {
              if ( v3 + 1 != HIDWORD(v30) )
                v4 = (v4 + (v2 >> 1)) % v2;
              goto LABEL_8;
            }
            if ( v4 <= (unsigned int)**((_QWORD **)a1 + 2054) % v2 )
            {
LABEL_8:
              v32 = 0LL;
              v5 = 0LL;
              PerformanceFrequency.QuadPart = 0LL;
              v6 = 0LL;
              KeQueryPerformanceCounter(&PerformanceFrequency);
              do
              {
                v7 = *((_QWORD *)a1 + 2054) + 32 * (v4 + 1LL);
                if ( !*(_DWORD *)(v7 + 8) )
                {
                  v8 = *(void **)(v7 + 16);
                  if ( v8 != v5 )
                  {
                    v26 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 219);
                    while ( v26 )
                    {
                      v27 = DxgkrnlContextHandleCompareFunction(v8, v26);
                      if ( v27 >= 0 )
                      {
                        if ( v27 <= 0 )
                          break;
                        v26 = v26->Children[1];
                      }
                      else
                      {
                        v26 = v26->Children[0];
                      }
                    }
                    if ( v26 )
                    {
                      v6 = &v26[-7].16;
LABEL_38:
                      v32 = v8;
LABEL_12:
                      v9 = *(_DWORD *)(v7 + 24);
                      v10 = *(_QWORD *)v7;
                      if ( v6[25] == 1 && v9 != 1 )
                      {
                        v11 = *((_QWORD *)a1 + 2059);
                        v12 = *((_QWORD *)a1 + 2060);
                        v13 = *((_QWORD *)a1 + 2057);
                        if ( v12 != v11 )
                        {
                          v14 = *((_QWORD *)a1 + 2058);
                          v15 = v6[26].ParentValue - v11;
                          v33 = 0LL;
                          v16 = v13 + (v14 - v13) * v15 / (v12 - v11);
                          v17 = is_mul_ok(v16, 0x989680uLL)
                              ? v16 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart
                              : 10000000 * (v16 / PerformanceFrequency.QuadPart)
                              + 10000000 * (v16 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
                          v18 = *((_QWORD *)a1 + 2058);
                          v33 = 0LL;
                          v19 = v13 + (__int64)((v10 - v11) * (v18 - v13)) / (v12 - v11);
                          v20 = is_mul_ok(v19, 0x989680uLL)
                              ? v19 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart
                              : 10000000 * (v19 / PerformanceFrequency.QuadPart)
                              + 10000000 * (v19 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
                          if ( v20 > v17 )
                          {
                            v21 = v20 - v17;
                            *((_QWORD *)a1 + 347) += v21;
                            ParentValue = v6[2].ParentValue;
                            v23 = *(unsigned __int16 *)(ParentValue + 4);
                            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6[1].ParentValue + 40) + 32LL)
                                            + 8LL * *(unsigned int *)(*(_QWORD *)(ParentValue + 24) + 4LL));
                            if ( v24 )
                            {
                              v25 = *(_QWORD ***)(v24 + 8);
                              if ( (unsigned int)v23 < *(_DWORD *)(v24 + 80) )
                                v25 += v23;
                              if ( *v25 )
                                **v25 += v21;
                            }
                            v6[52].ParentValue += v21;
                          }
                        }
                      }
                      *(_DWORD *)&v6[25] = v9;
                      v6[26].ParentValue = v10;
                    }
                    else
                    {
                      v28 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 220);
                      while ( v28 )
                      {
                        v29 = KmdContextHandleCompareFunction(v8, v28);
                        if ( v29 >= 0 )
                        {
                          if ( v29 <= 0 )
                            break;
                          v28 = v28->Children[1];
                        }
                        else
                        {
                          v28 = v28->Children[0];
                        }
                      }
                      if ( v28 )
                      {
                        v6 = &v28[-8].16;
                        goto LABEL_38;
                      }
                    }
                    v5 = v32;
                    goto LABEL_29;
                  }
                  if ( v6 )
                    goto LABEL_12;
                }
LABEL_29:
                v4 = (v4 + 1) % v2;
              }
              while ( v4 != (_DWORD)v30 );
            }
          }
          *((_QWORD *)a1 + 2056) = v30;
        }
      }
    }
  }
}
