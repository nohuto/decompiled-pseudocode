/*
 * XREFs of MiAddPartitionToCrashDump @ 0x140678370
 * Callers:
 *     MiAddPartitionDataToCrashDump @ 0x140678168 (MiAddPartitionDataToCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     MiAddUnicodeStringToCrashDump @ 0x140678638 (MiAddUnicodeStringToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddPartitionToCrashDump(__int64 a1, ULONG *a2)
{
  __int64 v2; // rdi
  ULONG *v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // r8
  int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rdi
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v2 = qword_140E300E0;
  v3 = a2;
  v4 = a1;
  if ( a2 == &MiSystemPartition )
  {
    result = MmAddRangeToCrashDump(a1, a2, 23872LL);
    if ( (int)result < 0 )
      return result;
    a2 = (ULONG *)qword_140E300D8;
    v6 = v2;
    a1 = v4;
  }
  else
  {
    v6 = qword_140E300E0 + 23872;
  }
  v7 = MmAddRangeToCrashDump(a1, a2, v6);
  if ( v7 >= 0 )
  {
    v8 = v3[4630];
    v9 = 16;
    if ( v8 > 0x10 || (v9 = v3[4630], v8) )
    {
      v10 = (__int64 *)(v3 + 4632);
      v11 = v9;
      do
      {
        v12 = *v10;
        if ( *v10 )
        {
          if ( MmIsAddressValidEx(*v10) )
          {
            MmAddRangeToCrashDump(v4, v12, 256LL);
            MmAddRangeToCrashDump(v4, *(_QWORD *)(v12 + 24), 216LL);
            v13 = *(_OWORD *)(v12 + 64);
            MiAddUnicodeStringToCrashDump(v4, &v13);
          }
        }
        ++v10;
        --v11;
      }
      while ( v11 );
    }
  }
  return (unsigned int)v7;
}
