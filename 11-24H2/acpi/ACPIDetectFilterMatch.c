/*
 * XREFs of ACPIDetectFilterMatch @ 0x1400AFA94
 * Callers:
 *     ACPIDetectFilterDevices @ 0x140016708 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x14003E7CC (ACPIInternalClearFlags.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1400AFB28 (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectFilterMatch(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // r11
  unsigned int *v6; // r10
  unsigned int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = a1;
  *a3 = 0LL;
  v6 = a2;
  if ( (v3 & 0x200000000000008LL) != 8 || *(_QWORD *)(a1 + 768) )
  {
    if ( a2 && *a2 )
    {
      do
      {
        if ( *(_QWORD *)(v5 + 784) == *(_QWORD *)&v6[2 * v4 + 2] )
          ACPIInternalClearFlags((void *)(v5 + 8), 256LL);
        ++v4;
      }
      while ( v4 < *v6 );
    }
    return 0LL;
  }
  else
  {
    v9 = (__int64)a3;
    LOBYTE(a3) = 1;
    v7 = ACPIDetectCouldExtensionBeInRelation(a1, (_DWORD)a2, (_DWORD)a3, 0, v9);
    if ( v7 != -1073741772 )
      return v7;
    return v4;
  }
}
