/*
 * XREFs of NtAlertMultipleThreadByThreadId @ 0x14077C020
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405B50C0 (KeAlertMultipleThreadByThreadId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtAlertMultipleThreadByThreadId(__int64 a1, unsigned int a2, __int128 *a3, int a4)
{
  __int64 v8; // r13
  _BYTE *Pool2; // rbx
  NTSTATUS v10; // edi
  char PreviousMode; // r8
  __int64 i; // r14
  PETHREAD v13; // rax
  PVOID *v14; // rsi
  __int64 v15; // r14
  ULONGLONG pullResult; // [rsp+28h] [rbp-280h] BYREF
  _BYTE *v18; // [rsp+30h] [rbp-278h]
  PETHREAD Thread; // [rsp+38h] [rbp-270h] BYREF
  _KPROCESS *CurrentThreadProcess; // [rsp+40h] [rbp-268h]
  __int64 v21; // [rsp+48h] [rbp-260h]
  __int128 v22; // [rsp+50h] [rbp-258h]
  HANDLE v23; // [rsp+60h] [rbp-248h]
  _BYTE v24[512]; // [rsp+70h] [rbp-238h] BYREF

  v8 = 0LL;
  pullResult = 0LL;
  memset_0(v24, 0, sizeof(v24));
  Pool2 = 0LL;
  v18 = 0LL;
  Thread = 0LL;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v21 = a2;
  v10 = RtlULongLongMult(a2, 8uLL, &pullResult);
  if ( v10 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode && pullResult && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    while ( a4 )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)a3 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = *a3;
      }
      else
      {
        v22 = *a3;
      }
      if ( (_BYTE)v22 )
      {
        v10 = -1073741811;
        goto LABEL_26;
      }
      v8 = *((_QWORD *)&v22 + 1);
      --a4;
      ++a3;
    }
    if ( a2 <= 0x40 )
    {
      Pool2 = v24;
      v18 = v24;
    }
    else
    {
      Pool2 = (_BYTE *)ExAllocatePool2(0x43uLL, pullResult, 0x6D41654Bu);
      v18 = Pool2;
      if ( !Pool2 )
      {
        v10 = -1073741801;
        goto LABEL_26;
      }
    }
    memset_0(Pool2, 0, pullResult);
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      v23 = *(HANDLE *)(a1 + 8 * i);
      v10 = PsLookupThreadByThreadId(v23, &Thread);
      if ( v10 < 0 )
        goto LABEL_26;
      v13 = Thread;
      *(_QWORD *)&Pool2[8 * i] = Thread;
      if ( CurrentThreadProcess != v13->Process )
      {
        v10 = -1073741790;
        goto LABEL_26;
      }
    }
    KeAlertMultipleThreadByThreadId((__int64)Pool2, a2, v8);
    v10 = 0;
  }
LABEL_26:
  if ( Pool2 )
  {
    if ( a2 )
    {
      v14 = (PVOID *)Pool2;
      v15 = v21;
      do
      {
        if ( *v14 )
          ObfDereferenceObject(*v14);
        ++v14;
        --v15;
      }
      while ( v15 );
    }
    if ( Pool2 != v24 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v10;
}
