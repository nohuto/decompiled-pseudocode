/*
 * XREFs of PspCatchCriticalBreak @ 0x140769208
 * Callers:
 *     PspTerminateAllThreads @ 0x1408BDBA4 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1408F48F0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x1403D7670 (PsGetServerSiloState.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     strncpy_s @ 0x140501CF0 (strncpy_s.c)
 *     DbgPrompt @ 0x1405DB5C0 (DbgPrompt.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsTerminateServerSilo @ 0x140762A00 (PsTerminateServerSilo.c)
 */

void __fastcall PspCatchCriticalBreak(__int64 a1, ULONG_PTR a2, const char *a3, __int64 a4, int a5)
{
  __int64 v8; // rdx
  const CHAR *v9; // r8
  char v10; // al
  char v11; // bl
  struct _KPROCESS *v12; // rdi
  _KPROCESS *Process; // rbp
  void *ServerSiloGlobals; // rbx
  CHAR Response[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    if ( !(_BYTE)KdDebuggerEnabled )
      goto LABEL_16;
    DbgPrintEx(0, 0, v9, v8, a3);
    while ( 1 )
    {
      v10 = 0;
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      DbgPrompt("Break, Ignore, or Continue into bugcheck (bic)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
          goto LABEL_13;
        case 'C':
LABEL_12:
          v10 = 0;
          goto LABEL_15;
        case 'I':
          goto LABEL_14;
        case 'b':
LABEL_13:
          __debugbreak();
LABEL_14:
          v10 = 1;
          goto LABEL_15;
        case 'c':
          goto LABEL_12;
        case 'i':
          goto LABEL_14;
      }
    }
LABEL_15:
    if ( !v10 )
    {
LABEL_16:
      v11 = *(_BYTE *)a2 & 0x7F;
      if ( v11 == 6 )
        v12 = *(struct _KPROCESS **)(a2 + 544);
      else
        v12 = (struct _KPROCESS *)a2;
      if ( PsIsHostSilo(a4) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( v12 != Process )
          KeStackAttachProcess(v12, &ApcState);
        KeBugCheckEx(0xEFu, a2, v11 == 6, (ULONG_PTR)Process, 0LL);
      }
      ServerSiloGlobals = PsGetServerSiloGlobals(a4);
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)ServerSiloGlobals + 335, 1, 0) )
      {
        strncpy_s((char *)ServerSiloGlobals + 1348, 0xFuLL, a3, 0xFFFFFFFFFFFFFFFFuLL);
        *((_DWORD *)ServerSiloGlobals + 336) = a5;
      }
      PsTerminateServerSilo(a4);
    }
  }
}
