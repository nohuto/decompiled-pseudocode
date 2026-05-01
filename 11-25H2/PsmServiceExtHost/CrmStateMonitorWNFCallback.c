/*
 * XREFs of CrmStateMonitorWNFCallback @ 0x180060180
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002D45C (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002D580 (CrmLogStateMonitorStateSet.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorWNFCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        size_t Size)
{
  unsigned int v7; // eax
  const void *v8; // rdx
  size_t v9; // rsi
  unsigned int v10; // ebx
  BOOL v11; // ecx
  unsigned int *i; // rbx
  _OWORD Src[2]; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v15[10]; // [rsp+40h] [rbp-49h] BYREF
  char v16[40]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v17; // [rsp+90h] [rbp+7h]
  __int64 v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+A0h] [rbp+17h]

  v7 = CrmStateMonitorStateSizeGet(*a4);
  memset(Src, 0, sizeof(Src));
  LODWORD(Src[0]) = 1;
  v9 = v7;
  if ( (unsigned int)Size <= 0x18 )
    memcpy_0((char *)Src + 8, v8, (unsigned int)Size);
  CempLockAcquireExclusive((__int64)(a4 + 2));
  memset_0(v15, 0, 0x68uLL);
  v10 = CrmStateMonitorStateSizeGet(*a4);
  memcpy_0(v16, *((const void **)a4 + 5), v10);
  memcpy_0(v15, Src, v10);
  v11 = 1;
  if ( *a4 == 5 )
    v11 = v15[0] == 20 * (v15[0] / 0x14u);
  v18 = *((_QWORD *)a4 + 6);
  v17 = MEMORY[0x7FFE0008];
  if ( v11 )
    *((_QWORD *)a4 + 6) = MEMORY[0x7FFE0008];
  else
    v19 = 1;
  memcpy_0(*((void **)a4 + 5), Src, v9);
  for ( i = (unsigned int *)*((_QWORD *)a4 + 3); i != a4 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, _OWORD *))i - 1))(i - 2, *a4, Src);
  a4[4] = 0;
  RtlReleaseSRWLockExclusive(a4 + 2);
  CrmLogStateMonitorStateSet((int *)a4, (__int64)v15);
  return 0LL;
}
