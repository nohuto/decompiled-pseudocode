/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180159214
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x1800B9BB8 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpCustomVaCallbacksRegistrarUnregister(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD *i; // rdx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h]

  v4 = a2 - 16;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 48));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v9 = *(_QWORD *)(v4 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v9)
                          + 37
                          * (BYTE5(v9)
                           + 37
                           * (BYTE4(v9)
                            + 37
                            * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                         + HIBYTE(v9)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == v4 )
      {
        *i = *(_QWORD *)v4;
        --*(_DWORD *)a1;
        *(_QWORD *)v4 |= 0x8000000000000002uLL;
        break;
      }
    }
    v8 = *a3;
    RtlpHpMetadataFree(v4, &v8);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
}
