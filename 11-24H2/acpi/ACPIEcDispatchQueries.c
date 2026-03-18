/*
 * XREFs of ACPIEcDispatchQueries @ 0x140017D78
 * Callers:
 *     ACPIEcServiceIoLoop @ 0x140018860 (ACPIEcServiceIoLoop.c)
 *     ACPIEcCompleteQueryMethod @ 0x140021320 (ACPIEcCompleteQueryMethod.c)
 * Callees:
 *     ACPIEcRunQueryMethod @ 0x14001F4A0 (ACPIEcRunQueryMethod.c)
 *     ACPIEcUnloadPending @ 0x14005FF48 (ACPIEcUnloadPending.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIEcDispatchQueries(__int64 a1)
{
  KSPIN_LOCK *v2; // r14
  KIRQL v3; // r10
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rax
  bool v6; // zf
  KIRQL v7; // dl
  __int64 v8; // r9
  unsigned int v9; // ebx
  KIRQL v10; // al
  unsigned int v11; // esi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  void (__fastcall *v14)(_QWORD, __int64); // rdi
  __int64 v15; // rbx

  v2 = (KSPIN_LOCK *)(a1 + 88);
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v2);
    v4 = *(_BYTE *)(a1 + 445);
    if ( !v4 )
      break;
    v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 448) + 24LL * v4 + 1);
    v12 = (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 448) + 24LL * v4 + 1) >> 5;
    *(_DWORD *)(a1 + 4 * v12 + 124) &= ~(1 << (v11 & 0x1F));
    v13 = *(_QWORD *)(a1 + 448);
    *(_BYTE *)(a1 + 445) = *(_BYTE *)(v13 + 24LL * v4);
    v14 = *(void (__fastcall **)(_QWORD, __int64))(v13 + 24LL * v4 + 8);
    v15 = *(_QWORD *)(v13 + 24LL * v4 + 16);
    KeReleaseSpinLock(v2, v3);
    v14(v11, v15);
  }
  if ( !*(_BYTE *)(a1 + 122) )
  {
    while ( 1 )
    {
      v5 = *(unsigned __int8 *)(a1 + 444);
      if ( !(_BYTE)v5 )
        break;
      v8 = *(unsigned __int8 *)(a1 + 444);
      v9 = *(unsigned __int8 *)(a1 + 444);
      *(_DWORD *)(a1 + 4 * (v5 >> 5) + 124) &= ~(1 << (v5 & 0x1F));
      *(_BYTE *)(a1 + 444) = *(_BYTE *)(v8 + a1 + 188);
      *(_BYTE *)(a1 + 122) = 1;
      KeReleaseSpinLock(v2, v3);
      ACPIEcRunQueryMethod(a1, v9);
      v10 = KeAcquireSpinLockRaiseToDpc(v2);
      v3 = v10;
      if ( *(_BYTE *)(a1 + 122) == 1 )
      {
        *(_BYTE *)(a1 + 122) = 2;
        v7 = v10;
        goto LABEL_8;
      }
    }
    v6 = *(_BYTE *)(a1 + 121) == 1;
    *(_BYTE *)(a1 + 122) = 0;
    if ( v6 )
      ACPIEcUnloadPending(a1);
  }
  v7 = v3;
LABEL_8:
  KeReleaseSpinLock(v2, v7);
}
