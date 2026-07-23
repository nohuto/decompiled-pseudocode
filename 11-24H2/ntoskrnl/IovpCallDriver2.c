/*
 * XREFs of IovpCallDriver2 @ 0x140B8F280
 * Callers:
 *     VfAfterCallDriver @ 0x140B8FA94 (VfAfterCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ViErrorReport1 @ 0x140610B34 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140610BB8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140610C4C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140610CF0 (ViErrorReport6.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140B94A94 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140B94B44 (IovUtilIsDeviceObjectMarked.c)
 *     IovpSessionDataDereference @ 0x140B9E818 (IovpSessionDataDereference.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 */

_UNKNOWN **__fastcall IovpCallDriver2(__int64 a1, int *a2)
{
  _UNKNOWN **result; // rax
  _DWORD *v3; // rbp
  __int64 v6; // rdi
  KIRQL v7; // al
  bool v8; // zf
  int v9; // eax
  _QWORD *v10; // rsi
  __int64 LowerDeviceObjectWithTag; // rax
  __int64 v12; // r8
  void *v13; // r15
  __int64 v14; // rcx
  int v15; // ecx
  int IsDeviceObjectMarked; // eax
  __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  int v27; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return result;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 8));
  v8 = *(_QWORD *)(v6 + 216) == 0LL;
  *(_BYTE *)(v6 + 16) = v7;
  if ( !v8 && (*(_DWORD *)(a1 + 24) & 0x2000000) != 0 )
    *a2 = 259;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD **)(a1 + 160);
  if ( (v9 & 0x20000000) == 0 || *a2 == 259 || (v9 & 0x1000000) != 0 )
    goto LABEL_26;
  LowerDeviceObjectWithTag = IovUtilGetLowerDeviceObjectWithTag(*(_QWORD *)(a1 + 160));
  v13 = (void *)LowerDeviceObjectWithTag;
  if ( (*(_DWORD *)(a1 + 24) & 0x10000000) == 0 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 312LL) + 40LL);
    if ( !v14 )
      goto LABEL_19;
    v15 = *(_DWORD *)(v14 + 396);
    if ( (v15 & 0x10) != 0 )
    {
      IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked(v10, 0LL, v12);
      if ( v10 == *(_QWORD **)(a1 + 64) )
      {
        if ( !IsDeviceObjectMarked )
          goto LABEL_19;
        v18 = 545;
        goto LABEL_14;
      }
      if ( !IsDeviceObjectMarked && (unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL, v17) )
      {
        v18 = 547;
LABEL_14:
        ViErrorReport10(v18, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
      }
LABEL_19:
      if ( v13 )
      {
LABEL_25:
        ObfDereferenceObjectWithTag(v13, 0x49667256u);
        goto LABEL_26;
      }
      goto LABEL_26;
    }
    if ( (v15 & 0x10000) == 0 )
      goto LABEL_19;
  }
  if ( LowerDeviceObjectWithTag )
  {
    v19 = *(_QWORD *)(v10[1] + 80LL);
    if ( !v19 || !*(_QWORD *)(v19 + 104) )
      ViErrorReport10(0x21Du, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
    goto LABEL_25;
  }
LABEL_26:
  v20 = *(_DWORD *)(a1 + 24);
  if ( (v20 & 0x40000000) == 0 || (v3[8] & 2) != 0 )
    goto LABEL_36;
  v21 = *a2;
  if ( (v20 & 0x2000000) != 0 )
  {
    if ( v21 == 259 || (v20 & 0x1000000) != 0 )
      goto LABEL_36;
    v22 = 574LL;
  }
  else
  {
    if ( v21 != 259 && (v20 & 0x1000000) == 0 )
      goto LABEL_36;
    v22 = 588LL;
  }
  ViErrorReport6(v22, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v21);
  v3[8] |= 2u;
LABEL_36:
  v23 = (unsigned int)*a2;
  if ( _bittest((const signed __int32 *)(a1 + 24), 0x1Eu) )
  {
    v24 = *(_DWORD *)(a1 + 56);
    if ( (_DWORD)v23 == v24 )
    {
      if ( (_DWORD)v23 == -1 )
        ViErrorReport6(549LL, *(const void **)(a1 + 48), *(const void **)(a1 + 72), -1);
    }
    else if ( (_DWORD)v23 != 259 )
    {
      if ( (v3[8] & 1) == 0 )
        ViErrorReport4(v23, *(const void **)(a1 + 48), (const void **)(a1 + 72), v24, *a2);
      v3[8] |= 1u;
    }
  }
  else
  {
    if ( (_DWORD)v23 != 259 )
    {
      if ( (*(_DWORD *)(v6 + 56) & 0x400000) == 0 )
        ViErrorReport1(0x226u, *(const void **)(a1 + 48), *(const void **)(a1 + 72));
      *(_DWORD *)(v6 + 56) |= 0x400000u;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) |= 0x4000000u;
    v25 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v25 + 8) != a1 + 32 || (v26 = *(_QWORD **)(a1 + 40), *v26 != a1 + 32) )
      __fastfail(3u);
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
  }
  v27 = *(_DWORD *)(a1 + 24);
  if ( (v27 & 0x8000000) != 0 && *a2 != 259 && (v27 & 0x1000000) == 0 )
    *a2 = *(_DWORD *)(a1 + 60);
  IovpSessionDataDereference(v3);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
  return (_UNKNOWN **)VfIrpDatabaseEntryReleaseLock(v6);
}
