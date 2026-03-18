/*
 * XREFs of DxgkHandleIndirectEscape @ 0x140428678
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x14002A7C8 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x14004BC44 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x14004D6BC (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x14004D718 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x14004D960 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline @ 0x14008B8E4 (Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     DxgkSetIndirectDisplayHostProcess @ 0x1401A0A78 (DxgkSetIndirectDisplayHostProcess.c)
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1401AC7A0 (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401AFEDC (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1401BE4F0 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x14024F420 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 *     ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x14039B6A8 (-DpiIndirectEscapeAccessCheck@@YAJXZ.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1403A22E8 (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 *     DpiIndirectDdiIoControl @ 0x140428580 (DpiIndirectDdiIoControl.c)
 */

__int64 __fastcall DxgkHandleIndirectEscape(unsigned int a1, unsigned int *a2)
{
  char v3; // r12
  int v5; // eax
  int *v6; // rbx
  _QWORD *Pool2; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  PVOID v26; // r15
  __int64 v27; // r14
  struct _IO_REMOVE_LOCK **v28; // rcx
  unsigned int v29; // eax
  struct _UNICODE_STRING *p_DestinationString; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int AdapterSessionDiagnostics; // eax
  unsigned int v37; // eax
  __int64 v38; // r14
  unsigned int v39; // eax
  unsigned int v40; // eax
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v42; // [rsp+48h] [rbp-B0h] BYREF
  void *v43; // [rsp+50h] [rbp-A8h] BYREF
  void *v44; // [rsp+58h] [rbp-A0h] BYREF
  struct _IO_REMOVE_LOCK *v45; // [rsp+60h] [rbp-98h] BYREF
  char v46; // [rsp+68h] [rbp-90h]
  struct _IO_REMOVE_LOCK *v47; // [rsp+70h] [rbp-88h] BYREF
  char v48; // [rsp+78h] [rbp-80h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-78h] BYREF
  struct _UNICODE_STRING v50; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v51[16]; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v52[72]; // [rsp+B0h] [rbp-48h] BYREF
  int IndirectDisplayRenderAdapterByHandle; // [rsp+100h] [rbp+8h] BYREF
  _QWORD *v54; // [rsp+110h] [rbp+18h] BYREF
  int *v55; // [rsp+118h] [rbp+20h] BYREF

  IndirectDisplayRenderAdapterByHandle = 0;
  v3 = 0;
  if ( a1 < 0x30 )
  {
    IndirectDisplayRenderAdapterByHandle = -1073741789;
    WdLogSingleEntry1(2LL, -1073741789LL);
    WdLogGlobalForLineNumber = 1267;
    return (unsigned int)IndirectDisplayRenderAdapterByHandle;
  }
  if ( a2[1] != 5 )
  {
    v5 = DpiIndirectEscapeAccessCheck();
    IndirectDisplayRenderAdapterByHandle = v5;
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(2LL, v5);
      WdLogGlobalForLineNumber = 1288;
      return (unsigned int)IndirectDisplayRenderAdapterByHandle;
    }
  }
  a2[10] = 0;
  v6 = 0LL;
  v55 = 0LL;
  Pool2 = 0LL;
  v54 = 0LL;
  v8 = a2[3];
  if ( !v8
    || (v6 = (int *)ExAllocatePool2(257LL, v8, 1953656900LL),
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v55),
        v55 = v6,
        v43 = 0LL,
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v43),
        v6) )
  {
    v9 = a2[6];
    if ( v9 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(257LL, v9, 1953656900LL);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v54);
      v54 = Pool2;
      v44 = 0LL;
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v44);
      if ( !Pool2 )
      {
        IndirectDisplayRenderAdapterByHandle = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1329;
        goto LABEL_13;
      }
    }
    v11 = a2[3];
    if ( (_DWORD)v11 )
    {
      v12 = *((_QWORD *)a2 + 2);
      if ( v12 + v11 > MmUserProbeAddress || v12 + v11 < v12 )
      {
        v6 = v55;
        Pool2 = v54;
      }
      memmove(v6, *((const void **)a2 + 2), a2[3]);
    }
    v13 = a2[6];
    if ( v13 )
      ProbeForWrite(*((volatile void **)a2 + 4), v13, 1u);
    IsEnabledDeviceUsageNoInline = Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline();
    v16 = a2[1];
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
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
                    if ( v22 == 1 )
                    {
                      v23 = a2[6];
                      if ( v23 < 4 )
                      {
                        IndirectDisplayRenderAdapterByHandle = -1073741811;
                        WdLogSingleEntry1(2LL, v23);
                        WdLogGlobalForLineNumber = 1509;
                        goto LABEL_13;
                      }
                      *(_DWORD *)Pool2 = dword_14015F304;
                      a2[10] = 4;
                    }
                    else
                    {
                      IndirectDisplayRenderAdapterByHandle = -1073741637;
                      WdLogSingleEntry1(2LL, -1073741637LL);
                      WdLogGlobalForLineNumber = 1525;
                    }
                  }
                  else
                  {
                    if ( a2[3] < 4 )
                    {
                      IndirectDisplayRenderAdapterByHandle = -1073741811;
                      WdLogSingleEntry1(2LL, a2[6]);
                      WdLogGlobalForLineNumber = 1495;
                      goto LABEL_13;
                    }
                    dword_14015F304 = *v6;
                  }
LABEL_79:
                  if ( IndirectDisplayRenderAdapterByHandle >= 0 || v3 )
                  {
                    v40 = a2[10];
                    if ( a2[6] >= v40 )
                    {
                      if ( v40 )
                        memmove(*((void **)a2 + 4), Pool2, a2[10]);
                    }
                    else
                    {
                      IndirectDisplayRenderAdapterByHandle = -1073741811;
                      WdLogSingleEntry1(2LL, -1073741811LL);
                      WdLogGlobalForLineNumber = 1683;
                    }
                  }
                  goto LABEL_13;
                }
                v24 = a2[6];
                if ( v24 < 0x10 )
                {
                  IndirectDisplayRenderAdapterByHandle = -1073741811;
                  WdLogSingleEntry1(2LL, v24);
                  WdLogGlobalForLineNumber = 1468;
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
            v25 = a2[3];
            if ( v25 < 8 )
            {
              IndirectDisplayRenderAdapterByHandle = -1073741811;
              WdLogSingleEntry1(2LL, v25);
              WdLogGlobalForLineNumber = 1454;
              goto LABEL_13;
            }
            goto LABEL_63;
          }
          goto LABEL_65;
        }
        Object = 0LL;
        IndirectDisplayRenderAdapterByHandle = DxgkGetDeviceObjectFromAdapter(*a2, v15, &Object);
        if ( IndirectDisplayRenderAdapterByHandle < 0 )
          goto LABEL_79;
        v26 = Object;
        v27 = *((_QWORD *)Object + 8);
        if ( *(_BYTE *)(v27 + 1158) )
        {
          v45 = (struct _IO_REMOVE_LOCK *)*((_QWORD *)Object + 8);
          v46 = 0;
          IndirectDisplayRenderAdapterByHandle = AUTO_REMOVE_LOCK::Acquire(&v45);
          if ( IndirectDisplayRenderAdapterByHandle >= 0 )
          {
            AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v51, (struct _COMMON_PNP_CONTEXT *)v27);
            IndirectDisplayRenderAdapterByHandle = DpiIndirectDdiIoControl(
                                                     v27,
                                                     a2[3],
                                                     (__int64)v6,
                                                     a2[6],
                                                     (__int64)Pool2,
                                                     (__int64)(a2 + 10));
            AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v51);
          }
          v28 = &v45;
LABEL_71:
          AUTO_REMOVE_LOCK::Release((PVOID *)v28);
LABEL_73:
          ObfDereferenceObject(v26);
          goto LABEL_79;
        }
        goto LABEL_72;
      }
      v29 = a2[3];
      if ( v29 < 0x258 )
      {
        IndirectDisplayRenderAdapterByHandle = -1073741811;
        WdLogSingleEntry1(2LL, v29);
        WdLogGlobalForLineNumber = 1373;
        goto LABEL_13;
      }
      DestinationString = 0LL;
      *((_WORD *)v6 + 259) = 0;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v6);
      p_DestinationString = &DestinationString;
    }
    else
    {
      if ( v16 )
      {
        v31 = v16 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                if ( v34 != 1 )
                {
                  IndirectDisplayRenderAdapterByHandle = -1073741637;
                  WdLogSingleEntry1(2LL, -1073741637LL);
                  WdLogGlobalForLineNumber = 1665;
                  goto LABEL_79;
                }
                v35 = a2[6];
                if ( v35 < 0x10 )
                {
                  IndirectDisplayRenderAdapterByHandle = -1073741811;
                  WdLogSingleEntry1(2LL, v35);
                  WdLogGlobalForLineNumber = 1637;
                  goto LABEL_13;
                }
                goto LABEL_58;
              }
              goto LABEL_60;
            }
            v37 = a2[3];
            if ( v37 < 8 )
            {
              IndirectDisplayRenderAdapterByHandle = -1073741811;
              WdLogSingleEntry1(2LL, v37);
              WdLogGlobalForLineNumber = 1623;
              goto LABEL_13;
            }
LABEL_63:
            AdapterSessionDiagnostics = DxgkSetIndirectDisplayRenderAdapterByHandle(*a2, (struct _LUID *)v6);
            goto LABEL_64;
          }
LABEL_65:
          DxgkIddHandleSetDisplayConfig(
            *a2,
            a2[3],
            (unsigned int *)v6,
            a2[6],
            Pool2,
            a2 + 10,
            &IndirectDisplayRenderAdapterByHandle);
          v3 = 1;
          goto LABEL_79;
        }
        v42 = 0LL;
        IndirectDisplayRenderAdapterByHandle = DxgkGetDeviceObjectFromAdapter(*a2, v15, &v42);
        if ( IndirectDisplayRenderAdapterByHandle < 0 )
          goto LABEL_79;
        v26 = v42;
        v38 = v42[8];
        if ( *(_BYTE *)(v38 + 1158) )
        {
          v47 = (struct _IO_REMOVE_LOCK *)v42[8];
          v48 = 0;
          IndirectDisplayRenderAdapterByHandle = AUTO_REMOVE_LOCK::Acquire(&v47);
          if ( IndirectDisplayRenderAdapterByHandle >= 0 )
          {
            AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v52, (struct _COMMON_PNP_CONTEXT *)v38);
            IndirectDisplayRenderAdapterByHandle = DpiIndirectDdiIoControl(
                                                     v38,
                                                     a2[3],
                                                     (__int64)v6,
                                                     a2[6],
                                                     (__int64)Pool2,
                                                     (__int64)(a2 + 10));
            AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v52);
          }
          v28 = &v47;
          goto LABEL_71;
        }
LABEL_72:
        IndirectDisplayRenderAdapterByHandle = -1073741275;
        goto LABEL_73;
      }
      v39 = a2[3];
      if ( v39 < 0x258 )
      {
        IndirectDisplayRenderAdapterByHandle = -1073741811;
        WdLogSingleEntry1(2LL, v39);
        WdLogGlobalForLineNumber = 1542;
        goto LABEL_13;
      }
      v50 = 0LL;
      *((_WORD *)v6 + 259) = 0;
      RtlInitUnicodeString(&v50, (PCWSTR)v6);
      p_DestinationString = &v50;
    }
    IndirectDisplayRenderAdapterByHandle = DpiIndirectStartAdapter(p_DestinationString, v6, a2[3]);
    if ( IndirectDisplayRenderAdapterByHandle >= 0 )
      DxgkSetIndirectDisplayHostProcess();
    goto LABEL_79;
  }
  IndirectDisplayRenderAdapterByHandle = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  WdLogGlobalForLineNumber = 1311;
LABEL_13:
  v10 = IndirectDisplayRenderAdapterByHandle;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v54);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v55);
  return v10;
}
