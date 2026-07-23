/*
 * XREFs of PnpCallDriverQueryServiceHelper @ 0x140982CA8
 * Callers:
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 * Callees:
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140982F18 (PipCallDriverAddDeviceQueryRoutine.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCallDriverQueryServiceHelper(
        PVOID *a1,
        ULONG *a2,
        unsigned int a3,
        __int64 a4,
        WCHAR *a5,
        void *a6,
        char a7,
        int a8,
        char a9,
        __int64 a10)
{
  char v10; // r14
  void *v11; // rdi
  WCHAR *v12; // rsi
  ULONG v15; // ecx
  unsigned int v17; // r13d
  const wchar_t *v18; // r8
  int ObjectProperty; // eax
  int v20; // ecx
  int v22; // r10d
  unsigned int v23; // edx
  _WORD *v24; // rdi
  char v25; // si
  int v26; // r14d
  __int64 v27; // rbx
  __int64 v28; // rbx
  int v29; // r8d
  ULONG_PTR v30; // rdx
  const wchar_t *Pool2; // rax
  int InstallerClassRegProp; // eax
  int v33; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v34[3]; // [rsp+64h] [rbp-Ch] BYREF
  ULONG v36; // [rsp+C8h] [rbp+58h] BYREF

  v10 = a7;
  v11 = a6;
  v12 = a5;
  v33 = 0;
  v15 = *a2;
  v36 = *a2;
  v17 = 0;
  v18 = (const wchar_t *)*a1;
  v34[0] = 0;
  if ( a4 )
  {
    v17 = (a7 != 0) + 1;
    ObjectProperty = PnpGetObjectProperty(
                       *(_QWORD **)&PiPnpRtlCtx,
                       a5,
                       v17,
                       a6,
                       0LL,
                       a4,
                       v34,
                       v18,
                       v15,
                       (__int64)&v36,
                       0);
  }
  else if ( a7 )
  {
    ObjectProperty = CmGetInstallerClassRegProp(
                       *(_QWORD **)&PiPnpRtlCtx,
                       a5,
                       (__int64)a6,
                       a3,
                       (__int64)&v33,
                       (__int64)v18,
                       (__int64)&v36);
  }
  else
  {
    ObjectProperty = CmGetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)a5,
                       (__int64)a6,
                       a3,
                       (__int64)&v33,
                       (__int64)v18,
                       (__int64)&v36,
                       0);
  }
  v20 = ObjectProperty;
  if ( ObjectProperty == -1073741789 )
  {
    ExFreePoolWithTag(*a1, 0);
    v30 = v36;
    *a2 = v36;
    Pool2 = (const wchar_t *)ExAllocatePool2(0x100uLL, v30, 0x6E657050u);
    *a1 = (PVOID)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( a4 )
    {
      v20 = PnpGetObjectProperty(*(_QWORD **)&PiPnpRtlCtx, v12, v17, v11, 0LL, a4, v34, Pool2, v36, (__int64)&v36, 0);
    }
    else
    {
      if ( v10 )
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  *(_QWORD **)&PiPnpRtlCtx,
                                  v12,
                                  (__int64)v11,
                                  a3,
                                  (__int64)&v33,
                                  (__int64)Pool2,
                                  (__int64)&v36);
      else
        InstallerClassRegProp = CmGetDeviceRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (__int64)v12,
                                  (__int64)v11,
                                  a3,
                                  (__int64)&v33,
                                  (__int64)Pool2,
                                  (__int64)&v36,
                                  0);
      v20 = InstallerClassRegProp;
    }
  }
  if ( v20 >= 0 )
  {
    if ( a4 )
    {
      if ( v34[0] != 18 )
      {
        if ( v34[0] != 8210 )
        {
          v22 = 0;
          v33 = 0;
          return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v22, (unsigned int)*a1, v36, a10, a8, a9);
        }
        v33 = 7;
LABEL_12:
        if ( *a2 < 2 )
          return (unsigned int)-1073741823;
        v23 = v36;
        if ( v36 < 2 )
        {
          return (unsigned int)-1073741823;
        }
        else
        {
          v24 = *a1;
          v25 = a9;
          v26 = a8;
          while ( *v24 )
          {
            v27 = -1LL;
            do
              ++v27;
            while ( v24[v27] );
            v28 = (unsigned int)(v27 + 1);
            v29 = 2 * v28;
            if ( v23 < 2 * (int)v28 )
              return 0;
            v36 = v23 - v29;
            v20 = PipCallDriverAddDeviceQueryRoutine(1, (_DWORD)v24, v29, a10, v26, v25);
            if ( v20 < 0 )
              return (unsigned int)v20;
            v23 = v36;
            if ( v36 < 2 )
              return (unsigned int)v20;
            v24 += v28;
          }
        }
        return (unsigned int)v20;
      }
      v22 = 1;
      v33 = 1;
    }
    else
    {
      v22 = v33;
    }
    if ( v22 != 7 )
      return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v22, (unsigned int)*a1, v36, a10, a8, a9);
    goto LABEL_12;
  }
  return (unsigned int)v20;
}
