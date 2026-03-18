/*
 * XREFs of HUBPSM30_IssuingPortFailedToDSMOnLinkStateError @ 0x140014110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPSM30_IssuingPortFailedToDSMOnLinkStateError(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // ax

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1480LL))(*(_QWORD *)(v1 + 1328), 4046LL);
  v2 = *(_WORD *)(v1 + 192) & 0x1E0;
  if ( v2 == 192 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 1328) + 2440LL) = 1073807385;
  }
  else if ( v2 == 320 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 1328) + 2440LL) = 1073807386;
  }
  return 3013LL;
}
