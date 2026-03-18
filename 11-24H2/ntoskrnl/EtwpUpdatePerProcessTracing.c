/*
 * XREFs of EtwpUpdatePerProcessTracing @ 0x1408301F0
 * Callers:
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1407AA720 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpGetFlagExtension @ 0x1408310A8 (EtwpGetFlagExtension.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 */

LONG __fastcall EtwpUpdatePerProcessTracing(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rsi
  _WORD *FlagExtension; // rax
  int v9; // edx
  unsigned int *v10; // rbx
  __int64 v11; // rbp
  unsigned __int16 v12; // ax
  unsigned int v13; // ecx
  __int64 v14; // rdi
  PEPROCESS Process; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  __int16 v18; // [rsp+70h] [rbp+18h]

  v4 = a4;
  v17 = 0LL;
  Process = 0LL;
  v18 = 0;
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
  LOBYTE(v18) = a3;
  if ( a2 == EtwpHostSiloState )
    *(_WORD *)(MmWriteableSharedUserData + 2 * v4 + 896) = v18;
  else
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1288LL) + 2 * v4 + 550) = v18;
  FlagExtension = (_WORD *)EtwpGetFlagExtension(a1, 2LL);
  if ( FlagExtension )
  {
    v10 = (unsigned int *)(FlagExtension + 2);
    LODWORD(v17) = v4;
    v11 = (unsigned int)(v9 + 2);
    v12 = 4 * *FlagExtension - (v9 + 2);
    BYTE4(v17) = 1;
    v13 = v12 >> 2;
    if ( v13 )
    {
      v14 = v13;
      do
      {
        if ( PsLookupProcessByProcessId((HANDLE)*v10, &Process) >= 0 )
        {
          EtwpUpdateProcessTracingCallback(Process, (__int64)&v17);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        }
        v10 = (unsigned int *)((char *)v10 + v11);
        --v14;
      }
      while ( v14 );
    }
  }
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
