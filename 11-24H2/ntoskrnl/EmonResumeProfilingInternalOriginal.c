/*
 * XREFs of EmonResumeProfilingInternalOriginal @ 0x14055C0B4
 * Callers:
 *     EmonResumeProfilingOriginal @ 0x14055C1A0 (EmonResumeProfilingOriginal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EmonResumeProfilingInternalOriginal(int a1, int a2)
{
  unsigned int v2; // r9d
  unsigned __int64 result; // rax
  __int64 v4; // r8
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ecx
  char v8; // r9
  int *v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rax

  v2 = 0;
  result = KiProcessorBlock[a2];
  v4 = *(_QWORD *)(result + 88);
  if ( a1 )
  {
    v5 = a1 - 1;
    if ( v5 )
    {
      v6 = v5 - 99;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 += 72LL;
        else
          v4 = 0LL;
      }
      else
      {
        v4 += 48LL;
      }
    }
    else
    {
      v4 += 24LL;
    }
  }
  if ( *(_DWORD *)v4 )
  {
    if ( *(_DWORD *)v4 == 1 )
    {
      result = __readmsr(0x38Fu);
      v7 = *(_DWORD *)(v4 + 4);
      if ( v7 )
      {
        v8 = 32;
        v9 = (int *)(*(_QWORD *)(v4 + 16) + 24LL);
        v10 = v7;
        do
        {
          if ( *v9 < 2 )
            result |= 1LL << v8;
          ++v8;
          v9 += 12;
          --v10;
        }
        while ( v10 );
      }
      __writemsr(0x38Fu, result);
    }
  }
  else if ( *(_DWORD *)(v4 + 4) )
  {
    do
    {
      result = *(_QWORD *)(v4 + 16);
      if ( *(int *)(result + 48LL * v2 + 24) < 2 )
      {
        v11 = __readmsr(v2 + 390);
        result = (unsigned int)v11 | 0x400000LL;
        __writemsr(v2 + 390, result);
      }
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v4 + 4) );
  }
  return result;
}
