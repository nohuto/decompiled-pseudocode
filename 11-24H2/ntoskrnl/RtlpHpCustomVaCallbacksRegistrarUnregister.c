/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x140601F0C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x140602A30 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x140459100 (RtlpHpMetadataFree.c)
 */

void __fastcall RtlpHpCustomVaCallbacksRegistrarUnregister(__int64 a1, __int64 a2, __int128 *a3)
{
  ULONG_PTR v4; // rbx
  char v6; // bp
  __int64 v7; // rdx
  _QWORD *i; // rdx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h]

  v4 = a2 - 16;
  v6 = RtlpHpAcquireLockExclusive((int *)(a1 + 16), 0);
  v7 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 48));
  if ( v7 <= 0 )
  {
    if ( v7 )
      __fastfail(0xEu);
    v10 = *(_QWORD *)(v4 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v10)
                          + 37
                          * (BYTE5(v10)
                           + 37
                           * (BYTE4(v10)
                            + 37
                            * (BYTE3(v10)
                             + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                         + HIBYTE(v10)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == v4 )
      {
        *i = *(_QWORD *)v4;
        --*(_DWORD *)a1;
        *(_QWORD *)v4 |= 0x8000000000000002uLL;
        break;
      }
    }
    v9 = *a3;
    RtlpHpMetadataFree(v4, &v9);
  }
  RtlpHpReleaseLockExclusive(a1 + 16, 0LL, v6);
}
