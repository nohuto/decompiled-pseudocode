/*
 * XREFs of ACPICheckForInterruptStorm @ 0x14001A65C
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPICheckForInterruptStorm(unsigned int a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  char *v3; // rcx
  int v4; // r10d
  __int16 v5; // dx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  char *v9; // rcx
  char v10; // dl

  v1 = 3LL * a1;
  v2 = MEMORY[0xFFFFF78000000008];
  v3 = (char *)&GpePinCount + 12 * a1;
  v4 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == -1 )
    v3[8] |= 8u;
  v5 = *((_WORD *)&GpePinCount + 2 * v1 + 2);
  if ( v5 == -1 )
    v3[8] |= 4u;
  v6 = InterruptCaptureEpoch;
  result = (unsigned int)(v4 + 1);
  *((_DWORD *)&GpePinCount + v1) = result;
  *((_WORD *)&GpePinCount + 2 * v1 + 2) = v5 + 1;
  if ( v6 )
  {
    result = v2 - v6;
    if ( (unsigned __int64)(v2 - v6) < 0x989680 )
      return result;
    result = (__int64)&unk_14008A2C6;
    v8 = 256LL;
    do
    {
      v9 = (char *)(result + 2);
      if ( *(_WORD *)(result - 2) > 0x3E8u || (v10 = *v9, (*v9 & 4) != 0) )
      {
        ++*(_WORD *)result;
        v10 = *v9 | 1;
      }
      else
      {
        *(_WORD *)result = 0;
      }
      *(_WORD *)(result - 2) = 0;
      result += 12LL;
      *v9 = v10 & 0xFB;
      --v8;
    }
    while ( v8 );
  }
  InterruptCaptureEpoch = v2;
  return result;
}
