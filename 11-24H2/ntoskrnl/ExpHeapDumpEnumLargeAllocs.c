/*
 * XREFs of ExpHeapDumpEnumLargeAllocs @ 0x14065881C
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x14059CE74 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     IopRemoveLargeAllocsFromPartialDump @ 0x14059E3C0 (IopRemoveLargeAllocsFromPartialDump.c)
 *     ExpHeapDumpNodeLinksValid @ 0x140658914 (ExpHeapDumpNodeLinksValid.c)
 */

__int64 __fastcall ExpHeapDumpEnumLargeAllocs(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // r8d
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  _QWORD *v12; // rcx

  v2 = 0;
  if ( !MmIsAddressValidEx(a1) || *(_DWORD *)(a1 + 16) != -571548178 )
    return (unsigned int)-1073740940;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v3 = *(_QWORD *)(a1 + 96);
    v4 = *(_DWORD *)(a1 + 528);
    v5 = 0LL;
    v6 = *(_QWORD **)(a1 + 72);
    v7 = (unsigned int)(v4 + 1);
    v8 = (v3 << 12) % v7;
    v9 = (v3 << 12) / v7;
    while ( v5 <= v9 )
    {
      if ( !v6 )
        return v2;
      if ( !(unsigned int)ExpHeapDumpNodeLinksValid(v6, v8) )
        break;
      IopRemoveLargeAllocsFromPartialDump(
        v6[3] - (unsigned __int16)v6[3],
        (v6[4] & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)v6[3]);
      v10 = (_QWORD *)*v6;
      if ( *v6 || (v10 = (_QWORD *)v6[1]) != 0LL )
      {
        v6 = v10;
      }
      else
      {
        while ( 1 )
        {
          v11 = v6[2] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v11 )
            break;
          v12 = *(_QWORD **)(v11 + 8);
          if ( v12 && v6 != v12 )
          {
            v6 = *(_QWORD **)(v11 + 8);
            goto LABEL_17;
          }
          v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        }
        v6 = 0LL;
      }
LABEL_17:
      ++v5;
    }
    return (unsigned int)-1073740940;
  }
  return v2;
}
