/*
 * XREFs of BiBuildIdentifierList @ 0x1409A55CC
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x140815A84 (BiExportStoreAlterationsToEfi.c)
 *     BiBindEfiNamespaceObjects @ 0x1409A812C (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     BiGetObjectDescription @ 0x1408597FC (BiGetObjectDescription.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A60FC (BiGetObjectReferenceFromEfiEntry.c)
 *     BiEnumerateSubKeys @ 0x1409A6390 (BiEnumerateSubKeys.c)
 *     BiEnumerateBootEntries @ 0x1409A7518 (BiEnumerateBootEntries.c)
 *     BiFreeIdentifierList @ 0x1409A8250 (BiFreeIdentifierList.c)
 *     BiGetSavedBootEntry @ 0x140AA1720 (BiGetSavedBootEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBuildIdentifierList(HANDLE BcdStoreHandle, __int64 a2, _QWORD *a3)
{
  int v3; // r14d
  PCWSTR *v6; // rsi
  int v7; // ebx
  PCWSTR *v8; // r13
  unsigned int i; // r15d
  HANDLE v10; // rsi
  int v11; // r14d
  __int64 Pool2; // rax
  __int64 v13; // rbx
  GUID v14; // xmm0
  int v15; // eax
  PVOID *v16; // rax
  PVOID v17; // rcx
  int v18; // eax
  int v19; // eax
  _BYTE *v20; // r12
  __int64 v21; // rbx
  unsigned int *j; // rsi
  _QWORD *k; // rcx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // rax
  int v29; // eax
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  __int64 *v32; // rax
  _DWORD *v34; // rax
  _DWORD *v35; // r15
  unsigned int v36; // eax
  __int64 v37; // rax
  _QWORD *v38; // rsi
  _QWORD *v39; // rcx
  __int64 *v40; // rax
  PVOID *v41; // rcx
  PVOID *v42; // rax
  _QWORD *v43; // rdx
  __int64 *v44; // rax
  _QWORD *v45; // rbx
  PVOID *m; // rcx
  _QWORD *v47; // rdx
  PVOID *v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int16 Buffer[2]; // [rsp+20h] [rbp-79h] BYREF
  unsigned int v54; // [rsp+24h] [rbp-75h] BYREF
  _QWORD *v55; // [rsp+28h] [rbp-71h] BYREF
  __int64 *v56; // [rsp+30h] [rbp-69h]
  PVOID v57; // [rsp+38h] [rbp-61h] BYREF
  PVOID *v58; // [rsp+40h] [rbp-59h]
  _QWORD *v59; // [rsp+48h] [rbp-51h] BYREF
  __int64 *v60; // [rsp+50h] [rbp-49h]
  PCWSTR *v61; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-39h] BYREF
  void *v63; // [rsp+68h] [rbp-31h] BYREF
  ULONG BufferSize; // [rsp+70h] [rbp-29h] BYREF
  HANDLE BcdObjectHandle; // [rsp+78h] [rbp-21h] BYREF
  __int64 v66; // [rsp+80h] [rbp-19h] BYREF
  PVOID P; // [rsp+88h] [rbp-11h] BYREF
  PVOID v68; // [rsp+90h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-1h] BYREF
  GUID Guid; // [rsp+A8h] [rbp+Fh] BYREF

  v3 = 0;
  a3[1] = a3;
  *a3 = a3;
  P = 0LL;
  v60 = (__int64 *)&v59;
  v54 = 0;
  v59 = &v59;
  v66 = 0LL;
  v58 = &v57;
  BcdObjectHandle = 0LL;
  v57 = &v57;
  Buffer[0] = 0;
  v56 = (__int64 *)&v55;
  v62 = 0;
  v55 = &v55;
  v6 = 0LL;
  Guid = 0LL;
  v68 = 0LL;
  DestinationString = 0LL;
  v63 = 0LL;
  v61 = 0LL;
  v7 = BiOpenKey((__int64)BcdStoreHandle, L"Objects", 0x20019u, &v63);
  if ( v7 < 0 )
    goto LABEL_51;
  v7 = BiEnumerateSubKeys(v63, &v61, &v62);
  if ( v7 < 0 )
    goto LABEL_50;
  v8 = v61;
  for ( i = 0; i < v62; ++i )
  {
    RtlInitUnicodeString(&DestinationString, v8[i]);
    if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0
      && BcdOpenObject(BcdStoreHandle, &Guid, &BcdObjectHandle) >= 0 )
    {
      v10 = BcdObjectHandle;
      if ( (int)BiGetObjectDescription((__int64)BcdObjectHandle, &v66) >= 0 )
      {
        if ( (HIDWORD(v66) & 0xF0000000) != 0x10000000
          || (HIDWORD(v66) & 0xF00000) != 0x100000
          || (v11 = HIDWORD(v66) & 0xFFFFF, (HIDWORD(v66) & 0xFFFFF) == 1) )
        {
          BcdCloseObject(v10);
          v3 = 0;
          continue;
        }
        Pool2 = ExAllocatePool2(0x102uLL, 0x38uLL, 0x4B444342u);
        v13 = Pool2;
        if ( !Pool2 )
        {
          BcdCloseObject(v10);
          v7 = -1073741670;
          goto LABEL_50;
        }
        *(_OWORD *)Pool2 = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        v14 = Guid;
        v15 = *(_DWORD *)(Pool2 + 48) | 4;
        *(_DWORD *)(v13 + 48) = v15;
        *(GUID *)(v13 + 16) = v14;
        if ( v11 == 0xFFFFF )
        {
          *(_DWORD *)(v13 + 48) = v15 | 8;
          v16 = v58;
          if ( *v58 != &v57 )
            goto LABEL_36;
          *(_QWORD *)(v13 + 8) = v58;
          *(_QWORD *)v13 = &v57;
          *v16 = (PVOID)v13;
          v58 = (PVOID *)v13;
        }
        else
        {
          v32 = v60;
          if ( (_QWORD **)*v60 != &v59 )
LABEL_36:
            __fastfail(3u);
          *(_QWORD *)(v13 + 8) = v60;
          *(_QWORD *)v13 = &v59;
          *v32 = v13;
          v60 = (__int64 *)v13;
        }
        BufferSize = 2;
        v3 = 0;
        if ( BcdGetElementData(v10, 0x16000082u, Buffer, &BufferSize) >= 0 && LOBYTE(Buffer[0]) )
          *(_DWORD *)(v13 + 48) |= 0x10u;
        if ( (int)BiGetSavedBootEntry(v10, &P) >= 0 )
        {
          v17 = P;
          v18 = *((_DWORD *)P + 2);
          *(_DWORD *)(v13 + 48) |= 2u;
          *(_DWORD *)(v13 + 32) = v18;
          ExFreePoolWithTag(v17, 0x4B444342u);
        }
      }
      BcdCloseObject(v10);
    }
  }
  v19 = BiEnumerateBootEntries(&v68, &v54);
  v20 = v68;
  v7 = v19;
  if ( v19 >= 0 )
  {
    v21 = 0LL;
    for ( j = (unsigned int *)v68; (char *)j - v20 < (unsigned __int64)v54; j = (unsigned int *)((char *)j + v37) )
    {
      if ( (int)BiGetObjectReferenceFromEfiEntry(j + 1, &Guid) < 0 )
        goto LABEL_32;
      for ( k = v59; ; k = (_QWORD *)*k )
      {
        if ( k == &v59 )
        {
          v29 = -1073741275;
          goto LABEL_41;
        }
        v24 = *((_DWORD *)k + 12);
        if ( (v24 & 4) != 0 )
        {
          v25 = *(_QWORD *)&Guid.Data1 - k[2];
          if ( *(_QWORD *)&Guid.Data1 == k[2] )
            v25 = *(_QWORD *)Guid.Data4 - k[3];
          if ( !v25 && (v24 & 3) != 0 && *((_DWORD *)k + 8) == j[3] )
            break;
        }
      }
      v21 = (__int64)k;
      v29 = 0;
LABEL_41:
      v3 = 32;
      if ( v29 < 0 )
      {
LABEL_32:
        v26 = ExAllocatePool2(0x102uLL, 0x38uLL, 0x4B444342u);
        v21 = v26;
        if ( !v26 )
          goto LABEL_47;
        *(_OWORD *)v26 = 0LL;
        *(_OWORD *)(v26 + 16) = 0LL;
        *(_OWORD *)(v26 + 32) = 0LL;
        *(_QWORD *)(v26 + 48) = 0LL;
        *(_DWORD *)(v26 + 48) |= 8u;
        v27 = v56;
        if ( (_QWORD **)*v56 != &v55 )
          goto LABEL_36;
        *(_QWORD *)(v21 + 8) = v56;
        *(_QWORD *)v21 = &v55;
        *v27 = v21;
        v56 = (__int64 *)v21;
      }
      else
      {
        v30 = *(_QWORD **)v21;
        if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
          goto LABEL_36;
        v31 = *(_QWORD **)(v21 + 8);
        if ( *v31 != v21 )
          goto LABEL_36;
        *v31 = v30;
        v30[1] = v31;
        v28 = (__int64 *)a3[1];
        if ( (_QWORD *)*v28 != a3 )
          goto LABEL_36;
        *(_QWORD *)v21 = a3;
        *(_QWORD *)(v21 + 8) = v28;
        *v28 = v21;
        a3[1] = v21;
      }
      v34 = (_DWORD *)ExAllocatePool2(0x102uLL, j[2], 0x4B444342u);
      v35 = v34;
      if ( !v34 )
      {
LABEL_47:
        v7 = -1073741670;
        goto LABEL_48;
      }
      memmove(v34, j + 1, j[2]);
      *(_QWORD *)(v21 + 40) = v35;
      *(_DWORD *)(v21 + 32) = v35[2];
      v36 = v3 | *(_DWORD *)(v21 + 48) & 0xFFFFFFDF;
      v3 = 0;
      *(_DWORD *)(v21 + 48) = v36 | 1;
      v37 = *j;
      if ( !(_DWORD)v37 )
        break;
    }
    v38 = v55;
LABEL_63:
    while ( v38 != &v55 )
    {
      v45 = v38;
      for ( m = (PVOID *)v57; ; m = (PVOID *)*m )
      {
        if ( m == &v57 )
        {
          v38 = (_QWORD *)*v38;
          goto LABEL_63;
        }
        if ( ((_DWORD)m[6] & 3) != 0 && *((_DWORD *)m + 8) == *((_DWORD *)v38 + 8) )
          break;
      }
      v47 = *m;
      v38 = (_QWORD *)*v38;
      if ( *((PVOID **)*m + 1) != m )
        goto LABEL_36;
      v48 = (PVOID *)m[1];
      if ( *v48 != m )
        goto LABEL_36;
      *v48 = v47;
      v47[1] = v48;
      v49 = *((_DWORD *)v45 + 12);
      *((_OWORD *)v45 + 1) = *((_OWORD *)m + 1);
      *((_DWORD *)v45 + 12) = v49 ^ (*((_DWORD *)m + 12) ^ v49) & 2;
      ExFreePoolWithTag(m, 0x4B444342u);
      *((_DWORD *)v45 + 12) |= 4u;
      v50 = *v45;
      if ( *(_QWORD **)(*v45 + 8LL) != v45 )
        goto LABEL_36;
      v51 = (_QWORD *)v45[1];
      if ( (_QWORD *)*v51 != v45 )
        goto LABEL_36;
      *v51 = v50;
      *(_QWORD *)(v50 + 8) = v51;
      v52 = (_QWORD *)a3[1];
      if ( (_QWORD *)*v52 != a3 )
        goto LABEL_36;
      *v45 = a3;
      v45[1] = v52;
      *v52 = v45;
      a3[1] = v45;
    }
    if ( v59 != &v59 )
    {
      v39 = (_QWORD *)a3[1];
      *v39 = v59;
      v40 = v60;
      a3[1] = v60;
      *v40 = (__int64)a3;
      v59[1] = v39;
    }
    if ( v57 != &v57 )
    {
      v41 = (PVOID *)a3[1];
      *v41 = v57;
      v42 = v58;
      a3[1] = v58;
      *v42 = a3;
      *((_QWORD *)v57 + 1) = v41;
    }
    if ( v55 != &v55 )
    {
      v43 = (_QWORD *)a3[1];
      *v43 = v55;
      v44 = v56;
      a3[1] = v56;
      *v44 = (__int64)a3;
      v55[1] = v43;
    }
    v7 = 0;
  }
LABEL_48:
  if ( v20 )
    ExFreePoolWithTag(v20, 0x4B444342u);
LABEL_50:
  v6 = v61;
LABEL_51:
  if ( v63 )
    BiCloseKey(v63);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v7 < 0 )
  {
    BiFreeIdentifierList(&v55);
    BiFreeIdentifierList(&v57);
    BiFreeIdentifierList(&v59);
    BiFreeIdentifierList(a3);
    BiLogMessage();
  }
  return (unsigned int)v7;
}
