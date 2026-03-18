/*
 * XREFs of PerfInfoLogVirtualAlloc @ 0x140A31480
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7248C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140310730 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogVirtualAlloc(__int64 a1, __int64 a2, __int64 a3, int a4, __int16 a5, __int16 a6)
{
  int v6; // eax
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rax
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+54h] [rbp-1Ch]
  __int128 *v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+64h] [rbp-Ch]

  v6 = *(_DWORD *)(a3 + 464);
  v17 = 0;
  v13 = v6;
  v12[0] = a1;
  v15 = (__int128 *)v12;
  v11 = 0LL;
  v12[1] = a2;
  v14 = a4;
  v16 = 24;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (struct _KTHREAD *)&v15, 1u, 0x20008000u, 0x262u, 0x601902u);
  if ( a5 != a6 )
  {
    v17 = 0;
    WORD4(v11) = a6;
    v15 = &v11;
    *(_QWORD *)&v11 = a1;
    v16 = 16;
    v10 = PsGetProcessServerSilo(a3);
    EtwTraceSiloKernelEvent(v10, (struct _KTHREAD *)&v15, 1u, 0x20008000u, 0x289u, 0x601902u);
  }
}
