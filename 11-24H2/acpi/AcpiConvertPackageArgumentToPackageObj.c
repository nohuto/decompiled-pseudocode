/*
 * XREFs of AcpiConvertPackageArgumentToPackageObj @ 0x1400527CC
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004E238 (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x14003EAA4 (WPP_RECORDER_SF_DDD.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004E238 (AcpiConvertMethodArgumentsToObjData.c)
 *     WPP_RECORDER_SF_DD @ 0x14004F6F8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_qDD @ 0x140065528 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall AcpiConvertPackageArgumentToPackageObj(_WORD *a1, __int64 a2, PVOID *a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned __int16 *v7; // rbp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r11
  unsigned __int16 *i; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // rax
  int v15; // ebx
  unsigned int v16; // eax
  unsigned int *Pool2; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v22; // [rsp+20h] [rbp-38h]

  *(_DWORD *)a2 = 0;
  *a3 = 0LL;
  v4 = (_DWORD *)a2;
  if ( a1 && (unsigned __int16)(a1[1] - 1) > 6u && (unsigned __int16)(*a1 - 3) <= 1u )
  {
    v5 = (unsigned __int16)a1[1];
    v6 = 0;
    v7 = a1 + 2;
    v8 = 0LL;
    v9 = (unsigned __int64)a1 + v5 + 4;
    for ( i = a1 + 2; (unsigned __int64)i < v9; i = (unsigned __int16 *)((char *)i + v13 + 4) )
    {
      v11 = *i;
      if ( (unsigned __int16)v11 > 4u )
        goto LABEL_16;
      a2 = i[1];
      if ( (unsigned __int16)a2 > (unsigned __int16)v5 )
        goto LABEL_16;
      v12 = 4LL;
      if ( (unsigned __int16)a2 >= 4u )
        v12 = i[1];
      v13 = i[1];
      if ( (unsigned __int64)i + v12 + 4 > v9 )
      {
LABEL_16:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDD((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, v5, v11, v22);
        v15 = -1073741788;
        goto LABEL_27;
      }
      ++v6;
      v14 = i[1];
      if ( (unsigned __int16)a2 < 4u )
        v14 = 4LL;
      v8 += v14 + 4;
      if ( (unsigned __int16)a2 < 4u )
        v13 = 4LL;
    }
    v16 = 40 * v6 + 8;
    *v4 = v16;
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, v16, 1315988289LL);
    *a3 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v6;
      v15 = AcpiConvertMethodArgumentsToObjData(v7, v8, v6, (__int64)*a3 + 8);
      if ( v15 >= 0 )
        return (unsigned int)v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, v18, v19, v20);
    }
    else
    {
      v15 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0x1Cu,
          (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
          *v4,
          -1073741670);
      *v4 = 0;
    }
  }
  else
  {
    v15 = -1073741811;
  }
LABEL_27:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x4E706341u);
    *v4 = 0;
    *a3 = 0LL;
  }
  return (unsigned int)v15;
}
