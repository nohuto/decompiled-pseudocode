/*
 * XREFs of ComputeProcessorEnergyUsingMsr @ 0x140001660
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall ComputeProcessorEnergyUsingMsr(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned __int8 Number; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int16 Group; // [rsp+34h] [rbp-3Dh] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-39h] BYREF
  int v16; // [rsp+40h] [rbp-31h] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int8 *p_Number; // [rsp+60h] [rbp-11h]
  __int64 v20; // [rsp+68h] [rbp-9h]
  int *v21; // [rsp+70h] [rbp-1h]
  __int64 v22; // [rsp+78h] [rbp+7h]
  __int64 *v23; // [rsp+80h] [rbp+Fh]
  __int64 v24; // [rsp+88h] [rbp+17h]

  v5 = &qword_140015618;
  v6 = 0LL;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
    if ( v5 == &qword_140015618 )
      break;
    if ( _bittest64(v5 + 31, 0x25u) && *((unsigned __int8 *)v5 + 344) == a1 )
    {
      v9 = v5[42];
      v16 = -1073675622;
      Group = 0;
      Number = 0;
      v10 = *(unsigned int *)(v9 + 32);
      v11 = *(_DWORD *)(v9 + 24);
      v12 = *(_DWORD *)(v9 + 32) - v11;
      *(_QWORD *)(v9 + 24) = v10;
      v17 = v10;
      if ( (unsigned int)v10 <= v11 )
        v12 = 0LL;
      ProcNumber = 0;
      v6 += v12;
      if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_ENERGY_COUNTER_UPDATE)
        && KeGetProcessorNumberFromIndex(*((ULONG *)v5 + 6), &ProcNumber) >= 0 )
      {
        Group = ProcNumber.Group;
        Number = ProcNumber.Number;
        UserData.Ptr = (unsigned __int64)&Group;
        p_Number = &Number;
        v21 = &v16;
        v23 = &v17;
        *(_QWORD *)&UserData.Size = 2LL;
        v20 = 1LL;
        v22 = 4LL;
        v24 = 8LL;
        EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_ENERGY_COUNTER_UPDATE, 0LL, (ULONG)4, &UserData);
      }
    }
  }
  result = (unsigned __int64)(1000000 * v6) >> SLOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *a5 = result;
  return result;
}
