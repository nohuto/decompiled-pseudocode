/*
 * XREFs of DxgkHandleIndirectEscape @ 0x140428970
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x14002A028 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x14004C190 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x14004DD1C (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x14004DD78 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x14004DFC0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline @ 0x14008A9D4 (Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     DxgkSetIndirectDisplayHostProcess @ 0x14019E554 (DxgkSetIndirectDisplayHostProcess.c)
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1401AA310 (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401ADA2C (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1401BBB68 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1402485F0 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 *     ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1403A4BE8 (-DpiIndirectEscapeAccessCheck@@YAJXZ.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1403B1750 (DxgkGetDeviceObjectFromAdapter.c)
 *     DpiIndirectDdiIoControl @ 0x1403C84C8 (DpiIndirectDdiIoControl.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 */

__int64 __fastcall DxgkHandleIndirectEscape(unsigned int a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  int v7; // eax
  int *v8; // rbx
  _QWORD *Pool2; // rdi
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  PVOID v28; // r15
  __int64 v29; // r14
  struct _IO_REMOVE_LOCK **v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // r9
  struct _UNICODE_STRING *p_DestinationString; // rcx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int AdapterSessionDiagnostics; // eax
  unsigned int v40; // eax
  __int64 v41; // r14
  unsigned int v42; // eax
  unsigned int v43; // eax
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v45; // [rsp+48h] [rbp-B0h] BYREF
  void *v46; // [rsp+50h] [rbp-A8h] BYREF
  void *v47; // [rsp+58h] [rbp-A0h] BYREF
  struct _IO_REMOVE_LOCK *v48; // [rsp+60h] [rbp-98h] BYREF
  char v49; // [rsp+68h] [rbp-90h]
  struct _IO_REMOVE_LOCK *v50; // [rsp+70h] [rbp-88h] BYREF
  char v51; // [rsp+78h] [rbp-80h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-78h] BYREF
  struct _UNICODE_STRING v53; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v54[16]; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v55[72]; // [rsp+B0h] [rbp-48h] BYREF
  int IndirectDisplayRenderAdapterByHandle; // [rsp+100h] [rbp+8h] BYREF
  _QWORD *v57; // [rsp+110h] [rbp+18h] BYREF
  int *v58; // [rsp+118h] [rbp+20h] BYREF

  IndirectDisplayRenderAdapterByHandle = 0;
  v5 = 0;
  if ( a1 < 0x30 )
  {
    IndirectDisplayRenderAdapterByHandle = -1073741789;
    WdLogSingleEntry1(2LL, -1073741789LL);
    WdLogGlobalForLineNumber = 1252;
    return (unsigned int)IndirectDisplayRenderAdapterByHandle;
  }
  if ( a2[1] != 5 )
  {
    v7 = DpiIndirectEscapeAccessCheck();
    IndirectDisplayRenderAdapterByHandle = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 1273;
      return (unsigned int)IndirectDisplayRenderAdapterByHandle;
    }
  }
  a2[10] = 0;
  v8 = 0LL;
  v58 = 0LL;
  Pool2 = 0LL;
  v57 = 0LL;
  v10 = a2[3];
  if ( !v10
    || (v8 = (int *)ExAllocatePool2(257LL, v10, 1953656900LL, a4),
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v58),
        v58 = v8,
        v46 = 0LL,
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v46),
        v8) )
  {
    v11 = a2[6];
    if ( v11 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(257LL, v11, 1953656900LL, a4);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v57);
      v57 = Pool2;
      v47 = 0LL;
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v47);
      if ( !Pool2 )
      {
        IndirectDisplayRenderAdapterByHandle = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1314;
        goto LABEL_13;
      }
    }
    v13 = a2[3];
    if ( (_DWORD)v13 )
    {
      v14 = *((_QWORD *)a2 + 2);
      if ( v14 + v13 > MmUserProbeAddress || v14 + v13 < v14 )
      {
        v8 = v58;
        Pool2 = v57;
      }
      memmove(v8, *((const void **)a2 + 2), a2[3]);
    }
    v15 = a2[6];
    if ( v15 )
      ProbeForWrite(*((volatile void **)a2 + 4), v15, 1u);
    IsEnabledDeviceUsageNoInline = Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline();
    v18 = a2[1];
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  v24 = v23 - 1;
                  if ( v24 )
                  {
                    if ( v24 == 1 )
                    {
                      v25 = a2[6];
                      if ( v25 < 4 )
                      {
                        IndirectDisplayRenderAdapterByHandle = -1073741811;
                        WdLogSingleEntry1(2LL, v25);
                        WdLogGlobalForLineNumber = 1494;
                        goto LABEL_13;
                      }
                      *(_DWORD *)Pool2 = dword_14015C304;
                      a2[10] = 4;
                    }
                    else
                    {
                      IndirectDisplayRenderAdapterByHandle = -1073741637;
                      WdLogSingleEntry1(2LL, -1073741637LL);
                      WdLogGlobalForLineNumber = 1510;
                    }
                  }
                  else
                  {
                    if ( a2[3] < 4 )
                    {
                      IndirectDisplayRenderAdapterByHandle = -1073741811;
                      WdLogSingleEntry1(2LL, a2[6]);
                      WdLogGlobalForLineNumber = 1480;
                      goto LABEL_13;
                    }
                    dword_14015C304 = *v8;
                  }
LABEL_79:
                  if ( IndirectDisplayRenderAdapterByHandle >= 0 || v5 )
                  {
                    v43 = a2[10];
                    if ( a2[6] >= v43 )
                    {
                      if ( v43 )
                        memmove(*((void **)a2 + 4), Pool2, a2[10]);
                    }
                    else
                    {
                      IndirectDisplayRenderAdapterByHandle = -1073741811;
                      WdLogSingleEntry1(2LL, -1073741811LL);
                      WdLogGlobalForLineNumber = 1668;
                    }
                  }
                  goto LABEL_13;
                }
                v26 = a2[6];
                if ( v26 < 0x10 )
                {
                  IndirectDisplayRenderAdapterByHandle = -1073741811;
                  WdLogSingleEntry1(2LL, v26);
                  WdLogGlobalForLineNumber = 1453;
                  goto LABEL_13;
                }
LABEL_58:
                IndirectDisplayRenderAdapterByHandle = DxgkGetIndirectDisplayRenderAdapterByHandle(
                                                         *a2,
                                                         Pool2,
                                                         Pool2 + 1);
                if ( IndirectDisplayRenderAdapterByHandle >= 0 )
                  a2[10] = 16;
                goto LABEL_79;
              }
LABEL_60:
              AdapterSessionDiagnostics = DxgkIddGetAdapterSessionDiagnostics(
                                            *a2,
                                            a2[6],
                                            (unsigned __int8 *)Pool2,
                                            a2 + 10);
LABEL_64:
              IndirectDisplayRenderAdapterByHandle = AdapterSessionDiagnostics;
              goto LABEL_79;
            }
            v27 = a2[3];
            if ( v27 < 8 )
            {
              IndirectDisplayRenderAdapterByHandle = -1073741811;
              WdLogSingleEntry1(2LL, v27);
              WdLogGlobalForLineNumber = 1439;
              goto LABEL_13;
            }
            goto LABEL_63;
          }
          goto LABEL_65;
        }
        Object = 0LL;
        IndirectDisplayRenderAdapterByHandle = DxgkGetDeviceObjectFromAdapter(*a2, v17, &Object);
        if ( IndirectDisplayRenderAdapterByHandle < 0 )
          goto LABEL_79;
        v28 = Object;
        v29 = *((_QWORD *)Object + 8);
        if ( *(_BYTE *)(v29 + 1158) )
        {
          v48 = (struct _IO_REMOVE_LOCK *)*((_QWORD *)Object + 8);
          v49 = 0;
          IndirectDisplayRenderAdapterByHandle = AUTO_REMOVE_LOCK::Acquire(&v48);
          if ( IndirectDisplayRenderAdapterByHandle >= 0 )
          {
            AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v54, (struct _COMMON_PNP_CONTEXT *)v29);
            IndirectDisplayRenderAdapterByHandle = DpiIndirectDdiIoControl(v29);
            AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v54);
          }
          v30 = &v48;
LABEL_71:
          AUTO_REMOVE_LOCK::Release((PVOID *)v30);
LABEL_73:
          ObfDereferenceObject(v28);
          goto LABEL_79;
        }
        goto LABEL_72;
      }
      v31 = a2[3];
      if ( v31 < 0x258 )
      {
        IndirectDisplayRenderAdapterByHandle = -1073741811;
        WdLogSingleEntry1(2LL, v31);
        WdLogGlobalForLineNumber = 1358;
        goto LABEL_13;
      }
      DestinationString = 0LL;
      *((_WORD *)v8 + 259) = 0;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v8);
      p_DestinationString = &DestinationString;
    }
    else
    {
      if ( v18 )
      {
        v34 = v18 - 1;
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
                {
                  IndirectDisplayRenderAdapterByHandle = -1073741637;
                  WdLogSingleEntry1(2LL, -1073741637LL);
                  WdLogGlobalForLineNumber = 1650;
                  goto LABEL_79;
                }
                v38 = a2[6];
                if ( v38 < 0x10 )
                {
                  IndirectDisplayRenderAdapterByHandle = -1073741811;
                  WdLogSingleEntry1(2LL, v38);
                  WdLogGlobalForLineNumber = 1622;
                  goto LABEL_13;
                }
                goto LABEL_58;
              }
              goto LABEL_60;
            }
            v40 = a2[3];
            if ( v40 < 8 )
            {
              IndirectDisplayRenderAdapterByHandle = -1073741811;
              WdLogSingleEntry1(2LL, v40);
              WdLogGlobalForLineNumber = 1608;
              goto LABEL_13;
            }
LABEL_63:
            AdapterSessionDiagnostics = DxgkSetIndirectDisplayRenderAdapterByHandle(*a2, (struct _LUID *)v8);
            goto LABEL_64;
          }
LABEL_65:
          DxgkIddHandleSetDisplayConfig(
            *a2,
            a2[3],
            (unsigned int *)v8,
            a2[6],
            Pool2,
            a2 + 10,
            &IndirectDisplayRenderAdapterByHandle);
          v5 = 1;
          goto LABEL_79;
        }
        v45 = 0LL;
        IndirectDisplayRenderAdapterByHandle = DxgkGetDeviceObjectFromAdapter(*a2, v17, &v45);
        if ( IndirectDisplayRenderAdapterByHandle < 0 )
          goto LABEL_79;
        v28 = v45;
        v41 = v45[8];
        if ( *(_BYTE *)(v41 + 1158) )
        {
          v50 = (struct _IO_REMOVE_LOCK *)v45[8];
          v51 = 0;
          IndirectDisplayRenderAdapterByHandle = AUTO_REMOVE_LOCK::Acquire(&v50);
          if ( IndirectDisplayRenderAdapterByHandle >= 0 )
          {
            AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v55, (struct _COMMON_PNP_CONTEXT *)v41);
            IndirectDisplayRenderAdapterByHandle = DpiIndirectDdiIoControl(v41);
            AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v55);
          }
          v30 = &v50;
          goto LABEL_71;
        }
LABEL_72:
        IndirectDisplayRenderAdapterByHandle = -1073741275;
        goto LABEL_73;
      }
      v42 = a2[3];
      if ( v42 < 0x258 )
      {
        IndirectDisplayRenderAdapterByHandle = -1073741811;
        WdLogSingleEntry1(2LL, v42);
        WdLogGlobalForLineNumber = 1527;
        goto LABEL_13;
      }
      v53 = 0LL;
      *((_WORD *)v8 + 259) = 0;
      RtlInitUnicodeString(&v53, (PCWSTR)v8);
      p_DestinationString = &v53;
    }
    IndirectDisplayRenderAdapterByHandle = DpiIndirectStartAdapter(p_DestinationString, v8, a2[3], v32);
    if ( IndirectDisplayRenderAdapterByHandle >= 0 )
      DxgkSetIndirectDisplayHostProcess();
    goto LABEL_79;
  }
  IndirectDisplayRenderAdapterByHandle = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  WdLogGlobalForLineNumber = 1296;
LABEL_13:
  v12 = IndirectDisplayRenderAdapterByHandle;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v57);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v58);
  return v12;
}
