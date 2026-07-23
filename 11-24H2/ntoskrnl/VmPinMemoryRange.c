/*
 * XREFs of VmPinMemoryRange @ 0x14079ED90
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PfLockSharedAcquire @ 0x14047A884 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x14047DE88 (PfLockSharedRelease.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x14079F8AC (VmpUnpinMemoryRange.c)
 *     VmpLogPin @ 0x1407A01E0 (VmpLogPin.c)
 */

__int64 __fastcall VmPinMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r13
  int v7; // r12d
  struct _LIST_ENTRY *Blink; // r14
  int v9; // ebx
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 i; // rdi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r11d
  volatile signed __int64 *p_Blink; // rcx
  int v21; // [rsp+40h] [rbp-58h] BYREF
  int v22; // [rsp+44h] [rbp-54h]
  __int64 v23[10]; // [rsp+48h] [rbp-50h] BYREF

  v5 = a3;
  v21 = 0;
  LODWORD(v23[0]) = 0;
  v7 = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( a5 == -1 || (a2 & 0xFFF) != 0 || (a1 & 0xFFF) != 0 || !a3 || (a4 & 0xFFFFFF78) != 0 || (a4 & 0xFFFFFF7F) == 0 )
  {
    v9 = -1073741811;
  }
  else if ( Blink )
  {
    v10 = a2 >> 12;
    v7 = 1;
    v11 = a1 >> 12;
    v23[1] = a2 >> 12;
    v22 = 1;
    PfLockSharedAcquire((volatile signed __int64 *)&Blink[7].Blink);
    do
    {
      v9 = VmpPinMemoryRange((volatile LONG *)Blink, v11, v10, v5, a4, a5, &v21);
      if ( v9 != -1073741267 )
      {
LABEL_29:
        if ( v9 >= 0 )
          v9 = 0;
        goto LABEL_21;
      }
    }
    while ( !v21 );
    v12 = v11 + v5 - 1;
    for ( i = v11; ; ++i )
    {
      if ( i > v12 )
      {
        v7 = v22;
        goto LABEL_29;
      }
      do
      {
        v14 = VmpPinMemoryRange((volatile LONG *)Blink, i, v10 - v11 + i, 1LL, a4, a5, &v21);
        v9 = v14;
      }
      while ( v14 == -1073741267 );
      v5 = a3;
      if ( v14 < 0 )
        break;
      v12 = v11 + a3 - 1;
    }
    if ( i != v11 )
      VmpUnpinMemoryRange((PEX_SPIN_LOCK)Blink, a5, 0, (__int64)v23);
    v7 = v22;
  }
  else
  {
    v9 = -1073741688;
  }
LABEL_21:
  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 32LL) )
  {
    VmpLogPin(v15, 1, v18, v17, v5, a4, v16, v9);
  }
  if ( v7 )
  {
    p_Blink = (volatile signed __int64 *)&Blink[7].Blink;
    if ( LODWORD(v23[0]) )
      VmpReleasePushLockExclusive(p_Blink);
    else
      PfLockSharedRelease((signed __int64 *)p_Blink);
  }
  return (unsigned int)v9;
}
