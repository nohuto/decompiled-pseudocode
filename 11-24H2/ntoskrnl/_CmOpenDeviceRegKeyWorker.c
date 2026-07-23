/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x1408C4460
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1408E0D10 (_CmGetDeviceSoftwareKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140A66970 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8835C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  unsigned int v10; // edi
  unsigned __int64 v11; // rbx
  int v12; // esi
  int inited; // r15d
  wchar_t *Pool2; // r13
  int v15; // r8d
  unsigned int v16; // r10d
  int v17; // r9d
  __int64 v18; // rdx
  _WORD *v19; // rcx
  __int16 *v20; // rdx
  __int16 v21; // ax
  __int64 v22; // r8
  wchar_t *v23; // r14
  _QWORD *v24; // rdx
  HANDLE v25; // rbx
  unsigned int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  int v31; // edi
  int v32; // esi
  int v33; // eax
  const wchar_t *v34; // rax
  NTSTATUS DeviceSoftwareKeyPath; // eax
  unsigned __int16 Length; // di
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  wchar_t *Buffer; // r8
  struct _LIST_ENTRY *Flink; // rsi
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r10
  unsigned __int16 v42; // di
  struct _LIST_ENTRY *v43; // rax
  wchar_t *v44; // r8
  struct _LIST_ENTRY *v45; // rsi
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r10
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  _QWORD *v65; // rdx
  size_t cchDest; // [rsp+38h] [rbp-59h]
  __int64 v67; // [rsp+40h] [rbp-51h]
  __int64 v68; // [rsp+58h] [rbp-39h] BYREF
  HANDLE v69; // [rsp+60h] [rbp-31h] BYREF
  HANDLE v70; // [rsp+68h] [rbp-29h] BYREF
  PVOID P; // [rsp+70h] [rbp-21h] BYREF
  void *v72; // [rsp+78h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF

  LODWORD(v68) = 0;
  v72 = 0LL;
  v10 = 0;
  v70 = 0LL;
  v69 = 0LL;
  Handle = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  LODWORD(v11) = 360;
  v12 = a3 & 0x200;
  if ( (a3 & 0x200) == 0 )
    LODWORD(v11) = 240;
  inited = -1073741675;
  while ( 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v11, 0x52504E50u);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_32;
    }
    v15 = 0;
    v16 = (unsigned int)v11 >> 1;
    v17 = 1;
    if ( !a2 )
      goto LABEL_85;
    v18 = 200LL;
    v19 = (_WORD *)a2;
    while ( *v19 )
    {
      ++v19;
      if ( !--v18 )
        goto LABEL_22;
    }
    v20 = (__int16 *)a2;
    while ( 1 )
    {
      v21 = *v20;
      if ( !*v20 )
        break;
      if ( (unsigned __int16)(v21 - 33) > 0x5Eu || v21 == 44 )
        goto LABEL_22;
      if ( v21 == 92 )
      {
        if ( !v15 )
          goto LABEL_22;
        v15 = 0;
        ++v17;
        ++v20;
      }
      else
      {
        ++v15;
        ++v20;
      }
    }
    if ( !v15 || v17 != 3 )
    {
LABEL_22:
      inited = -1073741773;
      goto LABEL_32;
    }
    if ( (unsigned __int8)a3 != 16 )
    {
      if ( (unsigned __int8)a3 == 18 )
      {
        LODWORD(cchDest) = (unsigned int)v11 >> 1;
        DeviceSoftwareKeyPath = CmGetDeviceSoftwareKeyPath((int)a1, a2, a3, a4, a6, Pool2, cchDest, (__int64)&v68);
        v10 = v68;
        goto LABEL_68;
      }
      if ( (unsigned __int8)a3 != 17 )
      {
        if ( (unsigned __int8)a3 == 19 )
        {
          if ( (a3 & 0xFFFFFFEC) != 0 )
            goto LABEL_150;
          v53 = -1LL;
          do
            ++v53;
          while ( *(_WORD *)(a2 + 2 * v53) );
          v54 = v53 + 39;
          if ( v54 > 0xFFFFFFFF )
            goto LABEL_123;
          LODWORD(v68) = v54;
          v10 = v54;
          if ( (unsigned int)v54 <= v16 )
          {
            v34 = L"Control";
            goto LABEL_67;
          }
        }
        else
        {
          if ( (unsigned __int8)a3 != 20 || (a3 & 0xFFFFFFEB) != 0 )
          {
LABEL_150:
            DeviceSoftwareKeyPath = -1073741811;
            goto LABEL_68;
          }
          v51 = -1LL;
          do
            ++v51;
          while ( *(_WORD *)(a2 + 2 * v51) );
          v52 = v51 + 39;
          if ( v52 > 0xFFFFFFFF )
            goto LABEL_123;
          LODWORD(v68) = v52;
          v10 = v52;
          if ( (unsigned int)v52 <= v16 )
          {
            v34 = L"LogConf";
LABEL_67:
            DeviceSoftwareKeyPath = RtlStringCchPrintfExW(
                                      Pool2,
                                      v16,
                                      0LL,
                                      0LL,
                                      0x800u,
                                      L"%s\\%s\\%s",
                                      L"System\\CurrentControlSet\\Enum",
                                      a2,
                                      v34);
            goto LABEL_68;
          }
        }
        goto LABEL_153;
      }
      if ( !v12 )
      {
        v55 = -1LL;
        do
          ++v55;
        while ( *(_WORD *)(a2 + 2 * v55) );
        if ( (a3 & 0x100) != 0 )
        {
          v57 = v55 + 31;
          if ( v57 > 0xFFFFFFFF )
            goto LABEL_123;
          LODWORD(v68) = v57;
          v10 = v57;
          if ( (unsigned int)v57 <= v16 )
            goto LABEL_125;
        }
        else
        {
          v56 = v55 + 49;
          if ( v56 > 0xFFFFFFFF )
            goto LABEL_123;
          LODWORD(v68) = v56;
          v10 = v56;
          if ( (unsigned int)v56 <= v16 )
          {
            v34 = L"Device Parameters";
            goto LABEL_67;
          }
        }
LABEL_153:
        DeviceSoftwareKeyPath = -1073741789;
        goto LABEL_68;
      }
      if ( a4 )
      {
        if ( a4 == -1 )
          goto LABEL_150;
        v63 = -1LL;
        do
          ++v63;
        while ( *(_WORD *)(a2 + 2 * v63) );
        v64 = v63 + 79;
        if ( v64 > 0xFFFFFFFF )
        {
LABEL_123:
          DeviceSoftwareKeyPath = -1073741675;
          goto LABEL_68;
        }
        LODWORD(v68) = v64;
        v10 = v64;
        if ( (unsigned int)v64 > v16 )
          goto LABEL_153;
LABEL_165:
        LODWORD(v67) = a4;
        DeviceSoftwareKeyPath = RtlStringCchPrintfExW(
                                  Pool2,
                                  v16,
                                  0LL,
                                  0LL,
                                  0x800u,
                                  L"%s\\%04u\\%s\\%s",
                                  L"System\\CurrentControlSet\\Hardware Profiles",
                                  v67,
                                  L"System\\CurrentControlSet\\Enum",
                                  a2);
        goto LABEL_68;
      }
      v58 = -1LL;
      do
        ++v58;
      while ( *(_WORD *)(a2 + 2 * v58) );
      goto LABEL_157;
    }
    if ( !v12 )
    {
      v49 = -1LL;
      do
        ++v49;
      while ( *(_WORD *)(a2 + 2 * v49) );
      v50 = v49 + 31;
      if ( v50 > 0xFFFFFFFF )
        goto LABEL_123;
      LODWORD(v68) = v50;
      v10 = v50;
      if ( (unsigned int)v50 <= v16 )
      {
LABEL_125:
        DeviceSoftwareKeyPath = RtlStringCchPrintfExW(
                                  Pool2,
                                  v16,
                                  0LL,
                                  0LL,
                                  0x800u,
                                  L"%s\\%s",
                                  L"System\\CurrentControlSet\\Enum",
                                  a2);
        goto LABEL_68;
      }
      DeviceSoftwareKeyPath = -1073741789;
      goto LABEL_68;
    }
    if ( !a4 )
    {
      v58 = -1LL;
      do
        ++v58;
      while ( *(_WORD *)(a2 + 2 * v58) );
LABEL_157:
      v59 = v58 + 82;
      if ( v59 > 0xFFFFFFFF )
        goto LABEL_123;
      LODWORD(v68) = v59;
      v10 = v59;
      if ( (unsigned int)v59 > v16 )
        goto LABEL_153;
      DeviceSoftwareKeyPath = RtlStringCchPrintfExW(
                                Pool2,
                                v16,
                                0LL,
                                0LL,
                                0x800u,
                                L"%s\\%s\\%s",
                                L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                                L"System\\CurrentControlSet\\Enum",
                                a2);
      goto LABEL_68;
    }
    if ( a4 == -1 )
      goto LABEL_150;
    v60 = -1LL;
    do
      ++v60;
    while ( *(_WORD *)(a2 + 2 * v60) );
    v61 = v60 + 79;
    if ( v61 > 0xFFFFFFFF )
      goto LABEL_123;
    LODWORD(v68) = v61;
    v10 = v61;
    if ( (unsigned int)v61 <= v16 )
      goto LABEL_165;
    DeviceSoftwareKeyPath = -1073741789;
LABEL_68:
    if ( DeviceSoftwareKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v11 = 2LL * v10;
    if ( v11 > 0xFFFFFFFF )
      goto LABEL_32;
  }
  inited = DeviceSoftwareKeyPath;
  if ( DeviceSoftwareKeyPath >= 0 )
  {
    v26 = a3;
    if ( (a3 & 0x100) != 0 )
    {
      v23 = Pool2;
      if ( a1 )
        v48 = a1[28];
      else
        v48 = 0LL;
      inited = SysCtxRegOpenCurrentUserKey(v48, 0LL, 0x2000000LL, &v70);
      if ( inited >= 0 )
      {
        v25 = v70;
        goto LABEL_27;
      }
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
      if ( inited >= 0 )
      {
        Length = DestinationString.Length;
        if ( DestinationString.Length >= (unsigned int)v11 || DestinationString.Length <= 0x32u )
        {
LABEL_85:
          inited = -1073741811;
        }
        else
        {
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          Buffer = `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer;
          Flink = CurrentServerSiloGlobals[75].Flink;
          while ( Buffer < `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer + 25 )
          {
            v40 = *Buffer;
            v41 = *(wchar_t *)((char *)Buffer
                             + (char *)DestinationString.Buffer
                             - (char *)`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer);
            if ( (_WORD)v40 != (_WORD)v41 )
            {
              if ( (unsigned int)v40 >= 0x61 )
              {
                if ( (unsigned int)v40 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v40 >= 0xC0u )
                    LOWORD(v40) = *((_WORD *)&Flink->Flink
                                  + (v40 & 0xF)
                                  + *((unsigned __int16 *)&Flink->Flink
                                    + ((unsigned __int8)v40 >> 4)
                                    + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v40 >> 8))))
                                + v40;
                }
                else
                {
                  LOWORD(v40) = v40 - 32;
                }
              }
              if ( (unsigned int)v41 >= 0x61 )
              {
                if ( (unsigned int)v41 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v41 >= 0xC0u )
                    LOWORD(v41) = *((_WORD *)&Flink->Flink
                                  + (v41 & 0xF)
                                  + *((unsigned __int16 *)&Flink->Flink
                                    + ((unsigned __int8)v41 >> 4)
                                    + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v41 >> 8))))
                                + v41;
                }
                else
                {
                  LOWORD(v41) = v41 - 32;
                }
              }
              if ( (_WORD)v40 != (_WORD)v41 )
                goto LABEL_85;
            }
            ++Buffer;
          }
          v23 = Pool2 + 25;
          DestinationString.MaximumLength -= 50;
          v42 = Length - 50;
          DestinationString.Length = v42;
          DestinationString.Buffer = Pool2 + 25;
          v43 = PsGetCurrentServerSiloGlobals();
          v44 = `_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix.Buffer;
          v45 = v43[75].Flink;
          if ( v42 < 0xAu )
          {
LABEL_97:
            if ( RtlPrefixUnicodeString(
                   &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                   &DestinationString,
                   1u) )
            {
              v22 = 14LL;
              v23 = Pool2 + 43;
            }
            else
            {
              v22 = 4LL;
            }
          }
          else
          {
            while ( v44 < `_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix.Buffer + 5 )
            {
              v46 = *v44;
              v47 = *(unsigned __int16 *)((char *)v44
                                        + (char *)v23
                                        - (char *)`_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix.Buffer);
              if ( (_WORD)v46 != (_WORD)v47 )
              {
                if ( (unsigned int)v46 >= 0x61 )
                {
                  if ( (unsigned int)v46 > 0x7A )
                  {
                    if ( v45 && (unsigned __int16)v46 >= 0xC0u )
                      LOWORD(v46) = *((_WORD *)&v45->Flink
                                    + (v46 & 0xF)
                                    + *((unsigned __int16 *)&v45->Flink
                                      + ((unsigned __int8)v46 >> 4)
                                      + (unsigned int)*((unsigned __int16 *)&v45->Flink + (v46 >> 8))))
                                  + v46;
                  }
                  else
                  {
                    LOWORD(v46) = v46 - 32;
                  }
                }
                if ( (unsigned int)v47 >= 0x61 )
                {
                  if ( (unsigned int)v47 > 0x7A )
                  {
                    if ( v45 && (unsigned __int16)v47 >= 0xC0u )
                      LOWORD(v47) = *((_WORD *)&v45->Flink
                                    + (v47 & 0xF)
                                    + *((unsigned __int16 *)&v45->Flink
                                      + ((unsigned __int8)v47 >> 4)
                                      + (unsigned int)*((unsigned __int16 *)&v45->Flink + (v47 >> 8))))
                                  + v47;
                  }
                  else
                  {
                    LOWORD(v47) = v47 - 32;
                  }
                }
                if ( (_WORD)v46 != (_WORD)v47 )
                  goto LABEL_97;
              }
              ++v44;
            }
            v22 = 5LL;
            v23 = Pool2 + 30;
          }
          v24 = (_QWORD *)a1[(unsigned int)v22 + 12];
          if ( !v24 )
          {
            switch ( (int)v22 )
            {
              case 4:
              case 6:
              case 7:
              case 8:
              case 12:
              case 13:
                goto LABEL_186;
              case 5:
              case 9:
              case 10:
              case 11:
              case 14:
              case 15:
                v65 = (_QWORD *)a1[7];
                if ( v65 == a1 + 7 )
LABEL_186:
                  v24 = (_QWORD *)a1[11];
                else
                  v24 = v65 - 2;
                a1[(unsigned int)v22 + 12] = v24;
                break;
            }
          }
          inited = PnpCtxGetCachedNodeBaseKey(a1, v24, v22, &v72);
          if ( inited >= 0 )
          {
            v25 = v72;
            v26 = a3;
LABEL_27:
            if ( a1 && (v27 = a1[28]) != 0 )
              v28 = *(_QWORD *)(v27 + 8);
            else
              v28 = 0LL;
            v29 = RegRtlOpenKeyTransacted(v25, v23, 0LL, a5, a7, v28);
            if ( !v29 )
            {
              *a8 = 2;
              goto LABEL_32;
            }
            if ( v29 == -1073741444 )
            {
              inited = -1073741595;
              goto LABEL_32;
            }
            if ( v29 != -1073741772 )
            {
              inited = v29;
              goto LABEL_32;
            }
            v31 = (unsigned __int8)v26;
            if ( !a6 )
            {
              if ( (unsigned __int8)v26 == 16 && (v26 & 0xF00) == 0 )
              {
                inited = -1073741810;
                goto LABEL_32;
              }
LABEL_48:
              inited = -1073741772;
              goto LABEL_32;
            }
            if ( (unsigned __int8)v26 == 16 && (v26 & 0xF00) == 0
              || (inited = CmOpenDeviceRegKey((__int64)a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL), inited >= 0) )
            {
              inited = CmGetDeviceRegKeySecurityDescriptor(a1, v26, &P);
              if ( inited >= 0 )
              {
                v32 = a5;
                if ( P )
                  v32 = 917510;
                v33 = PnpCtxRegCreateTree(a1, v25, v23, v31 == 19, v32, P, &v69, a8);
                if ( v33 == -1073741444 )
                {
                  inited = -1073741595;
                }
                else if ( v33 < 0 )
                {
                  inited = v33;
                }
                else
                {
                  if ( v32 == a5 )
                  {
                    *a7 = v69;
                    v69 = 0LL;
                    goto LABEL_32;
                  }
                  v62 = PnpCtxRegOpenKey((_DWORD)a1, (_DWORD)v69, 0, 0, a5, (__int64)a7);
                  if ( v62 == -1073741444 )
                    goto LABEL_48;
                  if ( v62 < 0 )
                    inited = v62;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_32:
  if ( Handle )
    ZwClose(Handle);
  if ( v70 )
    ZwClose(v70);
  if ( v69 )
    ZwClose(v69);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
