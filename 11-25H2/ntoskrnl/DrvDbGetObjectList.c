/*
 * XREFs of DrvDbGetObjectList @ 0x14092F22C
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x14092F490 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverInfFile @ 0x14092FE10 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverPackage @ 0x1409303A0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverFile @ 0x140AAB5A0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140930CDC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140930D80 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectSubKeyList @ 0x1409504C8 (DrvDbGetObjectSubKeyList.c)
 */

__int64 __fastcall DrvDbGetObjectList(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        int a8)
{
  _DWORD *v8; // rsi
  int v9; // r14d
  int v10; // r15d
  int ObjectSubKeyList; // ebx
  _QWORD *v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rcx
  int v20; // eax
  __int64 v21; // r8
  int v22; // ecx
  int v23; // eax
  _QWORD v24[3]; // [rsp+40h] [rbp-18h] BYREF
  int v25; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+50h]
  __int64 v27; // [rsp+B0h] [rbp+58h]
  __int64 v28; // [rsp+B8h] [rbp+60h]

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v8 = a7;
  v9 = a4;
  v10 = a3;
  v24[0] = 0LL;
  ObjectSubKeyList = 0;
  v25 = 0;
  *a7 = 0;
  v13 = 0LL;
  v14 = 0;
  if ( a1[6] )
  {
    v13 = (_QWORD *)a1[6];
    v23 = DrvDbAcquireDatabaseNodeBaseKey(a1, v13, a2, v24);
    ObjectSubKeyList = v23;
    if ( v23 < 0 )
    {
      if ( v23 == -1073740697 )
        ObjectSubKeyList = -1073741766;
    }
    else
    {
      ObjectSubKeyList = DrvDbGetObjectSubKeyList(*a1, v24[0], v10, v9, a5, a6, (__int64)v8, a8);
    }
  }
  else
  {
    v15 = a5;
    v16 = a1 + 2;
    v17 = (_QWORD *)a1[2];
    while ( v17 != v16 )
    {
      v13 = v17;
      v20 = DrvDbAcquireDatabaseNodeBaseKey(a1, v17, a2, v24);
      ObjectSubKeyList = v20;
      if ( v20 == -1073740697 )
      {
        ObjectSubKeyList = 0;
      }
      else
      {
        if ( v20 < 0 )
          break;
        ObjectSubKeyList = DrvDbGetObjectSubKeyList(*a1, v24[0], v27, v28, v15 + 2LL * v14, a6 - v14, (__int64)&v25, a8);
        DrvDbReleaseDatabaseNodeBaseKey(a1, v17, v21, v24[0]);
        v22 = v25;
        v24[0] = 0LL;
        if ( v25 )
          v22 = --v25;
        if ( v15 && v22 + v14 < a6 )
          v14 += v22;
        *v8 += v22;
        if ( (int)(ObjectSubKeyList + 0x80000000) >= 0 && ObjectSubKeyList != -1073741789 )
          break;
      }
      v17 = (_QWORD *)*v17;
      v16 = a1 + 2;
      a2 = v26;
    }
    v18 = (unsigned int)*v8;
    *v8 = v18 + 1;
    if ( ObjectSubKeyList >= 0 )
    {
      if ( v15 && (int)v18 + 1 <= a6 )
        *(_WORD *)(v15 + 2 * v18) = 0;
      else
        ObjectSubKeyList = -1073741789;
    }
  }
  if ( v24[0] )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v13, a3, v24[0]);
  return (unsigned int)ObjectSubKeyList;
}
