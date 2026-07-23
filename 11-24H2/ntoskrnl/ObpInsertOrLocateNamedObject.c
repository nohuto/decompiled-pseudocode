/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1409DF020
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObpDereferenceNamedObject @ 0x1403B0688 (ObpDereferenceNamedObject.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140449130 (RtlGetDaclSecurityDescriptor.c)
 *     ObpReferenceNamedObject @ 0x14044CF28 (ObpReferenceNamedObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObpUnlockDirectory @ 0x14083E760 (ObpUnlockDirectory.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     ObpAssignSecurity @ 0x140854270 (ObpAssignSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x14086C2C0 (ObReleaseObjectSecurityEx.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     SeReleaseSecurityDescriptor @ 0x140912CC0 (SeReleaseSecurityDescriptor.c)
 *     ObpDeleteDirectoryName @ 0x1409DF600 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  void *v19; // rdi
  int ObjectSecurity; // r15d
  __int64 v21; // rax
  _OWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  _QWORD *v28; // r8
  _QWORD *v29; // rdi
  char *v30; // r14
  PVOID v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rdx
  int v38; // esi
  void *v39; // rcx
  __int64 v40; // rax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  _DWORD *v49; // [rsp+28h] [rbp-D8h]
  char v50; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[7]; // [rsp+71h] [rbp-8Fh] BYREF
  PVOID v52; // [rsp+78h] [rbp-88h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+84h] [rbp-7Ch]
  int v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  PVOID Object[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-58h]
  PACL Dacl; // [rsp+B0h] [rbp-50h] BYREF
  PRKPROCESS PROCESSa; // [rsp+B8h] [rbp-48h]
  PVOID *v61; // [rsp+C0h] [rbp-40h]
  _OWORD v62[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v63; // [rsp+110h] [rbp+10h]
  __int128 v64; // [rsp+120h] [rbp+20h]
  __int128 v65; // [rsp+130h] [rbp+30h]
  __int128 v66; // [rsp+140h] [rbp+40h]
  __int128 v67; // [rsp+150h] [rbp+50h]
  __int128 v68; // [rsp+160h] [rbp+60h]

  v56 = a3;
  PROCESSa = PROCESS;
  v9 = 0LL;
  v61 = a7;
  v52 = 0LL;
  v58 = 0LL;
  DaclPresent[0] = 0;
  *(_OWORD *)Object = 0LL;
  memset_0(v62, 0, 0xA0uLL);
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
          (unsigned __int64 **)&v52);
  if ( v15 < 0 )
  {
    ObpDecrementHandleCount(PROCESS, (__int64)(a2 - 48), v16, v17);
    return (unsigned int)v15;
  }
  else
  {
    if ( v52 == a2 )
    {
      v18 = *v9;
      v19 = 0LL;
      v56 = 0LL;
      v50 = 0;
      v55 = 0;
      if ( v18 )
      {
        if ( (*(_DWORD *)(v18 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
          v55 = 3;
        ObjectSecurity = ObpGetObjectSecurity((ULONG_PTR *)v18, (void **)&v56, &v50, a5);
        if ( ObjectSecurity < 0 )
          goto LABEL_24;
        v19 = (void *)v56;
      }
      v21 = *v9;
      LOBYTE(v16) = 0;
      v54 = v16;
      if ( !v21 || (*(_DWORD *)(v21 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
        goto LABEL_13;
      v39 = *(void **)(a4 + 64);
      if ( !v39 )
        goto LABEL_13;
      ObjectSecurity = RtlGetDaclSecurityDescriptor(v39, DaclPresent, &Dacl, DaclDefaulted);
      if ( ObjectSecurity >= 0 )
      {
        v40 = *(_QWORD *)(a4 + 64);
        if ( *(_BYTE *)v40 == 1 )
        {
          LOBYTE(v16) = v54;
          if ( !Dacl && (*(_WORD *)(v40 + 2) & 0x1000) == 0 )
          {
            v41 = *(_OWORD *)(a4 + 16);
            v62[0] = *(_OWORD *)a4;
            v42 = *(_OWORD *)(a4 + 32);
            v62[1] = v41;
            v43 = *(_OWORD *)(a4 + 48);
            v62[2] = v42;
            v44 = *(_OWORD *)(a4 + 64);
            v62[3] = v43;
            v45 = *(_OWORD *)(a4 + 80);
            v63 = v44;
            v46 = *(_OWORD *)(a4 + 96);
            v64 = v45;
            v47 = *(_OWORD *)(a4 + 128);
            v65 = v46;
            v66 = *(_OWORD *)(a4 + 112);
            v48 = *(_OWORD *)(a4 + 144);
            v67 = v47;
            v68 = v48;
            *(_QWORD *)&v63 = 0LL;
            v22 = v62;
LABEL_14:
            if ( !*((_QWORD *)v22 + 8) && v55 )
              LOBYTE(v16) = 1;
            v23 = ObpAssignSecurity(
                    (__int64)v22,
                    (__int64)v19,
                    (__int64)a2,
                    (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *(a2 - 24) ^ ((unsigned __int16)((_WORD)a2 - 48) >> 8))],
                    v55,
                    v16);
            ObjectSecurity = v23;
            if ( !v19 )
            {
              if ( v23 >= 0 )
              {
                SeReleaseSecurityDescriptor(*(void **)(a6 + 32), *(_BYTE *)(a6 + 16), 1);
                *(_QWORD *)(a6 + 32) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
                goto LABEL_21;
              }
LABEL_24:
              v28 = Object[1];
              v29 = *(_QWORD **)Object[1];
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                        - 48LL
                        - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
              *v28 = *v29;
              v30 = (char *)v29[1];
              *v29 = 0LL;
              v31 = Object[0];
              ObpUnlockDirectory((__int64)Object);
              ExFreePoolWithTag(v29, 0);
              ObfDereferenceObjectWithTag(v31, 0x6944624Fu);
              if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v30 - 24) ^ ((unsigned __int16)((_WORD)v30 - 48) >> 8))) == ObpDirectoryObjectType->Index )
                ObpDeleteDirectoryName(v30);
              else
                ObfDereferenceObjectWithTag(v30, 0x6944624Fu);
              ObpReleaseLookupContext((__int64)Object);
              ObpDecrementHandleCount(PROCESSa, (__int64)v11, v32, v33);
              return (unsigned int)ObjectSecurity;
            }
            v24 = *v9;
            if ( v50 )
            {
              ExFreePoolWithTag(v19, 0);
            }
            else
            {
              _m_prefetchw((const void *)(v24 - 8));
              v25 = *(_QWORD *)(v24 - 8);
              while ( (v56 ^ (unsigned __int64)v25) < 0xF )
              {
                v26 = v25;
                v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 - 8), v25 + 1, v25);
                if ( v26 == v25 )
                  goto LABEL_20;
              }
              ObDereferenceSecurityDescriptor(v56, 1u);
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
          v22 = (_OWORD *)a4;
          goto LABEL_14;
        }
        ObjectSecurity = -1073741736;
      }
      if ( !v19 )
        goto LABEL_24;
      ObReleaseObjectSecurityEx((unsigned __int64)v19, v50, *v9);
      goto LABEL_20;
    }
    v34 = 0LL;
    if ( Object[0] )
    {
      v34 = (char *)v52 - 48;
      ObpReferenceNamedObject((__int64)v52 - 48);
    }
    ObpReleaseLookupContext((__int64)Object);
    ObpDecrementHandleCount(PROCESS, (__int64)v11, v35, v36);
    if ( (*(_DWORD *)a6 & 0x80u) == 0 )
    {
      if ( v34 )
        ObpDereferenceNamedObject((__int64)v34);
      ObfDereferenceObject(v52);
      return 3221225525LL;
    }
    else
    {
      v37 = v52;
      *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 24);
      v49 = (_DWORD *)v56;
      *(_DWORD *)(a4 + 20) = 0;
      v38 = ObpGrantAccess(1, v37, a4, a5, *(_DWORD *)a6, v49);
      if ( v38 >= 0 )
      {
        ObjectSecurity = ObpIncrementHandleCountEx(1u, v56, (__int64)PROCESS, (__int64)v52, a5, *(_DWORD *)a6, 0LL);
        if ( v34 )
          ObpDereferenceNamedObject((__int64)v34);
        if ( ObjectSecurity < 0 )
        {
          ObfDereferenceObject(v52);
          return (unsigned int)ObjectSecurity;
        }
LABEL_22:
        *v61 = v52;
        return (unsigned int)ObjectSecurity;
      }
      if ( v34 )
        ObpDereferenceNamedObject((__int64)v34);
      ObfDereferenceObject(v52);
      return (unsigned int)v38;
    }
  }
}
