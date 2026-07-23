/*
 * XREFs of CmpParseKey @ 0x1408A77F0
 * Callers:
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpAllocateParseContext @ 0x1406F309C (CmpAllocateParseContext.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     CmpRollbackTransactionArray @ 0x140870518 (CmpRollbackTransactionArray.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmpDoesParseEnterRegistryA @ 0x1409A99C0 (CmpDoesParseEnterRegistryA.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1409A9A10 (CmpGetRegistryNamespaceRootForSilo.c)
 */

__int64 __fastcall CmpParseKey(
        __int64 RegistryNamespaceRootForSilo,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        unsigned __int8 a4,
        int a5,
        const UNICODE_STRING *a6,
        __m128i *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v11; // r15
  struct _PRIVILEGE_SET *ParseContext; // r12
  __int64 *v15; // r13
  __int64 v16; // r14
  unsigned __int16 v17; // cx
  _WORD *v18; // rdx
  __int16 v19; // ax
  int v20; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rax
  int v23; // eax
  int v24; // ebx
  struct _ACCESS_STATE *v25; // rdi
  int v26; // eax
  __int64 v27; // r8
  struct _ACCESS_STATE *v28; // r12
  __int64 v29; // r13
  ACCESS_MASK *p_PreviouslyGrantedAccess; // r12
  ACCESS_MASK v31; // eax
  struct _LIST_ENTRY *CurrentSilo; // rax
  struct _ACCESS_STATE *v34; // rcx
  ACCESS_MASK v35; // eax
  bool v36; // zf
  int v37; // ebx
  struct _ACCESS_STATE *v38; // rcx
  __m128i v39; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  struct _PRIVILEGE_SET *v42; // [rsp+78h] [rbp-88h]
  __int128 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  int v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A4h] [rbp-5Ch]
  const UNICODE_STRING **v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+B0h] [rbp-50h]
  __int128 v50; // [rsp+B4h] [rbp-4Ch]
  __int64 v51; // [rsp+C4h] [rbp-3Ch]
  int v52; // [rsp+CCh] [rbp-34h]
  __int64 *v53; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v54; // [rsp+D8h] [rbp-28h]
  _WORD v55[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v56; // [rsp+E4h] [rbp-1Ch]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  const UNICODE_STRING *v58; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-8h]
  POBJECT_TYPE *v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+8h]
  _WORD *v62; // [rsp+110h] [rbp+10h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+118h] [rbp+18h]
  __int64 v64; // [rsp+120h] [rbp+20h]
  ACCESS_MASK RemainingDesiredAccess; // [rsp+128h] [rbp+28h]
  ACCESS_MASK PreviouslyGrantedAccess; // [rsp+12Ch] [rbp+2Ch]
  __int64 v67; // [rsp+130h] [rbp+30h]
  __int64 *v68; // [rsp+138h] [rbp+38h]
  __int64 v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  __m128i *v71; // [rsp+160h] [rbp+60h]
  int v72; // [rsp+168h] [rbp+68h]
  int v73; // [rsp+16Ch] [rbp+6Ch]
  unsigned __int8 v74; // [rsp+170h] [rbp+70h]
  __m128i v75; // [rsp+180h] [rbp+80h] BYREF
  __int128 v76; // [rsp+190h] [rbp+90h] BYREF
  __int64 v77; // [rsp+1A0h] [rbp+A0h]
  char v78; // [rsp+200h] [rbp+100h]
  int v79; // [rsp+208h] [rbp+108h] BYREF
  struct _ACCESS_STATE *v80; // [rsp+210h] [rbp+110h]
  unsigned __int8 v81; // [rsp+218h] [rbp+118h]

  v81 = a4;
  v80 = a3;
  v11 = a10;
  v77 = 0LL;
  v76 = 0LL;
  v39 = 0LL;
  v75 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v76);
  v78 = 0;
  v41 = 0LL;
  v42 = 0LL;
  ParseContext = 0LL;
  v39 = *a7;
  memset_0(&v58, 0, 0x88uLL);
  v15 = a11;
  v16 = a8;
  v44 = 0LL;
  v40[1] = v40;
  *a11 = 0LL;
  v40[0] = v40;
  v43 = 0LL;
  LODWORD(a7) = 0;
  v79 = 0;
  if ( a2 != CmKeyObjectType )
  {
    v24 = -1073741788;
    goto LABEL_48;
  }
  if ( (PVOID)RegistryNamespaceRootForSilo == CmpRegistryRootObject )
    RegistryNamespaceRootForSilo = CmpGetRegistryNamespaceRootForSilo(*(_QWORD *)(v11 + 8));
  v17 = v39.m128i_i16[0];
  if ( v39.m128i_i16[0] )
  {
    v18 = (_WORD *)v39.m128i_i64[1];
    while ( *(_WORD *)(v39.m128i_i64[1] + 2 * ((unsigned __int64)v17 >> 1) - 2) == 92 )
    {
      v36 = v17 == 2;
      v17 -= 2;
      v39.m128i_i16[0] = v17;
      if ( v36 )
        goto LABEL_10;
    }
    if ( v17 )
    {
      v19 = v39.m128i_i16[1];
      do
      {
        if ( *v18 != 92 )
          break;
        ++v18;
        v17 -= 2;
        v19 -= 2;
        v39.m128i_i64[1] = (__int64)v18;
        v39.m128i_i16[0] = v17;
        v39.m128i_i16[1] = v19;
      }
      while ( v17 );
    }
  }
LABEL_10:
  if ( !v16 )
  {
    ParseContext = (struct _PRIVILEGE_SET *)CmpAllocateParseContext();
    v42 = ParseContext;
    v16 = (__int64)ParseContext;
  }
  v20 = *(_DWORD *)(v11 + 4) & *(_DWORD *)(RegistryNamespaceRootForSilo + 96);
  *(_DWORD *)(v16 + 96) = v20;
  if ( *(_QWORD *)(RegistryNamespaceRootForSilo + 8) == *((_QWORD *)CmpRegistryRootObject + 1)
    && v39.m128i_i16[0]
    && ((*(_WORD *)v39.m128i_i64[1] - 65) & 0xFFDF) == 0
    && (v39.m128i_i16[0] <= 2u || *(_WORD *)(v39.m128i_i64[1] + 2) == 92)
    && (*(_DWORD *)v16 & 0x40) == 0 )
  {
    v24 = -1073741790;
    goto LABEL_46;
  }
  if ( (*(_DWORD *)v16 & 0x800) == 0 || (unsigned __int8)CmpDoesParseEnterRegistryA(RegistryNamespaceRootForSilo, &v39) )
  {
    if ( (*(_DWORD *)(RegistryNamespaceRootForSilo + 48) & 0x10) != 0 )
      *(_DWORD *)(v16 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      v70 = 1LL;
      v72 = *(_DWORD *)(v16 + 28);
      v73 = a5;
      v71 = &v39;
      v74 = v81;
      v61 = *(_DWORD *)(v16 + 24);
      v58 = a6;
      v60 = CmKeyObjectType;
      RemainingDesiredAccess = v80->RemainingDesiredAccess;
      v59 = RegistryNamespaceRootForSilo;
      v68 = v15;
      v22 = *(_QWORD *)(v16 + 72);
      if ( (v22 & 1) != 0 )
        v22 = 0LL;
      v69 = v22;
      *(_QWORD *)&v43 = &v58;
      DWORD2(v43) = *(_DWORD *)(v16 + 96);
      v44 = v16 + 144;
      if ( (*(_DWORD *)v16 & 1) != 0 )
      {
        v55[0] = *(_WORD *)(v16 + 4);
        v55[1] = v55[0];
        v57 = *(_QWORD *)(v16 + 8);
        v67 = v16 + 32;
        v62 = v55;
        SecurityDescriptor = v80->SecurityDescriptor;
        v64 = a9;
        v56 = 0;
        v23 = CmpCallCallBacksEx(
                0x1Au,
                (__int64)&v58,
                (__int64)&v43,
                1,
                0x1Bu,
                RegistryNamespaceRootForSilo,
                (__int64)v40);
      }
      else
      {
        v23 = CmpCallCallBacksEx(
                0x1Cu,
                (__int64)&v58,
                (__int64)&v43,
                1,
                0x1Du,
                RegistryNamespaceRootForSilo,
                (__int64)v40);
      }
      v24 = v23;
      if ( v23 < 0 )
      {
        if ( v23 != -1073740541 )
          goto LABEL_45;
        v24 = HIDWORD(v43);
        if ( HIDWORD(v43) == 872 )
          goto LABEL_41;
        if ( HIDWORD(v43) != 260 )
        {
          v34 = v80;
          v35 = PreviouslyGrantedAccess;
          v80->PreviouslyGrantedAccess |= PreviouslyGrantedAccess;
          v34->RemainingDesiredAccess &= ~(v35 | 0x2000000);
          v24 = 0;
          goto LABEL_45;
        }
LABEL_40:
        if ( v24 != 872 )
        {
          if ( v24 != 260 )
          {
LABEL_45:
            KeLeaveCriticalRegionThread();
            goto LABEL_46;
          }
          *(_DWORD *)(v16 + 96) = v20;
          CurrentSilo = PsGetCurrentSilo();
LABEL_44:
          *(_QWORD *)(v11 + 8) = CurrentSilo;
          goto LABEL_45;
        }
LABEL_41:
        CurrentSilo = 0LL;
        *(_QWORD *)(v16 + 64) = 0LL;
        goto LABEL_44;
      }
      RegistryNamespaceRootForSilo = v59;
      *(_DWORD *)(v16 + 96) = DWORD2(v43);
      v78 = 1;
    }
    v25 = v80;
    while ( 1 )
    {
      while ( 1 )
      {
        v75 = v39;
        v26 = CmpDoParseKey(RegistryNamespaceRootForSilo, v25, v81, a5, a6, &v75, v16, a9, &v41);
        v24 = v26;
        if ( v26 != 259 )
          break;
        KeWaitForSingleObject((char *)&unk_140E09910 + 184 * *(unsigned int *)(v16 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v16 &= ~0x100u;
      }
      if ( v26 != -1073741267 )
        break;
      v37 = (int)a7;
      if ( (unsigned int)a7 >= 0x40 )
      {
        v24 = -1073741772;
        v20 = *(_DWORD *)(RegistryNamespaceRootForSilo + 96) & *(_DWORD *)(v11 + 4);
        goto LABEL_29;
      }
      if ( (*(_DWORD *)(v16 + 100) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(_DWORD *)(v16 + 120), *(PVOID **)(v16 + 128), v27, (__int64)&v79);
        *(_DWORD *)(v16 + 100) &= ~4u;
        *(_DWORD *)(v16 + 120) = 0;
        *(_QWORD *)(v16 + 128) = 0LL;
      }
      LODWORD(a7) = v37 + 1;
    }
    v20 = *(_DWORD *)(v11 + 4) & *(_DWORD *)(RegistryNamespaceRootForSilo + 96);
    if ( v26 >= 0 )
    {
      *v15 = v41;
      v41 = 0LL;
    }
LABEL_29:
    if ( v78 )
    {
      v28 = v80;
      v29 = *v15;
      PreviouslyGrantedAccess = v80->PreviouslyGrantedAccess;
      if ( (*(_DWORD *)v16 & 1) != 0 )
      {
        if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v40[0] != v40 )
        {
          v45 = v29;
          v47 = 0;
          v51 = 0LL;
          v52 = 0;
          v46 = v24;
          v48 = &v58;
          v49 = v24;
          v53 = &v45;
          v54 = &v43;
          v50 = 0LL;
          CmpCallCallBacksEx(0x1Bu, (__int64)&v45, (__int64)&v53, 0, 0x1Bu, v29, (__int64)v40);
          v24 = v49;
        }
        p_PreviouslyGrantedAccess = &v28->PreviouslyGrantedAccess;
      }
      else
      {
        p_PreviouslyGrantedAccess = &v80->PreviouslyGrantedAccess;
        if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v40[0] != v40 )
        {
          v45 = v29;
          v47 = 0;
          v51 = 0LL;
          v52 = 0;
          v46 = v24;
          v48 = &v58;
          v49 = v24;
          v53 = &v45;
          v54 = &v43;
          v50 = 0LL;
          CmpCallCallBacksEx(0x1Du, (__int64)&v45, (__int64)&v53, 0, 0x1Du, v29, (__int64)v40);
          v24 = v49;
        }
      }
      if ( v24 >= 0 )
      {
        v31 = PreviouslyGrantedAccess;
        if ( PreviouslyGrantedAccess != *p_PreviouslyGrantedAccess )
        {
          v38 = v80;
          *p_PreviouslyGrantedAccess = PreviouslyGrantedAccess;
          v38->RemainingDesiredAccess = v38->OriginalDesiredAccess & ~(v31 | 0x2000000);
        }
      }
      ParseContext = v42;
      if ( *a11 )
        *(_DWORD *)(*a11 + 96) = DWORD2(v43);
    }
    goto LABEL_40;
  }
  v24 = -1073741790;
LABEL_46:
  if ( ParseContext )
  {
    CmpCleanupParseContext(ParseContext, 0LL);
    CmSiFreeMemory(ParseContext);
  }
LABEL_48:
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v76);
  return (unsigned int)v24;
}
