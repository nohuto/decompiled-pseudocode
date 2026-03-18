/*
 * XREFs of PpmUpdateIdleVeto @ 0x14026A350
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x14026A200 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CAF20 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14026A140 (PopUpdateNonAttributedCpuTimeReference.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  _DWORD *v10; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 Pool2; // rdi
  __int64 InterruptTimePrecise; // rax
  __int64 *v19; // rax
  int v20; // eax
  char v21; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a3 + 32);
  v9 = (_QWORD *)(a3 + 8);
  v10 = *(_DWORD **)(a3 + 8);
  if ( a1 )
  {
    while ( v10 != (_DWORD *)v9 )
    {
      if ( v10[4] == a2 )
      {
        v20 = v10[5];
        if ( v20 == -1 )
          return (unsigned int)-1073741675;
        else
          v10[5] = v20 + 1;
        return v4;
      }
      v10 = *(_DWORD **)v10;
    }
    if ( !v8 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      goto LABEL_25;
    }
    if ( a2 <= *(_DWORD *)(a3 + 28) )
    {
      Pool2 = v8 + ((unsigned __int64)(a2 - 1) << 6);
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v21);
      *(_QWORD *)(Pool2 + 32) = InterruptTimePrecise;
      if ( !*(_BYTE *)(a3 + 24) )
        *(_QWORD *)(Pool2 + 48) = InterruptTimePrecise;
      if ( *(_BYTE *)(a3 + 25) )
        PopUpdateNonAttributedCpuTimeReference(1);
LABEL_25:
      *(_DWORD *)(Pool2 + 16) = a2;
      *(_DWORD *)(Pool2 + 20) = 1;
      if ( (_QWORD *)*v9 == v9 )
      {
        _InterlockedOr((volatile signed __int32 *)a3, 1u);
        *a4 = 1;
      }
      v19 = (__int64 *)v9[1];
      if ( (_QWORD *)*v19 == v9 )
      {
        *(_QWORD *)Pool2 = v9;
        *(_QWORD *)(Pool2 + 8) = v19;
        *v19 = Pool2;
        v9[1] = Pool2;
        return v4;
      }
      goto LABEL_28;
    }
    return (unsigned int)-1073741811;
  }
  while ( 1 )
  {
    if ( v10 == (_DWORD *)v9 )
      return (unsigned int)-1073741811;
    if ( v10[4] == a2 )
      break;
    v10 = *(_DWORD **)v10;
  }
  if ( v10[5]-- == 1 )
  {
    v12 = *(_QWORD *)v10;
    if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) == v10 )
    {
      v13 = (_QWORD *)*((_QWORD *)v10 + 1);
      if ( (_DWORD *)*v13 == v10 )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        if ( v8 )
        {
          *(_OWORD *)v10 = 0LL;
          v14 = RtlGetInterruptTimePrecise(&v21);
          *((_QWORD *)v10 + 5) += v14 - *((_QWORD *)v10 + 4);
          v15 = *((_QWORD *)v10 + 6);
          *((_QWORD *)v10 + 4) = 0LL;
          if ( v15 )
          {
            *((_QWORD *)v10 + 6) = 0LL;
            *((_QWORD *)v10 + 7) += v14 - v15;
          }
          if ( *(_BYTE *)(a3 + 25) )
            PopUpdateNonAttributedCpuTimeReference(0);
        }
        else
        {
          ExFreePoolWithTag(v10, 0x694D5050u);
        }
        if ( (_QWORD *)*v9 == v9 )
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
