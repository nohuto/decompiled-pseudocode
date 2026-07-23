/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x1408C679C
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x1403FAB40 (NLS_UPCASE.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1408C7A40 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8835C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned int i; // edi
  wchar_t *Pool2; // r13
  int CommonClassRegKeyPath; // eax
  int CachedContextBaseKey; // ebx
  unsigned int Length; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  wchar_t *Buffer; // r10
  struct _LIST_ENTRY *Flink; // r11
  unsigned int v21; // r8d
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  const WCHAR *v25; // rdi
  unsigned __int16 v26; // bx
  struct _LIST_ENTRY *v27; // rax
  unsigned __int16 v28; // dx
  wchar_t *v29; // r10
  struct _LIST_ENTRY *v30; // r11
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r9
  struct _LIST_ENTRY *v33; // rax
  wchar_t *v34; // r10
  __int64 v35; // r15
  signed __int64 v36; // r11
  unsigned __int16 v37; // bx
  unsigned __int16 v38; // dx
  unsigned __int16 v39; // ax
  __int16 v40; // r9
  _QWORD *v41; // rdx
  HANDLE v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  int Tree; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  HANDLE v48; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  v48 = 0LL;
  Handle = 0LL;
  v10 = a2;
  v11 = 4;
  DestinationString = 0LL;
  for ( i = (a3 & 0x200) != 0 ? 320 : 200; ; i = 0 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, i, 0x52504E50u);
    if ( !Pool2 )
    {
      CachedContextBaseKey = -1073741801;
      goto LABEL_21;
    }
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(i >> 1, v10, a3, a4);
    CachedContextBaseKey = CommonClassRegKeyPath;
    if ( CommonClassRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    v10 = a2;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_21;
  if ( (a3 & 0x100) != 0 )
  {
    v25 = Pool2;
    if ( a1 )
      v46 = *(_QWORD *)(a1 + 224);
    else
      v46 = 0LL;
    CachedContextBaseKey = SysCtxRegOpenCurrentUserKey(v46, 0LL, 0x2000000LL, &Handle);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_21;
    v42 = Handle;
    v48 = Handle;
LABEL_50:
    if ( a6 )
    {
      Tree = PnpCtxRegCreateTree(a1, v42, v25, 0LL, a5, 0LL, a7, a8);
    }
    else
    {
      if ( a1 && (v43 = *(_QWORD *)(a1 + 224)) != 0 )
        v44 = *(_QWORD *)(v43 + 8);
      else
        v44 = 0LL;
      Tree = RegRtlOpenKeyTransacted((__int64)v42, v25, 0, a5, a7, v44);
      if ( Tree >= 0 )
        goto LABEL_55;
      if ( Tree == -1073741772 )
      {
        if ( v11 != 8 || !*(_BYTE *)(a1 + 4) )
          goto LABEL_79;
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &v48);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_21;
        Tree = PnpCtxRegOpenKey(a1, (__int64)v48, (__int64)v25, 0, a5, (__int64)a7);
        if ( Tree >= 0 )
        {
LABEL_55:
          *a8 = 2;
          goto LABEL_21;
        }
      }
    }
    if ( Tree == -1073741444 )
    {
      CachedContextBaseKey = -1073741595;
      goto LABEL_21;
    }
    if ( Tree >= 0 )
      goto LABEL_21;
LABEL_79:
    CachedContextBaseKey = Tree;
    goto LABEL_21;
  }
  CachedContextBaseKey = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_21;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= i
    || DestinationString.Length <= 0x32u
    || (CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(),
        Buffer = `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer,
        Flink = CurrentServerSiloGlobals[75].Flink,
        Length < v21) )
  {
LABEL_20:
    CachedContextBaseKey = -1073741811;
    goto LABEL_21;
  }
  while ( Buffer < `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer + 25 )
  {
    v22 = *Buffer;
    v23 = *(wchar_t *)((char *)Buffer
                     + (char *)DestinationString.Buffer
                     - (char *)`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer);
    if ( (_WORD)v22 != (_WORD)v23 )
    {
      if ( (unsigned int)v22 >= 0x61 )
      {
        if ( (unsigned int)v22 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v22 >= 0xC0u )
            LOWORD(v22) = *((_WORD *)&Flink->Flink
                          + (v22 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v22 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v22 >> 8))))
                        + v22;
        }
        else
        {
          LOWORD(v22) = v22 - 32;
        }
      }
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
      if ( (_WORD)v22 != (_WORD)v23 )
        goto LABEL_20;
    }
    ++Buffer;
  }
  v25 = Pool2 + 25;
  DestinationString.MaximumLength -= 50;
  v26 = Length - 50;
  DestinationString.Length = v26;
  DestinationString.Buffer = Pool2 + 25;
  v27 = PsGetCurrentServerSiloGlobals();
  v29 = `_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix.Buffer;
  v30 = v27[75].Flink;
  if ( v26 < 0x1Cu )
  {
LABEL_37:
    v33 = PsGetCurrentServerSiloGlobals();
    v34 = `_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer;
    v35 = (__int64)v33[75].Flink;
    if ( v26 < 0x2Cu )
    {
LABEL_43:
      if ( RtlPrefixUnicodeString(
             &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
             &DestinationString,
             1u) )
      {
        v11 = 14;
        v25 = Pool2 + 43;
      }
    }
    else
    {
      v36 = (char *)v25 - (char *)`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer;
      while ( v34 < `_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer + 22 )
      {
        v37 = *v34;
        v38 = *(wchar_t *)((char *)v34 + v36);
        if ( *v34 != v38 )
        {
          NLS_UPCASE(v35, v38);
          v39 = NLS_UPCASE(v35, v37);
          if ( v39 != v40 )
            goto LABEL_43;
        }
        ++v34;
      }
      v11 = 8;
      v25 = Pool2 + 47;
    }
  }
  else
  {
    while ( v29 < `_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix.Buffer + 14 )
    {
      v31 = *v29;
      v32 = *(unsigned __int16 *)((char *)v29
                                + (char *)v25
                                - (char *)`_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix.Buffer);
      if ( (_WORD)v31 != (_WORD)v32 )
      {
        if ( (unsigned int)v31 >= 0x61 )
        {
          if ( (unsigned int)v31 > 0x7A )
          {
            if ( v30 && (unsigned __int16)v31 >= v28 )
            {
              v28 = 192;
              LOWORD(v31) = *((_WORD *)&v30->Flink
                            + (v31 & 0xF)
                            + *((unsigned __int16 *)&v30->Flink
                              + ((unsigned __int8)v31 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v30->Flink + (v31 >> 8))))
                          + v31;
            }
          }
          else
          {
            LOWORD(v31) = v31 - 32;
          }
        }
        if ( (unsigned int)v32 >= 0x61 )
        {
          if ( (unsigned int)v32 > 0x7A )
          {
            if ( v30 && (unsigned __int16)v32 >= v28 )
              LOWORD(v32) = *((_WORD *)&v30->Flink
                            + (v32 & 0xF)
                            + *((unsigned __int16 *)&v30->Flink
                              + ((unsigned __int8)v32 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v30->Flink + (v32 >> 8))))
                          + v32;
          }
          else
          {
            LOWORD(v32) = v32 - 32;
          }
        }
        if ( (_WORD)v31 != (_WORD)v32 )
          goto LABEL_37;
        v28 = 192;
      }
      ++v29;
    }
    v11 = 7;
    v25 = Pool2 + 39;
  }
  v41 = *(_QWORD **)(a1 + 8LL * v11 + 96);
  if ( !v41 )
  {
    if ( v11 <= 0xA || (v47 = *(_QWORD *)(a1 + 56), v47 == a1 + 56) )
      v41 = *(_QWORD **)(a1 + 88);
    else
      v41 = (_QWORD *)(v47 - 16);
    *(_QWORD *)(a1 + 8LL * v11 + 96) = v41;
  }
  CachedContextBaseKey = PnpCtxGetCachedNodeBaseKey(a1, v41, v11, &v48);
  if ( CachedContextBaseKey >= 0 )
  {
    v42 = v48;
    goto LABEL_50;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)CachedContextBaseKey;
}
