/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x1403FAB40 (NLS_UPCASE.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408C7D90 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140A81E48 (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8835C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        _QWORD *a1,
        const WCHAR *a2,
        unsigned int a3,
        int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  const WCHAR *v11; // rbx
  wchar_t *Pool2; // r13
  unsigned int v13; // r14d
  void *v14; // rdi
  unsigned __int64 v15; // rdi
  int DeviceInterfaceRegKeyPath; // eax
  int inited; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v19; // r11d
  wchar_t *Buffer; // r10
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v22; // r8d
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  const WCHAR *v25; // rdi
  struct _LIST_ENTRY *v26; // rax
  wchar_t *v27; // r10
  __int64 v28; // rax
  unsigned __int16 v29; // r11
  signed __int64 v30; // r11
  unsigned __int16 v31; // bx
  unsigned __int16 v32; // dx
  _QWORD *v33; // rdx
  HANDLE v34; // r10
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r15d
  int v38; // eax
  unsigned __int16 v40; // ax
  __int16 v41; // r9
  __int64 v42; // rcx
  int v43; // r14d
  HANDLE v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // [rsp+20h] [rbp-60h]
  void *v47; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v48; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v49; // [rsp+50h] [rbp-30h] BYREF
  __int64 v50; // [rsp+58h] [rbp-28h]
  HANDLE v51; // [rsp+60h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v55; // [rsp+D0h] [rbp+50h] BYREF

  v55 = 0;
  v51 = 0LL;
  v11 = a2;
  v49 = 0LL;
  Pool2 = 0LL;
  v48 = 0LL;
  v13 = 4;
  Handle = 0LL;
  v14 = 0LL;
  v47 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
  {
LABEL_23:
    inited = -1073741811;
    goto LABEL_39;
  }
  LODWORD(v15) = (a3 & 0x200) != 0 ? 600 : 480;
  while ( 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v15, 0x52504E50u);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_38;
    }
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                  (unsigned int)v15 >> 1,
                                  v11,
                                  a3,
                                  a4,
                                  v46,
                                  Pool2,
                                  (unsigned int)v15 >> 1,
                                  (size_t)&v55);
    inited = DeviceInterfaceRegKeyPath;
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v15 = 2LL * v55;
    if ( v15 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_38;
    }
    v11 = a2;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_38;
  if ( (a3 & 0x100) != 0 )
  {
    v25 = Pool2;
    if ( a1 )
      v42 = a1[28];
    else
      v42 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v42, 0LL, 0x2000000LL, &v49);
    if ( inited >= 0 )
    {
      v34 = v49;
      goto LABEL_33;
    }
    goto LABEL_38;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( inited >= 0 )
  {
    if ( DestinationString.Length >= (unsigned int)v15
      || DestinationString.Length <= 0x32u
      || (CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(),
          Buffer = `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer,
          Flink = CurrentServerSiloGlobals[75].Flink,
          v19 < v22) )
    {
LABEL_22:
      v14 = v47;
      goto LABEL_23;
    }
    while ( Buffer < `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer + 25 )
    {
      v23 = *Buffer;
      v24 = *(wchar_t *)((char *)Buffer
                       + (char *)DestinationString.Buffer
                       - (char *)`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer);
      if ( (_WORD)v23 != (_WORD)v24 )
      {
        if ( (unsigned int)v23 >= 0x61 )
        {
          if ( (unsigned int)v23 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v23 >= 0xC0u )
              LOWORD(v23) = *((_WORD *)&Flink->Flink
                            + (v23 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v23 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v23 >> 8))))
                          + v23;
          }
          else
          {
            LOWORD(v23) = v23 - 32;
          }
        }
        if ( (unsigned int)v24 >= 0x61 )
        {
          if ( (unsigned int)v24 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v24 >= 0xC0u )
              LOWORD(v24) = *((_WORD *)&Flink->Flink
                            + (v24 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v24 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v24 >> 8))))
                          + v24;
          }
          else
          {
            LOWORD(v24) = v24 - 32;
          }
        }
        if ( (_WORD)v23 != (_WORD)v24 )
          goto LABEL_22;
      }
      ++Buffer;
    }
    v25 = Pool2 + 25;
    DestinationString.MaximumLength -= 50;
    DestinationString.Length = v19 - 50;
    DestinationString.Buffer = Pool2 + 25;
    v26 = PsGetCurrentServerSiloGlobals();
    v27 = `_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer;
    v28 = (__int64)v26[75].Flink;
    v50 = v28;
    if ( v29 < 0x2Cu )
    {
LABEL_85:
      if ( RtlPrefixUnicodeString(
             &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
             &DestinationString,
             1u) )
      {
        v13 = 14;
        v25 = Pool2 + 43;
      }
    }
    else
    {
      v30 = (char *)v25 - (char *)`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer;
      while ( v27 < `_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer + 22 )
      {
        v31 = *v27;
        v32 = *(wchar_t *)((char *)v27 + v30);
        if ( *v27 != v32 )
        {
          NLS_UPCASE(v28, v32);
          v40 = NLS_UPCASE(v50, v31);
          if ( v40 != v41 )
            goto LABEL_85;
          v28 = v50;
        }
        ++v27;
      }
      v13 = 9;
      v25 = Pool2 + 47;
    }
    v33 = (_QWORD *)a1[v13 + 12];
    if ( !v33 )
    {
      if ( v13 <= 0xA && v13 != 9 || (v45 = (_QWORD *)a1[7], v45 == a1 + 7) )
        v33 = (_QWORD *)a1[11];
      else
        v33 = v45 - 2;
      a1[v13 + 12] = v33;
    }
    inited = PnpCtxGetCachedNodeBaseKey((__int64)a1, v33, v13, &v51);
    if ( inited >= 0 )
    {
      v34 = v51;
LABEL_33:
      v51 = v34;
      if ( a1 && (v35 = a1[28]) != 0 )
        v36 = *(_QWORD *)(v35 + 8);
      else
        v36 = 0LL;
      v37 = a5;
      v38 = RegRtlOpenKeyTransacted((__int64)v34, v25, 0, a5, a7, v36);
      if ( !v38 )
      {
        *a8 = 2;
        goto LABEL_38;
      }
      if ( v38 != -1073741444 )
      {
        if ( v38 != -1073741772 )
          goto LABEL_84;
        if ( !a6 )
        {
          if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
            inited = -1073741772;
          else
            inited = -1073741127;
          goto LABEL_38;
        }
        if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
        {
          inited = CmOpenDeviceInterfaceRegKey((_DWORD)a1, (_DWORD)a2, 48, 0, 1, 0, (__int64)&Handle, 0LL);
          if ( inited < 0 )
            goto LABEL_38;
        }
        inited = CmGetDeviceInterfaceRegKeySecurityDescriptor(a1, a3, &v47);
        if ( inited < 0 )
          goto LABEL_38;
        v43 = v37;
        if ( v47 )
          v43 = 917510;
        v38 = PnpCtxRegCreateTree(a1, v51, v25, 0LL, v43, v47, &v48, a8);
        if ( v38 != -1073741444 )
        {
          if ( v38 >= 0 )
          {
            if ( v43 == v37 )
            {
              v44 = v48;
              v48 = 0LL;
              *a7 = v44;
              goto LABEL_38;
            }
            v38 = PnpCtxRegOpenKey((__int64)a1, (__int64)v48, 0LL, 0, v37, (__int64)a7);
            if ( v38 == -1073741444 )
            {
              inited = -1073741772;
              goto LABEL_38;
            }
            if ( v38 >= 0 )
              goto LABEL_38;
          }
LABEL_84:
          inited = v38;
          goto LABEL_38;
        }
      }
      inited = -1073741595;
    }
  }
LABEL_38:
  v14 = v47;
LABEL_39:
  if ( Handle )
    ZwClose(Handle);
  if ( v49 )
    ZwClose(v49);
  if ( v48 )
    ZwClose(v48);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
