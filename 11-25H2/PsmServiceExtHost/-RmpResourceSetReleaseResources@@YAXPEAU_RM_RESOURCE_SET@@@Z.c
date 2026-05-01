/*
 * XREFs of ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800105CC
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180010760 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x1800276C4 (CempListEntryRemoveAndClear.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpResourceSetReleaseResources(_QWORD *P)
{
  _QWORD *v2; // rcx
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD *i; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h]

  v2 = P + 8;
  if ( *v2 && v2[1] )
    CempListEntryRemoveAndClear(v2);
  v3 = (__int64 *)P[6];
  v4 = *(_QWORD *)(v3[165] + 48);
  RmpObjectRelease(P);
  v5 = *v3;
  v3[164] = 0LL;
  (*(void (__fastcall **)(__int64 *))(v5 + 16))(v3);
  P[6] = 0LL;
  RtlAcquireSRWLockExclusive(v4 + 552);
  v7 = P[1] & (-1LL << (*(_DWORD *)(v4 + 540) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(v4 + 544)
                     + 8LL
                     * ((37
                       * (BYTE6(v7)
                        + 37
                        * (BYTE5(v7)
                         + 37
                         * (BYTE4(v7)
                          + 37
                          * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                       + HIBYTE(v7)) & (unsigned int)((*(_DWORD *)(v4 + 540) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
  {
    if ( (_QWORD *)*i == P )
    {
      *i = *P;
      --*(_DWORD *)(v4 + 536);
      *P |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)P + 6) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v4 + 552);
  RmpObjectRelease(P);
}
