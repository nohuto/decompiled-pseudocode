/*
 * XREFs of PopReadWheaBootErrorCount @ 0x140C2FECC
 * Callers:
 *     PopCheckShutdownMarker @ 0x140C2F7D4 (PopCheckShutdownMarker.c)
 * Callees:
 *     WheaGetErrorSourceInfo @ 0x1407C7890 (WheaGetErrorSourceInfo.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadWheaBootErrorCount(_DWORD *a1)
{
  unsigned int v2; // edi
  int ErrorSourceInfo; // eax
  PVOID v4; // rcx
  int *v5; // r8
  __int64 v6; // r9
  int v7; // eax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  P = 0LL;
  v2 = -1073741823;
  if ( a1 )
  {
    *a1 = 0;
    ErrorSourceInfo = WheaGetErrorSourceInfo(7, &v9, (__int64 *)&P, 0x50455654u);
    v4 = P;
    v2 = ErrorSourceInfo;
    if ( ErrorSourceInfo >= 0 )
    {
      if ( !P )
        return v2;
      if ( v9 )
      {
        v5 = (int *)P;
        v6 = v9;
        do
        {
          v7 = *v5;
          v5 += 2;
          *a1 += v7;
          --v6;
        }
        while ( v6 );
      }
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0x50455654u);
  }
  return v2;
}
