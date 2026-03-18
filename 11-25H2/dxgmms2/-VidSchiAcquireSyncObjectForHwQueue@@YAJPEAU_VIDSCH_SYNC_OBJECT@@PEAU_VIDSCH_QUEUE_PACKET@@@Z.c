/*
 * XREFs of ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000396C
 * Callers:
 *     VidSchSubmitWaitToHwQueue @ 0x1400034F0 (VidSchSubmitWaitToHwQueue.c)
 * Callees:
 *     ?InsertTailListInstrumented@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140004D68 (-InsertTailListInstrumented@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUpdateNativeFenceMonitoredValue @ 0x140047C8C (VidSchiUpdateNativeFenceMonitoredValue.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchiAcquireSyncObjectForHwQueue(struct _VIDSCH_SYNC_OBJECT *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  char v4; // dl
  char v5; // r12
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbp
  int v9; // r8d
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // rax
  int v14; // eax
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  const wchar_t *v18; // r9
  void (__fastcall *v19)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  char *v20; // rdi
  char *v21; // rax
  char **v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ecx
  int v28; // eax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 *v31; // rax
  bool v32; // al
  unsigned __int64 v33; // r9
  unsigned int *v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // r9
  int v39; // eax
  _QWORD *v40; // rdx
  _QWORD *v41; // rax

  v4 = 0;
  v5 = 0;
  v6 = *((_QWORD *)a2 + 12);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL);
  v8 = *(_QWORD *)(v7 + 32);
  if ( *((_DWORD *)a1 + 9) != 0x7FFFFFFF )
  {
    v9 = *((_DWORD *)a1 + 12);
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        if ( v9 != 2 )
        {
          if ( v9 == 4 || v9 == 5 )
          {
            v10 = *((_QWORD *)a2 + 100);
            if ( *((_BYTE *)a1 + 29) )
              goto LABEL_11;
            v11 = (unsigned __int64 *)*((_QWORD *)a1 + 9);
            if ( *((_BYTE *)a1 + 30) ? *v11 >= v10 : *(_DWORD *)v11 - (int)v10 >= 0 )
              goto LABEL_11;
            if ( *((_QWORD *)a1 + 11) )
            {
              ++*(_DWORD *)(v8 + 876);
              *((_DWORD *)a2 + 188) |= 8u;
              goto LABEL_21;
            }
          }
          else
          {
            if ( v9 != 6 )
              goto LABEL_21;
            if ( *((_BYTE *)a1 + 29) || **((_QWORD **)a1 + 9) >= *((_QWORD *)a2 + 100) )
              goto LABEL_11;
            v29 = *((_QWORD *)a2 + 100);
            if ( !*((_BYTE *)a1 + 28) )
            {
              v33 = **((_QWORD **)a1 + 15);
              v34 = (unsigned int *)*((_QWORD *)a1 + 9);
              if ( *((_DWORD *)a1 + 12) == 6 || *((_BYTE *)a1 + 30) )
                v35 = *(_QWORD *)v34;
              else
                v35 = *v34;
              if ( v29 <= v33 || v35 >= v33 )
              {
                if ( *((_BYTE *)a1 + 28) )
                {
                  v36 = *(_QWORD *)(*((_QWORD *)a1 + 38) + 40LL);
                }
                else
                {
                  v37 = *((_DWORD *)a1 + 12);
                  if ( v37 == 2 )
                  {
                    v36 = *((_QWORD *)a1 + 9);
                  }
                  else if ( v37 == 6 )
                  {
                    v36 = *((_QWORD *)a1 + 21);
                  }
                  else
                  {
                    v36 = *((_QWORD *)a1 + 12);
                  }
                }
                if ( v29 > v36 )
                {
                  if ( g_NativeFenceDebugTest )
                    **((_QWORD **)a1 + 15) = v29;
                  else
                    VidSchiUpdateNativeFenceMonitoredValue(*((_QWORD *)a1 + 1), *((_QWORD *)a1 + 20), v29);
                }
                else
                {
                  if ( *((_BYTE *)a1 + 28) )
                  {
                    v38 = *(_QWORD *)(*((_QWORD *)a1 + 38) + 40LL);
                  }
                  else
                  {
                    v39 = *((_DWORD *)a1 + 12);
                    if ( v39 == 2 )
                    {
                      v38 = *((_QWORD *)a1 + 9);
                    }
                    else if ( v39 == 6 )
                    {
                      v38 = *((_QWORD *)a1 + 21);
                    }
                    else
                    {
                      v38 = *((_QWORD *)a1 + 12);
                    }
                  }
                  WdLogSingleEntry3(3LL, a1, *((_QWORD *)a2 + 100), v38);
                  WdLogGlobalForLineNumber = 6106;
                }
              }
              else
              {
                WdLogSingleEntry4(3LL, a1, v29);
                WdLogGlobalForLineNumber = 6096;
              }
            }
            v30 = *((_QWORD *)a2 + 100);
            if ( *((_BYTE *)a1 + 29) )
              goto LABEL_11;
            v31 = (unsigned __int64 *)*((_QWORD *)a1 + 9);
            if ( *((_DWORD *)a1 + 12) == 6 || *((_BYTE *)a1 + 30) )
              v32 = *v31 >= v30;
            else
              v32 = *(_DWORD *)v31 - (int)v30 >= 0;
            if ( v32 )
              goto LABEL_11;
          }
          if ( *((_BYTE *)a1 + 31) || (unsigned int)(((2 * *((_DWORD *)a1 + 13)) >> 1) - 3) <= 1 )
          {
            if ( *((_BYTE *)a1 + 28) )
            {
              v15 = *(_QWORD *)(*((_QWORD *)a1 + 38) + 40LL);
            }
            else
            {
              v14 = *((_DWORD *)a1 + 12);
              if ( v14 == 2 )
                v15 = *((_QWORD *)a1 + 9);
              else
                v15 = v14 == 6 ? *((_QWORD *)a1 + 21) : *((_QWORD *)a1 + 12);
            }
            if ( *((_QWORD *)a2 + 100) <= v15 )
            {
LABEL_21:
              v16 = *((_DWORD *)a1 + 12);
              if ( (unsigned int)(v16 - 4) <= 1 )
              {
                if ( *(_BYTE *)(v8 + 7059) )
                {
                  InsertTailListInstrumented((struct _VIDSCH_GLOBAL *)v8, a2);
LABEL_24:
                  _InterlockedAdd((volatile signed __int32 *)a1 + 9, 1u);
                  return 0LL;
                }
                v20 = (char *)a2 + 768;
                v21 = (char *)(v8 + 880);
                goto LABEL_29;
              }
              if ( v16 == 6 )
              {
                if ( *(_BYTE *)(v8 + 7059) )
                {
                  InsertTailListInstrumented((struct _VIDSCH_GLOBAL *)v8, a2);
                }
                else
                {
                  v40 = *(_QWORD **)(v8 + 888);
                  v41 = (_QWORD *)((char *)a2 + 768);
                  if ( *v40 != v8 + 880 )
                    goto LABEL_30;
                  *v41 = v8 + 880;
                  *((_QWORD *)a2 + 97) = v40;
                  *v40 = v41;
                  *(_QWORD *)(v8 + 888) = v41;
                }
                v20 = (char *)a2 + 784;
              }
              else
              {
                v20 = (char *)a2 + 768;
                if ( v5 )
                {
                  v21 = (char *)a1 + 192;
LABEL_29:
                  v22 = (char **)*((_QWORD *)v21 + 1);
                  if ( *v22 == v21 )
                  {
                    *(_QWORD *)v20 = v21;
                    *((_QWORD *)v20 + 1) = v22;
                    *v22 = v20;
                    *((_QWORD *)v21 + 1) = v20;
                    goto LABEL_24;
                  }
LABEL_30:
                  __fastfail(3u);
                }
              }
              v21 = (char *)a1 + 176;
              goto LABEL_29;
            }
          }
LABEL_50:
          ++*((_DWORD *)a1 + 10);
          v5 = 1;
          ++*(_DWORD *)(v6 + 156);
          ++*(_DWORD *)(v7 + 1844);
          ++*(_DWORD *)(v8 + 872);
          *((_DWORD *)a2 + 188) |= 4u;
          goto LABEL_21;
        }
        if ( *((_BYTE *)a1 + 28) )
          v23 = *(_QWORD *)(*((_QWORD *)a1 + 38) + 40LL);
        else
          v23 = *((_QWORD *)a1 + 9);
        if ( v23 >= *((_QWORD *)a2 + 100) )
        {
          if ( *((_BYTE *)a1 + 28) )
            v24 = *(_QWORD *)(*((_QWORD *)a1 + 38) + 32LL);
          else
            v24 = *((_QWORD *)a1 + 10);
          if ( v24 >= *((_QWORD *)a2 + 100) )
            goto LABEL_11;
          goto LABEL_21;
        }
        if ( *((_BYTE *)a1 + 25) )
          goto LABEL_50;
        WdLogSingleEntry0(1LL);
        v17 = 3427LL;
        v18 = L"Trying to wait the fence without signal having been submitted.\n";
        goto LABEL_26;
      }
      v27 = *((_DWORD *)a1 + 18);
      if ( !v27 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3392;
        return 3221225473LL;
      }
      v28 = *((_DWORD *)a1 + 16);
      if ( v28 )
      {
        v4 = 1;
        *((_DWORD *)a1 + 16) = v28 - 1;
      }
      *((_DWORD *)a1 + 18) = v27 - 1;
    }
    else
    {
      if ( *((_QWORD *)a1 + 9) )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3360;
        return 3221225473LL;
      }
      if ( !*((_QWORD *)a1 + 8) )
      {
        v25 = *((_QWORD *)a2 + 11);
        if ( !v25 )
          v25 = *((_QWORD *)a2 + 12);
        *((_QWORD *)a1 + 8) = v25;
        v4 = 1;
      }
      v26 = *((_QWORD *)a2 + 11);
      if ( !v26 )
        v26 = *((_QWORD *)a2 + 12);
      *((_QWORD *)a1 + 9) = v26;
    }
    if ( v4 )
    {
LABEL_11:
      *((_DWORD *)a2 + 188) |= 1u;
      return 0LL;
    }
    goto LABEL_21;
  }
  WdLogSingleEntry0(1LL);
  v17 = 3342LL;
  v18 = L"Synchronization object already has LONG_MAX reference pending, can't reference more.\n";
LABEL_26:
  v19 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
  WdLogGlobalForLineNumber = v17;
  v19(0LL, 0x40000LL, 0xFFFFFFFFLL, v18, v17, 0LL, 0LL, 0LL, 0LL);
  return 3221225473LL;
}
