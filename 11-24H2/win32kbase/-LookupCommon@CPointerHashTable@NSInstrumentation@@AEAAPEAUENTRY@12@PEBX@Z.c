/*
 * XREFs of ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1400ECF10
 * Callers:
 *     ?QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z @ 0x1401D0858 (-QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z.c)
 * Callees:
 *     <none>
 */

const void **__fastcall NSInstrumentation::CPointerHashTable::LookupCommon(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned __int64 v4; // r8
  unsigned int i; // r11d
  unsigned int j; // r9d
  const void **result; // rax

  if ( a2 != -1LL )
  {
    if ( *((_DWORD *)this + 12) )
    {
      v2 = 0x9E3779B97F34A803uLL * (a2 >> 4);
      if ( (*((_BYTE *)this + 52) & 1) == 0 || *(_QWORD *)a2 == v2 )
      {
        v3 = *((_DWORD *)this + 10);
        v4 = v2 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
        for ( i = 0; i < 2; ++i )
        {
          for ( j = v4; j < v3; ++j )
          {
            result = (const void **)(16LL * j + *((_QWORD *)this + 4));
            if ( *result == (const void *)a2 )
              return result;
          }
          v3 = v4;
          LODWORD(v4) = 0;
        }
      }
    }
  }
  return 0LL;
}
