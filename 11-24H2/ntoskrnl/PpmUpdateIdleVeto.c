/*
 * XREFs of PpmUpdateIdleVeto @ 0x1403A5250
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x1403A5100 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CCCF0 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1403A5504 (PopUpdateNonAttributedCpuTimeReference.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, ULONG a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  LARGE_INTEGER *v9; // rsi
  LARGE_INTEGER *v10; // rdi
  LONGLONG v12; // rcx
  LARGE_INTEGER **v13; // rax
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER *Pool2; // rdi
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v19; // rcx
  LARGE_INTEGER **QuadPart; // rax
  LONG HighPart; // eax
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a3 + 32);
  v9 = (LARGE_INTEGER *)(a3 + 8);
  v10 = *(LARGE_INTEGER **)(a3 + 8);
  if ( a1 )
  {
    while ( v10 != v9 )
    {
      if ( v10[2].LowPart == a2 )
      {
        HighPart = v10[2].HighPart;
        if ( HighPart == -1 )
          return (unsigned int)-1073741675;
        else
          v10[2].HighPart = HighPart + 1;
        return v4;
      }
      v10 = (LARGE_INTEGER *)v10->QuadPart;
    }
    if ( !v8 )
    {
      Pool2 = (LARGE_INTEGER *)ExAllocatePool2(0x40uLL, 0x40uLL, 0x694D5050u);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      goto LABEL_25;
    }
    if ( a2 <= *(_DWORD *)(a3 + 28) )
    {
      Pool2 = (LARGE_INTEGER *)(v8 + ((unsigned __int64)(a2 - 1) << 6));
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      Pool2[4] = InterruptTimePrecise;
      if ( !*(_BYTE *)(a3 + 24) )
        Pool2[6] = InterruptTimePrecise;
      if ( *(_BYTE *)(a3 + 25) )
      {
        LOBYTE(v19.LowPart) = 1;
        ((void (__fastcall *)(_QWORD))PopUpdateNonAttributedCpuTimeReference)((LARGE_INTEGER)v19.QuadPart);
      }
LABEL_25:
      Pool2[2].LowPart = a2;
      Pool2[2].HighPart = 1;
      if ( (LARGE_INTEGER *)v9->QuadPart == v9 )
      {
        _InterlockedOr((volatile signed __int32 *)a3, 1u);
        *a4 = 1;
      }
      QuadPart = (LARGE_INTEGER **)v9[1].QuadPart;
      if ( *QuadPart == v9 )
      {
        Pool2->QuadPart = (LONGLONG)v9;
        Pool2[1].QuadPart = (LONGLONG)QuadPart;
        *QuadPart = Pool2;
        v9[1].QuadPart = (LONGLONG)Pool2;
        return v4;
      }
      goto LABEL_28;
    }
    return (unsigned int)-1073741811;
  }
  while ( 1 )
  {
    if ( v10 == v9 )
      return (unsigned int)-1073741811;
    if ( v10[2].LowPart == a2 )
      break;
    v10 = (LARGE_INTEGER *)v10->QuadPart;
  }
  if ( v10[2].HighPart-- == 1 )
  {
    v12 = v10->QuadPart;
    if ( *(LARGE_INTEGER **)(v10->QuadPart + 8) == v10 )
    {
      v13 = (LARGE_INTEGER **)v10[1].QuadPart;
      if ( *v13 == v10 )
      {
        *v13 = (LARGE_INTEGER *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        if ( v8 )
        {
          *(_OWORD *)&v10->LowPart = 0LL;
          v14 = RtlGetInterruptTimePrecise(&PerformanceCounter);
          v10[5].QuadPart += v14.QuadPart - v10[4].QuadPart;
          v15 = v10[6];
          v10[4].QuadPart = 0LL;
          if ( v15.QuadPart )
          {
            v10[6].QuadPart = 0LL;
            v10[7].QuadPart += v14.QuadPart - v15.QuadPart;
          }
          if ( *(_BYTE *)(a3 + 25) )
            PopUpdateNonAttributedCpuTimeReference(0LL);
        }
        else
        {
          ExFreePoolWithTag(v10, 0x694D5050u);
        }
        if ( (LARGE_INTEGER *)v9->QuadPart == v9 )
        {
          _InterlockedAnd((volatile signed __int32 *)a3, 0xFFFFFFFE);
          *a4 = 1;
        }
        return v4;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
  return v4;
}
