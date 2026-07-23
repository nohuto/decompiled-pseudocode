/*
 * XREFs of MiScheduleZeroPageThreads @ 0x140354918
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiReduceZeroingThreads @ 0x140413BFC (MiReduceZeroingThreads.c)
 *     MiIsCalibrationWorthwhile @ 0x140490824 (MiIsCalibrationWorthwhile.c)
 */

LARGE_INTEGER __fastcall MiScheduleZeroPageThreads(__int64 a1)
{
  __int64 v1; // r12
  LARGE_INTEGER result; // rax
  unsigned __int64 QuadPart; // r14
  unsigned int v4; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  KIRQL v7; // al
  LARGE_INTEGER *v8; // r13
  unsigned __int8 v9; // r15
  LARGE_INTEGER *v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r15
  LARGE_INTEGER v13; // rbp
  unsigned int *v14; // rcx
  int IsCalibrationWorthwhile; // eax
  int v16; // ecx
  int v17; // eax
  LARGE_INTEGER v18; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-68h] BYREF
  LARGE_INTEGER v20; // [rsp+28h] [rbp-60h] BYREF
  LARGE_INTEGER *v21; // [rsp+30h] [rbp-58h]
  _DWORD *v22; // [rsp+38h] [rbp-50h]
  unsigned __int8 v24; // [rsp+98h] [rbp+10h]
  int v25; // [rsp+A0h] [rbp+18h]
  int v26; // [rsp+A8h] [rbp+20h] BYREF

  v1 = a1;
  PerformanceFrequency.QuadPart = 0LL;
  result = KeQueryPerformanceCounter(&PerformanceFrequency);
  QuadPart = result.QuadPart;
  if ( PerformanceFrequency.QuadPart != 10000000 )
  {
    result.QuadPart = 10000000 * result.QuadPart / PerformanceFrequency.QuadPart;
    QuadPart = (__int64)(10000000 * QuadPart) / PerformanceFrequency.QuadPart;
  }
  v4 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v1 + 16) + 57216LL * v4;
      v6 = (_QWORD *)(v5 + 14992);
      if ( !*(_QWORD *)(v5 + 14976) && !*v6 )
        goto LABEL_20;
      v22 = (_DWORD *)(v5 + 15280);
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 15280));
      v8 = *(LARGE_INTEGER **)(v5 + 15272);
      v24 = v7;
      v9 = v7;
      v21 = v8;
      if ( v8 )
      {
        if ( *(_QWORD *)(v5 + 15288) )
          break;
      }
      if ( *(_QWORD *)(v5 + 14976) >= 0x2000uLL || *v6 )
        KeSetEvent((PRKEVENT)(v1 + 112), 0, 0);
      MiReleaseSpinLockExclusive((_DWORD *)(v5 + 15280), v9);
LABEL_20:
      result.QuadPart = (unsigned __int16)KeNumberNodes;
      if ( ++v4 >= (unsigned __int16)KeNumberNodes )
        return result;
    }
    v10 = v8 + 30;
    v25 = 0;
    v11 = 0LL;
    v12 = 0LL;
    while ( 1 )
    {
      if ( v10[8].HighPart )
      {
        v13 = *v10;
        if ( QuadPart < v10->QuadPart )
        {
          QuadPart = v10->QuadPart;
        }
        else if ( QuadPart > v13.QuadPart )
        {
          if ( QuadPart - v13.QuadPart < 0x9C400 )
          {
            ++dword_140EF4E7C;
          }
          else
          {
            v14 = (unsigned int *)(v12 + *(_QWORD *)(384LL * v4 + qword_140E2DC38 + 376) + 128LL);
            IsCalibrationWorthwhile = MiIsCalibrationWorthwhile(v14, *v14, v4, 0LL);
            v16 = v25;
            if ( IsCalibrationWorthwhile )
              v16 = 1;
            v25 = v16;
            if ( *(_BYTE *)(v5 + 15296) )
            {
              if ( BYTE4(v10[-10].QuadPart) && v11 )
              {
                if ( v13.QuadPart == v10->QuadPart )
                {
                  v26 = 0;
                  v17 = MiReduceZeroingThreads(&v10[-13], 1LL, &v26);
                  if ( v17 == 7 )
                  {
                    ++dword_140EF4E88;
                  }
                  else if ( v17 == 5 )
                  {
                    ++dword_140EF4E84;
                  }
                  else
                  {
                    ++dword_140EF4E8C;
                  }
                  v20.QuadPart = 0LL;
                  v18 = KeQueryPerformanceCounter(&v20);
                  if ( v20.QuadPart != 10000000 )
                    v18.QuadPart = 10000000 * v18.QuadPart / v20.QuadPart;
                  *v10 = v18;
                }
                else
                {
                  ++dword_140EF4E80;
                }
              }
            }
            else
            {
              ++dword_140EF4E74;
            }
          }
          goto LABEL_16;
        }
        ++dword_140EF4E78;
      }
LABEL_16:
      ++v11;
      v10 += 38;
      v12 += 168LL;
      if ( v12 >= 504 )
      {
        if ( v25 )
          KeSetEvent((PRKEVENT)&v21[11], 0, 0);
        MiReleaseSpinLockExclusive(v22, v24);
        v1 = a1;
        goto LABEL_20;
      }
    }
  }
  return result;
}
