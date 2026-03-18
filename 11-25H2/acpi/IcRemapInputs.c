/*
 * XREFs of IcRemapInputs @ 0x1400B2A48
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400A878C (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbBootAllocation @ 0x1400B19C0 (IrqArbBootAllocation.c)
 *     IrqArbCommitAllocation @ 0x1400B1CB0 (IrqArbCommitAllocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 IcRemapInputs()
{
  unsigned __int8 i; // si
  __int64 j; // rbx
  unsigned int v2; // ebp
  unsigned int k; // edi
  __int64 v4; // rcx
  int v5; // r9d
  bool v6; // r8
  int v7; // edx
  int v8; // r9d
  __int64 result; // rax

  for ( i = 0; i < 2u; ++i )
  {
    for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
    {
      if ( (*(_DWORD *)(j + 28) & 0x80000004) == 0 )
      {
        v2 = *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) + 1;
        for ( k = 0; k < v2; ++k )
        {
          v4 = 200LL * k;
          v5 = *(_DWORD *)(v4 + j + 36);
          if ( (v5 || *(_DWORD *)(v4 + j + 32)) && !*(_BYTE *)(v4 + j + 225) )
          {
            v6 = *(_DWORD *)(v4 + j + 52) != *(_DWORD *)(v4 + j + 140)
              || *(_DWORD *)(v4 + j + 60) != *(_DWORD *)(v4 + j + 148)
              || *(_DWORD *)(v4 + j + 64) != *(_DWORD *)(v4 + j + 152)
              || *(_WORD *)(v4 + j + 80) != *(_WORD *)(v4 + j + 168)
              || *(_QWORD *)(v4 + j + 72) != *(_QWORD *)(v4 + j + 160);
            v7 = *(_DWORD *)(200LL * k + j + 32) - *(_DWORD *)(200LL * k + j + 40);
            v8 = v5 - *(_DWORD *)(200LL * k + j + 44);
            if ( i )
            {
              if ( v8 && (!v7 || v6) )
              {
                result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[64])(
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           j + 200LL * k + 136,
                           1);
                if ( (int)result < 0 )
                  return result;
              }
            }
            else
            {
              if ( !v8 )
              {
                if ( !v7 )
                  continue;
LABEL_24:
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[65])(
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  j + 200LL * k + 48,
                  1);
                continue;
              }
              if ( v7 && v6 )
                goto LABEL_24;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
