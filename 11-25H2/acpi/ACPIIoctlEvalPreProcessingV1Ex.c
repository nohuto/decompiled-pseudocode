/*
 * XREFs of ACPIIoctlEvalPreProcessingV1Ex @ 0x140010C04
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x140042CD0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x140042620 (AcpiIoctlArgumentToPackageObjV1.c)
 *     AMLIIsObjectInGivenScope @ 0x140045FD4 (AMLIIsObjectInGivenScope.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV1Ex(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  _WORD *v8; // rdi
  unsigned int v9; // eax
  void *Pool2; // r14
  int v11; // r9d
  unsigned int v12; // r12d
  int *v13; // rsi
  __int64 v14; // rbp
  int v15; // ebx
  int v16; // eax
  __int64 v18; // rax
  _WORD *v19; // rsi
  __int64 i; // rbp
  __int16 v21; // cx
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rcx

  v8 = 0LL;
  v9 = *(_DWORD *)(a3 + 16);
  Pool2 = 0LL;
  v11 = *(_DWORD *)(a3 + 8);
  v12 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v9 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v11 - 1) <= 0x12 )
    return 3221225507LL;
  v13 = *(int **)(a2 + 24);
  v14 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( !v14 )
    return 3221225486LL;
  _strupr((char *)v13 + 4);
  v15 = AMLIGetNameSpaceObject(v13 + 1);
  if ( v15 >= 0 )
  {
    v15 = AMLIIsObjectInGivenScope(0LL, v14);
    if ( v15 >= 0 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
      if ( Pool2 )
      {
        v16 = *v13;
        if ( *v13 == 1097426241 )
        {
LABEL_8:
          *a5 = 0LL;
          *a6 = Pool2;
          *a7 = v8;
          *a8 = v12;
          return 0LL;
        }
        if ( v16 == 1164535105 || v16 == 1147757889 )
        {
          v12 = 1;
          v25 = ExAllocatePool2(64LL, 40LL, 1097884481LL);
          v8 = (_WORD *)v25;
          if ( v25 )
          {
            v26 = v13 + 66;
            if ( *v13 == 1147757889 )
            {
              *(_WORD *)(v25 + 2) = 1;
              *(_QWORD *)(v25 + 16) = *v26;
            }
            else
            {
              *(_WORD *)(v25 + 2) = 2;
              *(_DWORD *)(v25 + 24) = v13[65];
              *(_QWORD *)(v25 + 32) = v26;
            }
            goto LABEL_8;
          }
        }
        else
        {
          if ( v16 != 1181312321 )
          {
            v15 = -1073741585;
            goto LABEL_31;
          }
          v18 = (unsigned int)v13[66];
          if ( !(_DWORD)v18 )
            goto LABEL_8;
          v12 = v13[66];
          v19 = v13 + 67;
          v8 = (_WORD *)ExAllocatePool2(64LL, 40 * v18, 1097884481LL);
          if ( v8 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              if ( (unsigned int)i >= v12 )
                goto LABEL_8;
              if ( *v19 == 4 )
                v21 = 4;
              else
                v21 = *v19 + 1;
              v22 = 5 * i;
              v8[20 * i + 1] = v21;
              if ( *v19 )
              {
                if ( *v19 == 1 || *v19 == 2 )
                  goto LABEL_21;
                if ( *v19 != 4 )
                {
                  v8[20 * i + 1] = 3;
LABEL_21:
                  *(_DWORD *)&v8[20 * i + 12] = (unsigned __int16)v19[1];
                  *(_QWORD *)&v8[20 * i + 16] = (unsigned __int64)(v19 + 2) & -(__int64)(v19[1] != 0);
                  goto LABEL_22;
                }
                LOBYTE(v22) = 1;
                v15 = AcpiIoctlArgumentToPackageObjV1(
                        (_DWORD)v19,
                        1,
                        v22,
                        (int)v8 + 24 + 40 * (int)i,
                        (__int64)&v8[20 * i + 16]);
                if ( v15 < 0 )
                  goto LABEL_31;
              }
              else
              {
                v24 = &v8[4 * v22 + 8];
                *v24 = 0LL;
                memmove(v24, v19 + 2, (unsigned __int16)v19[1]);
              }
LABEL_22:
              v23 = (unsigned __int16)v19[1];
              if ( (unsigned __int16)v23 < 4u )
                v23 = 4LL;
              v19 = (_WORD *)((char *)v19 + v23 + 4);
            }
          }
        }
      }
      v15 = -1073741670;
    }
  }
LABEL_31:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x52706341u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x52706341u);
  return (unsigned int)v15;
}
