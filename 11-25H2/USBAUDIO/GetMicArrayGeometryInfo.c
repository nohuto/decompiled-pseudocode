/*
 * XREFs of GetMicArrayGeometryInfo @ 0x140032194
 * Callers:
 *     PropertyGetMicArrayGeometry @ 0x140032940 (PropertyGetMicArrayGeometry.c)
 *     PropertyGetMicArrayGeometryBasicSupport @ 0x140032A10 (PropertyGetMicArrayGeometryBasicSupport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMicArrayGeometryInfo(_QWORD *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx

  v3 = 0;
  if ( a1 && a2 < *(_DWORD *)(*a1 + 32LL) )
  {
    v5 = *(_QWORD *)(a1[2] + 16LL);
    v6 = 0;
    v7 = *(_DWORD *)(v5 + 192);
    v8 = *(_QWORD *)(v5 + 200);
    if ( v7 )
    {
      do
      {
        if ( *(_DWORD *)(v8 + 84) == a2 )
          break;
        ++v6;
        v8 += 168LL;
      }
      while ( v6 < v7 );
    }
    v9 = v8 & -(__int64)(v6 < v7);
    if ( v9 && *(_DWORD *)(v9 + 76) == 2 && (v10 = *(_QWORD *)(v9 + 128)) != 0 )
      *a3 = v10;
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
