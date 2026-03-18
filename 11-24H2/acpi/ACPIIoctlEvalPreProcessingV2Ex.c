/*
 * XREFs of ACPIIoctlEvalPreProcessingV2Ex @ 0x140061F70
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x140042CD0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x140045FD4 (AMLIIsObjectInGivenScope.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1400628B8 (AcpiIoctlArgumentToPackageObjV2.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV2Ex(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  _WORD *v8; // rdi
  unsigned int v9; // eax
  void *Pool2; // r14
  int v11; // r9d
  unsigned int v12; // r12d
  int *v14; // rsi
  __int64 *v15; // rbp
  int v16; // eax
  __int64 v17; // r15
  int v18; // ebx
  int v19; // eax
  __int64 v20; // rax
  int *v21; // rsi
  __int64 i; // rbp
  __int16 v23; // cx
  __int64 v24; // r8
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // [rsp+78h] [rbp+20h] BYREF

  v29 = 0LL;
  v8 = 0LL;
  v9 = *(_DWORD *)(a3 + 16);
  Pool2 = 0LL;
  v11 = *(_DWORD *)(a3 + 8);
  v12 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v9 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v11 - 1) <= 0x16 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v15 = *(__int64 **)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( !v15 )
    return 3221225486LL;
  _strupr((char *)v14 + 4);
  v16 = AMLIGetNameSpaceObject((_BYTE *)v14 + 4, v15, &v29, 1);
  v17 = v29;
  v18 = v16;
  if ( v16 < 0 )
    goto LABEL_11;
  v18 = AMLIIsObjectInGivenScope(v29, v15);
  if ( v18 < 0 )
    goto LABEL_11;
  Pool2 = (void *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
  if ( !Pool2 )
    goto LABEL_10;
  v19 = *v14;
  if ( *v14 == 1332307265 )
    goto LABEL_46;
  if ( v19 == 1349084481 || v19 == 1365861697 )
  {
    v12 = 1;
    v27 = ExAllocatePool2(64LL, 40LL, 1097884481LL);
    v8 = (_WORD *)v27;
    if ( !v27 )
      goto LABEL_10;
    v28 = v14 + 66;
    if ( *v14 == 1349084481 )
    {
      *(_WORD *)(v27 + 2) = 1;
      *(_QWORD *)(v27 + 16) = *v28;
    }
    else
    {
      *(_WORD *)(v27 + 2) = 2;
      *(_DWORD *)(v27 + 24) = v14[65];
      *(_QWORD *)(v27 + 32) = v28;
    }
LABEL_46:
    *a5 = v17;
    *a6 = Pool2;
    *a7 = v8;
    *a8 = v12;
    return 0LL;
  }
  if ( v19 != 1382638913 )
  {
    v18 = -1073741585;
    goto LABEL_11;
  }
  v20 = (unsigned int)v14[66];
  if ( !(_DWORD)v20 )
    goto LABEL_46;
  v12 = v14[66];
  v21 = v14 + 67;
  v8 = (_WORD *)ExAllocatePool2(64LL, 40 * v20, 1097884481LL);
  if ( v8 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v12 )
        goto LABEL_46;
      if ( *(_WORD *)v21 == 4 )
        v23 = 4;
      else
        v23 = *(_WORD *)v21 + 1;
      v24 = 5 * i;
      v8[20 * i + 1] = v23;
      if ( *(_WORD *)v21 )
      {
        if ( *(_WORD *)v21 == 1 || *(_WORD *)v21 == 2 )
          goto LABEL_37;
        if ( *(_WORD *)v21 != 4 )
        {
          v8[20 * i + 1] = 3;
LABEL_37:
          *(_DWORD *)&v8[20 * i + 12] = v21[1];
          *(_QWORD *)&v8[20 * i + 16] = (unsigned __int64)(v21 + 2) & -(__int64)(v21[1] != 0);
          goto LABEL_39;
        }
        LOBYTE(v24) = 1;
        v18 = AcpiIoctlArgumentToPackageObjV2(
                (_DWORD)v21,
                1,
                v24,
                (int)v8 + 24 + 40 * (int)i,
                (__int64)&v8[20 * i + 16]);
        if ( v18 < 0 )
          goto LABEL_11;
      }
      else
      {
        v25 = &v8[4 * v24 + 8];
        *v25 = 0LL;
        memmove(v25, v21 + 2, (unsigned int)v21[1]);
      }
LABEL_39:
      v26 = (unsigned int)v21[1];
      if ( (unsigned int)v26 < 4 )
        v26 = 4LL;
      v21 = (int *)((char *)v21 + v26 + 8);
    }
  }
LABEL_10:
  v18 = -1073741670;
LABEL_11:
  if ( v17 )
    AMLIDereferenceHandleEx(v17);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x52706341u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x52706341u);
  return (unsigned int)v18;
}
