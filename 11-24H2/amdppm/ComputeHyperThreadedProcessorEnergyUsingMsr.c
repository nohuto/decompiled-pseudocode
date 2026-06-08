/*
 * XREFs of ComputeHyperThreadedProcessorEnergyUsingMsr @ 0x1400011C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall ComputeHyperThreadedProcessorEnergyUsingMsr(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // r13d
  __int64 *v6; // rsi
  __int64 v7; // r14
  int v8; // r15d
  unsigned __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // cc
  unsigned __int8 Number; // [rsp+30h] [rbp-71h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-6Dh] BYREF
  unsigned int v23; // [rsp+38h] [rbp-69h] BYREF
  unsigned int FirstSetLeftGroupAffinity; // [rsp+3Ch] [rbp-65h] BYREF
  int v25; // [rsp+40h] [rbp-61h]
  int v26; // [rsp+48h] [rbp-59h] BYREF
  __int64 v27; // [rsp+50h] [rbp-51h]
  __int64 v28; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 *v29; // [rsp+60h] [rbp-41h]
  __int128 v30; // [rsp+68h] [rbp-39h] BYREF
  __int64 v31; // [rsp+78h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-21h] BYREF
  unsigned __int8 *p_Number; // [rsp+90h] [rbp-11h]
  __int64 v34; // [rsp+98h] [rbp-9h]
  int *v35; // [rsp+A0h] [rbp-1h]
  __int64 v36; // [rsp+A8h] [rbp+7h]
  __int64 *v37; // [rsp+B0h] [rbp+Fh]
  __int64 v38; // [rsp+B8h] [rbp+17h]

  v5 = 0;
  v31 = 0LL;
  v29 = a5;
  v25 = a1;
  v6 = &qword_140015618;
  FirstSetLeftGroupAffinity = 0;
  v30 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v8 = a1;
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( v6 == &qword_140015618 )
      break;
    if ( *((unsigned __int8 *)v6 + 344) == v8 )
    {
      FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity(v6 + 147);
      if ( FirstSetLeftGroupAffinity == *((_DWORD *)v6 + 6) )
      {
        v23 = 0;
        v10 = 0LL;
        v11 = 0LL;
        KeInitializeEnumerationContextFromGroup(&v30, v6 + 147);
        if ( !(unsigned int)KeEnumerateNextProcessor(&FirstSetLeftGroupAffinity, &v30) )
        {
          v12 = 0;
          v13 = 0;
          do
          {
            v14 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + FirstSetLeftGroupAffinity);
            v15 = *(_QWORD *)(v14 + 368);
            v16 = *(_QWORD *)(v15 + 128);
            v17 = *(unsigned int *)(v15 + 32);
            if ( v11 < v16 || v11 == v16 && v12 < (unsigned int)v17 )
            {
              v11 = *(_QWORD *)(v15 + 128);
              v12 = *(_DWORD *)(v15 + 32);
            }
            v18 = *(_QWORD *)(v15 + 120);
            if ( v10 < v18 || v10 == v18 && v13 < *(_DWORD *)(v15 + 24) )
            {
              v10 = *(_QWORD *)(v15 + 120);
              v13 = *(_DWORD *)(v15 + 24);
            }
            *(_QWORD *)(v15 + 120) = v16;
            *(_QWORD *)(v15 + 24) = v17;
            v28 = v17;
            v26 = -1073675622;
            LOWORD(v23) = 0;
            Number = 0;
            ProcNumber = 0;
            if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_ENERGY_COUNTER_UPDATE)
              && KeGetProcessorNumberFromIndex(*(ULONG *)(v14 + 56), &ProcNumber) >= 0 )
            {
              LOWORD(v23) = ProcNumber.Group;
              Number = ProcNumber.Number;
              UserData.Ptr = (unsigned __int64)&v23;
              p_Number = &Number;
              v35 = &v26;
              v37 = &v28;
              *(_QWORD *)&UserData.Size = 2LL;
              v34 = 1LL;
              v36 = 4LL;
              v38 = 8LL;
              EtwWrite(
                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                &PPM_ETW_ENERGY_COUNTER_UPDATE,
                0LL,
                (ULONG)4,
                &UserData);
            }
          }
          while ( !(unsigned int)KeEnumerateNextProcessor(&FirstSetLeftGroupAffinity, &v30) );
          v7 = v27;
          v5 = v12;
          v23 = v13;
          v8 = v25;
        }
        v19 = v5 - v23;
        v20 = v5 <= v23;
        v5 = 0;
        if ( v20 )
          v19 = 0LL;
        v7 += v19;
        v27 = v7;
      }
    }
  }
  result = (unsigned __int64)(1000000 * v7) >> SLOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *v29 = result;
  return result;
}
