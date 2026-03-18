/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x140915990
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObpDereferenceNamedObject @ 0x140370914 (ObpDereferenceNamedObject.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140457450 (RtlGetDaclSecurityDescriptor.c)
 *     ObpReferenceNamedObject @ 0x140457514 (ObpReferenceNamedObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ObpUnlockDirectory @ 0x140845F60 (ObpUnlockDirectory.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     ObpAssignSecurity @ 0x1408A0F50 (ObpAssignSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x140914900 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
 *     SeReleaseSecurityDescriptor @ 0x14092E1B0 (SeReleaseSecurityDescriptor.c)
 *     ObpDeleteDirectoryName @ 0x140A087E8 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  ULONG_PTR v17; // rcx
  __int64 v18; // rdi
  int ObjectSecurity; // r15d
  __int64 v20; // rax
  _OWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  _QWORD *v29; // r8
  _QWORD *v30; // rdi
  char *v31; // r14
  PVOID v32; // rbx
  char *v33; // rbx
  _QWORD *v34; // rdx
  int v35; // esi
  void *v36; // rcx
  __int64 v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  _DWORD *v46; // [rsp+28h] [rbp-D8h]
  BOOLEAN DaclPresent[7]; // [rsp+71h] [rbp-8Fh] BYREF
  PVOID v48; // [rsp+78h] [rbp-88h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+84h] [rbp-7Ch]
  int v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  PVOID Object[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-58h]
  PACL Dacl; // [rsp+B0h] [rbp-50h] BYREF
  PRKPROCESS PROCESSa; // [rsp+B8h] [rbp-48h]
  PVOID *v57; // [rsp+C0h] [rbp-40h]
  _OWORD v58[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v59; // [rsp+110h] [rbp+10h]
  __int128 v60; // [rsp+120h] [rbp+20h]
  __int128 v61; // [rsp+130h] [rbp+30h]
  __int128 v62; // [rsp+140h] [rbp+40h]
  __int128 v63; // [rsp+150h] [rbp+50h]
  __int128 v64; // [rsp+160h] [rbp+60h]

  v52 = a3;
  PROCESSa = PROCESS;
  v9 = 0LL;
  v57 = a7;
  v48 = 0LL;
  v54 = 0LL;
  DaclPresent[0] = 0;
  *(_OWORD *)Object = 0LL;
  memset_0(v58, 0, 0xA0uLL);
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
          a4,
          (ULONG_PTR *)Object,
          0LL,
          (ULONG_PTR *)&v48);
  if ( v15 < 0 )
  {
    ObpDecrementHandleCount(PROCESS, (__int64)(a2 - 48));
    return (unsigned int)v15;
  }
  else
  {
    if ( v48 == a2 )
    {
      v17 = *v9;
      v18 = 0LL;
      v52 = 0LL;
      v51 = 0;
      if ( v17 )
      {
        if ( (*(_DWORD *)(v17 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
          v51 = 3;
        ObjectSecurity = ObpGetObjectSecurity(v17);
        if ( ObjectSecurity < 0 )
          goto LABEL_23;
        v18 = v52;
      }
      v20 = *v9;
      LOBYTE(v16) = 0;
      v50 = v16;
      if ( !v20 || (*(_DWORD *)(v20 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
        goto LABEL_13;
      v36 = *(void **)(a4 + 64);
      if ( !v36 )
        goto LABEL_13;
      ObjectSecurity = RtlGetDaclSecurityDescriptor(v36, DaclPresent, &Dacl, DaclDefaulted);
      if ( ObjectSecurity >= 0 )
      {
        v37 = *(_QWORD *)(a4 + 64);
        if ( *(_BYTE *)v37 == 1 )
        {
          LOBYTE(v16) = v50;
          if ( !Dacl && (*(_WORD *)(v37 + 2) & 0x1000) == 0 )
          {
            v38 = *(_OWORD *)(a4 + 16);
            v58[0] = *(_OWORD *)a4;
            v39 = *(_OWORD *)(a4 + 32);
            v58[1] = v38;
            v40 = *(_OWORD *)(a4 + 48);
            v58[2] = v39;
            v41 = *(_OWORD *)(a4 + 64);
            v58[3] = v40;
            v42 = *(_OWORD *)(a4 + 80);
            v59 = v41;
            v43 = *(_OWORD *)(a4 + 96);
            v60 = v42;
            v44 = *(_OWORD *)(a4 + 128);
            v61 = v43;
            v62 = *(_OWORD *)(a4 + 112);
            v45 = *(_OWORD *)(a4 + 144);
            v63 = v44;
            v64 = v45;
            *(_QWORD *)&v59 = 0LL;
            v21 = v58;
LABEL_14:
            if ( !*((_QWORD *)v21 + 8) && v51 )
              LOBYTE(v16) = 1;
            v22 = ObpAssignSecurity(
                    (__int64)v21,
                    v18,
                    (__int64)a2,
                    (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *(a2 - 24) ^ ((unsigned __int16)((_WORD)a2 - 48) >> 8))],
                    v51,
                    v16);
            ObjectSecurity = v22;
            if ( !v18 )
            {
              if ( v22 >= 0 )
              {
                LOBYTE(v23) = 1;
                SeReleaseSecurityDescriptor(*(_QWORD *)(a6 + 32), *(unsigned __int8 *)(a6 + 16), v23, v24);
                *(_QWORD *)(a6 + 32) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
                goto LABEL_20;
              }
LABEL_23:
              v29 = Object[1];
              v30 = *(_QWORD **)Object[1];
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                        - 48LL
                        - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
              *v29 = *v30;
              v31 = (char *)v30[1];
              *v30 = 0LL;
              v32 = Object[0];
              ObpUnlockDirectory((__int64)Object);
              ExFreePoolWithTag(v30, 0);
              ObfDereferenceObjectWithTag(v32, 0x6944624Fu);
              if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v31 - 24) ^ ((unsigned __int16)((_WORD)v31 - 48) >> 8))) == ObpDirectoryObjectType->Index )
                ObpDeleteDirectoryName(v31);
              else
                ObfDereferenceObjectWithTag(v31, 0x6944624Fu);
              ObpReleaseLookupContext((__int64)Object);
              ObpDecrementHandleCount(PROCESSa, (__int64)v11);
              return (unsigned int)ObjectSecurity;
            }
            v25 = *v9;
            _m_prefetchw((const void *)(*v9 - 8));
            v26 = *(_QWORD *)(v25 - 8);
            while ( (v52 ^ (unsigned __int64)v26) < 0xF )
            {
              v27 = v26;
              v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 - 8), v26 + 1, v26);
              if ( v27 == v26 )
                goto LABEL_19;
            }
            ObDereferenceSecurityDescriptor(v52, 1u);
LABEL_19:
            if ( ObjectSecurity >= 0 )
            {
LABEL_20:
              ObpReleaseLookupContext((__int64)Object);
              goto LABEL_21;
            }
            goto LABEL_23;
          }
LABEL_13:
          v21 = (_OWORD *)a4;
          goto LABEL_14;
        }
        ObjectSecurity = -1073741736;
      }
      if ( !v18 )
        goto LABEL_23;
      ObReleaseObjectSecurityEx(v18, 0, *v9);
      goto LABEL_19;
    }
    v33 = 0LL;
    if ( Object[0] )
    {
      v33 = (char *)v48 - 48;
      ObpReferenceNamedObject((__int64)v48 - 48);
    }
    ObpReleaseLookupContext((__int64)Object);
    ObpDecrementHandleCount(PROCESS, (__int64)v11);
    if ( (*(_DWORD *)a6 & 0x80u) == 0 )
    {
      if ( v33 )
        ObpDereferenceNamedObject((__int64)v33);
      ObfDereferenceObject(v48);
      return 3221225525LL;
    }
    else
    {
      v34 = v48;
      *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 24);
      v46 = (_DWORD *)v52;
      *(_DWORD *)(a4 + 20) = 0;
      v35 = ObpGrantAccess(1, v34, a4, a5, *(_DWORD *)a6, v46);
      if ( v35 >= 0 )
      {
        ObjectSecurity = ObpIncrementHandleCountEx(1u, v52, (__int64)PROCESS, (__int64)v48, a5, *(_DWORD *)a6, 0LL);
        if ( v33 )
          ObpDereferenceNamedObject((__int64)v33);
        if ( ObjectSecurity < 0 )
        {
          ObfDereferenceObject(v48);
          return (unsigned int)ObjectSecurity;
        }
LABEL_21:
        *v57 = v48;
        return (unsigned int)ObjectSecurity;
      }
      if ( v33 )
        ObpDereferenceNamedObject((__int64)v33);
      ObfDereferenceObject(v48);
      return (unsigned int)v35;
    }
  }
}
