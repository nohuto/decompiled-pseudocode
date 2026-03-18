/*
 * XREFs of NtGdiGetNearestPaletteIndex @ 0x1401A8510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetNearestPaletteIndex(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 8;
  v3 = HmgShareLockCheck(a1, a2);
  v6 = v3;
  if ( !v3 )
  {
    EngSetLastError(6u);
    v2 = -1;
    goto LABEL_5;
  }
  v4 = *(_DWORD *)(v3 + 28);
  if ( !v4 )
    goto LABEL_6;
  if ( (v2 & 0x1000000) == 0 )
  {
    v2 = XEPALOBJ::ulDispatchGFPEFunction(&v6, *(unsigned int *)(v3 + 96), v2 & 0xFFFFFF);
LABEL_5:
    v3 = v6;
    goto LABEL_6;
  }
  v2 = (unsigned __int16)v2 < v4 ? (unsigned __int16)v2 : 0;
LABEL_6:
  if ( v3 )
    DEC_SHARE_REF_CNT(v3);
  return v2;
}
