/*
 * XREFs of ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x18004223C
 * Callers:
 *     PsmHamReferenceHostId @ 0x180041A90 (PsmHamReferenceHostId.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z @ 0x1800428B0 (-HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x180042FA0 (-HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z @ 0x180042FC0 (-HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x180043050 (-HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043090 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800430E8 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180043160 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

struct _HAM_HOSTID_ENTRY *__fastcall HamSrvHostIdStoreReferenceId(
        struct _HAM_HOSTID_STORE *a1,
        char *a2,
        void *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r14
  __int64 v9; // rdx
  signed __int64 v10; // rbx
  _WORD *v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax
  struct _HAM_RC_TREE_NODE *v14; // r13
  char *v15; // r12
  unsigned __int64 v16; // rbx
  int v17; // esi
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rbx
  int v22; // esi
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  int v27; // r14d
  int v28; // eax
  unsigned __int64 v29; // rax
  struct _HAM_RC_TREE_NODE *v30; // rdi
  struct _HAM_HOSTID_ENTRY *i; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v35; // rax
  unsigned int v36; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-C8h]
  struct _HAM_HOSTID_STORE *v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v42; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  _WORD v44[232]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE DestinationSid[68]; // [rsp+250h] [rbp+150h] BYREF
  int v46; // [rsp+294h] [rbp+194h]
  int v47; // [rsp+298h] [rbp+198h]
  unsigned __int64 v48; // [rsp+2A0h] [rbp+1A0h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+2B0h] [rbp+1B0h] BYREF
  void *v50; // [rsp+2C0h] [rbp+1C0h]
  int v51; // [rsp+2C8h] [rbp+1C8h]
  int v52; // [rsp+2CCh] [rbp+1CCh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v54; // [rsp+2E0h] [rbp+1E0h]
  int v55; // [rsp+2E8h] [rbp+1E8h]
  int v56; // [rsp+2ECh] [rbp+1ECh]
  _WORD *v57; // [rsp+2F0h] [rbp+1F0h]
  int v58; // [rsp+2F8h] [rbp+1F8h]
  int v59; // [rsp+2FCh] [rbp+1FCh]
  __int64 *v60; // [rsp+300h] [rbp+200h]
  __int64 v61; // [rsp+308h] [rbp+208h]
  struct _HAM_HOSTID_STORE **v62; // [rsp+310h] [rbp+210h]
  __int64 v63; // [rsp+318h] [rbp+218h]
  _BYTE *v64; // [rsp+320h] [rbp+220h]
  int v65; // [rsp+328h] [rbp+228h]
  int v66; // [rsp+32Ch] [rbp+22Ch]
  int *v67; // [rsp+330h] [rbp+230h]
  __int64 v68; // [rsp+338h] [rbp+238h]

  v6 = a4;
  v36 = a4;
  v38 = a1;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&v42.Level = 260;
    v49.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&v42.Id = 184549376;
    v42.Keyword = 64LL;
    v49.Size = *(unsigned __int16 *)off_1800E82B8;
    v50 = &unk_1800D5D98;
    v49.Reserved = 2;
    v51 = 20;
    v52 = 1;
    v37 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v42, 0LL, 0LL, 2u, &v49);
  }
  memset_0(v44, 0, 0x228uLL);
  v9 = 232LL;
  v10 = a2 - (char *)v44;
  v11 = v44;
  do
  {
    if ( v9 == -2147483414 )
      break;
    v12 = *(_WORD *)((char *)v11 + v10);
    if ( !v12 )
      break;
    *v11++ = v12;
    --v9;
  }
  while ( v9 );
  v13 = v11 - 1;
  if ( v9 )
    v13 = v11;
  *v13 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v46 = v6;
  v47 = 2;
  v48 = a5;
  v40 = 0LL;
  v39 = a5;
  HampHostIdStoreAcquireLockShared(a1);
  v14 = 0LL;
  v15 = (char *)a1 + 72;
  RtlAcquireSRWLockShared((char *)a1 + 72);
  v16 = *((_QWORD *)a1 + 7);
  v17 = *((_BYTE *)a1 + 64) & 1;
  if ( (*((_BYTE *)a1 + 64) & 1) != 0 )
  {
    if ( v16 )
    {
      v16 ^= (unsigned __int64)a1 + 56;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    while ( v16 )
    {
      v18 = HampHostIdStoreCompareSessionByKey((void *)v6, (void *)v16);
      if ( v18 < 0 )
      {
        v19 = *(_QWORD *)v16;
      }
      else
      {
        if ( v18 <= 0 )
          break;
        v19 = *(_QWORD *)(v16 + 8);
      }
      if ( v17 && v19 )
        v16 ^= v19;
      else
        v16 = v19;
    }
  }
  v20 = v16;
  if ( v16 )
  {
    if ( *(_QWORD *)(v16 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v20 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v15);
  if ( v20 )
  {
    RtlAcquireSRWLockShared(v20 + 56);
    v21 = *(_QWORD *)(v20 + 40);
    v22 = *(_BYTE *)(v20 + 48) & 1;
    if ( (*(_BYTE *)(v20 + 48) & 1) != 0 )
    {
      if ( v21 )
      {
        v21 ^= v20 + 40;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      while ( v21 )
      {
        v23 = HampHostIdStoreCompareUserByKey(DestinationSid, (void *)v21);
        if ( v23 < 0 )
        {
          v24 = *(_QWORD *)v21;
        }
        else
        {
          if ( v23 <= 0 )
            break;
          v24 = *(_QWORD *)(v21 + 8);
        }
        if ( v22 && v24 )
          v21 ^= v24;
        else
          v21 = v24;
      }
    }
    v25 = v21;
    if ( v21 )
    {
      if ( *(_QWORD *)(v21 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v21 + 24)) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v25 = 0LL;
      }
    }
    RtlReleaseSRWLockShared(v20 + 56);
    if ( v25 )
    {
      RtlAcquireSRWLockShared(v25 + 56);
      v26 = *(_QWORD *)(v25 + 40);
      v27 = *(_BYTE *)(v25 + 48) & 1;
      if ( (*(_BYTE *)(v25 + 48) & 1) == 0 )
        goto LABEL_46;
      if ( v26 )
      {
        v26 ^= v25 + 40;
LABEL_46:
        while ( v26 )
        {
          v28 = HampHostIdStoreCompareApplicationByKey(v44, (void *)v26);
          if ( v28 < 0 )
          {
            v29 = *(_QWORD *)v26;
          }
          else
          {
            if ( v28 <= 0 )
              break;
            v29 = *(_QWORD *)(v26 + 8);
          }
          if ( v27 && v29 )
            v26 ^= v29;
          else
            v26 = v29;
        }
      }
      v30 = (struct _HAM_RC_TREE_NODE *)v26;
      if ( v26 )
      {
        if ( *(_QWORD *)(v26 + 24) )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v26 + 24)) <= 1 )
            __fastfail(0xEu);
        }
        else
        {
          v30 = 0LL;
        }
      }
      RtlReleaseSRWLockShared(v25 + 56);
      if ( v30 )
      {
        for ( i = HamRcNodeGetFirst(v30, 1u); ; i = HamRcNodeGetSuccessor(v30, v14) )
        {
          v14 = i;
          if ( !i || !HampHostIdStoreReferenceHostIdCallback(i, &v39) )
            break;
        }
        CemRcObjectDereference(v30);
      }
    }
    CemRcObjectDereference((_QWORD *)v20);
    if ( v25 )
      CemRcObjectDereference((_QWORD *)v25);
    if ( v14 )
      CemRcObjectDereference(v14);
  }
  HampHostIdStoreReleaseLockShared(v38);
  v32 = v40;
  if ( v40 )
    v33 = *(_QWORD *)(v40 + 88);
  else
    v33 = -1LL;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v67 = (int *)&v36;
    v64 = DestinationSid;
    v38 = (struct _HAM_HOSTID_STORE *)v33;
    v41 = v40;
    v68 = 4LL;
    v65 = 4 * DestinationSid[1] + 8;
    v62 = &v38;
    v60 = &v41;
    v35 = -1LL;
    v66 = 0;
    v63 = 8LL;
    v61 = 8LL;
    do
      ++v35;
    while ( v44[v35] );
    EventDescriptor.Keyword = 8LL;
    v58 = 2 * v35 + 2;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    v57 = v44;
    v59 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v54 = &unk_1800D5CE0;
    UserData.Reserved = 2;
    v55 = 63;
    v56 = 1;
    v37 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
    return (struct _HAM_HOSTID_ENTRY *)v40;
  }
  return (struct _HAM_HOSTID_ENTRY *)v32;
}
