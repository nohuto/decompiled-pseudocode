/*
 * XREFs of HalpBlkHandleMachineCheckAbort @ 0x140BDD400
 * Callers:
 *     HalpBlkMachineCheckAbort @ 0x140BDEB80 (HalpBlkMachineCheckAbort.c)
 * Callees:
 *     HalpBlkFatalErrorHalt @ 0x140BDD900 (HalpBlkFatalErrorHalt.c)
 */

char __fastcall HalpBlkHandleMachineCheckAbort(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx

  v1 = a1;
  if ( BYTE3(KeGetPcr()->NtTib.ExceptionList[2].Handler) != 2 )
  {
    v2 = a1;
    LOBYTE(a1) = 18;
    HalpBlkFatalErrorHalt(a1, v2);
  }
  v3 = 377LL;
  v4 = __readmsr(0x179u);
  if ( (v4 & 0x1000000) == 0 )
  {
    LOBYTE(v3) = 18;
    HalpBlkFatalErrorHalt(v3, v1);
  }
  v5 = 378LL;
  v6 = __readmsr(0x17Au);
  if ( (v6 & 1) == 0 )
  {
    LOBYTE(v5) = 18;
    HalpBlkFatalErrorHalt(v5, v1);
  }
  LOBYTE(v7) = v4;
  if ( (_BYTE)v4 )
  {
    v8 = 1025;
    v9 = (unsigned __int8)v4;
    do
    {
      v10 = v8;
      v7 = __readmsr(v8);
      v11 = v7;
      if ( v7 < 0 && (v7 & 0x2000000000000000LL) != 0 )
      {
        if ( (v7 & 0x4200000000000000LL) != 0 )
        {
          LOBYTE(v10) = 18;
          HalpBlkFatalErrorHalt(v10, v1);
        }
        LOBYTE(v7) = (v6 & 8) != 0;
        if ( (((v11 & 0x180000000000000LL) == 0x180000000000000LL) & (unsigned __int8)v7) != 0 )
        {
          LOBYTE(v10) = 18;
          HalpBlkFatalErrorHalt(v10, v1);
        }
      }
      v8 += 4;
      --v9;
    }
    while ( v9 );
  }
  return v7;
}
