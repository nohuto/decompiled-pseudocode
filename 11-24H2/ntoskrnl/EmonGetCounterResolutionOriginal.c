/*
 * XREFs of EmonGetCounterResolutionOriginal @ 0x1405595A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonGetCounterResolutionOriginal(unsigned int a1, int *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // eax
  int v8; // eax

  v2 = 0;
  v3 = KiProcessorBlock[KeGetPcr()->Prcb.Number];
  v4 = *(_QWORD *)(v3 + 88);
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 4);
  else
    v5 = 0;
  v6 = *(_QWORD *)(v3 + 88) + 24LL;
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 4);
  else
    v7 = 0;
  if ( (a1 & 0x40000000) == 0 )
  {
    if ( a1 < v5 )
    {
      v8 = EmonCounterResolution;
      goto LABEL_10;
    }
LABEL_13:
    *a2 = 0;
    return (unsigned int)-1073741811;
  }
  if ( (a1 & 0xBFFFFFFF) >= v7 )
    goto LABEL_13;
  v8 = EmonFixedCounterResolution;
LABEL_10:
  *a2 = v8;
  return v2;
}
