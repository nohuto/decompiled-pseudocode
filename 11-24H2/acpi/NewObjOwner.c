/*
 * XREFs of NewObjOwner @ 0x14002FE10
 * Callers:
 *     ParseLoad @ 0x140053310 (ParseLoad.c)
 *     InitializeNativeNamespace @ 0x1400547F0 (InitializeNativeNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 *     NotifyObjectDestruction @ 0x14006CC48 (NotifyObjectDestruction.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x14006D848 (AMLIRemoveNativeObjectsFromNamespace.c)
 * Callees:
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall NewObjOwner(__int64 a1, struct _EX_RUNDOWN_REF **a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  __int64 v5; // rbp
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 **v13; // rdx
  int v14; // eax
  struct _EX_RUNDOWN_REF *v15; // rcx
  KIRQL v16; // al
  struct _EX_RUNDOWN_REF **v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // rax
  __int64 v20; // r9
  _QWORD *v21; // rcx
  unsigned int v22; // eax
  __int64 **v23; // r9
  __int64 *i; // rax
  __int64 **v25; // rcx
  __int64 *v26; // r10
  _QWORD *v27; // r11
  __int64 v28; // rcx
  __int64 **v29; // rax
  __int64 **v30; // r11
  _QWORD *v31; // r9
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // rcx
  __int64 **v39; // rax
  __int64 v40; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v8 = a1;
  v40 = a1;
  byte_140088EC8 = v7;
  v9 = a1;
  v10 = a1;
  v11 = a1;
  while ( v10 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    v13 = (__int64 **)(v11 + 40);
    v5 = v9;
    while ( 1 )
    {
      v4 = v12 - 16;
      if ( v13 == (__int64 **)(v4 + 16) )
      {
        v4 = 0LL;
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v4 + 4) >= 0x50u )
        break;
      v12 = *(_QWORD *)(v4 + 16);
    }
    if ( v4 )
    {
      v20 = *(_QWORD *)(v4 + 16);
      if ( *(_QWORD *)(v20 + 8) != v4 + 16 )
        goto LABEL_22;
      v21 = *(_QWORD **)(v4 + 24);
      if ( *v21 != v4 + 16 )
        goto LABEL_22;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      v22 = *(_DWORD *)(v4 + 4);
      if ( v22 >= 0x70 )
      {
        v23 = (__int64 **)(v4 + 80);
        *(_DWORD *)(v4 + 80) = 0;
        *(_DWORD *)(v4 + 84) = v22 - 80;
        *(_QWORD *)(v4 + 88) = v8;
        *(_DWORD *)(v4 + 4) = 80;
        for ( i = *v13; i != (__int64 *)v13; i = (__int64 *)*i )
        {
          if ( v4 + 96 < (unsigned __int64)i )
            break;
        }
        v25 = (__int64 **)i[1];
        v26 = (__int64 *)(v4 + 96);
        if ( *v25 != i )
          goto LABEL_22;
        *(_QWORD *)(v4 + 104) = v25;
        *v26 = (__int64)i;
        *v25 = v26;
        i[1] = (__int64)v26;
        v27 = (_QWORD *)*v26;
        v28 = *v26 - 16;
        if ( (__int64 **)*v26 != v13 )
        {
          v34 = *(unsigned int *)(v4 + 84);
          if ( (__int64 **)v28 == (__int64 **)((char *)v23 + v34) )
          {
            *(_DWORD *)(v4 + 84) = v34 + *(_DWORD *)(v28 + 4);
            v35 = *v27;
            if ( *(_QWORD **)(*v27 + 8LL) == v27 )
            {
              v36 = (_QWORD *)v27[1];
              if ( (_QWORD *)*v36 == v27 )
              {
                *v36 = v35;
                *(_QWORD *)(v35 + 8) = v36;
                goto LABEL_31;
              }
            }
LABEL_22:
            __fastfail(3u);
          }
        }
LABEL_31:
        v29 = *(__int64 ***)(v4 + 104);
        v30 = v29 - 2;
        if ( v29 != v13 )
        {
          v37 = *((unsigned int *)v30 + 1);
          if ( v23 == (__int64 **)((char *)v30 + v37) )
          {
            *((_DWORD *)v30 + 1) = *(_DWORD *)(v4 + 84) + v37;
            v38 = (__int64 *)*v26;
            if ( *(__int64 **)(*v26 + 8) != v26 )
              goto LABEL_22;
            v39 = *(__int64 ***)(v4 + 104);
            if ( *v39 != v26 )
              goto LABEL_22;
            *v39 = v38;
            v23 = v30;
            v38[1] = (__int64)v39;
          }
        }
        if ( *(_QWORD *)(v8 + 32) <= (unsigned __int64)v23 + *((unsigned int *)v23 + 1) )
        {
          *(_QWORD *)(v8 + 32) = v23;
          v31 = v23 + 2;
          v32 = *v31;
          if ( *(_QWORD **)(*v31 + 8LL) != v31 )
            goto LABEL_22;
          v33 = (_QWORD *)v31[1];
          if ( (_QWORD *)*v33 != v31 )
            goto LABEL_22;
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
        }
      }
      goto LABEL_13;
    }
LABEL_6:
    if ( (unsigned int)(*(_DWORD *)(v8 + 8) - *(_DWORD *)(v8 + 32)) >= 0x50 )
      goto LABEL_12;
    v8 = *(_QWORD *)(v8 + 24);
    v10 = v8;
    v40 = v8;
    v9 = v8;
    v11 = v8;
  }
  if ( a1 == gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0x88 )
    {
      v11 = 0x50 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x50 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 80;
    }
    v14 = NewGlobalHeap(&v40, v11);
  }
  else
  {
    v14 = NewLocalHeap(&v40);
  }
  if ( !v14 )
  {
    v8 = v40;
    *(_QWORD *)(v40 + 16) = a1;
    *(_QWORD *)(v5 + 24) = v8;
LABEL_12:
    v4 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 32) = v4 + 80;
    *(_DWORD *)(v4 + 4) = 80;
LABEL_13:
    *(_QWORD *)(v4 + 8) = v8;
    *(_DWORD *)v4 = 1314344776;
    memset((void *)(v4 + 16), 0, 0x40uLL);
  }
  KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
  v15 = (struct _EX_RUNDOWN_REF *)(v4 + 16);
  if ( !v4 )
    v15 = 0LL;
  *a2 = v15;
  if ( v15 )
  {
    memset(v15, 0, 0x40uLL);
    LODWORD((*a2)[2].Count) = 1380865871;
    ExInitializeRundownProtection(*a2 + 4);
    KeInitializeSpinLock(&(*a2)[5].Count);
    v16 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v17 = (struct _EX_RUNDOWN_REF **)off_1400870B8;
    byte_140088EB8 = v16;
    v18 = *a2;
    if ( *off_1400870B8 != (_UNKNOWN *)&glistObjOwners )
      goto LABEL_22;
    v18[1].Count = (unsigned __int64)off_1400870B8;
    v18->Count = (unsigned __int64)&glistObjOwners;
    *v17 = v18;
    off_1400870B8 = (_UNKNOWN **)v18;
    KeReleaseSpinLock(&gmutOwnerList, byte_140088EB8);
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(0LL, -1073741670);
    PrintDebugMessage(0x71u, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
