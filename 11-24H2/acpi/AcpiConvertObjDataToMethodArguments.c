/*
 * XREFs of AcpiConvertObjDataToMethodArguments @ 0x14003A250
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x140054B44 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x14003A458 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x14003A5EC (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140064FD8 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_PD @ 0x140065334 (WPP_RECORDER_SF_PD.c)
 */

__int64 __fastcall AcpiConvertObjDataToMethodArguments(unsigned int a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // r12
  __int64 v6; // rbx
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rbp
  int v11; // edx
  __int64 v12; // r14
  __int64 Pool2; // rax
  int v14; // edx
  __int64 v15; // r8
  int v16; // r9d
  void *v17; // rdi
  __int64 v18; // r15
  __int64 i; // rbp
  int v20; // edx
  __int64 v21; // rax
  int v23; // [rsp+20h] [rbp-78h]
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  int v25; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+10h]

  v26 = a2;
  v4 = a4;
  v6 = a2;
  if ( a1 )
  {
    v24 = 0LL;
    v9 = 0;
    v25 = 0;
    while ( v9 < a1 )
    {
      LOBYTE(a4) = 1;
      v10 = v6 + 40LL * v9;
      v8 = ACPIIoctlCalculateOutputBufferSizeV1(
             (unsigned int)v6 + 40 * v9,
             (unsigned int)&v24,
             (unsigned int)&v25,
             (_DWORD)a4,
             0);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDD(WPP_GLOBAL_Control->DeviceExtension, v11, 21, 21, v23, v9, a1, *(_WORD *)(v10 + 2), v8);
        return (unsigned int)v8;
      }
      v6 = v26;
      ++v9;
    }
    v12 = v24;
    Pool2 = ExAllocatePool2(64LL, v24, 1315988289LL);
    v17 = (void *)Pool2;
    if ( Pool2 )
    {
      v18 = Pool2;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= a1 )
        {
          *a3 = v17;
          v8 = 0;
          *v4 = v12;
          return (unsigned int)v8;
        }
        LOBYTE(v15) = 1;
        v24 = v6 + 40 * i;
        v8 = ACPIIoctlCalculateOutputBufferV1(v24, v18, v15, 0LL);
        if ( v8 < 0 )
          break;
        v21 = *(unsigned __int16 *)(v18 + 2);
        if ( (unsigned __int16)v21 < 4u )
          v21 = 4LL;
        v6 = v26;
        v18 += v21 + 4;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD(WPP_GLOBAL_Control->DeviceExtension, v20, 19, 23, v23, i, a1, *(_WORD *)(v24 + 2), v8);
      ExFreePoolWithTag(v17, 0x4E706341u);
    }
    else
    {
      v8 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_PD(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16, v23, v12);
    }
  }
  else
  {
    *a3 = 0LL;
    v8 = 0;
    *a4 = 0LL;
  }
  return (unsigned int)v8;
}
