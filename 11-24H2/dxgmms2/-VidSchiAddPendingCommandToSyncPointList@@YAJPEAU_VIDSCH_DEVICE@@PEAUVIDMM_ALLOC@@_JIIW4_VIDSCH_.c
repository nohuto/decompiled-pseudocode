/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x14003393C
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x140033344 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x14001D2A8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     McTemplateK0pxqPR2XR2_EtwWriteTransfer @ 0x140033F9C (McTemplateK0pxqPR2XR2_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // rbx
  char *v7; // rsi
  _QWORD *v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // rdi
  _QWORD *v12; // rsi
  __int64 Pool2; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rax
  __int64 *j; // r8
  _QWORD *i; // rdx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 **v22; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r9
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // r10
  __int64 *v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 *v34; // rcx
  __int64 *v35; // r10
  char *v36; // r11
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // [rsp+40h] [rbp-59h]
  _BYTE *P; // [rsp+48h] [rbp-51h]
  _BYTE v41[16]; // [rsp+50h] [rbp-49h] BYREF
  int v42; // [rsp+60h] [rbp-39h]
  _QWORD *v43; // [rsp+68h] [rbp-31h]
  _QWORD *v44; // [rsp+70h] [rbp-29h]
  PVOID v45; // [rsp+78h] [rbp-21h]
  _BYTE v46[16]; // [rsp+80h] [rbp-19h] BYREF
  int v47; // [rsp+90h] [rbp-9h]

  v9 = a3;
  v10 = a4;
  v39 = a2;
  v44 = a1;
  if ( !a4 && !a5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 3328LL, a1, a3, a6);
    WdLogGlobalForLineNumber = 906;
    goto LABEL_37;
  }
  v6 = a1[234];
  v12 = a1 + 233;
  if ( (_QWORD *)v6 == a1 + 233 || *(_QWORD *)(v6 + 16) != a3 )
  {
    Pool2 = ExAllocatePool2(64LL, 168LL, 1717659990LL);
    v6 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 7161;
      return 3221225495LL;
    }
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 64) = 0;
    *(_QWORD *)(Pool2 + 72) = 0LL;
    *(_DWORD *)(Pool2 + 128) = 0;
    *(_QWORD *)(Pool2 + 16) = v9;
    v14 = (_QWORD *)(Pool2 + 136);
    v14[1] = v14;
    *v14 = v14;
    *(_QWORD *)(v6 + 160) = v6 + 152;
    *(_QWORD *)(v6 + 152) = v6 + 152;
    v15 = (__int64 *)v12[1];
    if ( (_QWORD *)*v15 != v12 )
      goto LABEL_26;
    *(_QWORD *)v6 = v12;
    *(_QWORD *)(v6 + 8) = v15;
    *v15 = v6;
    v12[1] = v6;
    if ( (unsigned int)v10 > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 0x10 )
      {
        v8 = 0LL;
LABEL_9:
        if ( a5 > 2 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / a5 < 0x18 )
          {
            v7 = 0LL;
LABEL_13:
            if ( v8 && v7 )
            {
              v9 = (__int64)(a1 + 9);
              LODWORD(j) = 0;
              for ( i = (_QWORD *)a1[9]; i != (_QWORD *)v9; i = (_QWORD *)*i )
              {
                v18 = i[19];
                v19 = i[17];
                if ( v18 > v19 )
                {
                  if ( (unsigned int)j > (int)v10 - 1 )
                  {
                    g_DxgMmsBugcheckExportIndex = 1;
                    WdLogSingleEntry5(0LL, 281LL, 3328LL, v18, v19, (unsigned int)j);
                    WdLogGlobalForLineNumber = 906;
LABEL_89:
                    g_DxgMmsBugcheckExportIndex = 1;
                    WdLogSingleEntry5(0LL, 281LL, 3328LL, 0LL, 0LL, (unsigned int)v25);
                    WdLogGlobalForLineNumber = 906;
                    goto LABEL_90;
                  }
                  v32 = 2LL * (unsigned int)j;
                  LODWORD(j) = (_DWORD)j + 1;
                  v8[v32 + 1] = v18;
                  v8[v32] = i - 3;
                }
              }
LABEL_37:
              v24 = a1 + 11;
              v25 = 0LL;
              v26 = (_QWORD *)a1[11];
              v43 = a1 + 11;
              while ( v26 != v24 )
              {
                v33 = v26 + 4;
                for ( j = (__int64 *)v26[4]; j != v33; j = (__int64 *)*j )
                {
                  v34 = j - 1;
                  if ( *((_DWORD *)j + 35) )
                  {
                    v35 = v34 + 9;
                    if ( v34[9] > (unsigned __int64)v34[8] || v34[12] > (unsigned __int64)v34[11] )
                    {
                      if ( (unsigned int)v25 > a5 - 1 )
                        goto LABEL_89;
                      v9 = 2LL;
                      v36 = &v7[24 * v25 + 8];
                      do
                      {
                        v37 = *v35;
                        v35 += 3;
                        *(_QWORD *)v36 = v37;
                        v36 += 8;
                        --v9;
                      }
                      while ( v9 );
                      *(_QWORD *)&v7[24 * v25] = v34;
                      v25 = (unsigned int)(v25 + 1);
                    }
                    v33 = v26 + 4;
                  }
                }
                v26 = (_QWORD *)*v26;
                v24 = v43;
              }
              if ( !bTracingEnabled )
                goto LABEL_22;
              P = 0LL;
              v42 = 0;
              v45 = 0LL;
              v47 = 0;
              if ( (unsigned int)v10 > 2 )
              {
                v7 = (char *)v10;
                if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 8 )
                {
                  v9 = 0LL;
                  goto LABEL_63;
                }
                P = (_BYTE *)ExAllocatePool2(64LL, 8 * v10, 1717659990LL);
              }
              else
              {
                P = v41;
                if ( (_DWORD)v10 )
                  memset(v41, 0, 8 * v10);
              }
              v7 = (char *)v10;
              v42 = v10;
              v9 = (__int64)P;
              if ( (unsigned int)v10 <= 2 )
              {
                v45 = v46;
                if ( (_DWORD)v10 )
                  memset(v46, 0, 8 * v10);
                goto LABEL_46;
              }
              if ( 0xFFFFFFFFFFFFFFFFuLL / v10 >= 8 )
              {
                v45 = (PVOID)ExAllocatePool2(64LL, 8 * v10, 1717659990LL);
LABEL_46:
                v27 = v45;
                v47 = v10;
                goto LABEL_47;
              }
LABEL_63:
              v27 = 0LL;
LABEL_47:
              if ( v9 && v27 )
              {
                if ( (_DWORD)v10 )
                {
                  v28 = v27;
                  v29 = v9 - (_QWORD)v27;
                  do
                  {
                    j = (__int64 *)*v8;
                    v30 = *(__int64 **)(*v8 + 56LL);
                    if ( !v30 || (j[14] & 0x40) != 0 )
LABEL_90:
                      v30 = j;
                    *(_QWORD *)((char *)v28 + v29) = v30;
                    v31 = v8[1];
                    v8 += 2;
                    *v28++ = v31;
                    --v7;
                  }
                  while ( v7 );
                }
                if ( (byte_140081241 & 1) != 0 )
                {
                  v38 = v44[1];
                  if ( !v38 )
                    LODWORD(v38) = (_DWORD)v44;
                  McTemplateK0pxqPR2XR2_EtwWriteTransfer(
                    (_DWORD)v27,
                    (_DWORD)v44,
                    (_DWORD)j,
                    v38,
                    *(_QWORD *)(v6 + 16),
                    v10,
                    v9,
                    (__int64)v27);
                }
              }
              if ( v45 != v46 && v45 )
                ExFreePoolWithTag(v45, 0);
              v45 = 0LL;
              v47 = 0;
              if ( P != v41 )
              {
                if ( P )
                  ExFreePoolWithTag(P, 0);
              }
LABEL_22:
              a2 = v39;
              goto LABEL_23;
            }
            operator delete(v8);
            operator delete(v7);
            _VIDSCH_SYNC_POINT::`scalar deleting destructor'((_VIDSCH_SYNC_POINT *)v6);
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 7183;
            return 3221225495LL;
          }
          *(_QWORD *)(v6 + 72) = ExAllocatePool2(64LL, 24LL * a5, 895576406LL);
        }
        else
        {
          *(_QWORD *)(v6 + 72) = v6 + 80;
          if ( a5 )
            memset((void *)(v6 + 80), 0, 24LL * a5);
        }
        v7 = *(char **)(v6 + 72);
        *(_DWORD *)(v6 + 128) = a5;
        goto LABEL_13;
      }
      *(_QWORD *)(v6 + 24) = ExAllocatePool2(64LL, 16 * v10, 895576406LL);
    }
    else
    {
      *(_QWORD *)(v6 + 24) = v6 + 32;
      if ( (_DWORD)v10 )
        memset((void *)(v6 + 32), 0, 16 * v10);
    }
    v8 = *(_QWORD **)(v6 + 24);
    *(_DWORD *)(v6 + 64) = v10;
    goto LABEL_9;
  }
LABEL_23:
  if ( !a6 )
  {
    v20 = (__int64 *)(a2 + 216);
    v21 = v6 + 136;
LABEL_25:
    v22 = *(__int64 ***)(v21 + 8);
    if ( *v22 != (__int64 *)v21 )
LABEL_26:
      __fastfail(3u);
    *v20 = v21;
    v20[1] = (__int64)v22;
    *v22 = v20;
    *(_QWORD *)(v21 + 8) = v20;
    return 0LL;
  }
  if ( a6 == 3 )
  {
    v20 = (__int64 *)(a2 + 232);
    v21 = v6 + 152;
    goto LABEL_25;
  }
  return 0LL;
}
