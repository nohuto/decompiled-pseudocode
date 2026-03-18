/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1409E45C0
 * Callers:
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14025E7E0 (ObpReleaseLookupContext.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObpDereferenceNamedObject @ 0x1403C1AC8 (ObpDereferenceNamedObject.c)
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140454080 (RtlGetDaclSecurityDescriptor.c)
 *     ObpReferenceNamedObject @ 0x140457C10 (ObpReferenceNamedObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ObpUnlockDirectory @ 0x1408424A0 (ObpUnlockDirectory.c)
 *     ObpIncrementHandleCountEx @ 0x14084FB60 (ObpIncrementHandleCountEx.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     ObpGetObjectSecurity @ 0x140853850 (ObpGetObjectSecurity.c)
 *     ObpAssignSecurity @ 0x140857F90 (ObpAssignSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x140867FD0 (ObReleaseObjectSecurityEx.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     SeReleaseSecurityDescriptor @ 0x1409209D0 (SeReleaseSecurityDescriptor.c)
 *     ObpDeleteDirectoryName @ 0x1409E4BA0 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        PRKPROCESS PROCESS,
        char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PVOID *a7)
{
  __int64 *v9; // r14
  char *v11; // rsi
  char v12; // al
  char v13; // di
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // edi
  int v16; // r8d
  __int64 v17; // rcx
  PVOID v18; // rdi
  int ObjectSecurity; // r15d
  __int64 v20; // rax
  _OWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  _QWORD *v27; // r8
  _QWORD *v28; // rdi
  char *v29; // r14
  PVOID v30; // rbx
  char *v31; // rbx
  _QWORD *v32; // rdx
  int v33; // esi
  void *v34; // rcx
  __int64 v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  _DWORD *v44; // [rsp+28h] [rbp-D8h]
  char v45; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[7]; // [rsp+71h] [rbp-8Fh] BYREF
  PVOID v47; // [rsp+78h] [rbp-88h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+84h] [rbp-7Ch]
  int v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  PVOID Object[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-58h]
  PACL Dacl; // [rsp+B0h] [rbp-50h] BYREF
  PRKPROCESS PROCESSa; // [rsp+B8h] [rbp-48h]
  PVOID *v56; // [rsp+C0h] [rbp-40h]
  _OWORD v57[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v58; // [rsp+110h] [rbp+10h]
  __int128 v59; // [rsp+120h] [rbp+20h]
  __int128 v60; // [rsp+130h] [rbp+30h]
  __int128 v61; // [rsp+140h] [rbp+40h]
  __int128 v62; // [rsp+150h] [rbp+50h]
  __int128 v63; // [rsp+160h] [rbp+60h]

  v51 = a3;
  PROCESSa = PROCESS;
  v9 = 0LL;
  v56 = a7;
  v47 = 0LL;
  v53 = 0LL;
  DaclPresent[0] = 0;
  *(_OWORD *)Object = 0LL;
  memset_0(v57, 0, 0xA0uLL);
  v11 = a2 - 48;
  *a7 = 0LL;
  v12 = *(a2 - 22);
  Dacl = 0LL;
  if ( (v12 & 2) != 0 )
    v9 = (__int64 *)&v11[-ObpInfoMaskToOffset[v12 & 3]];
  v13 = v11[27];
  CurrentSilo = PsGetCurrentSilo();
  v15 = ObpLookupObjectName(
          *(_QWORD *)(a6 + 8),
          (__int64)(v9 + 1),
          *(_DWORD *)a6,
          (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v11[24] ^ BYTE1(v11))],
          (v13 & 2) == 0,
          0LL,
          *(_QWORD *)(a6 + 40),
          a2,
          (__int64)CurrentSilo,
          (struct _ACCESS_STATE *)a4,
          Object,
          0LL,
          (unsigned __int64 **)&v47);
  if ( v15 < 0 )
  {
    ObpDecrementHandleCount(PROCESS, (__int64)(a2 - 48));
    return (unsigned int)v15;
  }
  else
  {
    if ( v47 == a2 )
    {
      v17 = *v9;
      v18 = 0LL;
      v51 = 0LL;
      v45 = 0;
      v50 = 0;
      if ( v17 )
      {
        if ( (*(_DWORD *)(v17 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
          v50 = 3;
        ObjectSecurity = ObpGetObjectSecurity((ULONG_PTR *)v17, (PVOID *)&v51, &v45, a5);
        if ( ObjectSecurity < 0 )
          goto LABEL_24;
        v18 = (PVOID)v51;
      }
      v20 = *v9;
      LOBYTE(v16) = 0;
      v49 = v16;
      if ( !v20 || (*(_DWORD *)(v20 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
        goto LABEL_13;
      v34 = *(void **)(a4 + 64);
      if ( !v34 )
        goto LABEL_13;
      ObjectSecurity = RtlGetDaclSecurityDescriptor(v34, DaclPresent, &Dacl, DaclDefaulted);
      if ( ObjectSecurity >= 0 )
      {
        v35 = *(_QWORD *)(a4 + 64);
        if ( *(_BYTE *)v35 == 1 )
        {
          LOBYTE(v16) = v49;
          if ( !Dacl && (*(_WORD *)(v35 + 2) & 0x1000) == 0 )
          {
            v36 = *(_OWORD *)(a4 + 16);
            v57[0] = *(_OWORD *)a4;
            v37 = *(_OWORD *)(a4 + 32);
            v57[1] = v36;
            v38 = *(_OWORD *)(a4 + 48);
            v57[2] = v37;
            v39 = *(_OWORD *)(a4 + 64);
            v57[3] = v38;
            v40 = *(_OWORD *)(a4 + 80);
            v58 = v39;
            v41 = *(_OWORD *)(a4 + 96);
            v59 = v40;
            v42 = *(_OWORD *)(a4 + 128);
            v60 = v41;
            v61 = *(_OWORD *)(a4 + 112);
            v43 = *(_OWORD *)(a4 + 144);
            v62 = v42;
            v63 = v43;
            *(_QWORD *)&v58 = 0LL;
            v21 = v57;
LABEL_14:
            if ( !*((_QWORD *)v21 + 8) && v50 )
              LOBYTE(v16) = 1;
            v22 = ObpAssignSecurity(
                    (__int64)v21,
                    (__int64)v18,
                    (__int64)a2,
                    (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *(a2 - 24) ^ ((unsigned __int16)((_WORD)a2 - 48) >> 8))],
                    v50,
                    v16);
            ObjectSecurity = v22;
            if ( !v18 )
            {
              if ( v22 >= 0 )
              {
                SeReleaseSecurityDescriptor(*(void **)(a6 + 32), *(_BYTE *)(a6 + 16), 1);
                *(_QWORD *)(a6 + 32) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
                goto LABEL_21;
              }
LABEL_24:
              v27 = Object[1];
              v28 = *(_QWORD **)Object[1];
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                        - 48LL
                        - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
              *v27 = *v28;
              v29 = (char *)v28[1];
              *v28 = 0LL;
              v30 = Object[0];
              ObpUnlockDirectory((__int64)Object);
              ExFreePoolWithTag(v28, 0);
              ObfDereferenceObjectWithTag(v30, 0x6944624Fu);
              if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v29 - 24) ^ ((unsigned __int16)((_WORD)v29 - 48) >> 8))) == ObpDirectoryObjectType->Index )
                ObpDeleteDirectoryName(v29);
              else
                ObfDereferenceObjectWithTag(v29, 0x6944624Fu);
              ObpReleaseLookupContext((__int64)Object);
              ObpDecrementHandleCount(PROCESSa, (__int64)v11);
              return (unsigned int)ObjectSecurity;
            }
            v23 = *v9;
            if ( v45 )
            {
              ExFreePoolWithTag(v18, 0);
            }
            else
            {
              _m_prefetchw((const void *)(v23 - 8));
              v24 = *(_QWORD *)(v23 - 8);
              while ( (v51 ^ (unsigned __int64)v24) < 0xF )
              {
                v25 = v24;
                v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 - 8), v24 + 1, v24);
                if ( v25 == v24 )
                  goto LABEL_20;
              }
              ObDereferenceSecurityDescriptor(v51, 1u);
            }
LABEL_20:
            if ( ObjectSecurity >= 0 )
            {
LABEL_21:
              ObpReleaseLookupContext((__int64)Object);
              goto LABEL_22;
            }
            goto LABEL_24;
          }
LABEL_13:
          v21 = (_OWORD *)a4;
          goto LABEL_14;
        }
        ObjectSecurity = -1073741736;
      }
      if ( !v18 )
        goto LABEL_24;
      ObReleaseObjectSecurityEx((unsigned __int64)v18, v45, *v9);
      goto LABEL_20;
    }
    v31 = 0LL;
    if ( Object[0] )
    {
      v31 = (char *)v47 - 48;
      ObpReferenceNamedObject((__int64)v47 - 48);
    }
    ObpReleaseLookupContext((__int64)Object);
    ObpDecrementHandleCount(PROCESS, (__int64)v11);
    if ( (*(_DWORD *)a6 & 0x80u) == 0 )
    {
      if ( v31 )
        ObpDereferenceNamedObject((__int64)v31);
      ObfDereferenceObject(v47);
      return 3221225525LL;
    }
    else
    {
      v32 = v47;
      *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 24);
      v44 = (_DWORD *)v51;
      *(_DWORD *)(a4 + 20) = 0;
      v33 = ObpGrantAccess(1, v32, a4, a5, *(_DWORD *)a6, v44);
      if ( v33 >= 0 )
      {
        ObjectSecurity = ObpIncrementHandleCountEx(1u, v51, (__int64)PROCESS, (__int64)v47, a5, *(_DWORD *)a6, 0LL);
        if ( v31 )
          ObpDereferenceNamedObject((__int64)v31);
        if ( ObjectSecurity < 0 )
        {
          ObfDereferenceObject(v47);
          return (unsigned int)ObjectSecurity;
        }
LABEL_22:
        *v56 = v47;
        return (unsigned int)ObjectSecurity;
      }
      if ( v31 )
        ObpDereferenceNamedObject((__int64)v31);
      ObfDereferenceObject(v47);
      return (unsigned int)v33;
    }
  }
}
