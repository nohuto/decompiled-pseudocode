/*
 * XREFs of ACPIDeviceDiscoverDependencies @ 0x140026F6C
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x140026E84 (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 */

_UNKNOWN **__fastcall ACPIDeviceDiscoverDependencies(_QWORD *a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  int v10; // edx
  int v11; // edx
  _QWORD *v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  int v16; // edx
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  int v19; // r9d
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF

  result = &retaddr;
  v3 = a1[5];
  v22 = 0;
  v21 = 0;
  if ( *(_QWORD *)(v3 + 784) )
  {
    v6 = (_QWORD *)*a2;
    if ( (_QWORD *)*a2 != a2 )
    {
      while ( 1 )
      {
        v7 = v6[5];
        v8 = v6;
        v6 = (_QWORD *)*v6;
        if ( a1 == v8 )
          goto LABEL_5;
        if ( (v8[7] & 0x4000000) != 0 )
          goto LABEL_5;
        v9 = *(_QWORD *)(v7 + 784);
        if ( !v9 )
          goto LABEL_5;
        if ( (*(_BYTE *)(v3 + 1120) & 0x40) == 0 )
          goto LABEL_10;
        result = (_UNKNOWN **)IoTestDependency(*(_QWORD *)(v3 + 784), v9, &v22, &v21);
        if ( (int)result < 0 )
          break;
        if ( (v21 & 1) == 0 )
          goto LABEL_10;
        result = (_UNKNOWN **)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
        if ( result )
        {
          v17 = (_QWORD *)a1[9];
          v18 = result + 2;
          if ( (_QWORD *)*v17 != a1 + 8 )
LABEL_32:
            __fastfail(3u);
          *v18 = a1 + 8;
          result[3] = v17;
          *v17 = v18;
          a1[9] = v18;
          v14 = v8 + 10;
          goto LABEL_16;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 19;
LABEL_29:
          LOBYTE(v11) = 2;
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  v11,
                                  21,
                                  v19,
                                  (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids);
        }
LABEL_5:
        if ( v6 == a2 )
          return result;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                WPP_GLOBAL_Control->DeviceExtension,
                                v16,
                                21,
                                20,
                                (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
                                (char)result);
      }
LABEL_10:
      if ( (*(_BYTE *)(v7 + 1120) & 0x40) != 0 )
      {
        result = (_UNKNOWN **)IoTestDependency(*(_QWORD *)(v7 + 784), *(_QWORD *)(v3 + 784), &v22, &v21);
        if ( (int)result < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    v10,
                                    21,
                                    22,
                                    (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
                                    (char)result);
          }
          goto LABEL_5;
        }
        if ( (v21 & 1) != 0 )
        {
          result = (_UNKNOWN **)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( result )
          {
            v12 = (_QWORD *)v8[9];
            v13 = result + 2;
            if ( (_QWORD *)*v12 != v8 + 8 )
              goto LABEL_32;
            *v13 = v8 + 8;
            result[3] = v12;
            *v12 = v13;
            v8[9] = v13;
            v14 = a1 + 10;
LABEL_16:
            v15 = (_QWORD *)v14[1];
            if ( (_QWORD *)*v15 != v14 )
              goto LABEL_32;
            *result = v14;
            result[1] = v15;
            *v15 = result;
            v14[1] = result;
            goto LABEL_5;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = 21;
            goto LABEL_29;
          }
        }
      }
      goto LABEL_5;
    }
  }
  return result;
}
