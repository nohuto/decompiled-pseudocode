/*
 * XREFs of ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1400B2490
 * Callers:
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B2430 (-Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1400B3F78 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 *     ?LookupInterlockedExchangePointer@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0PEAPEAX@Z @ 0x140268A00 (-LookupInterlockedExchangePointer@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct NSInstrumentation::CPointerHashTable::ENTRY *__fastcall NSInstrumentation::CPointerHashTable::LookupCommon(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // r9d
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned int i; // eax

  if ( !*((_DWORD *)this + 12) )
    return 0LL;
  if ( a2 == -1LL )
    return 0LL;
  v2 = 0x9E3779B97F34A803uLL * (a2 >> 4);
  if ( (*((_BYTE *)this + 52) & 1) != 0 && *(_QWORD *)a2 != v2 )
    return 0LL;
  v3 = *((_DWORD *)this + 10);
  v4 = v2 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
  v5 = 0;
LABEL_5:
  if ( v5 >= 2 )
    return 0LL;
  for ( i = v4; ; ++i )
  {
    if ( i >= v3 )
    {
      v3 = v4;
      LODWORD(v4) = 0;
      ++v5;
      goto LABEL_5;
    }
    if ( *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * i) == a2 )
      break;
  }
  return (struct NSInstrumentation::CPointerHashTable::ENTRY *)(*((_QWORD *)this + 4) + 16LL * i);
}
